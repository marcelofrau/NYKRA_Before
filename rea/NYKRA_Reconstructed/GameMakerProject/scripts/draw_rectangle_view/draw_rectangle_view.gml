// Reconstructed from gml_Script_draw_rectangle_view (NativeAnalysis/decompiled/player_lifted2):
// fills the view (with a 1 pixel margin) with _colour at _alpha, then restores white and alpha 1 (the
// alpha constant is the float 1.0 in the executable).
function draw_rectangle_view(_colour, _alpha) {
    if (_alpha <= 0) return;
    draw_set_colour(_colour);
    draw_set_alpha(_alpha);
    draw_rectangle(CX - 1, CY - 1, CX + CW + 1, CY + CH + 1, false);
    draw_set_colour(c_white);
    draw_set_alpha(1);
}
