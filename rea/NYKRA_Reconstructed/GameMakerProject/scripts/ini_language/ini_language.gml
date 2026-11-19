// Reconstructed from gml_Script_ini_language (NativeAnalysis/decompiled/player_annotated):
// opens the language file (global LANGUAGE_FILE, set by oControl) as the current INI file.
// The caller reads it and calls ini_close().
function ini_language() {
    ini_open(working_directory + LANGUAGE_FILE);
}
