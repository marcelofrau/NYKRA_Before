// Reconstructed from gml_Script_snd_step_grass: the original chooses among the sound asset indices 5..12,
// which are sndStep_grass1..8 in the original asset order (sounds-metadata.json).
function snd_step_grass() {
    return choose(sndStep_grass1, sndStep_grass2, sndStep_grass3, sndStep_grass4,
                  sndStep_grass5, sndStep_grass6, sndStep_grass7, sndStep_grass8);
}
