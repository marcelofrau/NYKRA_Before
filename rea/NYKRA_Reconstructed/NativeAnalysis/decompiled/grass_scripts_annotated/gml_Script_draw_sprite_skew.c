// Function: gml_Script_draw_sprite_skew @ 0x1400a7980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_sprite_skew
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  char *local_188;
  undefined4 local_180;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
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
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_188 = "gml_Script_draw_sprite_skew";
  local_180 = 0;
  local_190 = DAT_142182d78;
  DAT_142182d78 = &local_190;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
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
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcc00/*gml_Script_draw_sprite_skew*/);
  local_180 = 5;
  if (param_4 < 3) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
  }
  FUN_1400019a0(&local_a0,puVar1);
  local_180 = 6;
  if (param_4 < 4) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
  }
  FUN_140017bd0(&local_60,puVar1,8);
  FUN_1400019a0(&local_90,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_180 = 7;
  if (param_4 < 5) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
  }
  FUN_140004520(&local_60,puVar1,DAT_141983260);
  FUN_1400019a0(&local_c0,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_180 = 8;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  if (param_4 < 1) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_178,puVar1);
  if (param_4 < 2) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
  }
  local_1e8 = &local_178;
  FUN_1400019a0(&local_168,puVar1);
  local_1e0 = &local_168;
  FUN_140017bd0(&local_70,&local_a0,8);
  local_54 = local_64;
  local_58 = local_68;
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_60 = local_70;
  }
  else {
    FUN_1400a93f0(&local_60,&local_70);
  }
  FUN_140003ca0(&local_60,&local_c0);
  FUN_1400019a0(&local_158,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_1d8 = &local_158;
  FUN_140009980(&local_70,&local_c0,_DAT_141983268);
  uVar3 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    uVar3 = FUN_1416940c0(&local_70);
  }
  uVar2 = FUN_1416cd450(uVar3);
  FUN_140017bd0(&local_80,&local_90,8);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_1400a93f0(&local_60,&local_80);
  }
  FUN_140003f30(&local_60,uVar2);
  FUN_1400019a0(&local_148,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_64 = local_94;
  local_68 = local_98;
  local_1d0 = &local_148;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_70 = local_a0;
  }
  else {
    FUN_1400a93f0(&local_70,&local_a0);
  }
  FUN_140001c50(&local_70,8);
  local_54 = local_64;
  local_58 = local_68;
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_60 = local_70;
  }
  else {
    FUN_1400a93f0(&local_60,&local_70);
  }
  FUN_140003ca0(&local_60,&local_c0);
  FUN_1400019a0(&local_138,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_1c8 = &local_138;
  FUN_140009980(&local_70,&local_c0,_DAT_141983268);
  uVar3 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    uVar3 = FUN_1416940c0(&local_70);
  }
  uVar2 = FUN_1416cd450(uVar3);
  FUN_140017bd0(&local_80,&local_90,8);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_1400a93f0(&local_60,&local_80);
  }
  FUN_140003f30(&local_60,uVar2);
  FUN_1400019a0(&local_128,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_54 = local_94;
  local_58 = local_98;
  local_1c0 = &local_128;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_60 = local_a0;
  }
  else {
    FUN_1400a93f0(&local_60,&local_a0);
  }
  FUN_140001c50(&local_60,8);
  FUN_1400019a0(&local_118,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_54 = local_84;
  local_58 = local_88;
  local_1b8 = &local_118;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_60 = local_90;
  }
  else {
    FUN_1400a93f0(&local_60,&local_90);
  }
  FUN_140001c50(&local_60,8);
  FUN_1400019a0(&local_108,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_1b0 = &local_108;
  FUN_140017bd0(&local_60,&local_a0,8);
  FUN_1400019a0(&local_f8,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_54 = local_84;
  local_58 = local_88;
  local_1a8 = &local_f8;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_60 = local_90;
  }
  else {
    FUN_1400a93f0(&local_60,&local_90);
  }
  FUN_140001c50(&local_60,8);
  FUN_1400019a0(&local_e8,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_1a0 = &local_e8;
  FUN_140002730(&local_d8,&DAT_1420b29b0);
  local_198 = &local_d8;
  FUN_1416ab210(param_1,param_2,&local_b0,0xb,DAT_1420da5d0/*draw_sprite_pos*/,&local_1e8);
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
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
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  DAT_142182d78 = (undefined8 *)local_190;
  return param_3;
}


