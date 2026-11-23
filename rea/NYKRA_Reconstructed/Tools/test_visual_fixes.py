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
        for name in ("sMal_bg1", "sMal_bg2", "sMal_bg3", "sMal_bg4"):
            self.assertIn(name, draw)
        self.assertIn("draw_bg_tiled_hwave(sMal_bg2,", draw)
        self.assertIn("draw_bg_tiled_h(sMal_bg3,", draw)
        self.assertIn("draw_bg_tiled_h(sMal_bg4,", draw)
        self.assertNotIn("sPraedim_Mal", draw)

    def test_maldis_sky_assets_and_scripts_are_registered(self):
        yyp = (PROJECT / "NYKRA_VerticalSlice.yyp").read_text(encoding="utf-8")
        for name in ("sMal_bg1", "sMal_bg2", "sMal_bg3", "sMal_bg4"):
            self.assertIn(f'"name":"{name}","path":"sprites/{name}/{name}.yy"', yyp)
            sprite_yy = load_yy(PROJECT / "sprites" / name / f"{name}.yy")
            frame = sprite_yy["frames"][0]["name"]
            layer = sprite_yy["layers"][0]["name"]
            layer_png = PROJECT / "sprites" / name / "layers" / frame / f"{layer}.png"
            self.assertTrue(layer_png.exists(), str(layer_png))
        for name in ("draw_bg_tiled_h", "draw_bg_tiled_hwave"):
            self.assertIn(f'"name":"{name}","path":"scripts/{name}/{name}.yy"', yyp)
            self.assertTrue((PROJECT / "scripts" / name / f"{name}.gml").exists(), name)
        wave = code("scripts/draw_bg_tiled_hwave/draw_bg_tiled_hwave.gml")
        self.assertIn("function draw_bg_tiled_hwave(_sprite, _x, _y, _xscale, _yscale, _colour, _alpha, _wave_length, _wave_speed)", wave)
        self.assertIn("draw_primitive_begin_texture(pr_trianglestrip, sprite_get_texture(_sprite, 0))", wave)
        self.assertIn("var _offset = _x mod _tile_w;", wave)
        self.assertIn("for (var _i = -2; _i <= _end; _i++)", wave)
        self.assertIn("lengthdir_x(_wave_length, _dir)", wave)
        self.assertIn("lengthdir_y(_wave_length * 1.25, _dir)", wave)
        self.assertIn("draw_vertex_texture_colour(_px, _py, 0, 0, _colour, _alpha);", wave)
        self.assertIn("draw_vertex_texture_colour(_px, _py + _tile_h, 0, 1, _colour, _alpha);", wave)
        self.assertIn("draw_vertex_texture_colour(_px + _tile_w, _py, 1, 0, _colour, _alpha);", wave)
        self.assertIn("draw_vertex_texture_colour(_px + _tile_w, _py + _tile_h, 1, 1, _colour, _alpha);", wave)
        htiled = code("scripts/draw_bg_tiled_h/draw_bg_tiled_h.gml")
        self.assertIn("function draw_bg_tiled_h(_sprite, _x, _y, _xscale, _yscale, _colour, _alpha)", htiled)
        self.assertIn("var _offset = _x mod _tile_w;", htiled)
        self.assertIn("for (var _i = -2; _i <= _end; _i++)", htiled)
        self.assertIn("camera_get_view_width(_camera) / _tile_w", htiled)
        self.assertIn("(_i * _tile_w) + _offset", htiled)

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

    def test_lighting_events_are_registered(self):
        yy = load_yy(PROJECT / "objects/LIGHTING/LIGHTING.yy")
        events = [(e["eventType"], e["eventNum"]) for e in yy["eventList"]]
        for event in ((0, 0), (1, 0), (2, 0), (8, 73)):
            self.assertIn(event, events)
        create = code("objects/LIGHTING/Create_0.gml")
        self.assertIn("surface_create(camera_get_view_width(cam) + 6, camera_get_view_height(cam) + 6)", create)
        self.assertIn("depth = 100;", create)
        self.assertIn("alarm[0] = 2;", create)
        self.assertIn("COLOUR = c_ink;", create)
        self.assertIn("g = 1;", code("objects/LIGHTING/Alarm_0.gml"))
        self.assertIn("surface_free(surf);", code("objects/LIGHTING/Destroy_0.gml"))
        draw = code("objects/LIGHTING/Draw_73.gml")
        for fragment in (
            "if (!g) {",
            "draw_rectangle_view(COLOUR, 1);",
            "if (oControl.mode != 3) exit;",
            "surface_exists(surf)",
            "surface_set_target(surf);",
            "draw_clear(COLOUR);",
            "gpu_set_blendmode(bm_add);",
            "if (instance_exists(oPlayer))",
            "with (oGlow)",
            "with (oMal_Door_Flat)",
            "with (parGlow_Beam)",
            "draw_primitive_begin(pr_trianglestrip);",
            "gpu_set_blendmode_ext(bm_dest_colour, bm_zero);",
            "draw_surface(surf, _vx, _vy);",
            "gpu_set_blendmode(bm_normal);",
        ):
            self.assertIn(fragment, draw)

    def test_glow_beam_parent_casts_three_rays(self):
        yy = load_yy(PROJECT / "objects/parGlow_Beam/parGlow_Beam.yy")
        self.assertIn((0, 0), [(e["eventType"], e["eventNum"]) for e in yy["eventList"]])
        beam = code("objects/parGlow_Beam/Create_0.gml")
        for fragment in (
            "if (object_index == oGlow_Beam_L)",
            "_off = 13.5;",
            "_off = 8.5;",
            "sx1 = xstart - _off;",
            "sxm = xstart;",
            "sx2 = xstart + _off;",
            "check_block(floor(fx1 / 16), floor(fy1 / 16)) == 1",
            "check_block(floor(fxm / 16), floor(fym / 16)) == 1",
            "check_block(floor(fx2 / 16), floor(fy2 / 16)) == 1",
        ):
            self.assertIn(fragment, beam)

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

    def test_wire_draw_and_signal_propagation(self):
        yy = load_yy(PROJECT / "objects/oWire/oWire.yy")
        events = [(e["eventType"], e["eventNum"]) for e in yy["eventList"]]
        for event in ((8, 0), (8, 77)):
            self.assertIn(event, events)
        self.assertEqual("sWire", yy["spriteId"]["name"])
        draw = code("objects/oWire/Draw_0.gml")
        for fragment in (
            "draw_sprite(sprite_index, 0, x, y);",
            "draw_sprite_ext(sprite_index, 1, x, y, 1, 1, 0, 0xffff00, sqr(anim));",
            "gpu_set_blendmode(bm_add);",
            "draw_set_alpha(sqr(anim) / 2);",
            "lengthdir_y(1, tick * 30) + 8.633",
            "lengthdir_x(1, tick * 77) + 4.933",
            "an[_i] = reach(an[_i], d[_i], 0.15);",
            "on = round(min(1, d[0] + d[1] + d[2] + d[3]));",
            "if (anim >= 1) {",
            "instance_place(x - 16, y, oWire)",
            "_n.d[1] = 1;",
            "instance_place(x, y - 16, oWire)",
            "_target.power_on = bool(floor(real(on)));",
        ):
            self.assertIn(fragment, draw)
        sound = code("objects/oWire/Draw_77.gml")
        self.assertIn("play_sound_pos(sndWire, 10, 0,", sound)
        self.assertIn("on == 1 && anim >= 0.6 && sfx == 0", sound)
        self.assertIn("on == 0 && anim <= 0.4 && sfx == 1", sound)
        diode_yy = load_yy(PROJECT / "objects/oWire_DIODE_D/oWire_DIODE_D.yy")
        diode_events = [(e["eventType"], e["eventNum"]) for e in diode_yy["eventList"]]
        self.assertIn((8, 0), diode_events)
        self.assertNotIn((8, 77), diode_events)

        timer_yy = load_yy(PROJECT / "objects/oWire_TIMER/oWire_TIMER.yy")
        timer_events = [(e["eventType"], e["eventNum"]) for e in timer_yy["eventList"]]
        for event in ((8, 0), (8, 77)):
            self.assertIn(event, timer_events)
        self.assertNotIn("play_sound_pos", code("objects/oWire_TIMER/Draw_77.gml"))

        diode = code("objects/oWire_DIODE_D/Draw_0.gml")
        self.assertIn("draw_sprite(sprite_index, 1, x, y);", diode)
        self.assertIn("draw_sprite_ext(sprite_index, 5, x, y, 1, 1, 0, 0xffff00, sqr(anim));", diode)
        self.assertIn("an[0] = 0;", diode)
        self.assertIn("an[1] = 0;", diode)
        self.assertIn("an[2] = reach(an[2], d[2], 0.15);", diode)
        self.assertIn("an[3] = 0;", diode)
        self.assertNotIn("an[_i] = reach", diode)
        self.assertIn("if (anim >= 1) {", diode)

        timer = code("objects/oWire_TIMER/Draw_0.gml")
        self.assertIn("if (anim >= 3) {", timer)
        self.assertIn("var _step = 0.2 * (d[_i] ? 1 : 0.2);", timer)
        self.assertIn("an[_i] = reach(an[_i], d[_i] * 3, _step);", timer)
        self.assertIn("var _sub = clamp(round(anim), 1, 3);", timer)
        self.assertIn("draw_sprite_ext(sprite_index, _sub, x, y, 1, 1, 0, 0xffff00, sqr(anim / 3));", timer)
        self.assertIn("draw_set_alpha(sqr(anim / 3) / 2);", timer)
        self.assertIn("play_sound_pos(sndWire, 10, 0, 0.816667, 1.5", timer)
        self.assertIn("play_sound_pos(sndWire, 10, 0, 0.666667, 1.5", timer)
        self.assertIn("play_sound_pos(sndWire, 10, 0, 0.516667, 1.5", timer)

        self.assertIn("on = round(min(1, d[0] + d[1] + d[2] + d[3]));", diode)
        self.assertIn("on = round(min(1, d[0] + d[1] + d[2] + d[3]));", timer)
        self.assertNotIn("_n.d[1] = 1;", diode)
        self.assertNotIn("_n.d[0] = 1;", diode)
        self.assertIn("_n.d[2] = 1;", diode)
        self.assertIn("d[0] = 0;", diode)

        for name in ("oWire", "oWire_DIODE_D", "oWire_TIMER"):
            src = code(f"objects/{name}/Draw_0.gml")
            self.assertIn("if (anim <= 0) {", src, name)
            self.assertIn("on = min(1, d[0] + d[1] + d[2] + d[3]);", src, name)
            self.assertNotIn("lerp(", src, name)
            self.assertEqual(src.count("<= 0 && _n.anim <= 0"), 4, name)
            self.assertNotIn("_n.d[0] = 0;", src, name)
            self.assertNotIn("_n.d[1] = 0;", src, name)
            self.assertNotIn("_n.d[2] = 0;", src, name)
            self.assertNotIn("_n.d[3] = 0;", src, name)
            self.assertNotIn("show_debug_message", src, name)

        door_step = code("objects/oDoor_chunky/Step_1.gml")
        self.assertIn("by1 - anim * 34", door_step)
        door_draw = code("objects/oDoor_chunky/Draw_0.gml")
        self.assertIn("reach(anim, 1, mean(abs(1 - anim) / 12, 0.02) / 2)", door_draw)
        self.assertIn("reach(anim, 0, mean(abs(0 - anim) / 6, 0.02))", door_draw)
        self.assertIn("draw_sprite(sprite_index, 1, x, min(y + 6, ystart));", door_draw)
        self.assertIn("draw_sprite(sprite_index, 2, x, min(y + 12, ystart));", door_draw)
        self.assertIn("sndDoor_stonebig1", door_draw)

    def test_view_constrict_favours_constrained_position(self):
        step = code("objects/oVIEW_CONSTRICT/Step_2.gml")
        self.assertIn("mean(_nx, _nx, _nx, _nx, _vx), mean(_ny, _ny, _ny, _ny, _vy)", step)
        self.assertNotIn("mean(_nx, _vx, _vx, _vx, _vx)", step)


if __name__ == "__main__":
    unittest.main()
