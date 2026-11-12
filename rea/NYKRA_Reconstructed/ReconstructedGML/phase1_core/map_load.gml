/// @description map_load(filepath, room_name)
/// Reconstructed from NYKRA.exe (gml_Script_map_load @ 0x14004bac0)
var _filepath = argument[0];
var _room_name = (argument_count > 1) ? argument[1] : "";

draw_texture_flush();
instance_activate_all();

file_current = _room_name;
CURRENTROOM = _room_name;
DIALOGUE_OPEN = 0;
keyboard_string = file_current;

if (instance_exists(oCamera)) {
    if (instance_exists(oPlayer)) {
        oCamera.x = oPlayer.x;
        oCamera.y = oPlayer.y;
        oCamera.xx = oPlayer.x;
        oCamera.yy = oPlayer.y;
        camera_set_view_pos(cam, oCamera.x - (camera_get_view_width(cam) / 2), oCamera.y - (camera_get_view_height(cam) / 2));
        oCamera.mv = 0;
        oCamera.mh = 0;
        oCamera.alarm[0] = 1;
        oPlayer.depth = 0;
        with (oPlayer) {
            depth = 0;
        }
    }
}

var _b = buffer_load(_filepath);
map_n = buffer_read(_b, buffer_u8);
mw = buffer_read(_b, buffer_u8);
mh = buffer_read(_b, buffer_u8);

oCamera.x = mean(oCamera.x, mw * 8);
oCamera.y = mean(oCamera.y, mh * 8);
oCamera.xx = mean(oCamera.xx, mw * 8);
oCamera.yy = mean(oCamera.yy, mh * 8);
camera_set_view_pos(cam, oCamera.x - (camera_get_view_width(cam) / 2), oCamera.y - (camera_get_view_height(cam) / 2));
oCamera.mv = 0;
oCamera.mh = 0;
oCamera.alarm[0] = 1;

planet = buffer_read(_b, buffer_u8);
CURRENT_PLANET = planet;
horizon = buffer_read(_b, buffer_u8);
var _r1 = buffer_read(_b, buffer_u8);
var _r2 = buffer_read(_b, buffer_u8);
var _r3 = buffer_read(_b, buffer_u8);

map = -1;
map[mw, mh] = 0;
for (var _ix = 0; _ix <= mw; _ix++) {
    for (var _iy = 0; _iy <= mh; _iy++) {
        map[_ix, _iy] = 0;
    }
}

clear_objects();
with (oAenox_bound) {
    instance_destroy();
}

if (instance_exists(oPlayer)) {
    with (oPlayer) {
        UI_SMELT = 0;
        UI_CRAFT = 0;
    }
}

// 1. Collision & block grid
for (var _ix = 0; _ix < mw; _ix++) {
    for (var _iy = 0; _iy < mh; _iy++) {
        var _cell = buffer_read(_b, buffer_u16);
        if (_cell == 0) {
            map[_ix, _iy] = 0;
        } else {
            map[_ix, _iy] = _cell;
            if (array_get_2D(map_id, _cell, 4) != noone) {
                if (instance_position(_ix * 16, _iy * 16, array_get_2D(map_id, _cell, 4)) == noone) {
                    instance_create_depth(_ix * 16, _iy * 16, map_id[_cell, 5], map_id[_cell, 4]);
                }
            }
        }
    }
}

// 2. Tilemap layers (_layer[0..5])
for (var _li = 0; _li < array_length_1d(_layer); _li++) {
    var _lid = layer_get_id(_layer[_li]);
    var _tmap = layer_tilemap_get_id(_lid);
    tilemap_clear(_tmap, 0);
    for (var _ix = 0; _ix < mw; _ix++) {
        for (var _iy = 0; _iy < mh; _iy++) {
            var _tile = buffer_read(_b, buffer_u16);
            if (_tile != 0) {
                tilemap_set(_tmap, _tile, _ix, _iy);
            }
        }
    }
}

// 3. Asset sprite layers (asset_list[0]="aFRONT", asset_list[1]="aBACK")
for (var _al = 0; _al <= 1; _al++) {
    if (ds_exists(oControl.asset_list[_al], ds_type_list)) {
        for (var _i = 0; _i < ds_list_size(oControl.asset_list[_al]); _i++) {
            layer_sprite_destroy(ds_list_find_value(oControl.asset_list[_al], _i));
        }
        ds_list_destroy(oControl.asset_list[_al]);
    }
    oControl.asset_list[_al] = -1;
    oControl.asset_list[_al] = ds_list_create();
    var _al_id = layer_get_id(oControl.asset_layer[_al]);
    var _acount = buffer_read(_b, buffer_u16);
    for (var _i = 0; _i < _acount; _i++) {
        var _ax = buffer_read(_b, buffer_u16);
        var _ay = buffer_read(_b, buffer_u16);
        var _aspr_name = buffer_read(_b, buffer_string);
        var _aspr = asset_get_index(_aspr_name);
        var _sp_inst = layer_sprite_create(_al_id, _ax, _ay, _aspr);
        ds_list_add(oControl.asset_list[_al], _sp_inst);
    }
}

// 4. Destroy previous non-persistent instances in obj_list
for (var _i = 0; _i < ds_list_size(obj_list); _i++) {
    var _inst = ds_list_find_value(obj_list, _i);
    if (instance_exists(_inst)) {
        if (_inst.persistent != 1) {
            instance_destroy(_inst);
        }
    }
}
with (oAenox_bound) {
    instance_destroy();
}
ds_list_destroy(obj_list);
obj_list = 0;
obj_list = ds_list_create();

collision_list = 0;
collision_list[0] = noone;
var _col_idx = 0;

// 5. Spawn level objects
var _obj_count = buffer_read(_b, buffer_u16);
for (var _i = 0; _i < _obj_count; _i++) {
    if (buffer_tell(_b) >= buffer_get_size(_b)) break;
    var _ox = buffer_read(_b, buffer_s16);
    var _oy = buffer_read(_b, buffer_s16);
    var _odepth = buffer_read(_b, buffer_s16);
    var _oname = buffer_read(_b, buffer_string);
    var _oidx = asset_get_index(_oname);
    if (_oidx != -1) {
        var _inst = instance_create_depth(_ox, _oy, _odepth, _oidx);
        ds_list_add(obj_list, _inst);
        if (object_is_ancestor(_inst.object_index, parEntity)) {
            collision_list[_col_idx] = _inst;
            _col_idx += 1;
        }
        if (_oidx == PATH) {
            _inst.n = buffer_read(_b, buffer_u8);
            _inst.rm = buffer_read(_b, buffer_string);
        } else if (object_is_ancestor(_inst.object_index, parLootable)) {
            _inst.locked = buffer_read(_b, buffer_u16);
            var _inv_cnt = buffer_read(_b, buffer_u16);
            ds_list_clear(_inst.INV);
            ds_list_clear(_inst.INV_N);
            for (var _j = 0; _j < _inv_cnt; _j++) {
                var _item_id = buffer_read(_b, buffer_u16);
                var _item_n = buffer_read(_b, buffer_u16);
                inv_add_obj(_item_id, _item_n, _inst);
            }
        } else if (object_is_ancestor(_oidx, parDoor_out)) {
            _inst.locked = buffer_read(_b, buffer_u8);
        } else if (object_is_ancestor(_oidx, parDoor_Flat)) {
            _inst.locked = buffer_read(_b, buffer_u8);
            _inst.n = buffer_read(_b, buffer_u8);
            _inst.rm = buffer_read(_b, buffer_string);
        } else if (_oidx == oRoof_angle) {
            _inst.width = buffer_read(_b, buffer_u16);
            _inst.repeat_t = buffer_read(_b, buffer_u16);
            _inst.material = buffer_read(_b, buffer_u8);
            _inst.dir = buffer_read(_b, buffer_s16);
        } else if (object_is_ancestor(_oidx, parNote)) {
            var _ntxt = buffer_read(_b, buffer_string);
            var _npage = buffer_read(_b, buffer_u8);
            _inst.text = real_string(_ntxt);
            _inst.page = _npage;
        } else if (object_is_ancestor(_oidx, oBook) || _oidx == oBook) {
            _inst.book = buffer_read(_b, buffer_u8);
            _inst.book_text = buffer_read(_b, buffer_u8);
        } else if (instance_exists(oSAVE_WIRE) && object_is_ancestor(_inst.object_index, parWire)) {
            if (variable_instance_exists(_inst, "anim1")) _inst.anim1 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim2")) _inst.anim2 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim3")) _inst.anim3 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim4")) _inst.anim4 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim5")) _inst.anim5 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim6")) _inst.anim6 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim7")) _inst.anim7 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim8")) _inst.anim8 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "anim9")) _inst.anim9 = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "d")) {
                _inst.d[0] = buffer_read(_b, buffer_s16);
                _inst.d[1] = buffer_read(_b, buffer_s16);
                _inst.d[2] = buffer_read(_b, buffer_s16);
                _inst.d[3] = buffer_read(_b, buffer_s16);
            }
            if (variable_instance_exists(_inst, "an")) {
                _inst.an[0] = buffer_read(_b, buffer_s16);
                _inst.an[1] = buffer_read(_b, buffer_s16);
                _inst.an[2] = buffer_read(_b, buffer_s16);
                _inst.an[3] = buffer_read(_b, buffer_s16);
            }
            if (variable_instance_exists(_inst, "anim")) _inst.anim = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "on")) _inst.on = buffer_read(_b, buffer_s16);
            if (variable_instance_exists(_inst, "power_on")) _inst.power_on = buffer_read(_b, buffer_s16);
        }
    }
}

// 6. Position player at matching PATH entrance
if (instance_exists(oPlayer)) {
    with (oPlayer) {
        if (path_side != 0 && has_path != -1) {
            control = 0;
            with (PATH) {
                if (n == oPlayer.has_path) {
                    var _px = x + (-2 * oPlayer.path_side);
                    var _py = y - 8;
                    obj_setpos(oPlayer, _px, _py);
                    break;
                }
            }
            has_path = -1;
            alarm[0] = 30;
        }
    }
    if (instance_exists(oEo)) {
        obj_setpos(oEo, oPlayer.x, oPlayer.y);
    }
}

buffer_delete(_b);

if (oControl.START_GAME) {
    load_game();
}

reset_files();

var _fade = instance_create_depth(10, 10, -1011, oFade_in);
with (_fade) {
    colour = oControl.FADE_COLOUR;
}

_SET_SCENE();

if (instance_exists(oEo)) {
    obj_setpos(oEo, oPlayer.x, oPlayer.y);
    ds_list_clear(oEo.ui_pos_mem);
    oEo.can_see = 1;
    oEo.in_radius = 1;
    oEo.ring_fade = 1;
}

instance_activate_all();
