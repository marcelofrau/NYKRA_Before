// Reconstructed from gml_Object_oGrass3_Create_0 (NativeAnalysis/decompiled/lote1_lifted).
// Unlike oGrass it does not set image_speed. Parent Create first, as in oGrass (plan section 7, P18).
event_inherited();
image_index = choose(0, 1, 2);  // the first value is a runtime-initialised constant, assumed 0 (P12)
alarm[0] = 1;
