// Reconstructed from gml_Object_oVIEW_CONSTRICT_Draw_0 (NativeAnalysis/decompiled/small_lifted): the guide
// line (editor modes only: Step_2 hides the object in play), red at alpha 0.5, from the object to the top
// and to the bottom of the view, then the object's own sprite.
draw_set_colour(c_red);
draw_set_alpha(0.5);
draw_line(x, y, x, camera_get_view_y(cam));
draw_line(x, y, x, camera_get_view_y(cam) + camera_get_view_height(cam));
draw_self();
