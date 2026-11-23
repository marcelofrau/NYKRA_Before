// Debug logging gate for the reconstruction (MASTER_RECONSTRUCTION_PLAN.md section 7).
// 0 = silent, 1 = milestones (default), 2 = verbose (per record, per stub).
// Raise LOG_LEVEL only for a session that needs the detail; keep 1 for a normal F5 run.
// Body code of a script runs at game start, before any room, so the globals always exist.
global.LOG_LEVEL = 1;
global.logged_once = {};

/// @description log_note(msg): milestone or error worth reading on every run
function log_note(_msg) {
    if (global.LOG_LEVEL >= 1) show_debug_message(_msg);
}

/// @description log_verbose(msg): per record detail, off by default
function log_verbose(_msg) {
    if (global.LOG_LEVEL >= 2) show_debug_message(_msg);
}

/// @description log_once(name, msg): logs msg the first time name is seen in this run
function log_once(_name, _msg) {
    if (!variable_struct_exists(global.logged_once, _name)) {
        global.logged_once[$ _name] = true;
        log_note(_msg);
    }
}
