// Reconstructed from gml_Object_oBook_UI_Draw_73 @ 0x1414a2ef0 (NativeAnalysis/decompiled/rmmal1_sun_annotated, 4.414 lines), plan 0.7 item 5c.
// Source: the YYC (the author's original GML for oBook_UI is not in the repo root). This file holds steps 1-5 so far:
//   B1 prologue (.c 1-340), B2 door (341-391), B3 page input (392-684), B4 easing (685-945), B5 darkening and player lock (946-997),
//   B6 covers below (998-1581), B7 right pile (1582-2129), B8 left pile (2130-2644), B9 covers above (2645-3304), B12 closing
//   (4039-4256), B10 pile decay and vignette (3305-3389). B11 (title, arrows) comes in the next step, in .c order. B7/B8 reuse _w, _h and _bookY from B4
//   (the .c recomputes the same values at 1582-1626).
// Constants are the bytes read from the exe: sounds 101-105 sndPaper_01..05, 113-115 sndBook_slide_01..03 (115 twice in the choose(), as in the
// exe), -2 = cover closed, 10 = priority and tween divisor, 0.1 / 0.333333333333333 / 0.666666666666667 = gains.
// Ghidra lost the first argument of every random_range (xmm0); the leftover 0xcccccccd is the low half of 0.9, as in Alarm_0.
// DAT_142182bd8 is .bss (not in the exe file). It is the loops of every play_sound here, the gain time of the page sounds, the second
// draw_rectangle_view colour and the gpu_set_blendmode argument, so the only value that fits all four is 0 (c_black, bm_normal): P45.
var _open0 = open;
var _anim4_0 = anim4;

// B2: the world book (book_id) turns the reader on when it is picked up (on == 1)
if (book_id != -4 && instance_exists(book_id) && book_id.on == 1) open = 1;

if (open) {
    open = 1;

    // B3: turn the page with kkr / kkl; page_sel moves in steps of 2 (-2 = closed cover, pages + 2 = back cover)
    var _sel0 = page_sel;
    if (page_click == 0 && anim4 == 0) {
        page_sel += (keyboard_check_pressed(global.kkr) - keyboard_check_pressed(global.kkl)) * 2;
        page_sel = clamp(page_sel, -2, pages + 2);
        if (page_sel != _sel0) {
            if (keyboard_check_pressed(global.kkr) || keyboard_check_pressed(global.kkl)) {
                page_click = 1;
                if (_sel0 != -2 && _sel0 != pages + 2 && page_sel != -2 && page_sel != pages + 2) {
                    // between two inner spreads: paper sound
                    play_sound(choose(sndPaper_01, sndPaper_02, sndPaper_03, sndPaper_04, sndPaper_05),
                        10, 0, random_range(0.9, 1.1) * 0.9, 1, 0);
                } else {
                    // one of the two positions is a cover: soft paper plus the slide of the cover
                    page_click = 0;
                    play_sound(choose(sndPaper_01, sndPaper_02, sndPaper_03, sndPaper_04, sndPaper_05),
                        10, 0, random_range(0.9, 1.1) * 0.9 * 0.5, 0.1, 0);
                    play_sound(choose(sndBook_slide_01, sndBook_slide_02, sndBook_slide_03, sndBook_slide_03),
                        10, 0, random_range(0.9, 1.1) * 0.9 * 1.5, 0.333333333333333, 1);
                }
            }
        }
    }

    // B4: easing of the piles, page size in book pixels and the book's vertical slide (anim1: 1 = hidden below the view)
    turn_an = reach_tween(turn_an, round(page_sel), 10);
    pileR = reach_tween(pileR, ds_list_size(pagepile_right), 10);
    pileL = reach_tween(pileL, ds_list_size(pagepile_left), 10);
    var _w = sprite_get_width(sPages) / pscale; // used by B6-B9
    var _h = sprite_get_height(sPages) / pscale;
    var _bookY = CMY + (_h + CH / 2) * anim1; // used by B6-B9
    anim1 = reach_tween(anim1, anim4 * ((page_anim[0] >= 0.05) ? is_inv : 1), 10);

    // B5: darken the view and lock the player while the book is up
    draw_rectangle_view(c_blackink, (1 - anim1) / 2);
    draw_rectangle_view(c_black, (1 - anim1) / 2);
    oPlayer.control = 0;
    oPlayer.UI_OPEN = 1;

    // The four cover quads (B6 and B9) have the same shape, only the frame, the anchor x, the y and the animation change:
    // corners (ax, y-h/2), (ax+lx, y-h/2+ly*1.5), (ax+lx, y+h/2+ly/1.5), (ax, y+h/2), lx = lengthdir_x(w, a*180), ly = lengthdir_y(w/4, a*180).
    var _cover_quad = function(_frame, _ax, _cy, _a) {
        var _cw = sprite_get_width(sBook_cover); // sprite 258 = DAT_1420cb998
        var _ch = sprite_get_height(sBook_cover);
        var _cx = lengthdir_x(_cw, _a * 180);
        var _cl = lengthdir_y(_cw / 4, _a * 180);
        draw_sprite_pos(sBook_cover, _frame, _ax, _cy - _ch / 2, _ax + _cx, _cy - _ch / 2 + _cl * 1.5,
            _ax + _cx, _cy + _ch / 2 + _cl / 1.5, _ax, _cy + _ch / 2, 1);
    };

    // B6 (.c 998-1581): covers below the pages, frame 1 + type * 2. The front cover shows once it has turned (>= 0.5) at the
    // height of the left pile, the back cover while it has not (< 0.5) at the height of the right pile.
    var _y = _bookY; // the .c has one local (local_130) that every block overwrites; B9 reads the last value left by B8/B7
    if (frontcov_an >= 0.5) {
        _y = _bookY + pileL;
        _cover_quad(1 + type * 2, CMX + 2, _y, frontcov_an);
    }
    if (backcov_an < 0.5) {
        _y = _bookY + pileR;
        _cover_quad(1 + type * 2, CMX - 2, _y, backcov_an);
    }

    // B7 (.c 1582-2129): right pile, last page first. Each page is a quad squeezed by its turn animation page_anim
    // (0 = flat on the right, 1 = flat on the left); only the even frames are drawn here (the front faces).
    // Past 0.5 the page changes pile. epsilon 0.00001 is DAT_1420f6b08, 1.5 and 4 are literals of the .c.
    var _i, _n, _pg, _pa, _lx, _ly;
    _i = ds_list_size(pagepile_right) - 1;
    while (_i >= 0) {
        _n = ds_list_size(pagepile_right);
        _y = 1 + _bookY + pileR * (_i / _n) + pileRxA * (1 - _i / _n);
        _pg = ds_list_find_value(pagepile_right, _i);
        _pa = page_anim[_pg];
        if (_pa < 0.5) {
            _lx = lengthdir_x(_w, _pa * 180);
            _ly = lengthdir_y(_w / 4, _pa * 180);
            if (abs(_pg mod 2) <= 0.00001) {
                draw_sprite_pos(sPages, _pg, CMX, _y - _h / 2, CMX + _lx, _y - _h / 2 + _ly * 1.5,
                    CMX + _lx, _y + _h / 2 + _ly / 1.5, CMX, _y + _h / 2, 1);
            }
            page_anim[_pg] = reach_tween(page_anim[_pg], (round(page_sel) <= _pg) ? 0 : 1, 10);
        } else {
            ds_list_delete(pagepile_right, _i);
            ds_list_insert(pagepile_left, 0, _pg);
            pileRxA += 1;
            pileLxA -= 1;
            page_click = 0;
        }
        _i -= 1;
    }

    // B8 (.c 2130-2644): left pile, the mirror of B7: odd frames, no "+ 1" in y, pages go back to the right below 0.5.
    _i = ds_list_size(pagepile_left) - 1;
    while (_i >= 0) {
        _n = ds_list_size(pagepile_left);
        _y = _bookY + pileL * (_i / _n) + pileLxA * (1 - _i / _n);
        _pg = ds_list_find_value(pagepile_left, _i);
        _pa = page_anim[_pg];
        if (_pa >= 0.5) {
            _lx = lengthdir_x(_w, _pa * 180);
            _ly = lengthdir_y(_w / 4, _pa * 180);
            if (abs((_pg + 1) mod 2) <= 0.00001) {
                draw_sprite_pos(sPages, _pg, CMX + _lx, _y - _h / 2 + _ly * 1.5, CMX, _y - _h / 2,
                    CMX, _y + _h / 2, CMX + _lx, _y + _h / 2 + _ly / 1.5, 1);
            }
            page_anim[_pg] = reach_tween(page_anim[_pg], (round(page_sel) <= _pg) ? 0 : 1, 10);
        } else {
            ds_list_delete(pagepile_left, _i);
            ds_list_insert(pagepile_right, 0, _pg);
            pileLxA += 1;
            pileRxA -= 1;
            page_click = 0;
        }
        _i -= 1;
    }

    // B9 (.c 2645-3304): covers above the pages, frame type * 2. frontcov_an / backcov_an go to 1 once page_sel is on or past
    // the front cover (>= 0) / the back cover (>= pages + 2). The front cover on top reads _y as B8/B7 left it (the .c does not
    // set it there, unlike the back cover).
    frontcov_an = reach_tween(frontcov_an, (round(page_sel) >= 0) ? 1 : 0, 10);
    backcov_an = reach_tween(backcov_an, (round(page_sel) >= pages + 2) ? 1 : 0, 10);
    if (frontcov_an < 0.5) {
        _cover_quad(type * 2, CMX - 2, _y, frontcov_an);
    }
    if (backcov_an >= 0.5) {
        _y = _bookY + pileR;
        _cover_quad(type * 2, CMX + 2, _y, backcov_an);
    }

    // B10 (.c 3305-3389): the pile offsets decay by 0.7777777 (the bytes 0x3fe8e38e0f21dbf3, not 7/9) every frame, so the +1/-1 a page
    // turn adds to pileRxA / pileLxA fades out; then the vignette sScreen_Glow (459) over the whole view, twice like B5 (c_blackink, then 0).
    pileRxA *= 0.7777777;
    pileLxA *= 0.7777777;
    draw_sprite_stretched_ext(sScreen_Glow, 0, CX, CY, CW, CH, c_blackink, (1 - anim1) / 2);
    draw_sprite_stretched_ext(sScreen_Glow, 0, CX, CY, CW, CH, c_black, (1 - anim1) / 2);

    // B11 (title, arrows, close key) is not ported yet.
    // TEMPORARY, not in the original as a block: B11 closes the book with the "down" key (.c 3813-3826, inside a branch not read yet);
    // without it the book could not be closed while B11 is missing. Remove it when B11 is ported. P46.
    if (anim4 == 0 && keyboard_check_pressed(global.kkd)) anim4 = 1;

    // B12: closing
    gpu_set_blendmode(bm_normal);
    if (is_inv) {
        if (keyboard_check_pressed(global.key_inv)) anim4 = 1;
    }
    if (anim2 == 1) anim3 *= 0.9;
    if (page_sel >= 0 || is_inv == 1) {
        if (anim2 == 0) anim2 = 1;
    }
    if (anim4 == 1 && anim1 > 0.99) {
        log_note("book: closed, book " + string(book_n) + " '" + name + "'");
        instance_destroy();
    }
    if (anim4 == 1 && !is_inv) page_sel = reach(page_sel, -2, 1);
}

// B12 end (also reached when the book is not open yet): sound of opening and the rustle of closing (Alarm_0)
if (_open0 == 0 && open == 1) {
    log_note("book: opened, book " + string(book_n) + " '" + name + "'");
    play_sound(choose(sndBook_slide_01, sndBook_slide_02, sndBook_slide_03, sndBook_slide_03),
        10, 0, random_range(0.9, 1.1) * 0.9, 0.666666666666667, 1);
}
if (anim4 != _anim4_0 && anim4 == 1) {
    log_note("book: closing");
    alarm[0] = floor(mean(fps, 60, 45));
}
