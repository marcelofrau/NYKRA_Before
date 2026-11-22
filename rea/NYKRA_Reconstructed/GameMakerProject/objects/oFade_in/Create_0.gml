// Reconstructed oFade_in. Original YYC events are menu-only (rmMM), so this cover is provisional.
// Fade progress is time-based in Draw_73 so a missed Alarm cannot skip the fade-in.
// map_load overrides colour with oControl.FADE_COLOUR right after creation.
colour = c_black;
fade_start = current_time;
fade_alpha = 1;
alarm[0] = 1;
