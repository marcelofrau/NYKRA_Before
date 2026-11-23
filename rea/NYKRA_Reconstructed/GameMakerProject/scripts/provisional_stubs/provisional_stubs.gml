// PROVISIONAL stubs (MASTER_RECONSTRUCTION_PLAN.md section 7, rows P5 and P6).
// These game scripts exist in NYKRA.exe (gml_Script_<name>) but are not decompiled yet.
// Each stub is loud on purpose: it logs "STUB <name>" and does the least that keeps the
// caller running. None of them is a reconstruction. Delete each one when the real
// function is reconstructed (3.3) or the save system is implemented (3.4).
// Parameters are declared because the compiler rejects extra arguments for a function
// declared without them (GM1019); the names are placeholders, not recovered names.

/// @description inv_add_obj(item, count, instance): STUB, adds no item
function inv_add_obj(_item, _count, _instance) {
    log_once("inv_add_obj", "STUB inv_add_obj: item not added");
}

/// @description hurt_player(damage, source_x, source_y, flag): STUB, the player takes no damage.
/// ARRAY_COLLIDE calls it for the damaging tile 19, once per touching frame, so it logs once. The real
/// gml_Script_hurt_player (0x1400e28e0, NativeAnalysis/decompiled/arr_lifted) lowers hp, pushes the
/// player away and shakes the camera; it belongs to the interactions stage (plan P22).
function hurt_player(_damage, _source_x, _source_y, _flag) {
    log_once("hurt_player", "STUB hurt_player(" + string(_damage) + "): player not hurt");
}

/// @description load_game(): STUB, saves are disabled until Save V1 (3.4)
function load_game() {
    log_note("STUB load_game: saves are disabled (P6)");
}

/// @description save_game(): STUB, saves are disabled until Save V1 (3.4)
function save_game() {
    log_note("STUB save_game: saves are disabled (P6)");
}
