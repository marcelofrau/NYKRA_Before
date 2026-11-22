// The original event is kept registered. Fade progress now lives in Draw_73,
// so this alarm must not destroy the cover before the alpha ramp finishes.
show_debug_message("FADE alarm id=" + string(id) + " (no-op)");
