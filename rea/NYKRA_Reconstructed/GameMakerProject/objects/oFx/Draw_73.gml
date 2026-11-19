// Reconstructed from gml_Object_oFx_Draw_73 (Draw End; NativeAnalysis/decompiled/fx_lifted): the same
// drawing as Draw_0, for particles with draw_end = 1 (plan P30 for the assumed constants).
if (draw_end == 1) {
    var _blend = (image_blend != c_gray) && (glow == 1 || add == 1);
    if (_blend) {
        gpu_set_blendmode(bm_add);
        if (glow == 1) {
            draw_circle_color(x - 1, y - 1, sprite_width * 1.25,
                merge_colour(c_black, image_blend, (1 - image_index / image_number) / 3), c_black, false);
        }
    }
    draw_self();
    if (_blend) {
        gpu_set_blendmode(bm_normal);
    }
}
