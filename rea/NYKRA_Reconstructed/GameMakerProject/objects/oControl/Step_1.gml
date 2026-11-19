// Copied unchanged from the original oControl/Step_1.gml (lines 253-254). The rest of that
// event (input, music, editor, fullscreen) is not imported yet (plan section 7, P1).
tick = tick_n+(get_timer()/1000000);
tick360 = ((tick360+1) mod 360);

// Copied unchanged from the original oControl/Step_1.gml (lines 160-161): the listener of the positional
// sounds (play_sound_pos) sits at the centre of the view. Without it the default orientation pans
// every sound to the left channel.
audio_listener_position(camera_get_view_x(cam)+(camera_get_view_width(cam)/2),camera_get_view_y(cam)+(camera_get_view_height(cam)/2),0)
audio_listener_orientation(0,0,1000,0,-1,0);
