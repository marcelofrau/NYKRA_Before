"""Copies the author's original LIGHTING events (repo root LIGHTING/*.gml) into the vertical slice.

Usage (from repo root):
    python -B rea/NYKRA_Reconstructed/Tools/generate_lighting.py

Draw_73 names 87 objects plus sprites and scripts from every planet; most are not in the project yet,
and GameMaker refuses to compile a name that does not exist. Each top-level block that names a missing
asset (`if instance_number(X)>=1 {...}` or `with(X) {...}`) is commented out line by line with the
marker `//~ `. That is equivalent at runtime: an object that does not exist has no instances, so the
original block would be skipped anyway. Rerun this tool after adding assets and the blocks come back.
Removing every `//~ ` from the output gives the original file byte for byte (test_visual_fixes checks it).
Plan section 7, row P38.
"""
import re
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from generate_player_object import PROJECT, REPO, event_yy, object_yy  # noqa: E402
from yyp_edit import update_yyp  # noqa: E402

MARK = "//~ "
ASSET = re.compile(r"\b(?:o|par|s)[A-Z]\w*")
SCRIPT_CALLS = ("easing", "hrnd", "iiem_shake", "lerp_bounce", "draw_rectangle_view")  # the non-builtins it calls
BLOCK_START = re.compile(r"^\s*(?:if\s+instance_number\s*\(|with\s*\()")


def project_names():
    names = {p.name for kind in ("objects", "sprites", "scripts") for p in (PROJECT / kind).iterdir() if p.is_dir()}
    for gml in (PROJECT / "scripts").glob("*/*.gml"):
        names.update(re.findall(r"^function\s+(\w+)", gml.read_text(encoding="utf-8"), re.M))
    return names


def strip_comments(text):
    return re.sub(r"//[^\n]*", "", re.sub(r"/\*.*?\*/", "", text, flags=re.S))


def missing(text, names):
    code = strip_comments(text)
    absent = {n for n in ASSET.findall(code) if n not in names}
    absent |= {f for f in SCRIPT_CALLS if re.search(rf"\b{f}\s*\(", code) and f not in names}
    return absent


def comment_missing_blocks(source, names):
    lines = source.split("\n")
    out, i, in_comment = [], 0, False
    while i < len(lines):
        line = lines[i]
        code = line.split("//", 1)[0]
        if in_comment:
            in_comment = "*/" not in line
        elif "/*" in code:
            in_comment = "*/" not in line[line.index("/*") + 2:]
        elif BLOCK_START.match(line):
            code = None
        if code is not None:  # plain line, or inside /* */: copied as is
            out.append(line)
            i += 1
            continue
            out.append(line)
            i += 1
            continue
        end, depth = i, 0
        if "{" in line.split("//", 1)[0]:
            while True:
                depth += lines[end].split("//", 1)[0].count("{") - lines[end].split("//", 1)[0].count("}")
                if depth <= 0:
                    break
                end += 1
        block = lines[i:end + 1]
        if missing("\n".join(block), names):
            assert not any("/*" in b or "*/" in b for b in block), f"block comment inside block at line {i + 1}"
            out.extend(MARK + b for b in block)
        else:
            out.extend(block)
        i = end + 1
    result = "\n".join(out)
    active = "\n".join(l for l in out if not l.startswith(MARK))
    leftover = missing(active, names)
    if leftover:  # a missing name outside any instance_number/with block: fail loudly, never ship it
        raise SystemExit(f"LIGHTING/Draw_73 still names missing assets outside blocks: {sorted(leftover)}")
    return result


def main():
    names = project_names()
    out = PROJECT / "objects" / "LIGHTING"
    out.mkdir(parents=True, exist_ok=True)
    files = sorted((REPO / "LIGHTING").glob("*.gml"))
    for stale in out.glob("*.gml"):
        if stale.name not in {f.name for f in files}:
            stale.unlink()
    for path in files:
        text = path.read_text(encoding="utf-8")
        header = f"// Original LIGHTING/{path.name}, copied verbatim by Tools/generate_lighting.py"
        if path.name == "Draw_73.gml":
            text = comment_missing_blocks(text, names)
            header += f"\n// Lines starting with '{MARK.strip()}' name assets not in the project yet (plan P38); rerun the tool after adding them."
        (out / path.name).write_text(f"{header}\n{text}", encoding="utf-8", newline="\n")
    (out / "LIGHTING.yy").write_text(object_yy("LIGHTING", [event_yy(f) for f in files], None, None, None, False),
                                     encoding="utf-8", newline="\n")
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp", add_resources=[("LIGHTING", "objects/LIGHTING/LIGHTING.yy")])
    disabled = sum(1 for l in (out / "Draw_73.gml").read_text(encoding="utf-8").split("\n") if l.startswith(MARK))
    print(f"wrote LIGHTING with {len(files)} events; {disabled} Draw_73 lines wait for missing assets")


if __name__ == "__main__":
    main()
