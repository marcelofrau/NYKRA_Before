"""Static checks for the 22/11/2026 visual fixes. F5 visual proof stays with the user."""
import json
import re
import unittest
from pathlib import Path

REA = Path(__file__).resolve().parents[1]
PROJECT = REA / "GameMakerProject"


def load_yy(path):
    return json.loads(re.sub(r",(\s*[}\]])", r"\1", path.read_text(encoding="utf-8")))


def code(rel):
    return (PROJECT / rel).read_text(encoding="utf-8")


class VisualFixTests(unittest.TestCase):
    def test_sky_draw_begin_is_registered_and_safe(self):
        yy = load_yy(PROJECT / "objects/oControl/oControl.yy")
        self.assertIn((8, 72), [(e["eventType"], e["eventNum"]) for e in yy["eventList"]])
        draw = code("objects/oControl/Draw_72.gml")
        for fragment in ("CURRENT_PLANET == 0", "make_colour_rgb(0, 170, 255)", "c_aqua", "draw_rectangle_colour"):
            self.assertIn(fragment, draw)
        for fragment in ("if (_camera < 0) _camera = view_camera[0];", "view_camera[0]"):
            self.assertIn(fragment, draw)
        for missing in ("sMal_bg1", "sMal_bg2", "sMal_bg3", "sMal_bg4", "sPraedim_Mal"):
            self.assertNotIn(missing, draw)

    def test_door_top_panel_advances_source_top(self):
        draw = code("objects/oMal_Door_Flat/Draw_0.gml")
        self.assertIn(", hrnd(anim * 18), _w, _h,", draw)
        self.assertIn("_h - hrnd(anim * 15)", draw)  # bottom panel unchanged
        self.assertNotIn("_h - hrnd(anim * 18)", draw)

    def test_fade_in_covers_the_load(self):
        yy = load_yy(PROJECT / "objects/oFade_in/oFade_in.yy")
        events = [(e["eventType"], e["eventNum"]) for e in yy["eventList"]]
        for event in ((0, 0), (2, 0), (8, 73)):
            self.assertIn(event, events)
        alarm = code("objects/oFade_in/Alarm_0.gml")
        create = code("objects/oFade_in/Create_0.gml")
        draw = code("objects/oFade_in/Draw_73.gml")
        self.assertIn("colour = c_black;", create)
        self.assertNotIn("colour = FADE_COLOUR;", create)  # instance var lives on oControl
        self.assertIn("fade_start = current_time;", create)
        self.assertIn("(current_time - fade_start) / 500.0", draw)
        self.assertIn("clamp(1.0 - _progress, 0.0, 1.0)", draw)
        self.assertIn("draw_rectangle_view(colour, _alpha);", draw)
        self.assertIn("if (_alpha <= 0) instance_destroy();", draw)
        self.assertNotIn("instance_destroy();", alarm)  # alarm must not cut the ramp short
        self.assertNotIn("fade_alpha -= 1 / 30;", alarm)  # int/int division == 0 in GML LTS
        load = code("scripts/map_load/map_load.gml")
        self.assertIn("instance_create_depth(10, 10, 1000, oFade_in)", load)
        self.assertNotIn("instance_create_depth(10, 10, -1011, oFade_in)", load)
        door_draw = code("objects/parDoor_Flat/Draw_73.gml")
        self.assertNotIn("else if (fade_in == 2", door_draw)  # oFade_in owns the arrival ramp
        self.assertIn("oFade_in at depth 1000", door_draw)

    def test_room_background_layer_does_not_cover_sky(self):
        room = load_yy(PROJECT / "rooms/rmMAIN/rmMAIN.yy")
        backgrounds = [layer for layer in room["layers"] if layer["name"] == "Background"]
        self.assertEqual(1, len(backgrounds))
        self.assertFalse(backgrounds[0]["visible"])

    def test_left_room_has_shells_for_every_object(self):
        for name in ("LIGHTING", "oGlow_Beam_L", "oGlow_Beam_S", "oGlw_yellow_m"):
            self.assertTrue((PROJECT / "objects" / name / f"{name}.yy").exists(), name)

    def test_door_arrival_snaps_camera(self):
        step = code("objects/oPlayer/Step_1.gml")
        arrival = step.split("if door_n!=-1 {", 1)[1].split("door_n = -1;", 1)[0]
        for fragment in (
            "var _sx = x;",
            "var _sy = y-16;",
            "obj_setpos(oPlayer,_sx,_sy);",
            "oCamera.x = _sx;",
            "oCamera.y = _sy;",
            "oCamera.xx = _sx;",
            "oCamera.yy = _sy;",
            "oCamera.alarm[0] = 0;",
            "camera_set_view_pos(cam,_sx-(camera_get_view_width(cam)/2),_sy-(camera_get_view_height(cam)/2));",
        ):
            self.assertIn(fragment, arrival)

    def test_camera_snaps_to_path_spawn(self):
        load = code("scripts/map_load/map_load.gml")
        spawn = load.split("obj_setpos(oPlayer, _px, _py);", 1)[1]
        for fragment in (
            "oCamera.x = _px;",
            "oCamera.y = _py;",
            "oCamera.xx = _px;",
            "oCamera.yy = _py;",
            "oCamera.alarm[0] = 0;",
            "camera_set_view_pos(cam, _px - (camera_get_view_width(cam) / 2), _py - (camera_get_view_height(cam) / 2));",
        ):
            self.assertIn(fragment, spawn.split("break;", 1)[0])

    def test_view_constrict_favours_constrained_position(self):
        step = code("objects/oVIEW_CONSTRICT/Step_2.gml")
        self.assertIn("mean(_nx, _nx, _nx, _nx, _vx), mean(_ny, _ny, _ny, _ny, _vy)", step)
        self.assertNotIn("mean(_nx, _vx, _vx, _vx, _vx)", step)


if __name__ == "__main__":
    unittest.main()
