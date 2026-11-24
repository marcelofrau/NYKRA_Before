"""List the objects a level instantiates and how far each one is ported. Read-only.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/list_level_objects.py rmMal_1 [level ...]

For every object type in the level it prints the instance count, the parent, and the state in
GameMakerProject: `absent` (map_load skips it and logs), `SHELL` (exists, no events: does nothing) or
`events`. It also says whether the author's original GML exists in the repo root and how many YYC
functions the object has. Start every port from this list (plan section 0.5, step 1).
"""
import collections
import json
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
import validate_formats as vf  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject" / "objects"


def main(levels):
    objects = {o["Name"]: o for o in json.loads((vf.METADATA_DIR / "objects-metadata.json").read_text(encoding="utf-8")) if o}
    sprites = {s["Name"] for s in json.loads((vf.METADATA_DIR / "sprites-metadata.json").read_text(encoding="utf-8")) if s}
    table = json.loads((vf.METADATA_DIR / "yyc-function-table.json").read_text(encoding="utf-8"))
    entries = table if isinstance(table, list) else next(v for v in table.values() if isinstance(v, list))
    names = [e["name"] for e in entries]
    for level in levels:
        result = vf.parse_rmlvl(vf.INCLUDED_DIR / "level_data" / f"{level}.rmlvl", objects, sprites, with_details=True)
        counts = collections.Counter(o[0] for o in result["objects"])
        print(f"== {level}")
        for name, n in sorted(counts.items()):
            yy = PROJECT / name / f"{name}.yy"
            state = "absent" if not yy.exists() else ("events" if '"eventType"' in yy.read_text(encoding="utf-8") else "SHELL")
            original = "ORIGINAL-GML" if (REA.parents[1] / name).is_dir() else ""
            yyc = sum(1 for f in names if f.startswith(f"gml_Object_{name}_") and not f.endswith("PreCreate_0")
                      and f[len(f"gml_Object_{name}_"):].split("_")[0] in ("Create", "Destroy", "Alarm", "Step", "Draw", "Other", "Collision", "KeyPress", "KeyRelease", "Gesture"))
            print(f"  {n:3d} {name:28s} {state:7s} parent={objects[name].get('Parent')}  yyc_events={yyc} {original}")


if __name__ == "__main__":
    main(sys.argv[1:] or ["rmMal_Origin"])
