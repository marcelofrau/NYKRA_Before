// Reconstructed from gml_Object_DRAW_GNARCIER_Draw_0 @ 0x141088a20 (NativeAnalysis/decompiled/draw_gnarcier_annotated)
// FUN_1416b84f0 = draw_sprite_ext. In this noanalysis batch Ghidra prints its two stack floats
// with the slot labels swapped and sometimes drops one parameter (see YYC_HELPERS.md); the
// canonical order below is calibrated against the F5-validated door ports
// (door_annotated/gml_Object_parDoor_Flat_Draw_73.c:377 and oMal_Door_Flat_Draw_0.c:966).
with(parGnarcier) {
    if draw_me == 1 {
        var COL = $4400ff;
        if anim == 0 COL = $ffff00;
        draw_sprite_ext(mask_index, 0,
            x + choose(0, 1, 0, 0)*random_range(choose(0, -0.5, 0, 0), choose(0, 0.5, 0, 0)),
            y + choose(0, 1, 0, 0)*random_range(choose(0, -0.5, 0, 0), choose(0, 0.5, 0, 0)),
            f_*(1+(1-anim)/2), f__*(1+(1-anim)/2), r__, COL, 1);
    }
}
with(parGnarcier) {
    if draw_me == 1 {
        draw_sprite_ext(mask_index, 1,
            x + choose(0, 1, 0, 0)*random_range(choose(0, -0.5, 0, 0), choose(0, 0.5, 0, 0)),
            y + choose(0, 1, 0, 0)*random_range(choose(0, -0.5, 0, 0), choose(0, 0.5, 0, 0)),
            f_, f__, r__, c_white, 1);
    }
}
