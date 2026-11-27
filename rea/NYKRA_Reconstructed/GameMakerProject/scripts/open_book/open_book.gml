// Reconstructed from gml_Script_open_book @ 0x140112250 (NativeAnalysis/decompiled/player_annotated, lifted copy in
// player_lifted2), plan 0.7 item 5b. Source: the YYC (the author's original GML is not in the repo root).
// Steps 1-4 = lines 143-2303 of the .c, the whole script: destroy the old UI, create the new one, read the book from the
// language ini, paginate it, draw every page into a frame of sPages and set up the page piles.
// The reader that uses all this (oBook_UI/Draw_73, Alarm_0) is step 5c. Shortcuts of this script: P44.
// The original's `665` is the object index of oBook_UI in the shipped game; here the object is named.
// is_inv == 1 opens the UI at once from the inventory (book_id = -4); otherwise it belongs to the calling book.
function open_book(_book_n = 0, _is_inv = 0) {
    if (instance_number(oBook_UI) > 0) {
        with (oBook_UI) {
            instance_destroy();
        }
    }
    with (instance_create_one(CMX, CMY, -100, oBook_UI)) {
        is_inv = _is_inv;
        if (_is_inv == 1) {
            book_id = -4;
            open = 1;
        } else {
            book_id = other.id;
        }
        book_n = _book_n;
        ini_language();
        // book[n,2] is the text, [n,1] the title, [n,0] the type (book[n,3] is the "found ..." description)
        var _key = "book[" + string(book_n);
        txt = ini_read_string("BOOKS", _key + ",2]", "");
        name = ini_read_string("BOOKS", _key + ",1]", "");
        type = round(real_string(ini_read_string("BOOKS", _key + ",0]", "")));
        ini_close();

        // ---- STEP 2 (.c 616-1425): line breaking and pagination of txt into page_txt[] ----
        // Strings read from the exe: " " DAT_1420b32c8, "|" b32ca, "n" b32cc, "p" b32ce, "\n" b32d0, "\x07" b32d2.
        // Escapes in txt: "|n" new line, "|p" new page, "|<digit>" image page (stored as chr(7) + digit).
        var _p = 0;         // current page (local_178)
        var _word = "";     // local_1d8
        var _c0 = "";       // character before txtpntr (local_320)
        var _c1 = "";       // character at txtpntr (local_2f0)
        var _ch = "";       // local_2b8
        var _j = 0;         // local_130
        var _k = 0;         // local_2a8: characters taken by the escapes of the current word
        while (txtpntr <= string_length(txt)) {
            _c1 = string_char_at(txt, txtpntr);
            _c0 = string_char_at(txt, txtpntr - 1);
            // a word starts at the very first character, after a space, or after an escape code
            var _starts_word = false;
            if (txtpntr == 1) {
                _starts_word = true;
            } else if (_c0 == " ") {
                _starts_word = (_c1 != " ");
            } else if (string_char_at(txt, txtpntr - 2) == "|") {
                _starts_word = (_c1 != " ");
            }
            if (_starts_word) {
                _word = _c1;
                for (_j = 1; _j < 100; _j++) {
                    _ch = string_char_at(txt, txtpntr + _j);
                    if (_ch == "|") {
                        _k = 0;
                        repeat (100) {
                            if (string_char_at(txt, txtpntr + _j + _k) != "|") break;
                            switch (string_char_at(txt, txtpntr + _j + 1 + _k)) {
                                case "n":
                                    page_txt[_p] += _word + "\n";
                                    if (string_height(page_txt[_p]) >= page_h - buffer * 2) {
                                        _p += 1;
                                        page_txt[_p] = "";
                                    }
                                    break;
                                case "p":
                                    page_txt[_p] += _word;
                                    _p += 1;
                                    page_txt[_p] = "";
                                    break;
                                default:
                                    // image page: the text of the page being filled is discarded, as in the YYC
                                    page_txt[_p] = "";
                                    page_txt[_p] = chr(7) + string(string_char_at(txt, txtpntr + _j + 1 + _k));
                                    if (txtpntr + 2 <= string_length(txt)) {
                                        _p += 1;
                                        page_txt[_p] = "";
                                    }
                                    break;
                            }
                            _k += 2;
                            _word = "";
                        }
                        txtpntr += (_j - 1) + _k;
                        break;
                    }
                    _word += _ch;
                    if (string_width(page_txt[_p] + _word) > page_w - buffer * 2) {
                        // the word does not fit: break the line, start a page when it is full, and read the word again
                        page_txt[_p] += "\n";
                        if (string_height(page_txt[_p]) >= page_h - buffer * 2) {
                            _p += 1;
                            page_txt[_p] = "";
                        }
                        txtpntr -= 1;
                        break;
                    }
                    if (_ch == " " || txtpntr + _j >= string_length(txt)) {
                        // end of the word (the space is part of it) or of the text
                        page_txt[_p] += _word;
                        txtpntr += _j - 1;
                        break;
                    }
                }
                // a word of 100 characters or more is dropped by the original: the for ends with _j = 100
            }
            txtpntr += 1;
        }
        // shortcut: the original stalls forever on a word wider than a whole line (txtpntr -= 1 then the same word again);
        // ported as is, no guard (plan section 7, P43). The string_char_at(txt, 0) read at txtpntr = 2 follows the YYC.

        // ---- STEP 3 (.c 1426-2178): every page is drawn on a surface and becomes a frame of sPages ----
        // Constants read from the exe: DAT_141983ddc = -1.0, DAT_1420b32f8 = 1.0, DAT_1420b3308 = 2.0,
        // DAT_141983de0 = {-1.0, 1.0}; 0xbf800000 / 0x3f800000 are the floats -1 / 1. 0x101 = sBook_page, 0x105 = sBook_pageimages.
        // shortcut: DAT_14217f488 sits in the exe's .bss (not readable there); every use needs 0 (bm_normal, clear alpha,
        // x, y, removeback, smooth), so 0 is used (plan section 7, P44).
        draw_set_halign(fa_left);
        draw_set_valign(fa_top);
        gpu_set_blendenable(true);
        gpu_set_blendmode(bm_normal);
        // The YYC draws page 0 and then loops j = 1.._p; page 0 is the same drawing with j = 0, so one loop does both.
        // It first makes the page count even: fmod(_p, 2) with the divisor 2.0 held in xmm8 (loaded in the prologue,
        // DAT_141982c40 = 2.0) and a blank page when _p is even (_p is the last index, the count is _p + 1).
        // The original runs that padding after page 0; the padding does not touch page 0, so the order is not observable.
        if (_p > 0) {
            if (abs(_p mod 2) <= 0.00001) {
                _p += 1;
                page_txt[_p] = "";
            }
        }
        var _surf = -1;
        for (_j = 0; _j <= _p; _j++) {
            // the original creates a surface per page and frees only the last one (step 4): a leak, ported as is
            _surf = surface_create(page_w, page_h);
            surface_set_target(_surf);
            draw_clear_alpha(0, 0);
            draw_set_colour(c_white);
            draw_rectangle(-1, -1, page_w + 1, page_h + 1, false);
            // odd frames are the left-hand pages: the page sprite is mirrored and drawn from x = page_w
            var _odd = ((_j + 1) mod 2);
            draw_sprite_ext(sBook_page, 0, (abs(_odd) <= 0.00001) ? page_w : 0, 0, pscale * ((abs(_odd) > 0.00001) ? 1 : -1), pscale, 0, c_white, 1);
            draw_set_colour(ink_col);
            draw_set_alpha(1);
            draw_set_font(FONT_MAIN);
            if (string_char_at(page_txt[_j], 1) == chr(7)) {
                // image page: chr(7) + the frame number of sBook_pageimages
                draw_sprite_ext(sBook_pageimages, round(real_string(string_char_at(page_txt[_j], 2))), 0, 0, 1, 1, 0, c_white, 1);
            } else {
                draw_text(buffer, buffer - 2, page_txt[_j]);
            }
            draw_set_alpha(1);
            draw_set_colour(c_white);
            surface_reset_target();
            if (_j == 0) {
                sPages = sprite_create_from_surface(_surf, 0, 0, page_w, page_h, false, false, 0, 0);
            } else {
                sprite_add_from_surface(sPages, _surf, 0, 0, page_w, page_h, false, false);
            }
        }
        log_note("open_book: book " + string(book_n) + " '" + name + "' type " + string(type) + ", " + string(_p + 1) +
            " pages, " + string(sprite_get_number(sPages)) + " frames in sPages");

        // ---- STEP 4 (.c 2179-2303): the page piles ----
        // Every page goes to pagepile_right, its animation is reset and its text is dropped (the drawn frames are
        // all the reader needs). pileR counts the pages on the right pile, pileL the left one; the animations are 0.
        pages = _p + 1;
        for (_j = 0; _j < pages; _j++) {
            ds_list_add(pagepile_right, _j);
            page_anim[_j] = 0;
            page_txt[_j] = "";
        }
        pileR = pages;
        pileL = 0;
        pileRxA = 0;
        pileLxA = 0;
        // shortcut: the original frees only the surface of the last page (the others leak); ported as is (plan P44).
        surface_free(_surf);
    }
}
