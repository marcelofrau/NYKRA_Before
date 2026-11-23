// Reconstructed from gml_Object_LIGHTING_Create_0 (NativeAnalysis/decompiled/lighting_glows).
surf = surface_create(camera_get_view_width(cam) + 6, camera_get_view_height(cam) + 6);
// The original only creates the second surface inside Draw_73 (two surface_exists/surface_create
// pairs). Declare it here so the first surface_exists() call can read it.
surf_light = -1;
depth = 100;
g = 0;
alarm[0] = 2;
COLOUR = c_ink;
