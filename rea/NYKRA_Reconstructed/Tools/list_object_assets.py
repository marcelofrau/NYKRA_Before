"""Lists the asset names an object's original GML mentions, by kind (read only).

Usage (from repo root):
    python -B -P rea/NYKRA_Reconstructed/Tools/list_object_assets.py oPlayer [more objects ...]
Prints one line per kind: objects, sprites, sounds, scripts (with their reconstruction status),
shaders, fonts. The kinds come from RecoveredAssets/Metadata/asset-order.txt.
"""
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
import survey_dependencies as sd  # noqa: E402


def main(argv):
    _, _, functions = sd.load_context()
    kind_of = {n: k for k, v in sd.load_asset_order().items() for n in v}
    ids = set()
    for obj in argv[1:]:
        for f in sorted((sd.REPO / obj).glob("*.gml")):
            ids |= sd.identifiers(f.read_text(encoding="utf-8", errors="replace"))
    found = {}
    for i in ids:
        if i in kind_of:
            found.setdefault(kind_of[i], []).append(i)
    for kind in sorted(found):
        names = sorted(found[kind])
        if kind == "scripts":
            names = [f"{n} [{sd.script_status(n, functions) or 'not a game script'}]" for n in names]
        print(f"{kind} ({len(names)}): " + ", ".join(names))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
