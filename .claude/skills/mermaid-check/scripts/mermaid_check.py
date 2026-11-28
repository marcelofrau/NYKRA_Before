"""Lint and render-check the ```mermaid blocks of Markdown files.

Usage:
  python -I mermaid_check.py [paths...] [--render] [--png DIR] [--width N] [--mmdc PATH] [--exclude NAME ...]

paths     .md files or folders (default: current folder). Folders are searched recursively;
          node_modules, .git and the --exclude names are skipped.
--render  also render every block with mermaid-cli (mmdc) and report the ones that fail.
--png DIR write one PNG per block into DIR (implies --render), named NNN.png, to look at the layout.
--width   PNG width in px (default 1100, small enough for an image viewer / the Read tool).
--mmdc    path to mmdc(.cmd). Default: $MMDC, then %LOCALAPPDATA%/mmdc11, then mmdc on PATH.

Static rules (no renderer needed):
  ERROR  `&` used as a node-list separator in a flowchart (`A --> B & C`). Some renderers
         (tinta) have no `&` support and blank the whole diagram.
  ERROR  `;` inside sequenceDiagram message/note text (ends the statement: parse error).
  ERROR  empty inline edge label (`A -. .-> B`).
  WARN   C4Context/C4Container/C4Component block not followed by a flowchart fallback
         (VS Code's preview renders C4 blank).
  WARN   `~~~` invisible link (support differs between renderers).
Exit code 1 if there is any ERROR or render failure.
"""
import argparse
import json
import os
import pathlib
import re
import shutil
import subprocess
import sys
import tempfile

SKIP_DIRS = {"node_modules", ".git"}
EDGE = [r"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe",
        r"C:\Program Files\Microsoft\Edge\Application\msedge.exe"]


def md_files(paths, exclude):
    for p in map(pathlib.Path, paths):
        if p.is_file():
            yield p
            continue
        for f in sorted(p.rglob("*.md")):
            if not (set(f.relative_to(p).parts) & (SKIP_DIRS | exclude)):
                yield f


def blocks(md):
    lines = md.read_text(encoding="utf-8").splitlines()
    i = 0
    while i < len(lines):
        if lines[i].strip() == "```mermaid":
            start, buf = i + 1, []
            i += 1
            while i < len(lines) and lines[i].strip() != "```":
                buf.append(lines[i])
                i += 1
            yield start + 1, "\n".join(buf) + "\n"
        i += 1


def kind(src):
    for line in src.splitlines():
        s = line.strip()
        if s and not s.startswith("%%") and s != "---":
            return s.split()[0]
    return ""


# node labels, |edge labels| and inline edge labels (`-- text -->`, `-. text .->`, `== text ==>`)
LABELS = re.compile(r'"[^"]*"|\[[^\]]*\]|\([^)]*\)|\{[^}]*\}|\|[^|]*\||(?:--|-\.|==)\s.*?\s(?:-->|\.->|==>|---)')


def lint(src):
    k, out = kind(src), []
    if k == "sequenceDiagram":
        for n, line in enumerate(src.splitlines(), 1):
            if ":" in line and ";" in line.split(":", 1)[1]:
                out.append(("ERROR", n, "`;` in message/note text ends the statement; use `,` or `#59;`"))
    if k in ("flowchart", "graph"):
        for n, line in enumerate(src.splitlines(), 1):
            if re.search(r"(?:-\.|--|==)\s+(?:\.->|-->|==>)", line):
                out.append(("ERROR", n, "empty inline edge label (`-. .->`); drop it: `-.->`"))
            code = LABELS.sub("", line.split("%%")[0])
            if re.search(r"\s&\s", code):
                out.append(("ERROR", n, "`&` node-list shorthand; write one edge per line"))
            if "~~~" in code:
                out.append(("WARN", n, "`~~~` invisible link"))
    return out


def find_mmdc(arg):
    for c in (arg, os.environ.get("MMDC"),
              os.path.join(os.environ.get("LOCALAPPDATA", ""), "mmdc11", "node_modules", ".bin", "mmdc.cmd")):
        if c and os.path.exists(c):
            return c
    return shutil.which("mmdc")


def node_prefix():
    """mmdc needs node on PATH. Under fnm, node is only on PATH after `fnm env`; fall back to `fnm exec`."""
    if shutil.which("node"):
        return []
    if shutil.which("fnm"):
        return ["fnm", "exec", "--using", "default", "--"]
    sys.exit("node is not on PATH and fnm is not installed: cannot run mmdc")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("paths", nargs="*", default=["."])
    ap.add_argument("--render", action="store_true")
    ap.add_argument("--png")
    ap.add_argument("--width", type=int, default=1100)
    ap.add_argument("--mmdc")
    ap.add_argument("--exclude", nargs="*", default=[])
    a = ap.parse_args()
    render = a.render or a.png

    found, errors, warns = [], 0, 0
    for md in md_files(a.paths, set(a.exclude)):
        bl = list(blocks(md))
        for idx, (line, src) in enumerate(bl):
            found.append((md, line, src))
            issues = lint(src)
            k = kind(src)
            if k.startswith("C4") and (idx + 1 >= len(bl) or kind(bl[idx + 1][1]) not in ("flowchart", "graph")):
                issues.append(("WARN", 1, f"{k} without a flowchart fallback right after it"))
            for level, n, msg in issues:
                print(f"{level} {md}:{line + n - 1}: {msg}")
                errors += level == "ERROR"
                warns += level == "WARN"
    print(f"{len(found)} blocks, {errors} errors, {warns} warnings")

    failed = 0
    if render and found:
        mmdc = find_mmdc(a.mmdc)
        if not mmdc:
            sys.exit("mmdc not found. Install: npm install --prefix %LOCALAPPDATA%\\mmdc11 @mermaid-js/mermaid-cli@11 "
                     "(with PUPPETEER_SKIP_DOWNLOAD=1)")
        work = pathlib.Path(tempfile.mkdtemp(prefix="mmdc-"))
        cfg = work / "puppeteer.json"
        edge = next((e for e in EDGE if os.path.exists(e)), None)
        cfg.write_text(json.dumps({"args": ["--no-sandbox"], **({"executablePath": edge} if edge else {})}),
                       encoding="utf-8")
        outdir = pathlib.Path(a.png) if a.png else work
        outdir.mkdir(parents=True, exist_ok=True)
        pre, msgs = node_prefix(), []
        for n, (md, line, src) in enumerate(found, 1):
            inp = work / f"{n:03d}.mmd"
            inp.write_text(src, encoding="utf-8")
            out = outdir / (f"{n:03d}.png" if a.png else f"{n:03d}.svg")
            cmd = pre + [mmdc, "-q", "-p", str(cfg), "-i", str(inp), "-o", str(out)]
            if a.png:
                cmd += ["-w", str(a.width)]
            r = subprocess.run(cmd, capture_output=True, text=True, encoding="utf-8", errors="replace")
            if r.returncode:
                failed += 1
                msg = next((x for x in (r.stderr or r.stdout).splitlines() if x.strip() and not x.strip().startswith("at ")), "?")
                msgs.append(msg)
                print(f"FAIL {md}:{line} ({out.name}): {msg}")
            elif a.png:
                print(f"ok   {md}:{line} -> {out}")
        print(f"rendered {len(found) - failed}/{len(found)}")
        if failed > 2 and failed == len(found) and len(set(msgs)) == 1:
            print("Every block failed with the same message: this is an environment problem (node, mmdc, browser), "
                  "not broken diagrams.")
    sys.exit(1 if errors or failed else 0)


if __name__ == "__main__":
    main()
