// Reconstructed from gml_Script_real_string (NativeAnalysis/decompiled/player_lifted2):
// the number made of the digits of the text, 0 when it has none.
function real_string(_text) {
    var _digits = string_digits(_text);
    if (_digits == "") return 0;
    return real(_digits);
}
