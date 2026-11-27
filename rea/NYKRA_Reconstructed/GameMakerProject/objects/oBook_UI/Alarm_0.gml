// Reconstructed from gml_Object_oBook_UI_Alarm_0 @ 0x1414a1ec0 (NativeAnalysis/decompiled/rmmal1_sun_annotated:166-198), plan 0.7 item 5c.
// Source: the YYC. choose() of sounds 106-112 (sndBackpack_01..07, ids read from the exe: DAT_1420cb828..cb888), priority 10,
// pitch random_range(0.9, 1.1) * 0.9, gain DAT_1420cb8a8 = 0.666666666666667, gain time 1.
// Armed by Draw_73 when anim4 turns 1 (the book is closing): the rustle of the book going back into the bag.
// shortcut: the loops argument is DAT_142182bc8 (.bss, not readable from the exe); 0 (plays once) is the only value that fits
// a one-shot rustle (plan section 7, P45).
play_sound(choose(sndBackpack_01, sndBackpack_02, sndBackpack_03, sndBackpack_04, sndBackpack_05, sndBackpack_06, sndBackpack_07),
    10, 0, random_range(0.9, 1.1) * 0.9, 0.666666666666667, 1);
