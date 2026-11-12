// Function: gml_Script_save_GENERAL @ 0x1401c2a30

undefined8 * gml_Script_save_GENERAL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 local_150 [12];
  uint local_144;
  undefined1 local_140 [12];
  uint local_134;
  undefined8 *local_130;
  double local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  double local_78;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_e8 = "gml_Script_save_GENERAL";
  local_e0 = 0;
  local_f0 = DAT_142182d78;
  DAT_142182d78 = &local_f0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_6c = 0xffffff;
  local_78 = 0.0;
  DAT_142182d90 = param_1;
  local_130 = param_3;
  uVar1 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18859);
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a);
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18862);
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8);
  local_60 = (ulonglong)(uint)local_60;
  local_68 = 0;
  local_a0 = (ulonglong)(uint)local_a0;
  local_a8 = 0;
  *(undefined4 *)((longlong)local_130 + 0xc) = 5;
  *local_130 = 0;
  FUN_1416ab750(DAT_1420dd8a0);
  local_e0 = 2;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  FUN_140002730(&local_128,&DAT_1420b3a80);
  local_d8 = &local_128;
  FUN_140002730(&local_118,&DAT_1420b3a90);
  local_d0 = &local_118;
  FUN_140002730(&local_108,&DAT_1420b3a90);
  local_c8 = &local_108;
  uVar5 = FUN_1416ab210(param_1,param_2,&local_68,3,DAT_1420da220,&local_d8);
  FUN_1400019a0(&local_78,uVar5);
  local_e0 = 3;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  local_d8 = &local_78;
  FUN_140002730(&local_118,&DAT_14217f920);
  local_d0 = &local_118;
  FUN_140002730(&local_108,&DAT_14217f920);
  local_c8 = &local_108;
  FUN_1416ab210(param_1,param_2,&local_68,3,DAT_1420da650,&local_d8);
  local_e0 = 5;
  dVar6 = local_78;
  if ((local_6c & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_78);
  }
  FUN_1416fbbe0((longlong)dVar6,0xb,uVar1);
  local_e0 = 6;
  dVar6 = local_78;
  if ((local_6c & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_78);
  }
  FUN_1416fbbe0((longlong)dVar6,0xb,uVar2);
  local_e0 = 7;
  dVar6 = local_78;
  if ((local_6c & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_78);
  }
  FUN_1416fbbe0((longlong)dVar6,5,uVar3);
  local_e0 = 9;
  local_4c = 0;
  local_58 = 0x3ff0000000000000;
  dVar6 = local_78;
  if ((local_6c & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_78);
  }
  FUN_1416fbbe0((longlong)dVar6,1,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_e0 = 10;
  local_4c = 0;
  local_58 = 0;
  dVar6 = local_78;
  if ((local_6c & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_78);
  }
  FUN_1416fbbe0((longlong)dVar6,1,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_e0 = 0xc;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0x500000000;
  FUN_1416ce870(param_1,DAT_1420d59d8,0x80000000,&local_b8);
  FUN_1400019a0(&local_128,uVar4);
  local_d0 = &local_78;
  local_d8 = &local_128;
  FUN_1416ac010(local_150,s__GENERAL_1420b3a75);
  uVar1 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da2b0,&local_d8);
  FUN_1416ac010(local_140,s_PROFILES_HEPTAVERSE__1420b3a60);
  local_7c = local_ac;
  local_80 = local_b0;
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_88 = local_b8;
  }
  else {
    FUN_1401c3a10(&local_88,&local_b8);
  }
  FUN_140003ca0(&local_88,local_140);
  local_8c = local_7c;
  local_90 = local_80;
  if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
    local_98 = local_88;
  }
  else {
    FUN_1401c3a10(&local_98,&local_88);
  }
  FUN_140003ca0(&local_98,uVar1);
  local_4c = local_8c;
  local_50 = local_90;
  if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
    local_58 = local_98;
  }
  else {
    FUN_1401c3a10(&local_58,&local_98);
  }
  FUN_140003ca0(&local_58,local_150);
  FUN_1400019a0(&local_108,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_150);
  }
  local_c8 = &local_108;
  FUN_1416ab210(param_1,param_2,&local_68,2,DAT_1420da360,&local_d0);
  local_e0 = 0xd;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  local_d8 = &local_78;
  FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da370,&local_d8);
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  DAT_142182d78 = (undefined8 *)local_f0;
  return local_130;
}


