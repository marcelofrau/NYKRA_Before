// Reconstructed from gml_Object_DRAW_GNARCIER_Alarm_0 @ 0x141087db0 (NativeAnalysis/decompiled/draw_gnarcier_annotated)
// DAT_1420d5cb8 = the builtin `fps` (slot-name table of the exe, calibrated with x and alarm).
if instance_number(parGnarcier) < 1 {
    instance_destroy();
} else {
    alarm[0] = ceil(fps/2) + 30;
}
