// Provisional sky from original oControl/Draw_72.gml:14-23. Draw Begin keeps tiles/objects on top.
if instance_number(oIs_Inside) <= 0 && CURRENT_PLANET == 0 {
    draw_set_alpha(1);
    var _c = make_colour_rgb(0, 170, 255);
    var _camera = cam;
    if (_camera < 0) _camera = view_camera[0];
    var _x = camera_get_view_x(_camera), _y = camera_get_view_y(_camera);
    var _w = camera_get_view_width(_camera), _h = camera_get_view_height(_camera);
    draw_rectangle_colour(_x, _y, _x + _w, _y + _h, _c, _c, c_aqua, c_aqua, 0);
}
