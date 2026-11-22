// Reconstructed from gml_Object_LIGHTING_Draw_73 (NativeAnalysis/decompiled/lighting_draw).
// The mask multiplies the rendered room: white passes light through, COLOUR darkens.
// The first two frames are fully dark; alarm[0] then enables the light pass.
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

with (all) {
    if (object_index != parGlow_Beam && !object_is_ancestor(object_index, parGlow_Beam)) continue;

    var _sx = sx1 - _vx;
    var _sy = sy1 - _vy;

    draw_ellipse_color(_sx - 24, _sy - 24, _sx + 24, _sy + 24, c_white, c_black, false);

    draw_primitive_begin(pr_trianglefan);
    draw_vertex_colour(_sx, _sy, c_white, 1);
    draw_vertex_colour(fx1 - _vx, fy1 - _vy, c_black, 1);
    draw_vertex_colour(fxm - _vx, fym - _vy, c_black, 1);
    draw_vertex_colour(fx2 - _vx, fy2 - _vy, c_black, 1);
    draw_primitive_end();
}

gpu_set_blendmode(bm_normal);
surface_reset_target();

gpu_set_blendmode_ext(bm_dest_colour, bm_zero);
draw_surface(surf, _vx, _vy);
gpu_set_blendmode(bm_normal);
