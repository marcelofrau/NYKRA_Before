// Ported from original oControl/Draw_72.gml:14-27 (planet 0). Draw Begin keeps tiles/objects on top.
if instance_number(oIs_Inside) <= 0 && CURRENT_PLANET == 0 {
    draw_set_alpha(1);
    var _c = make_colour_rgb(0, 170, 255);
    var _camera = cam;
    if (_camera < 0) _camera = view_camera[0];
    var _x = camera_get_view_x(_camera), _y = camera_get_view_y(_camera);
    var _w = camera_get_view_width(_camera), _h = camera_get_view_height(_camera);

    draw_rectangle_colour(_x, _y, _x + _w, _y + _h, _c, _c, c_aqua, c_aqua, 0);

    var _ccx = _x + (_w / 2);
    var _ccy = (_y + 16) + (_h / 2);
    var _sclx = mean(_w / 320.0, sqr(_w / 320.0));
    var _scly = mean(_h / 180.0, sqr(_h / 180.0));
    var _scale = mean(_sclx, _scly);

    draw_sprite_ext(sMal_bg1, 0, _ccx, _y, _scale, _scale, 0, c_white, 1);
    draw_bg_tiled_hwave(sMal_bg2, (_ccx / 1.04) + ((tick * 1.5) * _scale), ((_ccy / 1.04) - 30) - 32, _scale, _scale, c_white, 1, 10, -5.5);
    draw_bg_tiled_h(sMal_bg3, (_ccx / 1.1), ((_ccy / 1.1) - 16) - 36, _scale, _scale, c_white, 1);
    draw_bg_tiled_h(sMal_bg4, (_ccx / 1.45), ((_ccy / 1.45) - 16) - 65, _scale, _scale, c_white, 1);
}
