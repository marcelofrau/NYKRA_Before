"""Read-only dependency survey for milestone 3.2b (replace the probe with map_load).

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/survey_dependencies.py [level ...] [--out report.md]

Default level: rmMal_Origin. For each level it lists the object types the level file
instantiates, their parent chains, sprites and exact event functions (from
objects-metadata.json + yyc-function-table.json), and which events are still unrecovered.
It also scans the original GML (oControl, oCamera, oPlayer, oEo, parNote, parDialogue,
LIGHTING, scripts) and the reconstructed scripts for asset names, classifying every
script they call as reconstructed / decompiled / original GML / todo.
Reads only; writes nothing unless --out is given.
"""
import json
import re
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
import validate_formats as vf  # noqa: E402

REA = TOOLS.parent
REPO = REA.parents[1]
META = REA / "RecoveredAssets" / "Metadata"
DECOMP = REA / "NativeAnalysis" / "decompiled"
RECON = REA / "ReconstructedGML" / "phase1_core"
ORIGINAL_OBJECTS = ["oControl", "oCamera", "oPlayer", "oEo", "parNote", "parDialogue", "LIGHTING"]
EVENT_TYPES = {"Create", "Destroy", "Alarm", "Step", "Collision", "Keyboard", "Mouse", "Other",
               "Draw", "KeyPress", "KeyRelease", "Gesture", "PreCreate", "CleanUp", "Async"}


def load_asset_order():
    sections, current = {}, None
    for line in (META / "asset-order.txt").read_text(encoding="utf-8").splitlines():
        m = re.fullmatch(r"@@(\w+)@@", line.strip())
        if m:
            current = sections.setdefault(m.group(1), [])
        elif line.strip() and current is not None:
            current.append(line.strip())
    return sections


def strip_comments(text):
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    return re.sub(r"//[^\n]*", " ", text)


def identifiers(text):
    return set(re.findall(r"[A-Za-z_][A-Za-z0-9_]*", strip_comments(text)))


def load_context():
    objs = json.loads((META / "objects-metadata.json").read_text(encoding="utf-8"))
    sprites = {s["Name"]: s for s in json.loads((META / "sprites-metadata.json").read_text(encoding="utf-8"))}
    table = json.loads((META / "yyc-function-table.json").read_text(encoding="utf-8"))
    entries = table if isinstance(table, list) else next(v for v in table.values() if isinstance(v, list))
    functions = {e["name"] if isinstance(e, dict) else e for e in entries}
    return {o["Name"]: o for o in objs}, sprites, functions


def chain(obj_by_name, name):
    out, seen = [], set()
    while name and name in obj_by_name and name not in seen:
        out.append(name)
        seen.add(name)
        name = obj_by_name[name].get("Parent")
    return out


def object_events(obj, functions):
    """Exact event functions for an object: (events declared, events with a YYC function)."""
    declared = []
    for ev in obj.get("Events", []):
        if ev["EventType"] == "Collision":
            continue  # subtype is another object's index; handled when needed
        for sub in ev["SubEvents"]:
            declared.append(f"gml_Object_{obj['Name']}_{ev['EventType']}_{sub['EventSubtype']}")
    return declared, [d for d in declared if d in functions]


def script_status(name, functions):
    if (RECON / f"{name}.gml").exists():
        return "reconstructed (ReconstructedGML/phase1_core)"
    if (DECOMP / "phase1_annotated" / f"gml_Script_{name}.c").exists():
        return "decompiled, not yet GML"
    if (REPO / "scripts" / name / f"{name}.gml").exists():
        return "original GML (repo root scripts/)"
    if f"gml_Script_{name}" in functions or f"gml_GlobalScript_{name}" in functions:
        return "todo (YYC function exists, not decompiled)"
    return None


def survey_level(level, obj_by_name, sprites, functions, out):
    path = vf.INCLUDED_DIR / "level_data" / f"{level}.rmlvl"
    result = vf.parse_rmlvl(path, obj_by_name, set(sprites), with_details=True)
    counts = {}
    for name, *_ in result["objects"]:
        counts[name] = counts.get(name, 0) + 1
    out.append(f"## Level `{level}`: {result['mw']}x{result['mh']}, "
               f"{result['parsed_objects']}/{result['declared_objects']} objects, "
               f"{len(counts)} object types\n")
    needed, sprite_names, total_declared, total_found = set(), set(), 0, 0
    out.append("| n | object | parents | sprite | events recovered |")
    out.append("|--:|---|---|---|---|")
    for name, n in sorted(counts.items(), key=lambda kv: -kv[1]):
        ch = chain(obj_by_name, name)
        needed.update(ch)
        for c in ch:
            sp = obj_by_name[c].get("Sprite")
            if sp:
                sprite_names.add(sp)
        declared, found = object_events(obj_by_name[name], functions)
        total_declared += len(declared)
        total_found += len(found)
        spr = obj_by_name[name].get("Sprite") or "-"
        out.append(f"| {n} | `{name}` | {' > '.join(ch[1:]) or '-'} | {spr} | {len(found)}/{len(declared)} |")
    own = sum(len(object_events(obj_by_name[o], functions)[0]) for o in needed)
    out.append(f"\nObject closure (with parents): **{len(needed)}** objects, **{own}** declared events, "
               f"**{len(sprite_names)}** distinct sprites "
               f"({sum(sprites[s]['FrameCount'] for s in sprite_names if s in sprites)} frames).\n")
    undefined = sum(1 for layer in result["assets"] for a in layer if a[2] == "<undefined>")
    refs = sorted({a[2] for layer in result["assets"] for a in layer if a[2] != "<undefined>"})
    out.append(f"Decorative sprite records: {sum(len(l) for l in result['assets'])} "
               f"(`<undefined>`: {undefined}; named: {', '.join(refs) or '-'}).\n")
    payload = sorted({(o[0], tuple(sorted(o[4]))) for o in result["objects"] if o[4]})
    out.append("Objects with extra payload (their object must exist, with its parent chain, "
               "or the byte stream goes out of sync): "
               + (", ".join(f"`{n}` ({', '.join(k)})" for n, k in payload) or "none") + "\n")


def survey_gml(order, functions, out):
    kinds = {k: set(v) for k, v in order.items()}
    names = {n: k for k, v in kinds.items() for n in v}
    files = {}
    for obj in ORIGINAL_OBJECTS:
        for f in (REPO / obj).glob("*.gml"):
            files.setdefault(obj, []).append(f)
    for f in (REPO / "scripts").glob("*/*.gml"):
        files.setdefault("scripts/" + f.parent.name, []).append(f)
    for f in RECON.glob("*.gml"):
        files.setdefault("reconstructed/" + f.stem, []).append(f)
    out.append("## Assets referenced by the available GML\n")
    out.append("| source | objects | sprites | sounds | scripts | shaders | other asset kinds |")
    out.append("|---|--:|--:|--:|--:|--:|--:|")
    script_users = {}
    for src, paths in sorted(files.items()):
        ids = set()
        for p in paths:
            ids |= identifiers(p.read_text(encoding="utf-8", errors="replace"))
        by_kind = {}
        for i in ids:
            if i in names:
                by_kind.setdefault(names[i], set()).add(i)
        for s in by_kind.get("scripts", ()):
            script_users.setdefault(s, set()).add(src)
        other = sum(len(v) for k, v in by_kind.items() if k not in ("objects", "sprites", "sounds", "scripts", "shaders"))
        out.append(f"| {src} | {len(by_kind.get('objects', ()))} | {len(by_kind.get('sprites', ()))} | "
                   f"{len(by_kind.get('sounds', ()))} | {len(by_kind.get('scripts', ()))} | "
                   f"{len(by_kind.get('shaders', ()))} | {other} |")
    out.append("\n## Scripts called by the available GML\n")
    out.append("| script | status | used by |")
    out.append("|---|---|---|")
    for s in sorted(script_users):
        out.append(f"| `{s}` | {script_status(s, functions) or 'not a game script'} | "
                   f"{', '.join(sorted(script_users[s])[:4])}{' ...' if len(script_users[s]) > 4 else ''} |")


def main(argv):
    args = argv[1:]
    out_path = None
    if "--out" in args:
        i = args.index("--out")
        out_path = Path(args[i + 1])
        del args[i:i + 2]
    levels = args or ["rmMal_Origin"]
    obj_by_name, sprites, functions = load_context()
    order = load_asset_order()
    out = ["# Dependency survey for 3.2b (generated by Tools/survey_dependencies.py)\n"]
    for level in levels:
        survey_level(level, obj_by_name, sprites, functions, out)
    survey_gml(order, functions, out)
    text = "\n".join(out) + "\n"
    if out_path:
        out_path.write_text(text, encoding="utf-8", newline="\n")
        print(f"wrote {out_path}")
    else:
        print(text)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
