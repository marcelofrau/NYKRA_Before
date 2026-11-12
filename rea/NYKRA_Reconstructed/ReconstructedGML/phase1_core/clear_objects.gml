/// @description clear_objects()
/// Reconstructed from NYKRA.exe (gml_Script_clear_objects @ 0x14005ffa0)
instance_activate_all();
with (all) {
    if (persistent != 1
        && object_index != oControl
        && object_index != oCamera
        && object_index != oPlayer
        && object_index != oEo
        && object_index != oSun_Mal
        && object_index != oSun_Mex
        && object_index != oSun_Irn
        && object_index != oSun_Sep
        && object_index != oSun_Quo
        && object_index != oSun_Iie) {
        instance_destroy();
    }
}
