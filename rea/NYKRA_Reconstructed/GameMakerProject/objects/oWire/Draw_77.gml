// Reconstructed from gml_Object_oWire_Draw_77 (NativeAnalysis/decompiled/small_annotated).
// One click on power-up, one on power-down; sndWire is sound 473 in the original.

if (on == 1 && anim >= 0.6 && sfx == 0) {
    play_sound_pos(sndWire, 10, 0, 1 + random_range(-0.05, 0.05), 1.0 / 3.0, irandom(50), x, y);
    sfx = 1;
}
if (on == 0 && anim <= 0.4 && sfx == 1) {
    play_sound_pos(sndWire, 10, 0, 0.666667, 1.0 / 3.0, irandom(50), x, y);
    sfx = 0;
}
