/// @description goto_map(room_name, path_n)
/// Reconstructed from NYKRA.exe (gml_Script_goto_map @ 0x140060ef0)
var _rm = (argument_count > 0) ? argument[0] : "";
var _path_n = (argument_count > 1) ? argument[1] : -1;

instance_activate_all();
if (instance_exists(oAenox_bound)) {
    with (oAenox_bound) {
        instance_destroy();
    }
}

if (oControl.START_GAME) {
    save_game();
}

map_load(working_directory + "level_data/" + _rm + ".rmlvl", _rm);

if (_path_n != -1 && instance_exists(oPlayer)) {
    with (PATH) {
        if (n == _path_n) {
            obj_setpos(oPlayer, x, y - 8);
            if (instance_exists(oEo)) {
                obj_setpos(oEo, x, y - 8);
                ds_list_clear(oEo.ui_pos_mem);
                oEo.can_see = 1;
                oEo.in_radius = 1;
                oEo.ring_fade = 1;
            }
            if (instance_exists(oCamera)) {
                oCamera.x = oPlayer.x;
                oCamera.y = oPlayer.y;
                oCamera.xx = oPlayer.x;
                oCamera.yy = oPlayer.y;
                camera_set_view_pos(cam, oCamera.x - (camera_get_view_width(cam) / 2), oCamera.y - (camera_get_view_height(cam) / 2));
                oCamera.mv = 0;
                oCamera.mh = 0;
                oCamera.alarm[0] = 1;
            }
            break;
        }
    }
}
