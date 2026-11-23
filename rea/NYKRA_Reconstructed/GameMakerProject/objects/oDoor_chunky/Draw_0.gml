// Reconstructed from gml_Object_oDoor_chunky_Draw_0 @ 0x1411eb790.
// The four frames of sDoor_chunky are the pieces of one column, each already placed inside the same
// 14x36 canvas: frame 0 covers rows 15-35 (base), frame 2 rows 2-33 (the X slab), frame 1 rows 0-21
// (upper section) and frame 3 rows 0-4 (cap). They are drawn at the same point, so the column only
// looks complete with all four; stacking them with a bh offset threw the upper pieces off screen.
// The column follows the rise of Step_2 (anim * 44).
var _draw_y = ystart - anim * 44;
draw_sprite(sprite_index, 0, xstart, _draw_y);
draw_sprite(sprite_index, 1, xstart, _draw_y);
draw_sprite(sprite_index, 2, xstart, _draw_y);
draw_sprite(sprite_index, 3, xstart, _draw_y);

var _target = power_on ? 1 : 0;
if (anim != _target && snd == -4) {
    audio_play_sound(sndStone_open, 10, 0);
    snd = 0;
}
var _speed = power_on ? 1.0 / 12.0 : 1.0 / 6.0;
anim = lerp(anim, _target, _speed);
if (abs(anim - _target) < 0.0001) anim = _target;

// Original Draw_0 restores the instance to its spawn point after drawing.
x = xstart;
y = ystart;
