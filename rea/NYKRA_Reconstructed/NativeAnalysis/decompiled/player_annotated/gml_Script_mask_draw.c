// Function: gml_Script_mask_draw @ 0x140103090

undefined8 * gml_Script_mask_draw(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = "gml_Script_mask_draw";
  local_a0 = 0;
  local_b0 = DAT_142182d78;
  DAT_142182d78 = &local_b0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd0f0/*gml_Script_mask_draw*/);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_140002730(&local_98,&DAT_1420b1010);
  local_d8 = &local_98;
  FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da030/*gpu_set_blendenable*/,&local_d8);
  local_a0 = 3;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_140002730(&local_98,&DAT_1420b1010);
  local_d8 = &local_98;
  FUN_140002730(&local_88,&DAT_1420b1010);
  local_d0 = &local_88;
  FUN_140002730(&local_78,&DAT_1420b1010);
  local_c8 = &local_78;
  FUN_140002730(&local_68,&DAT_1420b1010);
  local_c0 = &local_68;
  FUN_1416ab210(param_1,param_2,&local_58,4,DAT_1420da790/*gpu_set_colorwriteenable*/,&local_d8);
  local_a0 = 4;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_140002730(&local_98,&DAT_1420b31d0);
  local_d8 = &local_98;
  FUN_140002730(&local_88,&DAT_1420b31e0);
  local_d0 = &local_88;
  FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da7a0/*gpu_set_blendmode_ext*/,&local_d8);
  local_a0 = 5;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_140002730(&local_98,&DAT_1420b1010);
  local_d8 = &local_98;
  FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da7b0/*gpu_set_alphatestenable*/,&local_d8);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  DAT_142182d78 = (undefined8 *)local_b0;
  return param_3;
}


