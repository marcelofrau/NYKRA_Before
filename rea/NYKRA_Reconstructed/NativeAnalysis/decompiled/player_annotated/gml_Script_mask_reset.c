// Function: gml_Script_mask_reset @ 0x1401036b0

undefined8 * gml_Script_mask_reset(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_80 = "gml_Script_mask_reset";
  local_78 = 0;
  local_88 = DAT_142182d78;
  DAT_142182d78 = &local_88;
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = (ulonglong)(uint)local_48;
  local_50 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd110/*gml_Script_mask_reset*/);
  local_78 = 2;
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  local_50 = 0;
  local_48 = 0x500000000;
  FUN_140002730(&local_68,&DAT_1420b1020);
  local_70 = &local_68;
  FUN_1416ab210(param_1,param_2,&local_50,1,DAT_1420da7b0/*gpu_set_alphatestenable*/,&local_70);
  local_78 = 3;
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  local_50 = 0;
  local_48 = 0x500000000;
  FUN_140002730(&local_68,&DAT_14217f458);
  local_70 = &local_68;
  FUN_1416ab210(param_1,param_2,&local_50,1,DAT_1420da090/*gpu_set_blendmode*/,&local_70);
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  DAT_142182d78 = (undefined8 *)local_88;
  return param_3;
}


