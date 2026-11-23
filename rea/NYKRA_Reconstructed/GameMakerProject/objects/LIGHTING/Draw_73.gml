// Reconstructed from gml_Object_LIGHTING_Draw_73 @ 0x1407826d0 (NativeAnalysis/decompiled/lighting_draw).
// The original function is ~854 KB and timed out in Ghidra; the structure below follows the
// disassembly scan of HEAD (oPlayer ellipses), with(oGlow), with(parGlow_Beam) (6-vertex strip)
// and with(oMal_Door_Flat).
// shortcut: exact radii/tint of the player and door circles are estimated from the original screenshot
// until those 2 blocks of LIGHTING_Draw_73 are lifted individually.
if (!g) {
    draw_rectangle_view(COLOUR, 1);
    exit;
}
if (oControl.mode != 3) exit;

if (!surface_exists(surf)) {
    surf = surface_create(camera_get_view_width(cam) + 6, camera_get_view_height(cam) + 6);
}

var _vx = camera_get_view_x(cam) - 3;
var _vy = camera_get_view_y(cam) - 3;

surface_set_target(surf);
draw_clear(COLOUR);

gpu_set_blendmode(bm_add);

// Soft ambient light around the player (HEAD draw_ellipse_color pass).
if (instance_exists(oPlayer)) {
    var _px = oPlayer.x - _vx;
    var _py = oPlayer.y - _vy;
    var _pc = merge_colour(c_light, c_white, 0.25);
    draw_ellipse_color(_px - 88, _py - 60, _px + 88, _py + 60, _pc, c_black, false);
    draw_ellipse_color(_px - 44, _py - 32, _px + 44, _py + 32, c_light, c_black, false);
}

// Point glows (with(oGlow), includes oGlw_yellow_m in rmMal_o1).
with (oGlow) {
    draw_circle_colour(x - _vx, y - _vy, r, c, c_black, false);
}

// Doorway soft glow (with(oMal_Door_Flat)).
with (oMal_Door_Flat) {
    var _dc = merge_colour(c_light, c_black, 0.3);
    draw_circle_colour(x - _vx, y - 16 - _vy, 30, _dc, c_black, false);
}

// Light shafts (with(parGlow_Beam)): 6-vertex strip using all 3 rays (sx1/sxm/sx2 -> fx1/fxm/fx2).
with (parGlow_Beam) {
    var _sx1 = sx1 - _vx, _sy1 = sy1 - _vy;
    var _sxm = sxm - _vx, _sym = sym - _vy;
    var _sx2 = sx2 - _vx, _sy2 = sy2 - _vy;
    var _fx1 = fx1 - _vx, _fy1 = fy1 - _vy;
    var _fxm = fxm - _vx, _fym = fym - _vy;
    var _fx2 = fx2 - _vx, _fy2 = fy2 - _vy;

    var _top_col = merge_colour(c_white, c_black, 0.25);
    var _bot_col = merge_colour(c_white, c_black, 0.55);

    draw_ellipse_color(_sxm - 24, _sym - 16, _sxm + 24, _sym + 20, _top_col, c_black, false);

    draw_primitive_begin(pr_trianglestrip);
    draw_vertex_colour(_sx1, _sy1, _top_col, 1);
    draw_vertex_colour(_fx1, _fy1, _bot_col, 1);
    draw_vertex_colour(_sxm, _sym, c_white, 1);
    draw_vertex_colour(_fxm, _fym, _top_col, 1);
    draw_vertex_colour(_sx2, _sy2, _top_col, 1);
    draw_vertex_colour(_fx2, _fy2, _bot_col, 1);
    draw_primitive_end();

    draw_ellipse_color(_fxm - 22, _fym - 14, _fxm + 22, _fym + 14, _bot_col, c_black, false);
}

gpu_set_blendmode(bm_normal);
surface_reset_target();

gpu_set_blendmode_ext(bm_dest_colour, bm_zero);
draw_surface(surf, _vx, _vy);
gpu_set_blendmode(bm_normal);
