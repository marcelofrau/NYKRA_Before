// Reconstructed from gml_Object_oVIEW_CONSTRICT_Create_0 (NativeAnalysis/decompiled/small_lifted): a line
// that stops the camera from crossing it. It starts working (go = 1) a little after it is created.
go = 0;
depth = -10000;
alarm[0] = ceil(mean(real(fps) / 10, 6)) + 3;
