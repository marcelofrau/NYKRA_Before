// Draw End at depth -1011 covers the screen while map_load swaps the level.
// 500 ms from opaque to clear; int/int division in GML would make this step-free.
var _progress = (current_time - fade_start) / 500.0;
var _alpha = clamp(1.0 - _progress, 0.0, 1.0);
draw_rectangle_view(colour, _alpha);
show_debug_message("FADE draw id=" + string(id) + " alpha=" + string(_alpha) + " view=" + string(CX) + "," + string(CY) + " size=" + string(CW) + "," + string(CH));
if (_alpha <= 0) instance_destroy();
