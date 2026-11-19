// Reconstructed from gml_Script_create_fx (NativeAnalysis/decompiled/player_lifted2). Creates an oFx
// particle. Arguments, in order: x, y, depth, blend colour, speed, direction, draw_end, glow, add, player,
// fric, sprite, image_index, alpha, fade, animate, animate_loop; optional: grv, alarm[0] time, phys.
// A missing argument reads as 0, like the original.
function create_fx() {
    var _a = array_create(20, 0);
    for (var _i = 0; _i < min(argument_count, 20); _i++) _a[_i] = argument[_i];
    var _fx = instance_create_depth(_a[0], _a[1], _a[2], oFx);
    _fx.sprite_index = _a[11];
    _fx.image_blend = _a[3];
    _fx.speed = _a[4];
    _fx.direction = _a[5];
    _fx.image_index = _a[12];
    _fx.draw_end = _a[6];
    _fx.glow = _a[7];
    _fx.add = _a[8];
    _fx.player = _a[9];
    _fx.fric = _a[10];
    _fx.alph = _a[13];
    _fx.image_alpha = _a[13];
    _fx.fade = _a[14];
    _fx.animate = _a[15];
    _fx.animate_loop = _a[16];
    if (argument_count > 17) _fx.grv = _a[17];
    if (argument_count > 18) _fx.alarm[0] = _a[18];
    if (argument_count > 19) _fx.phys = _a[19];
    return _fx;
}
