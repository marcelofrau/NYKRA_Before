"""Static checks for milestone 3.2c: object sprites are imported but not linked to objects."""
import json
import re
import struct
import unittest
from pathlib import Path

REA = Path(__file__).resolve().parents[1]
PROJECT = REA / "GameMakerProject"
METADATA = REA / "RecoveredAssets" / "Metadata" / "sprites-metadata.json"
SPRITES = [
    "sMal_Grass", "sMal_Grass3", "sMal_bg_leaves", "sMal_bg_leaves_1", "sMal_bg_leaves_11", "sWire",
    "sWire_DIODE", "sWire_TIMER", "sMal_Door_Flat", "sMal_Door1", "sVIEW_CONSTRICT", "sInput_pp",
    "sNote_Small", "sOrigin", "sDoor_chunky",
]


def load_yy(path):
    # GameMaker .yy files allow trailing commas, which json rejects.
    return json.loads(re.sub(r",(\s*[}\]])", r"\1", path.read_text(encoding="utf-8")))


def png_size(path):
    return struct.unpack(">II", path.read_bytes()[16:24])


class ObjectSpriteTests(unittest.TestCase):
    def setUp(self):
        self.meta = {m["Name"]: m for m in json.loads(METADATA.read_text(encoding="utf-8"))}

    def test_every_sprite_matches_the_original_canvas_origin_and_frames(self):
        for name in SPRITES:
            meta, yy = self.meta[name], load_yy(PROJECT / "sprites" / name / f"{name}.yy")
            self.assertEqual((yy["width"], yy["height"]), (meta["Width"], meta["Height"]), name)
            self.assertEqual(len(yy["frames"]), meta["FrameCount"], name)
            self.assertEqual((yy["sequence"]["xorigin"], yy["sequence"]["yorigin"]),
                             (meta["OriginX"], meta["OriginY"]), name)
            self.assertEqual(yy["sequence"]["playbackSpeed"], meta["GMS2PlaybackSpeed"], name)
            self.assertEqual(yy["sequence"]["length"], float(meta["FrameCount"]), name)
            self.assertEqual(yy["bboxMode"], meta["BBoxMode"], name)
            self.assertEqual((yy["bbox_left"], yy["bbox_right"], yy["bbox_top"], yy["bbox_bottom"]),
                             (meta["MarginLeft"], meta["MarginRight"], meta["MarginTop"], meta["MarginBottom"]), name)

    def test_every_frame_image_is_the_full_restored_canvas(self):
        # 2,340 of the 2,938 recovered frame PNGs are cropped; these must not be.
        for name in SPRITES:
            meta, yy = self.meta[name], load_yy(PROJECT / "sprites" / name / f"{name}.yy")
            for frame in yy["frames"]:
                guid = frame["name"]
                for path in (PROJECT / "sprites" / name / f"{guid}.png",
                             PROJECT / "sprites" / name / "layers" / guid / f"{yy['layers'][0]['name']}.png"):
                    self.assertEqual(png_size(path), (meta["Width"], meta["Height"]), str(path))

    def test_sprites_are_registered_but_not_linked_to_any_object(self):
        project = load_yy(PROJECT / "NYKRA_VerticalSlice.yyp")
        registered = {r["id"]["name"] for r in project["resources"]}
        for name in SPRITES:
            self.assertIn(name, registered)
        for yy_path in (PROJECT / "objects").glob("*/*.yy"):
            obj = load_yy(yy_path)
            # Objects whose events are reconstructed set image_speed/image_index themselves, so the
            # sprite can be linked (plan P3); a shell with a sprite would animate on its own.
            if obj["name"] in ("oMal_Tree1", "oMal_bg_leaves_bg", "oMal_bg_leaves_bg_fg", "oMal_bg_leaves_fg",
                               "oGrass", "oGrass3", "oPlayer", "parNote", "oNote", "oFx",
                               "oInput_pp", "oVIEW_CONSTRICT", "oDoor_Origin", "oMal_Door_Flat", "oDoor_chunky", "oOrigin", "oWire", "oWire_DIODE_D", "oWire_TIMER"):  # their events drive the sprite
                continue
            self.assertIsNone(obj["spriteId"], f"{obj['name']} would animate by itself")


if __name__ == "__main__":
    unittest.main()
