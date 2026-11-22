// Reconstructed from gml_Object_oDoor_chunky_Draw_0: the three chunks share one canvas, so
// they are drawn at the same y and the whole slab rises together. Original speeds: /12, /6.
draw_sprite(sprite_index, 0, x, y);
draw_sprite(sprite_index, 1, x, y);
draw_sprite(sprite_index, 2, x, y);

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
