// PROVISIONAL stubs (MASTER_RECONSTRUCTION_PLAN.md section 7, rows P5 and P6).
// These game scripts exist in NYKRA.exe (gml_Script_<name>) but are not decompiled yet.
// Each stub is loud on purpose: it logs "STUB <name>" and does the least that keeps the
// caller running. None of them is a reconstruction. Delete each one when the real
// function is reconstructed (3.3) or the save system is implemented (3.4).
// Parameters are declared because the compiler rejects extra arguments for a function
// declared without them (GM1019); the names are placeholders, not recovered names.

/// @description inv_add_obj(item, count, instance): STUB, adds no item
function inv_add_obj(_item, _count, _instance) {
    show_debug_message("STUB inv_add_obj: item not added");
}

/// @description hurt_player(damage, source_x, source_y, flag): STUB, the player takes no damage.
/// ARRAY_COLLIDE calls it for the damaging tile 19. The real gml_Script_hurt_player (0x1400e28e0,
/// NativeAnalysis/decompiled/arr_lifted) lowers hp, pushes the player away and shakes the camera;
/// it belongs to the interactions stage (plan P22).
function hurt_player(_damage, _source_x, _source_y, _flag) {
    show_debug_message("STUB hurt_player(" + string(_damage) + "): player not hurt");
}

/// @description load_game(): STUB, saves are disabled until Save V1 (3.4)
function load_game() {
    show_debug_message("STUB load_game: saves are disabled (P6)");
}

/// @description save_game(): STUB, saves are disabled until Save V1 (3.4)
function save_game() {
    show_debug_message("STUB save_game: saves are disabled (P6)");
}
