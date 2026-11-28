// Reconstructed from gml_Script_load_dialogue (0x1400ec080), NativeAnalysis/decompiled/load_dialogue_annotated and
// load_dialogue_lifted (1135 lines). Plan 0.7 item 6.
// Fills the instance array dlg[row, field] (fields 0..24) from the section [<dlg_name>] of the language file
// (dlg_eng.lang, opened by ini_language). The section name is the object's name unless pick_random is set
// (parDialogue/Draw_73 then picks dlg_name itself). Rows are read while the key "dlg[<row>,0]" exists, at most 300.
// Key suffixes ",0]".. ",24]" and the "-2"/"-1" strings are the .exe strings at 0x1420b3020..0x1420b309b.
function load_dialogue() {
    if (!pick_random) {
        dlg_name = object_get_name(object_index);
    }
    var _n = 0;
    ini_language();
    var _left = 300;
    while (_left > 0) {
        if (!ini_key_exists(dlg_name, "dlg[" + string(_n) + ",0]")) break;
        var _k = "dlg[" + string(_n) + ",";
        dlg[_n, 0] = ini_read_string(dlg_name, _k + "0]", "");
        dlg[_n, 1] = ini_read_string(dlg_name, _k + "1]", "");
        dlg[_n, 2] = round(real(ini_read_real(dlg_name, _k + "2]", -1)));
        dlg[_n, 3] = ini_read_string(dlg_name, _k + "3]", "");
        dlg[_n, 4] = round(real(ini_read_real(dlg_name, _k + "4]", -1)));
        dlg[_n, 5] = round(real(ini_read_real(dlg_name, _k + "5]", -1)));
        // field 6 (follow id): "-2" stays -2, any other text is an object name, "-1" means this instance
        if (ini_read_string(dlg_name, _k + "6]", "") == "-2") {
            dlg[_n, 6] = -2;
        } else {
            dlg[_n, 6] = asset_get_index(ini_read_string(dlg_name, _k + "6]", ""));
        }
        if (ini_read_string(dlg_name, _k + "6]", "") == "-1") {
            dlg[_n, 6] = id;
        }
        dlg[_n, 7] = round(real(ini_read_real(dlg_name, _k + "7]", -1)));
        dlg[_n, 8] = ini_read_string(dlg_name, _k + "8]", "");
        dlg[_n, 9] = ini_read_string(dlg_name, _k + "9]", "");
        dlg[_n, 10] = ini_read_string(dlg_name, _k + "10]", "");
        dlg[_n, 11] = ini_read_string(dlg_name, _k + "11]", "");
        // empty choices become -1: three passes over fields 8..11, comparing with 0, then "", then "0"
        // shortcut: the "" of the second pass is the static string DAT_14217f438, which lives in .bss
        //   (set at start-up, not in the file); read as "" because the pass would be a no-op otherwise;
        //   upgrade by finding its writer in the YYC (plan P-row)
        for (var _c = 8; _c <= 11; _c++) { if (dlg[_n, _c] == 0) dlg[_n, _c] = -1; }
        for (var _c = 8; _c <= 11; _c++) { if (dlg[_n, _c] == "") dlg[_n, _c] = -1; }
        for (var _c = 8; _c <= 11; _c++) { if (dlg[_n, _c] == "0") dlg[_n, _c] = -1; }
        dlg[_n, 12] = round(real(ini_read_real(dlg_name, _k + "12]", -1)));
        dlg[_n, 13] = round(real(ini_read_real(dlg_name, _k + "13]", -1)));
        dlg[_n, 14] = round(real(ini_read_real(dlg_name, _k + "14]", -1)));
        dlg[_n, 15] = round(real(ini_read_real(dlg_name, _k + "15]", -1)));
        dlg[_n, 16] = ini_read_string(dlg_name, _k + "16]", "");
        // field 17 (sound source): "-2" means this instance, any other text is an object name
        if (ini_read_string(dlg_name, _k + "17]", "") == "-2") {
            dlg[_n, 17] = id;
        } else {
            dlg[_n, 17] = asset_get_index(ini_read_string(dlg_name, _k + "17]", ""));
        }
        dlg[_n, 18] = asset_get_index(ini_read_string(dlg_name, _k + "18]", ""));
        dlg[_n, 19] = round(real(ini_read_real(dlg_name, _k + "19]", -1)));
        dlg[_n, 20] = round(real(ini_read_real(dlg_name, _k + "20]", -1)));
        dlg[_n, 21] = round(real(ini_read_real(dlg_name, _k + "21]", -1)));
        dlg[_n, 22] = round(real(ini_read_real(dlg_name, _k + "22]", -1)));
        dlg[_n, 23] = round(real(ini_read_real(dlg_name, _k + "23]", -1)));
        dlg[_n, 24] = round(real(ini_read_real(dlg_name, _k + "24]", -1)));
        _left -= 1;
        _n += 1;
    }
    ini_close();
    // LOG LINE (not in the original): one milestone line per load, so the F5 log shows rows and the first row's fields
    log_note("load_dialogue: " + string(dlg_name) + " rows " + string(_n)
        + (_n > 0 ? " | row0 arrow " + string(dlg[0, 2]) + " goto " + string(dlg[0, 7]) + " follow " + string(dlg[0, 6])
        + " voice " + string(dlg[0, 16]) : ""));
}
