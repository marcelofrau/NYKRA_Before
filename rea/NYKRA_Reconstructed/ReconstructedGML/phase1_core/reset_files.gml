/// @description reset_files()
/// Reconstructed from NYKRA.exe (gml_Script_reset_files @ 0x140042f40)
ds_list_clear(file);
var _f = file_find_first(working_directory + "level_data/*.rmlvl", 0);
if (_f != "") {
    ds_list_add(file, string_replace(_f, ".rmlvl", ""));
    _f = file_find_next();
    while (_f != "") {
        ds_list_add(file, string_replace(_f, ".rmlvl", ""));
        _f = file_find_next();
        if (_f == "") break;
    }
}
file_find_close();
