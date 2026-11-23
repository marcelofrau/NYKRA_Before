// Reconstructed from gml_Object_oDoor_chunky_Draw_0 @ 0x1411eb790.
// The original event has no draw_sprite call at all: it only touches x, y, xstart, ystart,
// sprite_index, mean and audio_sound_gain. sDoor_chunky has 4 frames, so the "pieces rising one after
// the other" seen in the original is the sprite going through its frames while anim runs 0 -> 1.
// This is an EXPERIMENT: one frame chosen by anim, instead of the three frames stacked at one y.
draw_sprite(sprite_index, round(anim * 3), x, y);

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
