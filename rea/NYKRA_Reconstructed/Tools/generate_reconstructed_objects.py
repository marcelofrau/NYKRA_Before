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

# object -> (parent object, sprite, persistent, mask). A sprite is linked only when the object's own events
# make it draw as the original does (plan P3). Diode/timer currently reuse oWire's Draw_0 (P34, provisional).
OBJECTS = {
    "oInput_pp": (None, "sInput_pp", False, None),
    "oVIEW_CONSTRICT": (None, "sVIEW_CONSTRICT", False, None),
    "oDoor_Origin": (None, "sMal_Door1", False, None),
    "parDoor_Flat": ("parSAVE", None, False, None),
    "oMal_Door_Flat": ("parDoor_Flat", "sMal_Door_Flat", False, None),
    # Wires draw sprite_index in Draw_0; oWire_DIODE_D and oWire_TIMER use their own YYC-ported Draw_0.
    "oWire": ("parWire", "sWire", False, "sWire"),
    "oWire_DIODE_D": ("oWire", "sWire_DIODE", False, "sWire_DIODE"),
    "oWire_TIMER": ("oWire", "sWire_TIMER", False, "sWire_TIMER"),
    # 24/11 (plan 0.5): the Maldis sun outdoors (_SET_SCENE creates oSun_Mal) and the lamps of rmMal_1.
    "parSun_Glow": (None, None, False, None),
    "oSun_Mal": ("parSun_Glow", None, False, None),
    "oLight_Glow": (None, None, False, None),
    # 24/11 (plan 0.7 item 1): the red fragments of rmMal_1 and the singleton drawer their Create spawns.
    "parGnarcier": (None, None, False, None),
    "oGnarcier_s": ("parGnarcier", "sGnar_s", False, "sGnar_s"),
    "oGnarcier_m": ("parGnarcier", "sGnar_m", False, "sGnar_m"),
    "oGnarcier_b": ("parGnarcier", "sGnar_b", False, "sGnar_b"),
    "DRAW_GNARCIER": (None, None, False, None),
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
