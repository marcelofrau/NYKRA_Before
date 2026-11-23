// Reconstructed from gml_Object_oWire_TIMER_Draw_0 (NativeAnalysis/decompiled/small_lifted).
// an[] approaches d[]*3 linearly via reach(): +0.2/frame charging (15 frames = 0.25s), -0.04/frame
// discharging (75 frames = 1.25s, steady clicks at 2.5, 1.5 and 0.5). Propagation and target
// power_on both live inside `if (anim >= 3)`.

draw_sprite(sprite_index, 0, x, y);
var _sub = clamp(round(anim), 1, 3);
draw_sprite_ext(sprite_index, _sub, x, y, 1, 1, 0, 0xffff00, sqr(anim / 3));
draw_sprite_ext(sprite_index, _sub, x, y, 1, 1, 0, c_white, anim / 3);

if (anim > 0) {
    gpu_set_blendmode(bm_add);
    draw_set_alpha(sqr(anim / 3) / 2);
    draw_circle_colour(x - 1, y - 1, (lengthdir_y(1, tick * 30) + 8.633) / 1.5, 16711680, 0, 0);
    var _glow = merge_colour(16711680, 0, 1.0 / 3.0);
    draw_circle_colour(x - 1, y - 1, (lengthdir_x(1, tick * 77) + 4.933) / 1.5, _glow, 0, 0);
    gpu_set_blendmode(bm_normal);
    draw_set_alpha(1);
}

for (var _i = 0; _i < 4; _i++) {
    var _step = 0.2 * (d[_i] ? 1 : 0.2);
    an[_i] = reach(an[_i], d[_i] * 3, _step);
}
anim = clamp(an[0] + an[1] + an[2] + an[3], 0, 3);
if (anim <= 0) {
    for (var _i = 0; _i < 4; _i++) d[_i] = 0;
}

on = round(min(1, d[0] + d[1] + d[2] + d[3]));

if (on == 1 && anim >= 1.6 && sfx == 0) {
    play_sound_pos(sndWire, 10, 0, 1 + random_range(-0.05, 0.05), 1.0 / 3.0, 50, x, y);
    sfx = 1;
} else if (on == 0) {
    if (anim <= 2.5 && sfx == 1) {
        play_sound_pos(sndWire, 10, 0, 0.816667, 1.5, 10, x, y);
        sfx = 2;
    } else if (anim <= 1.5 && sfx == 2) {
        play_sound_pos(sndWire, 10, 0, 0.666667, 1.5, 10, x, y);
        sfx = 3;
    } else if (anim <= 0.5 && sfx == 3) {
        play_sound_pos(sndWire, 10, 0, 0.516667, 1.5, 10, x, y);
        sfx = 0;
    }
}

if (anim >= 3) {
    var _n;
    _n = instance_place(x - 16, y, oWire);
    if (_n != noone) {
        if (d[0] == 1) {
            if (_n.d[0] <= 0 && _n.anim <= 0) d[0] = 0;
        } else _n.d[1] = 1;
    }
    _n = instance_place(x + 16, y, oWire);
    if (_n != noone) {
        if (d[1] == 1) {
            if (_n.d[1] <= 0 && _n.anim <= 0) d[1] = 0;
        } else _n.d[0] = 1;
    }
    _n = instance_place(x, y - 16, oWire);
    if (_n != noone) {
        if (d[2] == 1) {
            if (_n.d[2] <= 0 && _n.anim <= 0) d[2] = 0;
        } else _n.d[3] = 1;
    }
    _n = instance_place(x, y + 16, oWire);
    if (_n != noone) {
        if (d[3] == 1) {
            if (_n.d[3] <= 0 && _n.anim <= 0) d[3] = 0;
        } else _n.d[2] = 1;
    }
    on = min(1, d[0] + d[1] + d[2] + d[3]);

    var _target = instance_place(x, y, parObject);
    if (_target != noone && variable_instance_exists(_target, "power_on"))
        _target.power_on = bool(floor(real(on)));
}
