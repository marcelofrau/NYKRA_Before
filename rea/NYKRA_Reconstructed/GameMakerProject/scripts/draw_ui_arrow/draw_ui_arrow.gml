// Reconstructed from gml_Script_draw_ui_arrow (NativeAnalysis/decompiled/player_lifted2): the arrow
// sprite (sArrow, sprite 210 of the original) at (_x, _y) with the current alpha, rotated by -45 degrees
// (0 when _frame is not 0) minus 90 degrees per _turns.
function draw_ui_arrow(_frame, _x, _y, _turns, _colour) {
    var _rotation = ((_frame != 0) ? 0 : -45) - 90 * _turns;
    draw_sprite_ext(sArrow, _frame, _x, _y, 1, 1, _rotation, _colour, draw_get_alpha());
}
