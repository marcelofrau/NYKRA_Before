// Reconstructed from gml_Object_oBook_Alarm_0 @ 0x1414c6150 (NativeAnalysis/decompiled/rmmal1_sun_annotated), plan 0.7 item 5a.
// open_book(book_n, is_inv): with is_inv == 1 the UI opens at once and book_id = -4; otherwise book_id = this instance's id
// (the UI is built closed and waits for this book, see gml_Script_open_book). open_book is a loud stub until 5b/5c.
// shortcut: the second argument is the .bss literal DAT_142182be8, not read from the exe; 0 is the only value that fits
// the script (anything but 1 keeps the book closed), upgrade when 5b reads the .bss initialiser (plan section 7, P42).
open_book(book_text, 0);
