// Reconstructed from gml_Object_oDoor_chunky_Destroy_0 @ 0x1411e9ba0
// (NativeAnalysis/decompiled/door_pre_destroy). The only real statement is one builtin call with
// one argument, read from `var:snd` (0x18caa); the address of the builtin is 0x1420db340, which
// RecoveredAssets/Metadata/yyc-dat-symbols.json names `audio_stop_sound`. Everything else in the
// decompilation is GML value bookkeeping (FUN_140001b50 frees temporary strings).
// Note: `snd` starts at -4 in Create_0, so the original passes an invalid sound index here. The
// port keeps that exact call instead of adding a guard the original does not have.
audio_stop_sound(snd);
