// Reconstructed from gml_Object_LIGHTING_Draw_73 @ 0x1407826d0 (NativeAnalysis/decompiled/lighting_draw).
// The original function is ~854 KB and timed out in Ghidra. The disassembly scan of its head shows:
// surface_exists/surface_create (twice), draw_clear_alpha, draw_ellipse_color, gpu_set_blendmode,
// draw_ellipse_color, gpu_set_blendmode, draw_clear_alpha, draw_rectangle_color -> two surfaces:
//   1. dark  = COLOUR everywhere, light shapes added in white, composited with bm_dest_colour (multiply)
//   2. light = black everywhere, warm shapes added, composited additively over the room
// The additive pass is what tints the near-black sOrigin sprite warm brown in the original and gives
// the flare/bloom the screenshots show; z-separate rays keep the three shafts distinguishable.
//
// shortcut: exact radii and warm tints are matched by eye against the original screenshots.
// Upgrade by lifting the oPlayer / parGlow_Beam / oMal_Door_Flat blocks of LIGHTING_Draw_73 individually.
if (!g) {
    draw_rectangle_view(COLOUR, 1);
    exit;
}
if (oControl.mode != 3) exit;

var _vw = camera_get_view_width(cam) + 6;
var _vh = camera_get_view_height(cam) + 6;
if (!surface_exists(surf)) surf = surface_create(_vw, _vh);
if (!surface_exists(surf_light)) surf_light = surface_create(_vw, _vh);

var _vx = camera_get_view_x(cam) - 3;
var _vy = camera_get_view_y(cam) - 3;

// --- 1. darkness mask (multiplied over the room) ---
surface_set_target(surf);
draw_clear(COLOUR);
gpu_set_blendmode(bm_add);

if (instance_exists(oPlayer)) {
    var _px = oPlayer.x - _vx;
    var _py = oPlayer.y - _vy;
    draw_ellipse_color(_px - 96, _py - 66, _px + 96, _py + 66, merge_colour(c_light, c_white, 0.35), c_black, false);
    draw_ellipse_color(_px - 46, _py - 34, _px + 46, _py + 34, c_white, c_black, false);
}

with (oGlow) {
    draw_circle_colour(x - _vx, y - _vy, r, c, c_black, false);
}

with (oMal_Door_Flat) {
    draw_circle_colour(x - _vx, y - 16 - _vy, 30, merge_colour(c_light, c_white, 0.2), c_black, false);
}

with (parGlow_Beam) {
    var _sx1 = sx1 - _vx, _sy1 = sy1 - _vy;
    var _sxm = sxm - _vx, _sym = sym - _vy;
    var _sx2 = sx2 - _vx, _sy2 = sy2 - _vy;
    var _fx1 = fx1 - _vx, _fy1 = fy1 - _vy;
    var _fxm = fxm - _vx, _fym = fym - _vy;
    var _fx2 = fx2 - _vx, _fy2 = fy2 - _vy;

    // Three separate shafts: a 3 px gap between them keeps the rays readable.
    draw_primitive_begin(pr_trianglelist);
    draw_vertex_colour(_sx1, _sy1, c_white, 1);
    draw_vertex_colour(_fx1 - 3, _fy1 - 3, merge_colour(c_white, c_black, 0.7), 1);
    draw_vertex_colour(_fx1 + 3, _fy1 + 3, merge_colour(c_white, c_black, 0.7), 1);

    draw_vertex_colour(_sxm, _sym, c_white, 1);
    draw_vertex_colour(_fxm - 3, _fym - 3, merge_colour(c_white, c_black, 0.7), 1);
    draw_vertex_colour(_fxm + 3, _fym + 3, merge_colour(c_white, c_black, 0.7), 1);

    draw_vertex_colour(_sx2, _sy2, c_white, 1);
    draw_vertex_colour(_fx2 - 3, _fy2 - 3, merge_colour(c_white, c_black, 0.7), 1);
    draw_vertex_colour(_fx2 + 3, _fy2 + 3, merge_colour(c_white, c_black, 0.7), 1);
    draw_primitive_end();

    draw_ellipse_color(_sxm - 26, _sym - 18, _sxm + 26, _sym + 22, c_white, c_black, false);
    draw_ellipse_color(_fxm - 24, _fym - 16, _fxm + 24, _fym + 16, merge_colour(c_white, c_black, 0.55), c_black, false);
}

gpu_set_blendmode(bm_normal);
surface_reset_target();

// --- 2. warm bloom (added over the room) ---
surface_set_target(surf_light);
draw_clear(c_black);
gpu_set_blendmode(bm_add);

if (instance_exists(oPlayer)) {
    var _lx = oPlayer.x - _vx;
    var _ly = oPlayer.y - _vy;
    var _warm = make_colour_rgb(72, 42, 18);
    draw_ellipse_color(_lx - 90, _ly - 60, _lx + 90, _ly + 60, _warm, c_black, false);
}

with (oGlow) {
    draw_circle_colour(x - _vx, y - _vy, r * 1.8, merge_colour(c, make_colour_rgb(90, 60, 26), 0.6), c_black, false);
}

with (parGlow_Beam) {
    var _sxm2 = sxm - _vx, _sym2 = sym - _vy;
    var _fxm2 = fxm - _vx, _fym2 = fym - _vy;
    var _bloom = make_colour_rgb(80, 54, 24);
    draw_ellipse_color(_sxm2 - 24, _sym2 - 16, _sxm2 + 24, _sym2 + 20, _bloom, c_black, false);
    draw_ellipse_color(_fxm2 - 20, _fym2 - 12, _fxm2 + 20, _fym2 + 12, merge_colour(_bloom, c_black, 0.4), c_black, false);
}

gpu_set_blendmode(bm_normal);
surface_reset_target();

// --- 3. composite ---
gpu_set_blendmode_ext(bm_dest_colour, bm_zero);
draw_surface(surf, _vx, _vy);
gpu_set_blendmode(bm_add);
draw_surface(surf_light, _vx, _vy);
gpu_set_blendmode(bm_normal);
