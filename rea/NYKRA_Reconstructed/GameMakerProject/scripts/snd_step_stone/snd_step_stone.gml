// Reconstructed from gml_Script_snd_step_stone: the original chooses among the sound asset indices
// 21, 22, 23, 24, 26, 27, 28, 29 (25 is skipped): sndStep_stone1..8 in the original asset order
// (index 25 is sndMCh_Discovery, which sits between them; sounds-metadata.json).
function snd_step_stone() {
    return choose(sndStep_stone1, sndStep_stone2, sndStep_stone3, sndStep_stone4,
                  sndStep_stone5, sndStep_stone6, sndStep_stone7, sndStep_stone8);
}
