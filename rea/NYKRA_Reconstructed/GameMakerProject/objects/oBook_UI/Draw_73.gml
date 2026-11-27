// TEMPORARY viewer of step 3 (plan 0.7 item 5b), NOT in the original: the real oBook_UI/Draw_73 (4.414 lines) is step 5c
// and replaces this file. While B is held it shows the page frames that open_book built, two at a time (left = odd frame,
// right = even frame), changing spread every 2.5 s, so the pages can be compared with the original book.
if (keyboard_check(ord("B")) && sprite_exists(sPages)) {
    var _n = sprite_get_number(sPages);
    var _s = (current_time div 2500) mod (_n div 2 + 1);
    var _x = camera_get_view_x(cam) + (camera_get_view_width(cam) - page_w * 2) / 2;
    var _y = camera_get_view_y(cam) + (camera_get_view_height(cam) - page_h) / 2;
    draw_set_colour(c_black);
    draw_rectangle(_x - 4, _y - 4, _x + page_w * 2 + 4, _y + page_h + 4, false);
    draw_set_colour(c_white);
    if (_s * 2 - 1 >= 0) draw_sprite(sPages, _s * 2 - 1, _x, _y);
    if (_s * 2 < _n) draw_sprite(sPages, _s * 2, _x + page_w, _y);
}
