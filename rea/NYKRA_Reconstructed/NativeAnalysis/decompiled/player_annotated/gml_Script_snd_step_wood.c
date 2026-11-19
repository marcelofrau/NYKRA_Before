// Function: gml_Script_snd_step_wood @ 0x1400d3e90

undefined8 * gml_Script_snd_step_wood(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_c8 = "gml_Script_snd_step_wood";
  local_c0 = 0;
  local_d0 = DAT_142182d78;
  DAT_142182d78 = &local_d0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_28 = (ulonglong)(uint)local_28;
  local_30 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcdd0/*gml_Script_snd_step_wood*/);
  local_c0 = 2;
  if ((0x46U >> (local_28._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_30);
  }
  local_30 = 0;
  local_28 = 0x500000000;
  FUN_140002730(&local_b8,&DAT_1420b2d40);
  local_118 = &local_b8;
  FUN_140002730(&local_a8,&DAT_1420b2d50);
  local_110 = &local_a8;
  FUN_140002730(&local_98,&DAT_1420b2d60);
  local_108 = &local_98;
  FUN_140002730(&local_88,&DAT_1420b2d70);
  local_100 = &local_88;
  FUN_140002730(&local_78,&DAT_1420b2d80);
  local_f8 = &local_78;
  FUN_140002730(&local_68,&DAT_1420b2d90);
  local_f0 = &local_68;
  FUN_140002730(&local_58,&DAT_1420b2da0);
  local_e8 = &local_58;
  FUN_140002730(&local_48,&DAT_1420b2db0);
  local_e0 = &local_48;
  uVar1 = FUN_1416cd660(&local_30,8,&local_118);
  FUN_1400019a0(param_3,uVar1);
  if ((0x46U >> (local_28._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_30);
  }
  if ((0x46U >> (local_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_48);
  }
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
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
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  DAT_142182d78 = (undefined8 *)local_d0;
  return param_3;
}


