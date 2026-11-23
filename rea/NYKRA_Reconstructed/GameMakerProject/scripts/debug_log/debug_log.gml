// Debug logging gate for the reconstruction (MASTER_RECONSTRUCTION_PLAN.md section 7).
// 0 = silent, 1 = milestones (default), 2 = verbose (per record, per stub).
// Raise LOG_LEVEL only for a session that needs the detail; keep 1 for a normal F5 run.
// Every line carries the elapsed time in milliseconds so a pasted log can be read as a timeline.
// Body code of a script runs at game start, before any room, so the globals always exist.
global.LOG_LEVEL = 1;
global.logged_once = {};
global.log_t0 = get_timer();

/// @description log_level(level, msg): prints "[1234 ms] msg" when LOG_LEVEL reaches level
function log_level(_level, _msg) {
    if (global.LOG_LEVEL < _level) return;
    show_debug_message("[" + string(floor((get_timer() - global.log_t0) / 1000)) + " ms] " + _msg);
}

/// @description log_note(msg): milestone or error worth reading on every run
function log_note(_msg) {
    log_level(1, _msg);
}

/// @description log_verbose(msg): per record detail, off by default
function log_verbose(_msg) {
    log_level(2, _msg);
}

/// @description log_once(name, msg): logs msg the first time name is seen in this run
function log_once(_name, _msg) {
    if (!variable_struct_exists(global.logged_once, _name)) {
        global.logged_once[$ _name] = true;
        log_note(_msg);
    }
}
