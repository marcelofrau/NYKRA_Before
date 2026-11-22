// Reconstructed from gml_Script_draw_bg_tiled_h (NativeAnalysis/decompiled/parallax_annotated/):
// tile from -2 to the right view edge; _x is a screen-space phase, not a world coordinate.
function draw_bg_tiled_h(_sprite, _x, _y, _xscale, _yscale, _colour, _alpha) {
    var _tile_w = sprite_get_width(_sprite) * _xscale;
    if (_tile_w <= 0) return;

    var _camera = cam;
    if (_camera < 0) _camera = view_camera[0];
    var _end = (camera_get_view_width(_camera) / _tile_w) + (camera_get_view_x(_camera) / _tile_w) + 1;
    var _offset = _x mod _tile_w;

    for (var _i = -2; _i <= _end; _i++) {
        draw_sprite_ext(_sprite, 0, (_i * _tile_w) + _offset, _y, _xscale, _yscale, 0, _colour, _alpha);
    }
}
