"""Generate PROVISIONAL shell objects (plan section 7, row P2) for the vertical slice.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/generate_object_shells.py [level ...]

A shell has the real name, parent, persistence, solid and visible flags of the original
object (objects-metadata.json) and NO events and NO sprite, so it does nothing and draws
nothing. It exists so that map_load can instantiate the level, object_is_ancestor works,
and payload-carrying objects (doors, notes, ...) keep the object list in sync. Sprites
are added together with their events (plan row P3).

Shells are generated for every object type used by the given levels (default rmMal_Origin),
their parent chains, and the objects the reconstructed scripts name (EXTRA below). Objects
that have hand-written events (HAND_WRITTEN) are never touched.
"""
import json
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
import validate_formats as vf  # noqa: E402
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject"
# Objects whose .yy is maintained by hand: provisional ones (oControl, oCamera) and the ones
# with reconstructed events or a sprite (parLeaves, oMal_Tree1).
HAND_WRITTEN = {
    "oControl", "oCamera", "oMal_Tree1", "parLeaves",
    "oMal_bg_leaves_bg", "oMal_bg_leaves_bg_fg", "oMal_bg_leaves_fg",
}
# Objects named by map_load, clear_objects and _SET_SCENE that are evaluated on the path
# even when the level does not contain them (a missing asset is a runtime error).
EXTRA = [
    "oPlayer", "oEo", "PATH", "oFade_in", "oSAVE_WIRE", "oAenox_bound", "parLootable",
    "parDoor_out", "oBook", "oRoof_angle", "oIs_Inside", "oPlace_Player",
    "oSun_Mal", "oSun_Mex", "oSun_Irn", "oSun_Sep", "oSun_Quo", "oSun_Iie",
    "oTemp_Back_Leaves",  # created by parLeaves Create_0; its only event (PreCreate) is empty
    "oCamera_high", "oCamera_Point_Weak",  # named by the oCamera Step_2 follow branch
]
FOLDER = ("Shells", "folders/Objects/Shells.yy")


def load_objects():
    return {o["Name"]: o for o in json.loads((vf.METADATA_DIR / "objects-metadata.json").read_text(encoding="utf-8"))}


def level_objects(levels, obj_by_name):
    sprites = {s["Name"] for s in json.loads((vf.METADATA_DIR / "sprites-metadata.json").read_text(encoding="utf-8"))}
    names = set()
    for level in levels:
        result = vf.parse_rmlvl(vf.INCLUDED_DIR / "level_data" / f"{level}.rmlvl", obj_by_name, sprites, with_details=True)
        names.update(o[0] for o in result["objects"])
    return names


def closure(names, obj_by_name):
    out = set()
    for name in names:
        while name and name in obj_by_name and name not in out:
            out.add(name)
            name = obj_by_name[name].get("Parent")
    return out


def shell_yy(obj):
    parent = obj.get("Parent")
    parent_id = f'{{"name":"{parent}","path":"objects/{parent}/{parent}.yy",}}' if parent else "null"
    # No sprite on a shell, even when the project has it: without the original events nothing
    # sets image_speed/image_index, so a linked sprite would animate on its own (oMal_Tree1
    # flickered on top of oLeavesProbe). Sprites arrive with their events (plan P3).
    sprite_id = "null"
    name = obj["Name"]
    flag = lambda value: "true" if value else "false"  # noqa: E731
    return (
        "{\n"
        '  "$GMObject": "",\n'
        f'  "%Name": "{name}",\n'
        '  "eventList": [],\n'
        '  "managed": true,\n'
        f'  "name": "{name}",\n'
        '  "overriddenProperties": [],\n'
        '  "parent": {\n'
        f'    "name": "{FOLDER[0]}",\n'
        f'    "path": "{FOLDER[1]}",\n'
        "  },\n"
        f'  "parentObjectId": {parent_id},\n'
        f'  "persistent": {flag(obj["Persistent"])},\n'
        '  "physicsAngularDamping": 0.1,\n'
        '  "physicsDensity": 0.5,\n'
        '  "physicsFriction": 0.2,\n'
        '  "physicsGroup": 1,\n'
        '  "physicsKinematic": false,\n'
        '  "physicsLinearDamping": 0.1,\n'
        '  "physicsObject": false,\n'
        '  "physicsRestitution": 0.1,\n'
        '  "physicsSensor": false,\n'
        '  "physicsShape": 1,\n'
        '  "physicsShapePoints": [],\n'
        '  "physicsStartAwake": true,\n'
        '  "properties": [],\n'
        '  "resourceType": "GMObject",\n'
        '  "resourceVersion": "2.0",\n'
        f'  "solid": {flag(obj["Solid"])},\n'
        f'  "spriteId": {sprite_id},\n'
        '  "spriteMaskId": null,\n'
        f'  "visible": {flag(obj["Visible"])},\n'
        "}\n"
    )


def shell_names(levels):
    obj_by_name = load_objects()
    wanted = level_objects(levels, obj_by_name) | set(EXTRA)
    return sorted(closure(wanted, obj_by_name) - HAND_WRITTEN), obj_by_name


def main(argv):
    levels = argv[1:] or ["rmMal_Origin"]
    names, obj_by_name = shell_names(levels)
    for name in names:
        out_dir = PROJECT / "objects" / name
        out_dir.mkdir(parents=True, exist_ok=True)
        (out_dir / f"{name}.yy").write_text(shell_yy(obj_by_name[name]), encoding="utf-8", newline="\n")
    hand_written = [n for n in sorted(HAND_WRITTEN) if (PROJECT / "objects" / n / f"{n}.yy").exists()]
    # The probes are replaced by the reconstructed map_load in 3.2b (plan section 7, P4);
    # clear_objects also destroys oLeavesProbe, because it is not persistent.
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp",
               add_resources=[(n, f"objects/{n}/{n}.yy") for n in names + hand_written],
               remove_resources=["oLevelProbe", "oLeavesProbe"], add_folders=[FOLDER])
    print(f"wrote {len(names)} shell objects: {', '.join(names)}")


if __name__ == "__main__":
    main(sys.argv)
