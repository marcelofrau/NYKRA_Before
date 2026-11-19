// Copied from the original oControl/Draw_0.gml (lines 2-8). The rest of that event (dialogue
// vignette) is not imported yet (plan section 7, P1). CMX and CMY are the camera centre that
// the background leaves use for their parallax.
CX = camera_get_view_x(cam);
CY = camera_get_view_y(cam);
CW = camera_get_view_width(cam);
CH = camera_get_view_height(cam);
CMX = CX+(CW/2);
CMY = CY+(CH/2);
depth = -1000;
