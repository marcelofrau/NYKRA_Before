// Debug logging gate for the reconstruction (MASTER_RECONSTRUCTION_PLAN.md section 7).
// 0 = silent, 1 = milestones (default), 2 = verbose (per record, per stub).
// Raise LOG_LEVEL only for a session that needs the detail; keep 1 for a normal F5 run.
// Every line carries the elapsed time in milliseconds so a pasted log can be read as a timeline.
// Body code of a script runs at game start, before any room, so the globals always exist.
global.LOG_LEVEL = 1;
global.logged_once = {};
global.log_t0 = get_timer();
// Every line is also appended to f5.log in the game's save folder (game_save_id, normally %LOCALAPPDATA%\NYKRA_VerticalSlice\),
// which is wiped at each start, so an assistant can grep the last run instead of the user pasting the IDE output.
// It is a debug file, not a save: it has nothing to do with the save code.
global.log_file = game_save_id + "f5.log";
if (file_exists(global.log_file)) file_delete(global.log_file);
// runtime errors that end the game never reach show_debug_message, so write them to the file too (the game still ends)
exception_unhandled_handler(function(_ex) {
    log_level(0, "EXCEPTION: " + string(_ex.longMessage) + " | " + string(_ex.stacktrace));
    return 0;
});

/// @description log_level(level, msg): prints "[1234 ms] msg" when LOG_LEVEL reaches level (level 0 = always)
function log_level(_level, _msg) {
    if (global.LOG_LEVEL < _level) return;
    var _line = "[" + string(floor((get_timer() - global.log_t0) / 1000)) + " ms] " + _msg;
    show_debug_message(_line);
    var _f = file_text_open_append(global.log_file);
    if (_f != -1) {
        file_text_write_string(_f, _line);
        file_text_writeln(_f);
        file_text_close(_f);
    }
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
