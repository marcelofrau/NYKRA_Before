// Reconstructed from gml_Object_oMal_Door_Flat_Draw_0 (NativeAnalysis/decompiled/door_lifted and
// door_annotated; plan P31 and P35). Animation of the stone door and its drawing. open is the target
// (set by Step_1), anim is the progress of the opening (0..1), anim2 the glow of the moment it starts.
// Inferences marked (P35): the builtin that tests anim2 (round), the loop argument of the sounds (0), the
// alpha of the two glow sprites (anim2) and the unnamed colours of the glow circle.
var _lit = instance_exists(oIs_Inside);   // another set of frames while an oIs_Inside exists
if (topen != open) {
    if (open == 1) anim2 = 1;
    // LOG (not in the original): topen is last step's open (Step_1), so this runs once per change
    log_note("door: " + (open == 1 ? "opening" : "closing") + " n=" + string(n) + " at (" + string(x) + "," + string(y) + ")");
}
if (open == 1) {
    anim2 *= 0.8;
    if (round(anim2 + 0.49) <= 0) {   // true once the glow has faded below 0.01 (P35: round)
        if (anim <= 0) {
            play_sound_pos(sndStone_open, 10, 0, 1.1, 1, 0, x, y);
        }
        anim = reach_tween(anim, 1, 20);
        anim = min(anim + 0.01, 1);
    }
    if (instance_number(oPlayer) > 0) {
        var _near = point_distance(x, y - 8, oPlayer.x, oPlayer.y);
        if (_near > 32) {
            if (anim >= 1) {
                open = 0;
                topen = 0;
            }
        }
        if (anim + 0.1 >= 1) {
            if (_near < 15) {
                if (oPlayer.control == 1) {
                    if (oPlayer.kpu) {
                        if (oPlayer.UI_OPEN == 0) {
                            in = 1;
                            oControl.FADE_COLOUR = 0;
                            log_note("door: player walks in, n=" + string(n) + " -> " + rm);   // LOG (not in the original)
                        }
                    }
                }
            }
        }
    }
} else {
    anim2 *= 0.8;
    if (anim >= 1) {
        play_sound_pos(sndStone_open, 10, 0, 1, 0.5, 0, x, y);
    }
    anim = reach_tween(anim, 0, 30);
    anim = max(anim - 0.01, 0);
}

var _w = sprite_width;
var _h = sprite_height;
draw_sprite(sprite_index, 1, x, y);
// bottom panel shrinks into the threshold; top panel slides up under the lintel
draw_sprite_part(sprite_index, _lit ? 6 : 2, 0, 0, _w, _h - hrnd(anim * 15), x - _w / 2, hrnd(y + anim * 15 + 1 - _h));
draw_sprite_part(sprite_index, _lit ? 7 : 3, 0, hrnd(anim * 18), _w, _h, x - _w / 2, hrnd(y + anim * 3 + 1 - _h));
draw_sprite(sprite_index, _lit ? 5 : 0, x, y);
// glow of the moment the door starts to open
gpu_set_blendmode(bm_add);
draw_sprite_ext(sprite_index, 4, x, y, 1, 1, 0, c_blue, anim2);
draw_sprite_ext(sprite_index, 4, x, y, 1, 1, 0, c_aqua, anim2);
draw_circle_color(x, y - 16, 24, merge_colour(c_black, c_edgb, anim2), c_black, false);
gpu_set_blendmode(bm_normal);
