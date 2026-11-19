// Reconstructed from gml_Object_oGrass_Create_0 (NativeAnalysis/decompiled/lote1_lifted).
// The decompilation shows no call to the parent's Create, yet the inherited Draw reads shake and col1
// that only parGrass Create sets, so the parent's Create is run first (plan section 7, P18: inference).
event_inherited();
image_index = choose(0, 1, 2);  // the first value is a runtime-initialised constant, assumed 0 (P12)
image_speed = 0;
alarm[0] = 1;
