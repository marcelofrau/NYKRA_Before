// Reconstructed from gml_Object_oOrigin_Create_0 @ 0x1409fe6b0 (NativeAnalysis/decompiled/oorigin).
// Every line is a plain assignment in the original: the decompiled event is a run of
// `(var slot) = constant` with one conditional. Variable names come from
// RecoveredAssets/Metadata/yyc-dat-symbols.json; depth 26 was the only builtin written
// (FUN_1416cfae0 with the address for `depth` and the constant 26.0).

_x = 0;
_y = 0;
depth = 26;

getupan = 0;
anim = 0;
anim_t = 1;
anim_t2 = 1;
anim_t3 = 1;
anim_t4 = 1;
anim_t5 = 1;
anim_end = 1;
anim_end2 = 1;
anim_fall = 0;
fade = 1;
fade_out = 0;
start = 0;
end_hit = 0;
in_fade = 0;
dark_fade = 0;
dark_fade1 = 0;
dark_fade2 = 0;
dark_fade3 = 0;
dark_fade_anim = 0;
dfa3_t = 0;
text_anim = 0;
text_t = 0;
snd_spawn = -1;
sound_1 = 0;
sound_2 = 0;
sound_3 = 0;
sound_4 = 0;
sound_choir = 0;
charge = 0;

// The original tests `game_start == 1` before this, and leaves in_fade at 0 otherwise.
if (game_start == 1) {
    in_fade = 1;
}
