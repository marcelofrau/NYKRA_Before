// APPROXIMATION of gml_Script_config_get @ 0x140120200 (plan section 7, P15).
// Confirmed from the decompilation: it opens the ini file "config", reads (section, key) with
// ini_read_string and closes it. NOT confirmed: an extra branch when the default argument is 1,
// which calls a helper we have not identified. Callers wrap the result in real()/bool(), so a
// string is returned. The original `config` file (Fullscreen="0", Shake="100", Controls="0") is
// an Included File.
function config_get(_section, _key, _default) {
    ini_open("config");
    var _value = ini_read_string(_section, _key, string(_default));
    ini_close();
    return _value;
}
