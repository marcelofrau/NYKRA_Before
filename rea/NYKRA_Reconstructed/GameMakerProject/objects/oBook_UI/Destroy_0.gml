// Reconstructed from gml_Object_oBook_UI_Destroy_0 (NativeAnalysis/decompiled/rmmal1_sun_annotated), plan 0.7 item 5b.
// Source: the YYC. Only the page sprite is freed; the original never destroys pagepile_left / pagepile_right.
if (sprite_exists(sPages)) {
    sprite_delete(sPages);
}
