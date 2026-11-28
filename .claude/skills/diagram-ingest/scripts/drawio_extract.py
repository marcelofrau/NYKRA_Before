"""Extract vertices (labels) and edges from a draw.io / mxGraph file, optionally as a Mermaid draft.

Usage: python -I drawio_extract.py [--mermaid] <file.drawio | file.drawio.svg | file.xml> ...

Handles plain <mxGraphModel>, <mxfile><diagram> pages (plain or compressed), and SVG exports
that carry the draw.io XML in the root <svg content="..."> attribute (draw.io "include a copy
of my diagram", and LeanIX free-draw exports).
<object label=... attr=...> wrappers keep their extra attributes (e.g. LeanIX factSheetType /
factSheetId), printed as {k=v}.
--mermaid prints a `flowchart LR` draft per page instead: containers become subgraphs and
there is one edge per line (no `&` shorthand). It is a starting point; curate it by hand.
"""
import base64
import html
import re
import sys
import urllib.parse
import xml.etree.ElementTree as ET
import zlib


def strip_html(s):
    s = html.unescape(s or "")
    s = re.sub(r"<br\s*/?>", " / ", s, flags=re.I)
    s = re.sub(r"<[^>]+>", "", s)
    s = html.unescape(s)
    return re.sub(r"\s+", " ", s).strip()


def load_root(path):
    root = ET.parse(path).getroot()
    if root.tag.endswith("svg"):
        content = root.get("content")
        if not content:
            sys.exit(f"{path}: SVG without an embedded draw.io diagram (no content attribute)")
        root = ET.fromstring(content)
    return root


def models(path):
    root = load_root(path)
    if root.tag == "mxGraphModel":
        yield "default", root
        return
    for d in root.iter("diagram"):
        name = d.get("name", "page")
        inner = d.find("mxGraphModel")
        if inner is not None:
            yield name, inner
            continue
        raw = (d.text or "").strip()
        if not raw:
            continue
        data = zlib.decompress(base64.b64decode(raw), -15).decode("utf-8")
        yield name, ET.fromstring(urllib.parse.unquote(data))


def parse(m):
    cells, extra = {}, {}
    for c in m.iter("mxCell"):
        if c.get("id"):  # cells inside <object> may have no id of their own
            cells[c.get("id")] = c
    # draw.io wraps labelled cells in <object label=...> (also <UserObject>)
    for obj in [*m.iter("object"), *m.iter("UserObject")]:
        c = obj.find("mxCell")
        if c is None:
            continue
        oid = obj.get("id") or c.get("id")
        c.set("value", obj.get("label", ""))
        c.set("id", oid)
        cells[oid] = c
        attrs = {k: v for k, v in obj.attrib.items() if k not in ("id", "label", "placeholders") and v}
        if attrs:
            extra[oid] = attrs
    label = {cid: strip_html(c.get("value")) for cid, c in cells.items()}
    return cells, label, extra


def edges(cells, label):
    for cid, c in cells.items():
        if c.get("edge") == "1":
            # edge labels are often child vertices of the edge
            kids = [label[k] for k, kc in cells.items() if kc.get("parent") == cid and label.get(k)]
            yield c.get("source"), c.get("target"), " | ".join(x for x in [label.get(cid, ""), *kids] if x)


def dump(name, cells, label, extra):
    print(f"=== DIAGRAM: {name} ===")
    print("--- VERTICES ---")
    for cid, c in cells.items():
        if c.get("vertex") == "1" and (label.get(cid) or cid in extra):
            parent = label.get(c.get("parent"), "")
            pfx = f"[in: {parent}] " if parent else ""
            attrs = " {" + ", ".join(f"{k}={v}" for k, v in extra[cid].items()) + "}" if cid in extra else ""
            print(f"{cid}: {pfx}{label.get(cid, '')}{attrs}")
    print("--- EDGES ---")
    for s, t, el in edges(cells, label):
        print(f"{label.get(s) or s} --[{el}]--> {label.get(t) or t}")


def mermaid(name, cells, label):
    nid = {cid: f"n{i}" for i, cid in enumerate(cells)}
    q = lambda s: s.replace('"', "'").replace(" / ", "<br/>")
    children = {}
    for cid, c in cells.items():
        if c.get("vertex") == "1":
            children.setdefault(c.get("parent"), []).append(cid)
    is_edge_label = {cid for cid, c in cells.items() if cells.get(c.get("parent"), c).get("edge") == "1"}
    used = {x for s, t, _ in edges(cells, label) for x in (s, t)}

    print(f"%% page: {name}")
    print("flowchart LR")

    def emit(cid, ind):
        """Return the Mermaid lines for a vertex (a subgraph when it has children)."""
        if cid in is_edge_label:
            return []
        kids = [line for k in children.get(cid, []) for line in emit(k, ind + "    ")]
        if kids:
            return [f'{ind}subgraph {nid[cid]}["{q(label.get(cid) or " ")}"]', *kids, f"{ind}end"]
        if label.get(cid) or cid in used:
            return [f'{ind}{nid[cid]}["{q(label.get(cid) or cid)}"]']
        return []

    roots = [cid for cid, c in cells.items() if c.get("vertex") == "1" and c.get("parent") not in
             {k for k, v in cells.items() if v.get("vertex") == "1"}]
    for line in (line for cid in roots for line in emit(cid, "    ")):
        print(line)
    for s, t, el in edges(cells, label):
        if s in nid and t in nid:
            arrow = f'-- "{q(el)}" -->' if el else "-->"
            print(f"    {nid[s]} {arrow} {nid[t]}")
    print()


if __name__ == "__main__":
    args = sys.argv[1:]
    as_mermaid = "--mermaid" in args
    for p in [a for a in args if a != "--mermaid"]:
        for name, m in models(p):
            cells, label, extra = parse(m)
            mermaid(name, cells, label) if as_mermaid else dump(name, cells, label, extra)
