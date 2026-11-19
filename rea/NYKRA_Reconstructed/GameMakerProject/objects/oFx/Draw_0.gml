// Reconstructed from gml_Object_oFx_Draw_0 (NativeAnalysis/decompiled/fx_lifted). Draws the particle
// under the player's layer (draw_end = 0); Draw_73 does the same for draw_end = 1. The constants Ghidra
// lost in the glow circle are taken as black for the first and second colours, not an outline, and
// bm_normal when the blend mode is restored (plan P30).
if (CURRENT_PLANET == 6) {
    image_blend = 2228343;
}
if (draw_end == 0) {
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
