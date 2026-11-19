"""Static checks for milestone 3.3, player stage 1: the tile collision core.

They read project files only. They do not run GameMaker, so they do not prove the movement
feels right; the user's F5 run does.
"""
import re
import unittest
from pathlib import Path

REA = Path(__file__).resolve().parents[1]
PROJECT = REA / "GameMakerProject"
SCRIPTS = ["check_array_cell", "check_array", "check_block", "bb_setmiddle", "ARRAY_COLLIDE"]


def code(name):
    text = (PROJECT / "scripts" / name / f"{name}.gml").read_text(encoding="utf-8")
    return re.sub(r"//[^\n]*", "", text)


class TileCollisionTests(unittest.TestCase):
    def test_scripts_are_registered_in_the_yyp(self):
        yyp = (PROJECT / "NYKRA_VerticalSlice.yyp").read_text(encoding="utf-8")
        for name in SCRIPTS + ["provisional_stubs"]:
            self.assertIn(f'"name":"{name}"', yyp.replace(" ", ""), name)
            self.assertTrue((PROJECT / "scripts" / name / f"{name}.yy").exists(), name)

    def test_constants_read_from_the_decompilation(self):
        text = code("ARRAY_COLLIDE")
        for fragment in ("x1 = max(x1, 2);", "mw * 16 - 2", "mh * 16 - 2", "mw * 16 - 4", "mh * 16 - 4",
                         "floor((x1 - hsp) / 16) > _fx1", "floor((x2 - hsp) / 16) < _fx2",
                         "floor((y1 - vsp) / 16) > _fy1", "bh > 15", "bw > 15", "jt_col == 1",
                         "y1 -= 0.5;", "vsp = -0.5;", "== 19", "choose(145, 146, 147, 148)"):
            self.assertIn(fragment, text)
        # one assignment per side effect: left/right/top/bottom flags each set exactly once
        for flag in ("col_l", "col_r", "col_t", "col_b"):
            self.assertEqual(len(re.findall(rf"\b{flag} = 1;", text)), 1, flag)

    def test_cell_lookups_clamp_to_the_map(self):
        self.assertIn("clamp(_tx, 0, oControl.mw)", code("check_array_cell"))
        self.assertIn("clamp(floor(_px / 16), 0, oControl.mw)", code("check_array"))
        self.assertIn("map_id[check_array_cell(_tx, _ty), 1]", code("check_block"))
        self.assertIn("x = mean(x1, x2);", code("bb_setmiddle"))


if __name__ == "__main__":
    unittest.main()
