// Reconstructed from gml_Object_oBook_Draw_73 @ 0x1414c6b00 (NativeAnalysis/decompiled/rmmal1_sun_annotated/lifted), plan 0.7 item 5a.
// Same layout as parNote/Draw_73 (author's original): interact arrow and glow while the player has control,
// and an editor-only label when oControl.mode != 3.
if playerhascontrol() {
	interact_arrow(x,y,17,$40a0ff); // 4235519
	if anim2==0 {
		gpu_set_blendmode(bm_add);
		draw_sprite_ext(sprite_index,book,x,y,1,1,0,c_ink,0.5+lengthdir_x(0.5,(tick*300)+sqr(xstart)+sqr(ystart)+x+y));
		gpu_set_blendmode(bm_normal);
	}
}

if oControl.mode!=3 {
	draw_set_colour(c_aqua);
	draw_set_alpha(1);
	// shortcut: the separator is the string literal DAT_1420cba58, not read from the exe; "\n" by analogy with
	// parNote/Draw_73 (text+"\n"+page). Only drawn outside play mode, upgrade when the exe string is read (P42).
	draw_text(x,y,string(book_text)+"\n"+string(book));
}
