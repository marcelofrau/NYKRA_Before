// Reconstructed from gml_Object_oWire_Draw_0 (NativeAnalysis/decompiled/small_lifted).
// d[0..3] are left/right/up/down inputs. an[] approaches d[] linearly via reach(..., 0.15) so each
// tile lights up in 7 frames. Propagation and target power_on both live inside `if (anim >= 1)`.

draw_sprite(sprite_index, 0, x, y);
draw_sprite_ext(sprite_index, 1, x, y, 1, 1, 0, 0xffff00, sqr(anim));
draw_sprite_ext(sprite_index, 1, x, y, 1, 1, 0, c_white, anim);

if (anim > 0) {
    gpu_set_blendmode(bm_add);
    draw_set_alpha(sqr(anim) / 2);
    draw_circle_colour(x - 1, y - 1, (lengthdir_y(1, tick * 30) + 8.633) / 1.5, 16711680, 0, 0);
    var _glow = merge_colour(16711680, 0, 1.0 / 3.0);
    draw_circle_colour(x - 1, y - 1, (lengthdir_x(1, tick * 77) + 4.933) / 1.5, _glow, 0, 0);
    gpu_set_blendmode(bm_normal);
    draw_set_alpha(1);
}

for (var _i = 0; _i < 4; _i++) an[_i] = reach(an[_i], d[_i], 0.15);
anim = clamp(an[0] + an[1] + an[2] + an[3], 0, 1);
if (anim <= 0) {
    for (var _i = 0; _i < 4; _i++) d[_i] = 0;
}

on = round(min(1, d[0] + d[1] + d[2] + d[3]));

// Original YYC skips the entire propagation + power_on block when anim < 1.
// When an upstream wire goes off, this tile still has anim == 1 for one frame, clears its d[],
// recomputes on = 0 and writes power_on = false before ramping down.
if (anim >= 1) {
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

    var _target = instance_place(x, y, parWire);
    if (_target == noone) _target = instance_place(x, y, parWirePhysics);
    if (_target != noone && variable_instance_exists(_target, "power_on"))
        _target.power_on = bool(floor(real(on)));
}
