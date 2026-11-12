/// @description save_GENERAL() / load_GENERAL() / save_CONTROL() / load_CONTROL() / save_CHARACTER() / load_CHARACTER() / save_game() / load_game()
/// Reconstructed from NYKRA.exe:
///   gml_Script__save_type       @ 0x1400bca20
///   gml_Script__save_type_rec   @ 0x1400bafa0
///   gml_Script__save_type_rec2  @ 0x1400ba350
///   gml_Script__save_ds_list    @ 0x1401a02a0
///   gml_Script_save_GENERAL     @ 0x1401c2a30
///   gml_Script_load_GENERAL     @ 0x1401c3470
///   gml_Script_save_CONTROL     @ 0x1401a77f0
///   gml_Script_load_CONTROL     @ 0x1401b9a50
///   gml_Script_save_CHARACTER   @ 0x1401a0c30
///   gml_Script_load_CHARACTER   @ 0x1401aabe0
///   gml_Script_save_game        @ 0x1400bcce0
///   gml_Script_load_game        @ 0x1400c5e00

// ============================================================================
// _save_type(_buf, _val)
// ============================================================================
function _save_type(_b, _v) {
    if (is_real(_v)) {
        buffer_write(_b, buffer_u8, 1);
        buffer_write(_b, buffer_f32, _v);
    } else if (is_string(_v)) {
        buffer_write(_b, buffer_u8, 2);
        buffer_write(_b, buffer_string, _v);
    } else if (is_array(_v)) {
        buffer_write(_b, buffer_u8, 3);
        _save_type_rec(_b, _v);
    } else if (is_bool(_v)) {
        buffer_write(_b, buffer_u8, 4);
        buffer_write(_b, buffer_bool, _v);
    } else if (is_int64(_v)) {
        buffer_write(_b, buffer_u8, 5);
        buffer_write(_b, buffer_u64, _v);
    }
}

function _save_type_rec(_b, _arr) {
    var _len = array_length_1d(_arr);
    buffer_write(_b, buffer_u16, _len);
    for (var _i = 0; _i < _len; _i++) {
        var _el = _arr[_i];
        if (is_real(_el)) {
            buffer_write(_b, buffer_u8, 1);
            buffer_write(_b, buffer_f32, _el);
        } else if (is_string(_el)) {
            // Tag 6 avoids colliding with legacy array tag 2 integer payloads.
            buffer_write(_b, buffer_u8, 6);
            buffer_write(_b, buffer_string, _el);
        } else if (is_array(_el)) {
            buffer_write(_b, buffer_u8, 3);
            _save_type_rec2(_b, _el);
        } else if (is_int64(_el)) {
            buffer_write(_b, buffer_u8, 4);
            buffer_write(_b, buffer_u64, _el);
        }
    }
}

function _save_type_rec2(_b, _arr2) {
    var _len2 = array_length_1d(_arr2);
    buffer_write(_b, buffer_u16, _len2);
    for (var _j = 0; _j < _len2; _j++) {
        var _el2 = _arr2[_j];
        if (is_real(_el2)) {
            buffer_write(_b, buffer_u8, 1);
            buffer_write(_b, buffer_f32, _el2);
        } else if (is_string(_el2)) {
            buffer_write(_b, buffer_u8, 6);
            buffer_write(_b, buffer_string, _el2);
        } else if (is_int64(_el2)) {
            buffer_write(_b, buffer_u8, 2);
            buffer_write(_b, buffer_u64, _el2);
        }
    }
}

function _save_ds_list(_b, _list) {
    if (ds_exists(_list, ds_type_list)) {
        var _sz = ds_list_size(_list);
        buffer_write(_b, buffer_u16, _sz);
        for (var _i = 0; _i < _sz; _i++) {
            buffer_write(_b, buffer_f32, ds_list_find_value(_list, _i));
        }
    } else {
        buffer_write(_b, buffer_u16, 0);
    }
}

// ============================================================================
// save_GENERAL() / load_GENERAL()
// ============================================================================
function save_GENERAL() {
    var _b = buffer_create(1, buffer_grow, 1);
    buffer_seek(_b, buffer_seek_start, 0);
    buffer_write(_b, buffer_string, string(oControl.EO_SPAWN));
    buffer_write(_b, buffer_string, string(CURRENTROOM));
    buffer_write(_b, buffer_u32, round(global.D_NUMBER));
    buffer_write(_b, buffer_u8, round(oControl.CHAPTER));
    buffer_write(_b, buffer_u8, 0);
    buffer_save(_b, working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/GENERAL");
    buffer_delete(_b);
}

function load_GENERAL() {
    var _path = "";
    var _fname = "GENERAL";
    if (floor(oControl.game_loadchapter) > -1) {
        _path = working_directory + "DATA/CHAPTER_TEMPLATES/chapter_" + string(floor(oControl.game_loadchapter) + 1) + "/" + _fname;
    } else {
        _path = working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/" + _fname;
    }
    var _b = buffer_load(_path);
    if (_b != -1) {
        buffer_seek(_b, buffer_seek_end, 0);
        var _end = buffer_tell(_b);
        buffer_seek(_b, buffer_seek_start, 0);
        if (buffer_tell(_b) + 1 < _end) {
            oControl.EO_SPAWN = real(buffer_read(_b, buffer_string));
            oControl.game_start_rm = buffer_read(_b, buffer_string);
            global.D_NUMBER = buffer_read(_b, buffer_u32);
            oControl.CHAPTER = buffer_read(_b, buffer_u8);
        }
        buffer_delete(_b);
    }
}

// ============================================================================
// Helper: serialize/deserialize common 68-byte instance header + reflection vars
// ============================================================================
function _write_instance_record(_b, _inst, _adjust_gravity) {
    buffer_write(_b, buffer_string, string(object_get_name(_inst.object_index)));
    buffer_write(_b, buffer_f32, _inst.xstart);
    buffer_write(_b, buffer_f32, _inst.ystart);
    buffer_write(_b, buffer_f32, _inst.x);
    buffer_write(_b, buffer_f32, _inst.y);
    buffer_write(_b, buffer_s16, _inst.depth);
    buffer_write(_b, buffer_s16, _inst.speed);
    buffer_write(_b, buffer_s16, _inst.direction);
    buffer_write(_b, buffer_s16, _inst.friction);
    buffer_write(_b, buffer_s16, _inst.gravity);
    buffer_write(_b, buffer_s16, _inst.sprite_index);
    buffer_write(_b, buffer_s16, _inst.image_index);
    buffer_write(_b, buffer_s16, _inst.image_speed);
    buffer_write(_b, buffer_f32, _inst.image_alpha);
    buffer_write(_b, buffer_u32, _inst.image_blend);
    buffer_write(_b, buffer_u32, _inst.visible);
    for (var _al = 0; _al < 12; _al++) {
        buffer_write(_b, buffer_s16, _inst.alarm[_al]);
    }

    if (_adjust_gravity) {
        var _grav_up = (object_is_ancestor(_inst.object_index, parEntity)
            && _inst.physics == 1
            && _inst.collide_object == 1
            && _inst.mover == 0
            && _inst.do_grav != 0) ? 2.0 : 0.0;
        if (variable_instance_exists(_inst.id, "Y")) _inst.Y -= _grav_up;
        if (variable_instance_exists(_inst.id, "y1")) _inst.y1 -= _grav_up;
        if (variable_instance_exists(_inst.id, "y2")) _inst.y2 -= _grav_up;
    }

    var _names = variable_instance_get_names(_inst.id);
    var _nlen = array_length_1d(_names);
    buffer_write(_b, buffer_u16, _nlen);
    for (var _i = 0; _i < _nlen; _i++) {
        var _vname = _names[_i];
        var _vval = variable_instance_get(_inst.id, _vname);
        buffer_write(_b, buffer_string, _vname);
        _save_type(_b, _vval);
    }
}

// ============================================================================
// save_CONTROL() / load_CONTROL()
// ============================================================================
function save_CONTROL() {
    var _b = buffer_create(1, buffer_grow, 1);
    buffer_seek(_b, buffer_seek_start, 0);
    with (oControl) {
        _write_instance_record(_b, id, false);
    }
    buffer_write(_b, buffer_u8, 0);
    buffer_save(_b, working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/CONTROL");
    buffer_delete(_b);
}

// ============================================================================
// save_CHARACTER() / load_CHARACTER()
// ============================================================================
function save_CHARACTER() {
    var _b = buffer_create(1, buffer_grow, 1);
    buffer_seek(_b, buffer_seek_start, 0);
    with (oPlayer) {
        _write_instance_record(_b, id, true);
        if (!ds_exists(books, ds_type_list)) books = ds_list_create();
        _save_ds_list(_b, books);
        if (!ds_exists(PLANET_FOUND, ds_type_list)) PLANET_FOUND = ds_list_create();
        _save_ds_list(_b, PLANET_FOUND);
    }
    if (instance_exists(oEo)) {
        with (oEo) {
            _write_instance_record(_b, id, true);
        }
    }
    buffer_write(_b, buffer_u8, 0);
    buffer_save(_b, working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/CHARACTER");
    buffer_delete(_b);
}

// ============================================================================
// save_game() / load_game()
// ============================================================================
function save_game() {
    instance_activate_all();
    if (instance_exists(oAenox_bound)) {
        with (oAenox_bound) instance_destroy();
    }
    var _b = buffer_create(1, buffer_grow, 1);
    buffer_seek(_b, buffer_seek_start, 0);
    buffer_write(_b, buffer_u8, oControl.mw);
    buffer_write(_b, buffer_u8, oControl.mh);
    buffer_write(_b, buffer_u8, instance_exists(oEo));
    for (var _ix = 0; _ix < oControl.mw; _ix++) {
        for (var _iy = 0; _iy < oControl.mh; _iy++) {
            buffer_write(_b, buffer_u16, round(array_get_2D(map, _ix, _iy)));
        }
    }
    with (all) {
        if (object_index != oControl
            && object_index != oCamera
            && object_index != oPlayer
            && object_index != oEo
            && object_index != oSun_Mal
            && object_index != oSun_Mex
            && object_index != oSun_Irn
            && object_index != oSun_Sep
            && object_index != oSun_Quo
            && object_index != oSun_Iie
            && !object_is_ancestor(object_index, parParticle)
            && !object_is_ancestor(object_index, parGrass)
            && !object_is_ancestor(object_index, parSpark)
            && !object_is_ancestor(object_index, parFX)) {
            _write_instance_record(_b, id, true);
            if (object_is_ancestor(object_index, parLootable)) {
                _save_ds_list(_b, INV);
                _save_ds_list(_b, INV_N);
            }
        }
    }
    buffer_write(_b, buffer_u8, 0);
    buffer_save(_b, working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/ROOMS/" + CURRENTROOM + ".SAVE");
    buffer_delete(_b);
}

function _read_saved_type(_b) {
    var _tag = buffer_read(_b, buffer_u8);
    switch (_tag) {
        case 1:
            return buffer_read(_b, buffer_f32);
        case 2:
            return buffer_read(_b, buffer_string);
        case 3:
            var _n = buffer_read(_b, buffer_u16);
            var _arr = 0;
            for (var _i = 0; _i < _n; _i++) {
                _arr[_i] = 0;
            }
            for (var _i = 0; _i < _n; _i++) {
                var _t2 = buffer_read(_b, buffer_u8);
                if (_t2 == 1) {
                    _arr[_i] = buffer_read(_b, buffer_f32);
                } else if (_t2 == 2) {
                    _arr[_i] = buffer_read(_b, buffer_u64);
                } else if (_t2 == 6) {
                    _arr[_i] = buffer_read(_b, buffer_string);
                } else if (_t2 == 3) {
                    var _n2 = buffer_read(_b, buffer_u16);
                    var _arr2 = 0;
                    for (var _j = 0; _j < _n2; _j++) {
                        _arr2[_j] = 0;
                    }
                    for (var _j = 0; _j < _n2; _j++) {
                        var _t3 = buffer_read(_b, buffer_u8);
                        if (_t3 == 1) {
                            _arr2[_j] = buffer_read(_b, buffer_f32);
                        } else if (_t3 == 2) {
                            _arr2[_j] = buffer_read(_b, buffer_u64);
                        } else if (_t3 == 6) {
                            _arr2[_j] = buffer_read(_b, buffer_string);
                        }
                    }
                    _arr[_i] = _arr2;
                }
            }
            return _arr;
        case 4:
            return buffer_read(_b, buffer_bool);
        case 5:
            return buffer_read(_b, buffer_u64);
    }
    return undefined;
}

function _apply_instance_record(_b, _end, _inst) {
    for (var _al = 0; _al < 12; _al++) {
        var _aval = buffer_read(_b, buffer_s16);
        if (_inst.alarm[_al] <= -1) {
            _inst.alarm[_al] = _aval;
        }
    }
    var _vcount = buffer_read(_b, buffer_u16);
    for (var _i = 0; _i < _vcount; _i++) {
        var _vname = buffer_read(_b, buffer_string);
        var _vexists = variable_instance_exists(_inst.id, _vname);
        var _vval = _read_saved_type(_b);
        if (_vexists && !is_undefined(_vval)) {
            variable_instance_set(_inst.id, _vname, _vval);
        }
        if (buffer_tell(_b) + 1 >= _end) break;
    }
}

function load_CONTROL() {
    var _fname = "CONTROL";
    var _path = (floor(oControl.game_loadchapter) > -1)
        ? (working_directory + "DATA/CHAPTER_TEMPLATES/chapter_" + string(floor(oControl.game_loadchapter) + 1) + "/" + _fname)
        : (working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/" + _fname);
    var _b = buffer_load(_path);
    if (_b != -1) {
        buffer_seek(_b, buffer_seek_end, 0);
        var _end = buffer_tell(_b);
        buffer_seek(_b, buffer_seek_start, 0);
        if (buffer_tell(_b) + 1 < _end) {
            var _oidx = asset_get_index(buffer_read(_b, buffer_string));
            if (_oidx != -1 && _oidx > -1) {
                var _xs = buffer_read(_b, buffer_f32);
                var _ys = buffer_read(_b, buffer_f32);
                var _xx = buffer_read(_b, buffer_f32);
                var _yy = buffer_read(_b, buffer_f32);
                var _dp = buffer_read(_b, buffer_s16);
                if (buffer_tell(_b) + 1 < _end) {
                    with (oControl) {
                        x = _xx;
                        y = _yy;
                        depth = _dp;
                        speed = buffer_read(_b, buffer_s16);
                        direction = buffer_read(_b, buffer_s16);
                        friction = buffer_read(_b, buffer_s16);
                        gravity = buffer_read(_b, buffer_s16);
                        sprite_index = buffer_read(_b, buffer_s16);
                        image_index = buffer_read(_b, buffer_s16);
                        image_speed = buffer_read(_b, buffer_s16);
                        image_alpha = buffer_read(_b, buffer_f32);
                        image_blend = buffer_read(_b, buffer_u32);
                        visible = bool(round(buffer_read(_b, buffer_u32)));
                        _apply_instance_record(_b, _end, id);
                    }
                }
            }
        }
        buffer_delete(_b);
    }
}

function load_CHARACTER() {
    var _fname = "CHARACTER";
    var _path = (floor(oControl.game_loadchapter) > -1)
        ? (working_directory + "DATA/CHAPTER_TEMPLATES/chapter_" + string(floor(oControl.game_loadchapter) + 1) + "/" + _fname)
        : (working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/" + _fname);
    var _b = buffer_load(_path);
    if (_b != -1) {
        buffer_seek(_b, buffer_seek_end, 0);
        var _end = buffer_tell(_b);
        buffer_seek(_b, buffer_seek_start, 0);
        if (buffer_tell(_b) + 1 < _end) {
            var _oidx = asset_get_index(buffer_read(_b, buffer_string));
            if (_oidx != -1 && _oidx > -1) {
                var _xs = buffer_read(_b, buffer_f32);
                var _ys = buffer_read(_b, buffer_f32);
                var _xx = buffer_read(_b, buffer_f32);
                var _yy = buffer_read(_b, buffer_f32);
                var _dp = buffer_read(_b, buffer_s16);
                if (buffer_tell(_b) + 1 < _end) {
                    if (!instance_exists(oPlayer)) {
                        instance_create_depth(_xs, _ys, _dp, oPlayer);
                    }
                    with (oPlayer) {
                        x = _xx;
                        y = _yy;
                        depth = _dp;
                        speed = buffer_read(_b, buffer_s16);
                        direction = buffer_read(_b, buffer_s16);
                        friction = buffer_read(_b, buffer_s16);
                        gravity = buffer_read(_b, buffer_s16);
                        sprite_index = buffer_read(_b, buffer_s16);
                        image_index = buffer_read(_b, buffer_s16);
                        image_speed = buffer_read(_b, buffer_s16);
                        image_alpha = buffer_read(_b, buffer_f32);
                        image_blend = buffer_read(_b, buffer_u32);
                        visible = bool(round(buffer_read(_b, buffer_u32)));
                        _apply_instance_record(_b, _end, id);

                        var _books_cnt = buffer_read(_b, buffer_u16);
                        if (_books_cnt > 0) {
                            if (!ds_exists(books, ds_type_list)) books = ds_list_create();
                            ds_list_clear(books);
                            for (var _i = 0; _i < _books_cnt; _i++) {
                                ds_list_add(books, buffer_read(_b, buffer_f32));
                            }
                        }
                        var _pf_cnt = buffer_read(_b, buffer_u16);
                        if (_pf_cnt > 0) {
                            if (!ds_exists(PLANET_FOUND, ds_type_list)) PLANET_FOUND = ds_list_create();
                            ds_list_clear(PLANET_FOUND);
                            for (var _i = 0; _i < _pf_cnt; _i++) {
                                ds_list_add(PLANET_FOUND, buffer_read(_b, buffer_f32));
                            }
                        }
                        event_user(2);
                    }
                }
            }
            // Optional oEo record
            var _eo_idx = asset_get_index(buffer_read(_b, buffer_string));
            if (_eo_idx != -1 && _eo_idx > -1 && instance_exists(oEo)) {
                var _xs2 = buffer_read(_b, buffer_f32);
                var _ys2 = buffer_read(_b, buffer_f32);
                var _xx2 = buffer_read(_b, buffer_f32);
                var _yy2 = buffer_read(_b, buffer_f32);
                var _dp2 = buffer_read(_b, buffer_s16);
                if (buffer_tell(_b) + 1 < _end) {
                    with (oEo) {
                        x = _xx2;
                        y = _yy2;
                        depth = _dp2;
                        speed = buffer_read(_b, buffer_s16);
                        direction = buffer_read(_b, buffer_s16);
                        friction = buffer_read(_b, buffer_s16);
                        gravity = buffer_read(_b, buffer_s16);
                        sprite_index = buffer_read(_b, buffer_s16);
                        image_index = buffer_read(_b, buffer_s16);
                        image_speed = buffer_read(_b, buffer_s16);
                        image_alpha = buffer_read(_b, buffer_f32);
                        image_blend = buffer_read(_b, buffer_u32);
                        visible = bool(round(buffer_read(_b, buffer_u32)));
                        _apply_instance_record(_b, _end, id);
                    }
                }
            }
        }
        buffer_delete(_b);
    }
}

function load_game() {
    var _path = "";
    var _fname = CURRENTROOM + ".SAVE";
    if (floor(oControl.game_loadchapter) > -1) {
        _path = working_directory + "DATA/CHAPTER_TEMPLATES/chapter_" + string(floor(oControl.game_loadchapter) + 1) + "/ROOMS/" + _fname;
        var _src_dir = working_directory + "DATA/CHAPTER_TEMPLATES/chapter_" + string(floor(oControl.game_loadchapter) + 1) + "/ROOMS/";
        var _dst_dir = working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/ROOMS/";
        var _ff = file_find_first(_src_dir + "*.SAVE", 0);
        if (_ff != "") {
            file_copy(_src_dir + _ff, _dst_dir + _ff);
            _ff = file_find_next();
            while (_ff != "") {
                file_copy(_src_dir + _ff, _dst_dir + _ff);
                _ff = file_find_next();
                if (_ff == "") break;
            }
        }
        file_find_close();
    } else {
        _path = working_directory + "PROFILES/HEPTAVERSE_" + string(PROFILE) + "/ROOMS/" + _fname;
    }

    var _b = buffer_load(_path);
    if (_b != -1) {
        instance_activate_all();
        clear_objects();
        if (instance_exists(oAenox_bound)) {
            with (oAenox_bound) instance_destroy();
        }
        buffer_seek(_b, buffer_seek_end, 0);
        var _end = buffer_tell(_b);
        buffer_seek(_b, buffer_seek_start, 0);

        var _mw = buffer_read(_b, buffer_u8);
        var _mh = buffer_read(_b, buffer_u8);
        var _has_eo = buffer_read(_b, buffer_u8);

        for (var _ix = 0; _ix < _mw; _ix++) {
            for (var _iy = 0; _iy < _mh; _iy++) {
                var _cell = buffer_read(_b, buffer_u16);
                map[_ix, _iy] = _cell;
                if (_cell != 0 && array_get_2D(map_id, _cell, 4) != noone) {
                    if (instance_position(_ix * 16, _iy * 16, array_get_2D(map_id, _cell, 4)) == noone) {
                        instance_create_depth(_ix * 16, _iy * 16, map_id[_cell, 5], map_id[_cell, 4]);
                    }
                }
            }
        }

        if (_has_eo && !instance_exists(oEo)) {
            instance_create_depth(oPlayer.x, oPlayer.y, 0, oEo);
        }

        ds_list_destroy(obj_list);
        obj_list = ds_list_create();
        oControl.collision_list = 0;
        oControl.collision_list[0] = noone;
        var _col_idx = 0;

        while (buffer_tell(_b) + 1 < _end) {
            var _oidx = asset_get_index(buffer_read(_b, buffer_string));
            if (_oidx == -1 || _oidx <= -1) break;
            var _xs = buffer_read(_b, buffer_f32);
            var _ys = buffer_read(_b, buffer_f32);
            var _xx = buffer_read(_b, buffer_f32);
            var _yy = buffer_read(_b, buffer_f32);
            var _dp = buffer_read(_b, buffer_s16);
            if (buffer_tell(_b) + 1 >= _end) break;

            var _inst = instance_create_depth(_xs, _ys, _dp, _oidx);
            ds_list_add(obj_list, _inst);
            if (object_is_ancestor(_inst.object_index, parEntity)) {
                oControl.collision_list[_col_idx] = _inst;
                _col_idx += 1;
            }
            with (_inst) {
                x = _xx;
                y = _yy;
                depth = _dp;
                speed = buffer_read(_b, buffer_s16);
                direction = buffer_read(_b, buffer_s16);
                friction = buffer_read(_b, buffer_s16);
                gravity = buffer_read(_b, buffer_s16);
                sprite_index = buffer_read(_b, buffer_s16);
                image_index = buffer_read(_b, buffer_s16);
                image_speed = buffer_read(_b, buffer_s16);
                image_alpha = buffer_read(_b, buffer_f32);
                image_blend = buffer_read(_b, buffer_u32);
                visible = bool(round(buffer_read(_b, buffer_u32)));
                _apply_instance_record(_b, _end, id);

                if (object_is_ancestor(object_index, parLootable)) {
                    var _inv_cnt = buffer_read(_b, buffer_u16);
                    if (_inv_cnt > 0) {
                        if (!ds_exists(INV, ds_type_list)) INV = ds_list_create();
                        ds_list_clear(INV);
                        for (var _i = 0; _i < _inv_cnt; _i++) {
                            ds_list_add(INV, buffer_read(_b, buffer_f32));
                        }
                    }
                    var _invn_cnt = buffer_read(_b, buffer_u16);
                    if (_invn_cnt > 0) {
                        if (!ds_exists(INV_N, ds_type_list)) INV_N = ds_list_create();
                        ds_list_clear(INV_N);
                        for (var _i = 0; _i < _invn_cnt; _i++) {
                            ds_list_add(INV_N, buffer_read(_b, buffer_f32));
                        }
                    }
                }
            }
        }
        buffer_delete(_b);
    }

}
