// Reconstructed from gml_Object_parDoor_Flat_Draw_73 (Draw End; NativeAnalysis/decompiled/door_lifted;
// plan P31/P35, several constants were lost: marked). Near the door, with control and no UI, it shows the
// bobbing arrow (or LOCKED when locked); while the player walks in (in == 1) the screen fades to black.
// Arrival fade-in is drawn by oFade_in at depth 1000, above this door's depth-18 overlay.
if (instance_number(oPlayer) > 0) {
    if (oPlayer.control == 1) {
        if (point_distance(x, y - 8, oPlayer.x, oPlayer.y) < 15) {
            if (open == 0 || (open == 1 && anim + 0.1 >= 1)) {
                if (oPlayer.UI_OPEN == 0 && playerhascontrol()) {
                    var _blend = gpu_get_blendmode();
                    gpu_set_blendmode(bm_add);
                    if (locked == 1) {
                        draw_set_halign(fa_center);   // P35: halign/valign/colour/alpha of the original are lost
                        draw_set_valign(fa_top);
                        draw_set_colour(c_white);
                        draw_set_alpha(1);
                        draw_text(x, bbox_bottom + 9.5, "LOCKED");
                    } else {
                        // the original draws the arrow twice (the second with the same 0.5 amplitude)
                        repeat (2) {
                            draw_sprite_ext(sArrow, 0, x, bbox_bottom + 9.5 + lengthdir_y(0.5, tick * 700), 1, 1, -45, arrow_colour, 1);
                        }
                    }
                    gpu_set_blendmode(_blend);
                }
            }
        }
    }
}
if (in == 1 && fade < 1) {
    draw_rectangle_view(c_black, 1 - fade);
    oPlayer.control = 0;
}
