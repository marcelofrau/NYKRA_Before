// Reconstructed from gml_Script_sound_voice_Keu (0x140030dd0, NativeAnalysis/decompiled/dialogue_voice_annotated):
// choose() over 11 sound asset indices read from the .exe (0x1420b13e0..0x1420b1480): 173, 174, 175, 177..184,
// which are sndV_Keu1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12 in the original asset order (sounds-metadata.json).
function sound_voice_Keu() {
    return choose(sndV_Keu1, sndV_Keu2, sndV_Keu3, sndV_Keu4, sndV_Keu6, sndV_Keu7,
                  sndV_Keu8, sndV_Keu9, sndV_Keu10, sndV_Keu11, sndV_Keu12);
}
