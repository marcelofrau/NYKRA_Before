// Reconstructed from gml_Script_set_controls @ 0x14017ba40 (NativeAnalysis/decompiled/camera_lifted).
// global.CONTROLS == 0 selects the WASD scheme, anything else the arrow-key scheme (values are
// virtual-key codes: A=65, D=68, W=87, S=83, space=32, arrows 37-40, J/K/H/I=74/75/72/73).
// NOT reconstructed (plan section 7, P16): the tail of the original, which compares the bound
// keys against 37/38/39/40 and is not needed for the keyboard on Windows.
function set_controls() {
    if (global.CONTROLS == 0) {
        global.kkl = 65;
        global.kkr = 68;
        global.kku = 87;
        global.kkj = 32;
        global.kkd = 83;
        global.key_aenox = 74;
        global.key_telarod = 75;
        global.key_eo = 72;
        global.key_inv = 73;
    } else {
        global.kkl = 37;
        global.kkr = 39;
        global.kku = 38;
        global.kkj = 32;
        global.kkd = 40;
        global.key_aenox = 65;
        global.key_telarod = 83;
        global.key_eo = 70;
        global.key_inv = 69;
    }
}
