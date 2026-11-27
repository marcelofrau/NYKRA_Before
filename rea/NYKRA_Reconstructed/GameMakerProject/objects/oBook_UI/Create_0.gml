// Reconstructed from gml_Object_oBook_UI_Create_0 (NativeAnalysis/decompiled/rmmal1_sun_annotated, lifted copy in
// rmmal1_sun_lifted), plan 0.7 item 5b. Source: the YYC (the author's original GML for oBook_UI is not in the repo root).
// The order of the assignments is the compiled one. Values are the .c literals: 0xbff0... = -1, 0xc010... = -4,
// FUN_1416b86b0(0x49, 0x41, 0x4d) = make_colour_rgb(73, 65, 77).
is_inv = 0;
draw_set_font(FONT_MAIN);
book_id = -4;
open = 0;
txt = "";
anim1 = 1;
anim2 = 0;
anim3 = 1;
anim4 = 0;
anim5 = 0;
sPages = -1;
name = "";
type = 0;
pagepile_left = ds_list_create();
pagepile_right = ds_list_create();
pscale = 2;
page_click = 0;
page_w = floor(78 * pscale);
page_h = floor(96 * pscale);
page_res = 8;
turn_an = -2;
page_sel = -2;
ink_col = make_colour_rgb(73, 65, 77);
page_min = 0;
page_max = 0;
buffer = 8;
// compat: the original wrote `page_txt = 0; page_txt[0] = "";`, which GameMaker 2.3+ rejects
page_txt = [];
page_txt[0] = "";
frontcov_an = 0;
backcov_an = 0;
txtpntr = 1;
