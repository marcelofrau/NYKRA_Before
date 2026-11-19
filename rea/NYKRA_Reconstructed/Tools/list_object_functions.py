"""List the YYC functions of game objects, ready for NativeAnalysis/scripts/DecompileFunctionList.java.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/list_object_functions.py OUT.tsv object [object ...]

For each object (and its parent chain) it writes one "name<TAB>va" line per event declared in
objects-metadata.json that has a gml_Object_<object>_<Event>_<n> function in
yyc-function-table.json. Events are matched exactly, so oWire does not pick up the events of
oWire_TIMER. Read-only on the metadata; prints a summary and any missing function.
"""
import json
import sys
from pathlib import Path

META = Path(__file__).resolve().parents[1] / "RecoveredAssets" / "Metadata"


def main(argv):
    out, roots = Path(argv[1]), argv[2:]
    objects = {o["Name"]: o for o in json.loads((META / "objects-metadata.json").read_text(encoding="utf-8"))}
    table = json.loads((META / "yyc-function-table.json").read_text(encoding="utf-8"))
    entries = table if isinstance(table, list) else next(v for v in table.values() if isinstance(v, list))
    va = {e["name"]: e["va"] for e in entries}
    names, seen = [], set()
    for root in roots:
        name = root
        while name and name in objects and name not in seen:
            seen.add(name)
            names.append(name)
            name = objects[name].get("Parent")
    lines, missing = [], []
    for name in names:
        for ev in objects[name].get("Events", []):
            if ev["EventType"] == "Collision":
                continue  # the subtype is another object's index; handle by hand when needed
            for sub in ev["SubEvents"]:
                fn = f"gml_Object_{name}_{ev['EventType']}_{sub['EventSubtype']}"
                if fn in va:
                    lines.append(f"{fn}\t{va[fn]}")
                else:
                    missing.append(fn)
    out.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    print(f"{len(names)} objects ({', '.join(names)}); {len(lines)} functions -> {out}")
    if missing:
        print("declared in metadata but no YYC function:", ", ".join(missing))


if __name__ == "__main__":
    main(sys.argv)
