/// @description map_save(filepath)
/// Reconstructed from NYKRA.exe (gml_Script_map_save @ 0x14003fa60)
var _filepath = argument[0];

if (instance_exists(oAenox_bound)) {
    with (oAenox_bound) {
        instance_destroy();
    }
}

var _b = buffer_create(2, buffer_grow, 1);
buffer_write(_b, buffer_u8, map_n);
buffer_write(_b, buffer_u8, mw);
buffer_write(_b, buffer_u8, mh);
buffer_write(_b, buffer_u8, planet);
buffer_write(_b, buffer_u8, horizon);
buffer_write(_b, buffer_u8, 0);
buffer_write(_b, buffer_u8, 0);
buffer_write(_b, buffer_u8, 0);

// 1. Collision & block grid
for (var _ix = 0; _ix < mw; _ix++) {
    for (var _iy = 0; _iy < mh; _iy++) {
        buffer_write(_b, buffer_u16, round(array_get_2D(map, _ix, _iy)));
    }
}

// 2. Tilemap layers
for (var _li = 0; _li < array_length_1d(_layer); _li++) {
    var _lid = layer_get_id(_layer[_li]);
    var _tmap = layer_tilemap_get_id(_lid);
    for (var _ix = 0; _ix < mw; _ix++) {
        for (var _iy = 0; _iy < mh; _iy++) {
            buffer_write(_b, buffer_u16, tilemap_get(_tmap, _ix, _iy));
        }
    }
}

// 3. Asset sprite layers (aFRONT, aBACK)
for (var _al = 0; _al <= 1; _al++) {
    var _alist = oControl.asset_list[_al];
    buffer_write(_b, buffer_u16, ds_list_size(_alist));
    for (var _i = 0; _i < ds_list_size(_alist); _i++) {
        var _sp = ds_list_find_value(_alist, _i);
        buffer_write(_b, buffer_u16, round(layer_sprite_get_x(_sp)));
        buffer_write(_b, buffer_u16, round(layer_sprite_get_y(_sp)));
        buffer_write(_b, buffer_string, string(sprite_get_name(layer_sprite_get_sprite(_sp))));
    }
}

// 4. Ensure oSAVE_WIRE is first in obj_list so map_load sees it before parWire instances
if (instance_exists(oSAVE_WIRE)) {
    ds_list_delete(obj_list, ds_list_find_index(obj_list, oSAVE_WIRE.id));
    ds_list_insert(obj_list, 0, oSAVE_WIRE.id);
}

// 5. Save object instances
buffer_write(_b, buffer_u16, ds_list_size(obj_list));
for (var _i = 0; _i < ds_list_size(obj_list); _i++) {
    var _inst = ds_list_find_value(obj_list, _i);
    if (!is_undefined(_inst) && instance_exists(_inst)) {
        buffer_write(_b, buffer_s16, _inst.xstart);
        buffer_write(_b, buffer_s16, _inst.ystart);
        buffer_write(_b, buffer_s16, _inst.depth);
        buffer_write(_b, buffer_string, string(object_get_name(_inst.object_index)));

        if (_inst.object_index == PATH) {
            buffer_write(_b, buffer_u8, _inst.n);
            buffer_write(_b, buffer_string, _inst.rm);
        } else if (object_is_ancestor(_inst.object_index, parLootable)) {
            buffer_write(_b, buffer_u16, _inst.locked);
            buffer_write(_b, buffer_u16, ds_list_size(_inst.INV));
            for (var _j = 0; _j < ds_list_size(_inst.INV); _j++) {
                buffer_write(_b, buffer_u16, real(ds_list_find_value(_inst.INV, _j)));
                buffer_write(_b, buffer_u16, real(ds_list_find_value(_inst.INV_N, _j)));
            }
        } else if (object_is_ancestor(_inst.object_index, parDoor_out)) {
            buffer_write(_b, buffer_u8, _inst.locked);
        } else if (object_is_ancestor(_inst.object_index, parDoor_Flat)) {
            buffer_write(_b, buffer_u8, _inst.locked);
            buffer_write(_b, buffer_u8, _inst.n);
            buffer_write(_b, buffer_string, _inst.rm);
        } else if (_inst.object_index == oRoof_angle) {
            buffer_write(_b, buffer_u16, _inst.width);
            buffer_write(_b, buffer_u16, _inst.repeat_t);
            buffer_write(_b, buffer_u8, _inst.material);
            buffer_write(_b, buffer_s16, _inst.dir);
        } else if (object_is_ancestor(_inst.object_index, parNote)) {
            buffer_write(_b, buffer_string, string(_inst.text));
            buffer_write(_b, buffer_u8, _inst.page);
        } else if (object_is_ancestor(_inst.object_index, oBook) || _inst.object_index == oBook) {
            buffer_write(_b, buffer_u8, _inst.book);
            buffer_write(_b, buffer_u8, _inst.book_text);
        } else if (instance_exists(oSAVE_WIRE) && object_is_ancestor(_inst.object_index, parWire)) {
            if (variable_instance_exists(_inst, "anim1")) buffer_write(_b, buffer_s16, round(_inst.anim1));
            if (variable_instance_exists(_inst, "anim2")) buffer_write(_b, buffer_s16, round(_inst.anim2));
            if (variable_instance_exists(_inst, "anim3")) buffer_write(_b, buffer_s16, round(_inst.anim3));
            if (variable_instance_exists(_inst, "anim4")) buffer_write(_b, buffer_s16, round(_inst.anim4));
            if (variable_instance_exists(_inst, "anim5")) buffer_write(_b, buffer_s16, round(_inst.anim5));
            if (variable_instance_exists(_inst, "anim6")) buffer_write(_b, buffer_s16, round(_inst.anim6));
            if (variable_instance_exists(_inst, "anim7")) buffer_write(_b, buffer_s16, round(_inst.anim7));
            if (variable_instance_exists(_inst, "anim8")) buffer_write(_b, buffer_s16, round(_inst.anim8));
            if (variable_instance_exists(_inst, "anim9")) buffer_write(_b, buffer_s16, round(_inst.anim9));
            if (variable_instance_exists(_inst, "d")) {
                buffer_write(_b, buffer_s16, round(_inst.d[0]));
                buffer_write(_b, buffer_s16, round(_inst.d[1]));
                buffer_write(_b, buffer_s16, round(_inst.d[2]));
                buffer_write(_b, buffer_s16, round(_inst.d[3]));
            }
            if (variable_instance_exists(_inst, "an")) {
                buffer_write(_b, buffer_s16, round(_inst.an[0]));
                buffer_write(_b, buffer_s16, round(_inst.an[1]));
                buffer_write(_b, buffer_s16, round(_inst.an[2]));
                buffer_write(_b, buffer_s16, round(_inst.an[3]));
            }
            if (variable_instance_exists(_inst, "anim")) buffer_write(_b, buffer_s16, round(_inst.anim));
            if (variable_instance_exists(_inst, "on")) buffer_write(_b, buffer_s16, round(_inst.on));
            if (variable_instance_exists(_inst, "power_on")) buffer_write(_b, buffer_s16, round(_inst.power_on));
        }
    }
}

buffer_save(_b, _filepath);
buffer_delete(_b);
