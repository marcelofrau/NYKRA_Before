// Reconstructed from gml_Script_interact_arrow (NativeAnalysis/decompiled/player_lifted2).
// The bobbing arrow above an interactable (runs in the interactable): drawn additively while the
// player has control and is within _radius. The arrow is sprite 210 of the original, sArrow.
function interact_arrow(_x, _y, _radius, _colour) {
    if (oPlayer.control != 1) return;
    if (oPlayer.UI_OPEN != 0) return;
    if (point_distance(_x, _y, oPlayer.x, oPlayer.y) >= _radius) return;
    var _blend = gpu_get_blendmode();
    gpu_set_blendmode(bm_add);
    draw_sprite_ext(sArrow, 0, _x, bbox_top - 6 + lengthdir_y(0.5, tick * 777), 1, 1, -45, _colour, 1);
    gpu_set_blendmode(_blend);
}
