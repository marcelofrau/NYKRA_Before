// Reconstructed from gml_Object_oFade_in_Draw_73 @ 0x140881b00 (NativeAnalysis/decompiled/fade_in_annotated), P40.
// min(alpha, 1) because Create_0 starts at 1.12 (a short solid hold); fade is set by Alarm_0.
draw_rectangle_view(colour, min(alpha, 1));
if fade {
    alpha *= 0.9;
}
// the YYC compares with epsilon 1e-5 (DAT_1420f6b08), so alpha <= 0 is reached after ~110 frames
if alpha <= 0.00001 {
    instance_destroy();
}
