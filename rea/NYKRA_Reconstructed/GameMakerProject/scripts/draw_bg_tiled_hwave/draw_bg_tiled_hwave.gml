// Reconstructed from gml_Script_draw_bg_tiled_hwave (NativeAnalysis/decompiled/parallax_annotated/):
// four vertices per tile: u=0 on the left edge, u=1 on the right edge.
function draw_bg_tiled_hwave(_sprite, _x, _y, _xscale, _yscale, _colour, _alpha, _wave_length, _wave_speed) {
    var _tile_w = sprite_get_width(_sprite) * _xscale;
    if (_tile_w <= 0) return;

    var _camera = cam;
    if (_camera < 0) _camera = view_camera[0];
    var _end = (camera_get_view_width(_camera) / _tile_w) + (camera_get_view_x(_camera) / _tile_w) + 1;
    var _offset = _x mod _tile_w;
    var _tile_h = sprite_get_height(_sprite) * _yscale;

    var _dir = tick * _wave_speed + 180;
    var _dx = lengthdir_x(_wave_length, _dir);
    var _dy = lengthdir_y(_wave_length * 1.25, _dir);

    draw_primitive_begin_texture(pr_trianglestrip, sprite_get_texture(_sprite, 0));
    for (var _i = -2; _i <= _end; _i++) {
        var _px = (_i * _tile_w) + _offset + _dx;
        var _py = _y + _dy;

        draw_vertex_texture_colour(_px, _py, 0, 0, _colour, _alpha);
        draw_vertex_texture_colour(_px, _py + _tile_h, 0, 1, _colour, _alpha);
        draw_vertex_texture_colour(_px + _tile_w, _py, 1, 0, _colour, _alpha);
        draw_vertex_texture_colour(_px + _tile_w, _py + _tile_h, 1, 1, _colour, _alpha);
    }
    draw_primitive_end();
}
