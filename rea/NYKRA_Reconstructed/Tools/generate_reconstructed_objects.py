"""Writes the object .yy files of objects whose event files were reconstructed by hand.

Usage (from repo root):
    python -B rea/NYKRA_Reconstructed/Tools/generate_reconstructed_objects.py

The event .gml files live in GameMakerProject/objects/<name>/ (written from the decompilation); this tool
only lists them in <name>.yy (event type and number come from the file name: Create_0, Step_1, Draw_73...),
with the parent, sprite and flags of objects-metadata.json, and registers the objects in the .yyp.
"""
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from generate_player_object import event_yy, object_yy, PROJECT  # noqa: E402
from yyp_edit import update_yyp  # noqa: E402

# object -> (parent object, sprite, persistent). A sprite is linked only when the object's own events
# make it draw as the original does (plan P3).
OBJECTS = {
    "oInput_pp": (None, "sInput_pp", False, None),
    "oVIEW_CONSTRICT": (None, "sVIEW_CONSTRICT", False, None),
    "oDoor_Origin": (None, "sMal_Door1", False, None),
    "parDoor_Flat": ("parSAVE", None, False, None),
    "oMal_Door_Flat": ("parDoor_Flat", "sMal_Door_Flat", False, None),
    # The wires keep no sprite until their Draw_0 is reconstructed (plan P34): it would draw the raw sprite.
    # They do take it as the collision mask, so instance_place (the pressure plate's) still finds them.
    "oWire": ("parWire", None, False, "sWire"),
    "oWire_DIODE_D": ("oWire", None, False, "sWire_DIODE"),
    "oWire_TIMER": ("oWire", None, False, "sWire_TIMER"),
}


def main():
    for name, (parent, sprite, persistent, mask) in OBJECTS.items():
        folder = PROJECT / "objects" / name
        files = sorted(folder.glob("*.gml"))
        (folder / f"{name}.yy").write_text(
            object_yy(name, [event_yy(f) for f in files], parent, sprite, mask, persistent), encoding="utf-8", newline="\n")
        print(f"wrote {name}.yy with {len(files)} events")
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp", add_resources=[(n, f"objects/{n}/{n}.yy") for n in OBJECTS])


if __name__ == "__main__":
    main()
