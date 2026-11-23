// Reconstructed from gml_Object_oOrigin_Draw_0 @ 0x140a04cd0 (NativeAnalysis/decompiled/oorigin, lines 449-519).
// When game_start == 0 (normal gameplay), anim stays 0 and this is the only draw call in the event.
// The intro cutscene animation (anim >= 1) is still pending (P21).
var _dx = (_x == 0) ? xstart : _x;
draw_sprite_ext(sprite_index, 0, _dx, y - 1, image_xscale, image_yscale, image_angle, c_white, 1);
