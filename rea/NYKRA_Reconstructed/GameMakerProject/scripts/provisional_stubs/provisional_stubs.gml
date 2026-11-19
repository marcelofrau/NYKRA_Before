// PROVISIONAL stubs (MASTER_RECONSTRUCTION_PLAN.md section 7, rows P5 and P6).
// These game scripts exist in NYKRA.exe (gml_Script_<name>) but are not decompiled yet.
// Each stub is loud on purpose: it logs "STUB <name>" and does the least that keeps the
// caller running. None of them is a reconstruction. Delete each one when the real
// function is reconstructed (3.3) or the save system is implemented (3.4).
// Parameters are declared because the compiler rejects extra arguments for a function
// declared without them (GM1019); the names are placeholders, not recovered names.

/// @description instance_create_one(x, y, depth, object): STUB, creates nothing
function instance_create_one(_x, _y, _depth, _object) {
    show_debug_message("STUB instance_create_one(" + string(_x) + ", " + string(_y) + ", "
        + string(_depth) + ", " + object_get_name(_object) + "): nothing created");
    return noone;
}

/// @description obj_setpos(instance, x, y): STUB, does not move anything
function obj_setpos(_instance, _x, _y) {
    show_debug_message("STUB obj_setpos: instance not moved");
}

/// @description real_string(text): STUB, returns the text unchanged
function real_string(_text) {
    show_debug_message("STUB real_string: text returned unchanged");
    return _text;
}

/// @description inv_add_obj(item, count, instance): STUB, adds no item
function inv_add_obj(_item, _count, _instance) {
    show_debug_message("STUB inv_add_obj: item not added");
}

/// @description load_game(): STUB, saves are disabled until Save V1 (3.4)
function load_game() {
    show_debug_message("STUB load_game: saves are disabled (P6)");
}

/// @description save_game(): STUB, saves are disabled until Save V1 (3.4)
function save_game() {
    show_debug_message("STUB save_game: saves are disabled (P6)");
}
