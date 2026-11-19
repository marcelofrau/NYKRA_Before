// Reconstructed from gml_Script_play_sound (NativeAnalysis/decompiled/player_lifted2).
// Plays a sound: id, priority, loops, pitch, gain, gain time. Returns the playing instance.
// The two constants Ghidra lost in the first audio_sound_gain call are taken as 0, 0 (silence, instantly),
// the same pattern as the original play_sound_pos (plan P29).
function play_sound(_id, _priority, _loops, _pitch, _gain, _gain_time) {
    var _snd = audio_play_sound(_id, _priority, _loops);
    audio_sound_pitch(_snd, _pitch);
    audio_sound_gain(_snd, 0, 0);
    audio_sound_gain(_snd, _gain, _gain_time);
    return _snd;
}
