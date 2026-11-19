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


def load_yy(path):
    import json
    return json.loads(re.sub(r",(\s*[}\]])", r"\1", path.read_text(encoding="utf-8")))


class PlayerObjectTests(unittest.TestCase):
    def test_every_original_event_is_copied_verbatim_and_listed(self):
        original = REA.parents[1] / "oPlayer"
        yy = load_yy(PROJECT / "objects" / "oPlayer" / "oPlayer.yy")
        files = sorted(original.glob("*.gml"))
        self.assertEqual(len(yy["eventList"]), len(files))
        self.assertEqual(len(files), 21)
        for f in files:
            ours = (PROJECT / "objects" / "oPlayer" / f.name).read_text(encoding="utf-8")
            self.assertTrue(ours.endswith(f.read_text(encoding="utf-8")), f.name)
        self.assertEqual((yy["parentObjectId"]["name"], yy["persistent"]), ("parEntity", True))
        self.assertEqual(yy["spriteMaskId"]["name"], "sBnd_player")
        collisions = [e["collisionObjectId"]["name"] for e in yy["eventList"] if e["eventType"] == 4]
        self.assertEqual(collisions, ["parGnarcier"])

    def test_parEntity_events_match_the_decompilation(self):
        create = code_of("objects/parEntity/Create_0.gml")
        for fragment in ("thsp = 9999;", "hit_top = -4;", "mass = 10;", "jt_col = 1;", "bw = sprite_width;"):
            self.assertIn(fragment, create)
        step = code_of("objects/parEntity/Step_1.gml")
        for fragment in ("vsp += GRV_SPD * grav;", "oControl.mh * 16 - 1", "oControl.mw * 16 - 1"):
            self.assertIn(fragment, step)
        yy = load_yy(PROJECT / "objects" / "parEntity" / "parEntity.yy")
        self.assertEqual(sorted((e["eventType"], e["eventNum"]) for e in yy["eventList"]),
                         [(0, 0), (1, 0), (3, 1), (3, 2), (8, 77)])

    def test_every_sound_the_player_names_has_a_placeholder_and_every_stub_a_parameter_list(self):
        sounds = code("provisional_sounds")
        for p in (REA.parents[1] / "oPlayer").glob("*.gml"):
            text = re.sub(r"//[^\n]*", "", re.sub(r"/\*.*?\*/", "", p.read_text(encoding="utf-8"), flags=re.S))
            for name in re.findall(r"\bsnd[A-Z]\w+", text):
                imported = (PROJECT / "sounds" / name / f"{name}.yy").exists()
                self.assertTrue(imported or f"globalvar {name};" in sounds, f"{p.name}: {name}")
                self.assertFalse(imported and f"globalvar {name};" in sounds, f"{name} is both imported and a placeholder")
        stubs = code("provisional_player_stubs")
        self.assertIn("function create_spark(_a0 = undefined, _a1 = undefined,", stubs)  # GM1020: all optional
        self.assertEqual(stubs.count("stub_log(\""), len(re.findall(r"^function (?!stub_log)\w+", stubs, re.M)))

    def test_sound_scripts_use_the_imported_sounds(self):
        original = (REA.parents[1] / "scripts" / "play_sound_pos" / "play_sound_pos.gml").read_text(encoding="utf-8")
        ours = (PROJECT / "scripts" / "play_sound_pos" / "play_sound_pos.gml").read_text(encoding="utf-8")
        self.assertTrue(ours.endswith(original))
        yyp = (PROJECT / "NYKRA_VerticalSlice.yyp").read_text(encoding="utf-8").replace(" ", "")
        for kind, n in (("grass", 8), ("dirt", 8), ("stone", 8), ("wood", 8)):
            text = code(f"snd_step_{kind}")
            for i in range(1, n + 1):
                self.assertIn(f"sndStep_{kind}{i}", text)
                self.assertIn(f'"name":"sndStep_{kind}{i}"', yyp)
        self.assertIn("audio_sound_gain(_snd, _gain, _gain_time);", code("play_sound"))
        for name in ("sndHit_Gnar1", "sndDeath", "sndAenox_boom7"):
            self.assertTrue((PROJECT / "sounds" / name / f"{name}.yy").exists(), name)
            self.assertTrue(list((PROJECT / "sounds" / name).glob(f"{name}.*")), name)

    def test_oFx_particle_matches_the_decompilation(self):
        yy = load_yy(PROJECT / "objects" / "oFx" / "oFx.yy")
        self.assertEqual(yy["parentObjectId"]["name"], "parDust")
        self.assertEqual(sorted((e["eventType"], e["eventNum"]) for e in yy["eventList"]),
                         [(0, 0), (2, 0), (3, 2), (7, 7), (8, 0), (8, 73)])
        create = code_of("objects/oFx/Create_0.gml")
        for fragment in ("random_range(0.75, 1.0123) * 1.5", "choose(0, 90, 180, 270)", "alph = 1;", "animate = 1;"):
            self.assertIn(fragment, create)
        step = code_of("objects/oFx/Step_2.gml")
        for fragment in ("alph *= 0.99 * fade;", "alph *= 0.9;", "alph - 0.01 <= 0", "sCloud_Puff", "CX - 40"):
            self.assertIn(fragment, step)
        fx = code("create_fx")
        for fragment in ("instance_create_depth(_a[0], _a[1], _a[2], oFx)", "_fx.sprite_index = _a[11];",
                         "_fx.animate_loop = _a[16];", "argument_count > 17", "argument_count > 19"):
            self.assertIn(fragment, fx)
        self.assertTrue((PROJECT / "sprites" / "sCloud_Puff" / "sCloud_Puff.yy").exists())

    def test_player_sprites_are_registered(self):
        yyp = (PROJECT / "NYKRA_VerticalSlice.yyp").read_text(encoding="utf-8")
        for name in ("sBnd_player", "sPlayer_idle", "sPlayer_run", "sPlayer_jump", "sPlayer_walk", "sFx_3"):
            self.assertIn(f'"name":"{name}"', yyp, name)
            self.assertTrue((PROJECT / "sprites" / name / f"{name}.yy").exists(), name)
        yy = load_yy(PROJECT / "sprites" / "sBnd_player" / "sBnd_player.yy")
        self.assertEqual((yy["width"], yy["height"], yy["collisionKind"]), (8, 24, 0))

    def test_boot_creates_the_player_at_the_origin_and_enters_play_mode(self):
        boot = code_of("objects/oControl/Other_4.gml")
        self.assertIn("instance_find(oOrigin, 0)", boot)
        self.assertIn("instance_create_depth(_origin.x, _origin.y - 32, 0, oPlayer)", boot)
        self.assertIn("mode = 3;", boot)


def code_of(relative):
    return re.sub(r"//[^\n]*", "", (PROJECT / relative).read_text(encoding="utf-8"))


if __name__ == "__main__":
    unittest.main()
