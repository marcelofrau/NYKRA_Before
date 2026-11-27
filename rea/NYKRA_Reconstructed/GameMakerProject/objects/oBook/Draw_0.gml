// Reconstructed from gml_Object_oBook_Draw_0 @ 0x1414c9420 (NativeAnalysis/decompiled/rmmal1_sun_annotated/lifted), plan 0.7 item 5a.
// Same state machine as parNote/Draw_0 (author's original), minus the sounds and the "is there an oPlayer" guard,
// plus the pick-up: in state 1 the book goes to the front of oPlayer.books and this instance is destroyed.
if on==0 {
	if player_interact(x,y,17,0,0) {
		if player_interact(x,y,17,1,1) {
			on = 1;
			anim2 = 1;
		}
		anim = reach_tween(anim,1,7);
	}
	else
	{
		anim = 0;
	};
	anim1 = max((anim1*0.5)-0.001,0);
}
else
if on==1 {
	ds_list_insert(oPlayer.books,0,book_text);
	log_note("book: picked up book " + string(book_text) + " at (" + string(x) + "," + string(y) + "), inventory now has " + string(ds_list_size(oPlayer.books)) + " books");   // LOG (not in the original)
	instance_destroy();
	oPlayer.control = 0;
	oPlayer.UI_OPEN = 1;
	anim1 = reach_tween(anim1,2,10.5);
	if anim1>1.9 && player_interact(x,y,32,1,0) {
		on = 2;
	};
}
else
if on==2 {
	oPlayer.control = 0;
	oPlayer.UI_OPEN = 1;
	anim1 = reach_tween(anim1,0,5.25);
	if anim1<0.1 on = 0;
};

draw_sprite(sBook,book,x,y);
if anim2==0 {
	gpu_set_blendmode(bm_add);
	draw_sprite_ext(sprite_index,book,x,y,1,1,0,c_ink,sqr(0.5+lengthdir_x(0.5,(tick*300)+sqr(xstart)+sqr(ystart)+x+y)));
	gpu_set_blendmode(bm_normal);
}
