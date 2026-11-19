// Function: gml_Object_parLeaves_Draw_0 @ 0x140365fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parLeaves_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  undefined8 in_XMM1_Qa;
  undefined4 uVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  uint local_2d4;
  undefined8 local_2d0;
  uint local_2c4;
  undefined8 local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  uint local_2a4;
  undefined8 local_2a0;
  uint local_294;
  undefined8 local_290;
  uint local_284;
  undefined8 local_280;
  uint local_274;
  undefined8 local_270;
  uint local_264;
  undefined8 local_260;
  uint local_254;
  undefined8 local_250;
  uint local_244;
  undefined8 local_240;
  uint local_234;
  undefined8 local_230;
  uint local_224;
  undefined8 local_220;
  char *local_218;
  undefined4 local_210;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
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
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [12];
  uint local_a4;
  double local_a0;
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
  
  uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_218 = "gml_Object_parLeaves_Draw_0";
  local_210 = 0;
  local_220 = DAT_142182d78;
  DAT_142182d78 = &local_220;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  DAT_142182d90 = param_1;
  local_d8 = param_2;
  uVar1 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  local_c4 = 0xffffff;
  local_d0 = 0;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c9/*var:cam*/);
  local_254 = 0xffffff;
  local_260 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
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
  local_b8._4_4_ = 0xffffff;
  local_c0 = 0;
  local_100 = CONCAT44(0xffffff,(undefined4)local_100);
  local_108 = 0;
  local_f0 = CONCAT44(0xffffff,(undefined4)local_f0);
  local_f8 = 0;
  local_e0 = CONCAT44(0xffffff,(undefined4)local_e0);
  local_e8 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_210 = 3;
  FUN_1400019a0(&local_d0,uVar1);
  local_210 = 4;
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_c0 = 0;
  local_b8 = 0x500000000;
  FUN_1400019a0(&local_208,uVar2);
  local_338 = &local_208;
  uVar1 = FUN_1416ab210(param_1,local_d8,&local_c0,1,DAT_1420da4a0/*camera_get_view_x*/,&local_338);
  FUN_1400019a0(&local_260,uVar1);
  if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_108 = 0;
  local_100 = 0x500000000;
  FUN_1400019a0(&local_1f8,uVar2);
  local_330 = &local_1f8;
  uVar1 = FUN_1416ab210(param_1,local_d8,&local_108,1,DAT_1420da560/*camera_get_view_y*/,&local_330);
  FUN_1400019a0(&local_250,uVar1);
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  FUN_1400019a0(&local_1e8,uVar2);
  local_328 = &local_1e8;
  uVar1 = FUN_1416ab210(param_1,local_d8,&local_f8,1,DAT_1420da3b0/*camera_get_view_width*/,&local_328);
  FUN_1400019a0(&local_240,uVar1);
  if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0x500000000;
  FUN_1400019a0(&local_1d8,uVar2);
  ppuVar10 = &local_320;
  uVar9 = DAT_1420da3c0/*camera_get_view_height*/;
  local_320 = &local_1d8;
  uVar1 = FUN_1416ab210(param_1,local_d8,&local_e8,1,DAT_1420da3c0/*camera_get_view_height*/,ppuVar10);
  FUN_1400019a0(&local_230,uVar1);
  local_210 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18e45/*var:xx*/);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e48/*var:xxx*/);
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_158,uVar9,uVar11);
  local_64 = *(uint *)((longlong)puVar3 + 0xc);
  local_68 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_70 = *puVar3;
  }
  else {
    FUN_140369e70(&local_70,puVar3);
  }
  FUN_140003ca0(&local_70,&local_158);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar4,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  FUN_1416a8c00(1);
  local_210 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18e54/*var:yy*/);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e57/*var:yyy*/);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_148,uVar9,uVar11);
  local_64 = *(uint *)((longlong)puVar3 + 0xc);
  local_68 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_70 = *puVar3;
  }
  else {
    FUN_140369e70(&local_70,puVar3);
  }
  FUN_140003ca0(&local_70,&local_148);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  FUN_1416a8c00(1);
  local_210 = 8;
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_c0 = 0;
  local_b8 = 0x500000000;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_138,uVar9,uVar11);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5c78/*sprite_width*/,0x80000000,&local_128,uVar9,uVar11);
  FUN_1416cea80(param_1,DAT_1420d5c88/*sprite_height*/,0x80000000,&local_118,uVar9 & 0xffffff00,
                uVar11 & 0xffffffffffffff00);
  FUN_1400019a0(&local_208,&local_138);
  local_338 = &local_208;
  FUN_140002730(&local_1f8,&DAT_142180178);
  local_330 = &local_1f8;
  FUN_140001a50(&local_a0,&local_d0,0x3c);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_141986b8c,CONCAT44(uVar8,(float)dVar7));
  FUN_140004520(&local_80,&local_128,_DAT_141982c40);
  local_84 = *(uint *)((longlong)puVar4 + 0xc);
  local_88 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_90 = *puVar4;
  }
  else {
    FUN_140369e70(&local_90,puVar4);
  }
  FUN_140003e00(&local_90,&local_80);
  local_64 = local_84;
  local_68 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_70 = local_90;
  }
  else {
    FUN_140369e70(&local_70,&local_90);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_1e8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_328 = &local_1e8;
  FUN_140001a50(&local_a0,&local_d0,0x3c);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_1419835ec,(float)dVar7);
  FUN_140004520(&local_80,&local_118,_DAT_141982c40);
  local_84 = *(uint *)((longlong)puVar5 + 0xc);
  local_88 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_90 = *puVar5;
  }
  else {
    FUN_140369e70(&local_90,puVar5);
  }
  FUN_140003e00(&local_90,&local_80);
  local_64 = local_84;
  local_68 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_70 = local_90;
  }
  else {
    FUN_140369e70(&local_70,&local_90);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_1d8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_320 = &local_1d8;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x28);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_141986b8c,(float)dVar7);
  FUN_140004520(local_b0,&local_128,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar4 + 0xc);
  local_78 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar4;
  }
  else {
    FUN_140369e70(&local_80,puVar4);
  }
  FUN_140003ca0(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_1c8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_318 = &local_1c8;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x28);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_1419835ec,(float)dVar7);
  FUN_140004520(local_b0,&local_118,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar5 + 0xc);
  local_78 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar5;
  }
  else {
    FUN_140369e70(&local_80,puVar5);
  }
  FUN_140003e00(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_1b8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_310 = &local_1b8;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x50);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_141986b8c,(float)dVar7);
  FUN_140004520(local_b0,&local_128,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar4 + 0xc);
  local_78 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar4;
  }
  else {
    FUN_140369e70(&local_80,puVar4);
  }
  FUN_140003ca0(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_1a8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_308 = &local_1a8;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x50);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_1419835ec,(float)dVar7);
  FUN_140004520(local_b0,&local_118,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar5 + 0xc);
  local_78 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar5;
  }
  else {
    FUN_140369e70(&local_80,puVar5);
  }
  FUN_140003ca0(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_198,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_300 = &local_198;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x78);
  dVar7 = local_a0;
  if ((local_94 & 0xffffff) != 0) {
    dVar7 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_141986b8c,(float)dVar7);
  FUN_140004520(local_b0,&local_128,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar4 + 0xc);
  local_78 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar4;
  }
  else {
    FUN_140369e70(&local_80,puVar4);
  }
  FUN_140003e00(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_188,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_2f8 = &local_188;
  FUN_140001a50(&local_90,&local_d0,0x3c);
  FUN_140017bd0(&local_a0,&local_90,0x78);
  if ((local_94 & 0xffffff) != 0) {
    local_a0 = (double)FUN_1416940c0(&local_a0);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_1419835ec,(float)local_a0);
  FUN_140004520(local_b0,&local_118,_DAT_141982c40);
  local_74 = *(uint *)((longlong)puVar5 + 0xc);
  local_78 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar5;
  }
  else {
    FUN_140369e70(&local_80,puVar5);
  }
  FUN_140003ca0(&local_80,local_b0);
  local_64 = local_74;
  local_68 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_70 = local_80;
  }
  else {
    FUN_140369e70(&local_70,&local_80);
  }
  FUN_140003f30(&local_70,(double)fVar6);
  FUN_1400019a0(&local_178,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_2f0 = &local_178;
  FUN_140002730(&local_168,&DAT_1420b56d0);
  local_2e8 = &local_168;
  FUN_1416ab210(param_1,local_d8,&local_c0,0xb,DAT_1420da5d0/*draw_sprite_pos*/,&local_338);
  if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_270);
  }
  if ((0x46U >> (local_274 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_280);
  }
  if ((0x46U >> (local_284 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_290);
  }
  if ((0x46U >> (local_294 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a0);
  }
  if ((0x46U >> (local_2a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b0);
  }
  if ((0x46U >> (local_2b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c0);
  }
  if ((0x46U >> (local_2c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d0);
  }
  if ((0x46U >> (local_2d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e0);
  }
  if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
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
  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_230);
  }
  if ((0x46U >> (local_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_240);
  }
  if ((0x46U >> (local_244 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_250);
  }
  if ((0x46U >> (local_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_260);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  DAT_142182d78 = (undefined8 *)local_220;
  return;
}


