// Reconstructed from gml_Object_parLeaves_Draw_0 @ 0x140365fa0 (lifted output in
// NativeAnalysis/decompiled/lote1_lifted). The sprite is drawn as a quad whose four corners
// wave with the wind, each corner 40 degrees of phase behind the previous one.
// The original also reads camera_get_view_x/y/width/height(cam) here but never uses the results.
// The sub-image argument is a runtime-initialised constant that cannot be read from the file;
// -1 (current image) is used, which is the same as 0 because image_index is 0.
xxx = xx + xstart;
yyy = yy + ystart;
var _a = tick * 60;
var _hw = sprite_width / 2;
var _hh = sprite_height / 2;
draw_sprite_pos(sprite_index, -1,
    xxx - _hw + lengthdir_x(0.8, _a),       yyy - _hh + lengthdir_x(0.5, _a),
    xxx + _hw + lengthdir_x(0.8, _a - 40),  yyy - _hh + lengthdir_x(0.5, _a - 40),
    xxx + _hw + lengthdir_x(0.8, _a - 80),  yyy + _hh + lengthdir_x(0.5, _a - 80),
    xxx - _hw + lengthdir_x(0.8, _a - 120), yyy + _hh + lengthdir_x(0.5, _a - 120),
    1);
