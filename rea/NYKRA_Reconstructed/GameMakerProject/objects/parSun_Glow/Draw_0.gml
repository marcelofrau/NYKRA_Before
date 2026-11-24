// Reconstructed from gml_Object_parSun_Glow_Draw_0 @ 0x140ee4590 (NativeAnalysis/decompiled/rmmal1_sun_annotated),
// statement by statement. The sun sits a seventh of the view to the right of the view's left edge. l counts how
// many of the 2x2 cells around that point are empty in each of the six tile layers (24 cells), so the glow fades
// when the player walks under rock; l_an/l_ann ease towards l^8. Then: two additive glow ellipses, a multiply
// tint of the whole view (white -> col), and a circle plus a wide ellipse added on top.
depth = -111;
l = 0;
var _a = (CW / 7) + 8;
var _tx = floor((CX + _a) / 16), _ty = floor((CY + 8) / 16) - 1;
for (var i = 0; i < array_length(oControl._layer); i++) { // array_length_1d in the YYC (removed in 2.3+)
    var _lay = layer_get_id(oControl._layer[i]);
    var _map = layer_tilemap_get_id(_lay);
    l += (tilemap_get(_map, _tx, _ty) <= 0) + (tilemap_get(_map, _tx + 1, _ty) <= 0)
       + (tilemap_get(_map, _tx, _ty + 1) <= 0) + (tilemap_get(_map, _tx + 1, _ty + 1) <= 0);
}
l /= 24;
l_an = reach_tween(l_an, power(l, 8), 10);
l_ann = reach_tween(l_ann, l_an, 10);

gpu_set_blendmode(bm_add);
draw_ellipse_colour((CX - (CW / 2)) + _a, CY - (CH / 2), (CX + (CW / 2)) + _a, CY + (CH / 2), merge_color(c_black, col, l_ann / 4), c_black, false);
draw_ellipse_colour((CX - CW) + _a, CY - CH, (CX + CW) + _a, CY + CH, merge_color(c_black, col, l_ann), c_black, false);
gpu_set_blendmode_ext(bm_dest_colour, bm_zero); // (9, 1) in the YYC
draw_rectangle_view(merge_color(c_white, col, (1 - l_ann) / 3), 1);
gpu_set_blendmode(bm_add);
draw_circle_colour(CX + _a, CY + 1, CH - 2, merge_color(c_black, col, l_ann / 4), c_black, false);
draw_ellipse_colour((CX - CW) + _a, CY - CH, (CX + CW) + _a, CY + CH, merge_color(c_black, col, l_ann / 8), c_black, false);
gpu_set_blendmode(bm_normal);
