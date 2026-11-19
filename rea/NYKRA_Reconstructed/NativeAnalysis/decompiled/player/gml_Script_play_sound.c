// Function: gml_Script_play_sound @ 0x1400d2410

undefined8 *
gml_Script_play_sound
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = "gml_Script_play_sound";
  local_70 = 0;
  local_80 = DAT_142182d78;
  DAT_142182d78 = &local_80;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_120 = param_3;
  FUN_1416ab750(DAT_1420dcd50);
  local_70 = 8;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_b8,puVar2);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_138 = &local_b8;
  FUN_1400019a0(&local_a8,puVar2);
  if (param_4 < 3) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  local_130 = &local_a8;
  FUN_1400019a0(&local_98,puVar2);
  local_128 = &local_98;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da690,&local_138);
  FUN_1400019a0(&local_68,uVar1);
  local_70 = 9;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 4) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  local_168 = &local_68;
  FUN_1400019a0(&local_108,puVar2);
  local_160 = &local_108;
  FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da6a0,&local_168);
  local_70 = 10;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  local_168 = &local_68;
  FUN_140002730(&local_108,&DAT_14217f3e0);
  local_160 = &local_108;
  FUN_140002730(&local_f8,&DAT_14217f3e0);
  local_158 = &local_f8;
  FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da6b0,&local_168);
  local_70 = 0xb;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 5) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  local_168 = &local_68;
  FUN_1400019a0(&local_108,puVar2);
  if (param_4 < 6) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[5];
  }
  local_160 = &local_108;
  FUN_1400019a0(&local_f8,puVar2);
  local_158 = &local_f8;
  FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da6b0,&local_168);
  local_70 = 0xc;
  FUN_1400019a0(local_120,&local_68);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
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
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  DAT_142182d78 = (undefined8 *)local_80;
  return local_120;
}


