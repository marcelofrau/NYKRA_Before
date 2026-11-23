// Copied unchanged from the original oControl/Step_1.gml (lines 253-254). The rest of that
// event (input, music, editor, fullscreen) is not imported yet (plan section 7, P1).
tick = tick_n+(get_timer()/1000000);
tick360 = ((tick360+1) mod 360);

// Copied unchanged from the original oControl/Step_1.gml (lines 160-161): the listener of the positional
// sounds (play_sound_pos) sits at the centre of the view. Without it the default orientation pans
// every sound to the left channel.
audio_listener_position(camera_get_view_x(cam)+(camera_get_view_width(cam)/2),camera_get_view_y(cam)+(camera_get_view_height(cam)/2),0)
audio_listener_orientation(0,0,1000,0,-1,0);

// Copied from the original oControl/Step_1.gml (lines 165-223): music and ambience channels
// (MUSIC[0] = bgm, MUSIC[1] = ambience fx, MUSIC[2] = ambience bg such as sndAmb_windbirds).
// Guarded against -1 handles for GameMaker LTS 2026 safety.
if (PLAYING_MUSIC[0] == -1 || MUSIC_ID[0] != MUSIC[0]) {
    if (PLAYING_MUSIC[0] != -1) audio_sound_gain(PLAYING_MUSIC[0], 0, 3000);
    if (MUSIC[0] != -1) {
        PLAYING_MUSIC[0] = audio_play_sound(MUSIC[0], 1, 1);
        audio_sound_pitch(PLAYING_MUSIC[0], 1);
        audio_sound_gain(PLAYING_MUSIC[0], 0, 0);
        audio_sound_gain(PLAYING_MUSIC[0], (1.0 / 4.5) * VOLUME, 3000);
    } else {
        PLAYING_MUSIC[0] = -1;
    }
    music_volume = VOLUME;
    MUSIC_ID[0] = MUSIC[0];
}

if (PLAYING_MUSIC[1] == -1 || MUSIC_ID[1] != MUSIC[1]) {
    if (PLAYING_MUSIC[1] != -1) audio_sound_gain(PLAYING_MUSIC[1], 0, 3000);
    if (MUSIC[1] != -1) {
        PLAYING_MUSIC[1] = audio_play_sound(MUSIC[1], 1, 1);
        audio_sound_pitch(PLAYING_MUSIC[1], 1);
        audio_sound_gain(PLAYING_MUSIC[1], 0, 0);
        audio_sound_gain(PLAYING_MUSIC[1], 1, 3000);
    } else {
        PLAYING_MUSIC[1] = -1;
    }
    MUSIC_ID[1] = MUSIC[1];
}

if (PLAYING_MUSIC[2] == -1 || MUSIC_ID[2] != MUSIC[2]) {
    if (PLAYING_MUSIC[2] != -1) audio_sound_gain(PLAYING_MUSIC[2], 0, 3000);
    if (MUSIC[2] != -1) {
        PLAYING_MUSIC[2] = audio_play_sound(MUSIC[2], 1, 1);
        audio_sound_pitch(PLAYING_MUSIC[2], 1);
        audio_sound_gain(PLAYING_MUSIC[2], 0, 0);
        audio_sound_gain(PLAYING_MUSIC[2], 1, 3000);
    } else {
        PLAYING_MUSIC[2] = -1;
    }
    MUSIC_ID[2] = MUSIC[2];
}

// PROVISIONAL, debug only (plan section 7): one timestamped line per key press, so an F5 report shows
// what was pressed and when. The keys come from set_controls; nothing here changes the game.
if (global.LOG_LEVEL >= 1) {
    if (keyboard_check_pressed(global.kkl)) log_note("input: left");
    if (keyboard_check_pressed(global.kkr)) log_note("input: right");
    if (keyboard_check_pressed(global.kku)) log_note("input: up");
    if (keyboard_check_pressed(global.kkd)) log_note("input: down");
    if (keyboard_check_pressed(global.kkj)) log_note("input: jump");
    if (keyboard_check_pressed(global.key_aenox)) log_note("input: aenox");
    if (keyboard_check_pressed(global.key_telarod)) log_note("input: telarod");
    if (keyboard_check_pressed(global.key_eo)) log_note("input: eo");
    if (keyboard_check_pressed(global.key_inv)) log_note("input: inventory");
}
