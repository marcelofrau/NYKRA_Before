// Reconstructed from gml_Script_draw_sprite_skew @ 0x1400a7980 (NativeAnalysis/decompiled/grass_scripts_lifted).
// Draws a 16x16 sprite as a quad whose top edge is shifted by _skew (a leaning blade of grass).
// FUN_1416cd450 in the original is abs(): it clears the sign bit (decompiled/helpers/h_1416cd450.c).
function draw_sprite_skew(_sprite, _image, _x, _y, _skew) {
    var _top = _y - 8;
    var _s = _skew / 1.25;
    var _lift = abs(_s * 0.3333);
    draw_sprite_pos(_sprite, _image,
        (_x - 8) + _s, (_top - 8) + _lift,
        (_x + 8) + _s, (_top - 8) + _lift,
        _x + 8, _top + 8,
        _x - 8, _top + 8,
        1);
}
