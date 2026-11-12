// Function: gml_Script_save_CHARACTER @ 0x1401a0c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_CHARACTER(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double *pdVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_fffffffffffffc18;
  undefined8 uVar13;
  double **ppdVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double **ppdVar17;
  undefined1 local_3d0 [16];
  longlong local_3c0;
  undefined8 local_3b0;
  undefined8 *local_3a8;
  undefined1 local_3a0 [12];
  uint local_394;
  undefined8 local_390;
  uint local_384;
  undefined8 local_380;
  uint local_374;
  undefined8 local_370;
  uint local_364;
  undefined8 local_360;
  uint local_354;
  undefined8 local_350;
  uint local_344;
  undefined8 local_340;
  uint local_334;
  undefined8 local_330;
  uint local_324;
  undefined8 local_320;
  uint local_314;
  undefined8 local_310;
  uint local_304;
  undefined8 local_300;
  uint local_2f4;
  undefined8 local_2f0;
  uint local_2e4;
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
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  uint local_1f4;
  undefined8 local_1f0;
  uint local_1e4;
  double local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  double local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  double local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  longlong local_108;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  double local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  uint local_7c;
  longlong *local_78;
  undefined8 local_70;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffc18 >> 0x20);
  local_70 = 0xfffffffffffffffe;
  local_d0 = "gml_Script_save_CHARACTER";
  local_c8 = 0;
  local_d8 = DAT_142182d78;
  DAT_142182d78 = &local_d8;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_384 = 0xffffff;
  local_390 = 0;
  local_374 = 0xffffff;
  local_380 = 0;
  local_364 = 0xffffff;
  local_370 = 0;
  local_354 = 0xffffff;
  local_360 = 0;
  local_344 = 0xffffff;
  local_350 = 0;
  local_334 = 0xffffff;
  local_340 = 0;
  local_324 = 0xffffff;
  local_330 = 0;
  local_314 = 0xffffff;
  local_320 = 0;
  local_304 = 0xffffff;
  local_310 = 0;
  local_2f4 = 0xffffff;
  local_300 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0;
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
  local_254 = 0xffffff;
  local_260 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  DAT_142182d90 = param_1;
  local_90 = param_2;
  local_78 = param_1;
  uVar7 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8);
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_3a8 = param_3;
  FUN_1416ab750(DAT_1420dd820);
  local_c8 = 0xd;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  FUN_140002730(&local_158,&DAT_1420b3820);
  local_f8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b3830);
  local_f0 = &local_148;
  FUN_140002730(&local_138,&DAT_1420b3830);
  local_e8 = &local_138;
  uVar13 = CONCAT44(uVar6,DAT_1420da220);
  uVar8 = FUN_1416ab210(local_78,local_90,&local_a0,3,uVar13,&local_f8);
  uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_1400019a0(&local_88,uVar8);
  local_c8 = 0xe;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  local_f8 = &local_88;
  FUN_140002730(&local_148,&DAT_14217f618);
  local_f0 = &local_148;
  FUN_140002730(&local_138,&DAT_14217f618);
  local_e8 = &local_138;
  ppdVar17 = &local_f8;
  ppdVar14 = (double **)CONCAT44(uVar6,DAT_1420da650);
  FUN_1416ab210(local_78,local_90,&local_a0,3,ppdVar14,ppdVar17);
  local_10c = 0;
  local_118 = 64.0;
  iVar3 = FUN_1416ab810(local_3d0,&local_78,&local_90,&local_118);
  local_3b0 = uVar7;
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  dVar1 = _DAT_141981ea8;
  dVar12 = _DAT_141981e30;
  if (0 < iVar3) {
    do {
      local_c8 = 0x12;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      uVar15 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                    (ulonglong)ppdVar17 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_158,&local_188);
      local_f8 = &local_158;
      uVar8 = CONCAT44(uVar6,DAT_1420da320);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,1,uVar8,&local_f8);
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_148,uVar7);
      local_f0 = &local_148;
      ppdVar14 = &local_f0;
      uVar15 = CONCAT44(uVar6,DAT_1420da2b0);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar15,ppdVar14);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,0xb,uVar7);
      local_c8 = 0x13;
      uVar16 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59f8,0x80000000,&local_390,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,8,&local_390);
      local_c8 = 0x14;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a08,0x80000000,&local_380,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,8,&local_380);
      local_c8 = 0x15;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d58e8,0x80000000,&local_370,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,8,&local_370);
      local_c8 = 0x16;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d58f8,0x80000000,&local_360,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,8,&local_360);
      local_c8 = 0x17;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a18,0x80000000,&local_350,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_350);
      local_c8 = 0x18;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a98,0x80000000,&local_340,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_340);
      local_c8 = 0x19;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5aa8,0x80000000,&local_330,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_330);
      local_c8 = 0x1a;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ab8,0x80000000,&local_320,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_320);
      local_c8 = 0x1b;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ac8,0x80000000,&local_310,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_310);
      local_c8 = 0x1c;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ad8,0x80000000,&local_300,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_300);
      local_c8 = 0x1d;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ae8,0x80000000,&local_2f0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_2f0);
      local_c8 = 0x1e;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5af8,0x80000000,&local_2e0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_2e0);
      local_c8 = 0x1f;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b08,0x80000000,&local_2d0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,8,&local_2d0);
      local_c8 = 0x20;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b18,0x80000000,&local_2c0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,5,&local_2c0);
      local_c8 = 0x21;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b28,0x80000000,&local_2b0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,5,&local_2b0);
      local_c8 = 0x23;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,0,&local_2a0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_2a0);
      local_c8 = 0x24;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,1,&local_290,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_290);
      local_c8 = 0x25;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,2,&local_280,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_280);
      local_c8 = 0x26;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,3,&local_270,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_270);
      local_c8 = 0x27;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,4,&local_260,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_260);
      local_c8 = 0x28;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,5,&local_250,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_250);
      local_c8 = 0x29;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,6,&local_240,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_240);
      local_c8 = 0x2a;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,7,&local_230,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_230);
      local_c8 = 0x2b;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,8,&local_220,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_220);
      local_c8 = 0x2c;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,9,&local_210,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_210);
      local_c8 = 0x2d;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,10,&local_200,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_200);
      local_c8 = 0x2e;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48,0xb,&local_1f0,uVar15,uVar16);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,4,&local_1f0);
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,uVar16 & 0xffffffffffffff00)
      ;
      uVar6 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_158,&local_198);
      local_f8 = &local_158;
      if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      FUN_1416ab000(&local_148,&DAT_1420b37e0);
      local_f0 = &local_148;
      ppdVar14 = &local_f8;
      uVar15 = CONCAT44(uVar6,DAT_1420da350);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
      cVar2 = FUN_1416927d0(uVar7);
      if (cVar2 != '\0') {
        local_c8 = 0x30;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_1d0 = (**(code **)(*local_78 + 0x10))(local_78,0x18e49);
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_138,&local_188);
        local_e8 = &local_138;
        FUN_140002730(&local_128,&DAT_1420b3840);
        local_e0 = &local_128;
        ppdVar14 = &local_e8;
        uVar15 = CONCAT44(uVar6,DAT_1420da330);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 == '\0') {
          bVar10 = false;
        }
        else {
          uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
          local_10c = 0;
          local_118 = 1.0;
          bVar10 = false;
          iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
          if (iVar3 == 0) {
            uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18825);
            local_10c = 0;
            local_118 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
              local_10c = 0;
              local_118 = 0.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar7 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                local_10c = 0;
                local_118 = 0.0;
                iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
                bVar10 = iVar3 != 0;
              }
            }
          }
        }
        local_118 = (double)bVar10 * dVar1;
        local_10c = 0;
        FUN_140003e00(local_1d0,&local_118);
        if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
      }
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                    (ulonglong)ppdVar14 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_158,&local_198);
      local_f8 = &local_158;
      if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      FUN_1416ab000(&local_148,&DAT_1420b37e2);
      local_f0 = &local_148;
      ppdVar14 = &local_f8;
      uVar15 = CONCAT44(uVar6,DAT_1420da350);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
      cVar2 = FUN_1416927d0(uVar7);
      if (cVar2 != '\0') {
        local_c8 = 0x31;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_1d0 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4b);
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_138,&local_188);
        local_e8 = &local_138;
        FUN_140002730(&local_128,&DAT_1420b3840);
        local_e0 = &local_128;
        ppdVar14 = &local_e8;
        uVar15 = CONCAT44(uVar6,DAT_1420da330);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 == '\0') {
          bVar10 = false;
        }
        else {
          uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
          local_10c = 0;
          local_118 = 1.0;
          bVar10 = false;
          iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
          if (iVar3 == 0) {
            uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18825);
            local_10c = 0;
            local_118 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
              local_10c = 0;
              local_118 = 0.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar7 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                local_10c = 0;
                local_118 = 0.0;
                iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
                bVar10 = iVar3 != 0;
              }
            }
          }
        }
        local_118 = (double)bVar10 * dVar1;
        local_10c = 0;
        FUN_140003e00(local_1d0,&local_118);
        if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
      }
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                    (ulonglong)ppdVar14 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_158,&local_198);
      local_f8 = &local_158;
      if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      FUN_1416ab000(&local_148,&DAT_1420b37e5);
      local_f0 = &local_148;
      ppdVar14 = &local_f8;
      uVar15 = CONCAT44(uVar6,DAT_1420da350);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
      cVar2 = FUN_1416927d0(uVar7);
      if (cVar2 != '\0') {
        local_c8 = 0x32;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_1d0 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4d);
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_138,&local_188);
        local_e8 = &local_138;
        FUN_140002730(&local_128,&DAT_1420b3840);
        local_e0 = &local_128;
        ppdVar14 = &local_e8;
        uVar15 = CONCAT44(uVar6,DAT_1420da330);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 == '\0') {
          bVar10 = false;
        }
        else {
          uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
          local_10c = 0;
          local_118 = 1.0;
          bVar10 = false;
          iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
          if (iVar3 == 0) {
            uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18825);
            local_10c = 0;
            local_118 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
              local_10c = 0;
              local_118 = 0.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar7 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                local_10c = 0;
                local_118 = 0.0;
                iVar3 = FUN_1416d9df0(uVar7,&local_118,DAT_1420f6b08,0);
                bVar10 = iVar3 != 0;
              }
            }
          }
        }
        local_118 = (double)bVar10 * dVar1;
        local_10c = 0;
        FUN_140003e00(local_1d0,&local_118);
        if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
      }
      local_c8 = 0x34;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                    (ulonglong)ppdVar14 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_158,&local_198);
      local_f8 = &local_158;
      uVar8 = CONCAT44(uVar6,DAT_1420da660);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_f8);
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_168,uVar7);
      if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = 0.0;
      local_c8 = 0x36;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      ppdVar14 = (double **)CONCAT44(uVar6,DAT_1420da250);
      local_f8 = &local_168;
      uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,ppdVar14,&local_f8);
      dVar11 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_88);
      }
      FUN_1416fbbe0((longlong)dVar11,3,uVar7);
      local_c8 = 0x38;
      if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      local_16c = 0;
      local_178 = 0.0;
      while( true ) {
        uVar6 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        ppdVar14 = &local_f8;
        uVar15 = CONCAT44(uVar6,DAT_1420da250);
        local_f8 = &local_168;
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar15,ppdVar14);
        iVar3 = FUN_1416d9df0(&local_178,uVar7,DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_c8 = 0x39;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_148,&local_198);
        local_f0 = &local_148;
        iVar3 = FUN_141693b30(&local_178);
        if (((local_15c & 0xffffff) == 2) && (local_168 != 0.0)) {
          FUN_1416ba910();
          if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_168), iVar4 <= iVar3)) {
            uVar5 = FUN_1416ba8f0(local_168);
            FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar5);
            pdVar9 = (double *)0x0;
          }
          else {
            pdVar9 = (double *)FUN_1416ba8e0(local_168,iVar3);
          }
        }
        else {
          FUN_1416ab080("trying to index variable that is not an array");
          pdVar9 = &local_168;
        }
        FUN_1400019a0(&local_138,pdVar9);
        local_e8 = &local_138;
        uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,2,CONCAT44(uVar6,DAT_1420da670),&local_f0)
        ;
        FUN_1400019a0(&local_1a8,uVar7);
        local_c8 = 0x3b;
        iVar3 = FUN_141693b30(&local_178);
        if (((local_15c & 0xffffff) == 2) && (local_168 != 0.0)) {
          FUN_1416ba910();
          if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_168), iVar4 <= iVar3)) {
            uVar6 = FUN_1416ba8f0(local_168);
            FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar6);
            pdVar9 = (double *)0x0;
            dVar11 = local_88;
          }
          else {
            pdVar9 = (double *)FUN_1416ba8e0(local_168,iVar3);
            dVar11 = local_88;
          }
        }
        else {
          FUN_1416ab080("trying to index variable that is not an array");
          pdVar9 = &local_168;
          dVar11 = local_88;
        }
        local_88 = dVar11;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,0xb,pdVar9);
        local_c8 = 0x3d;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        local_f8 = &local_88;
        local_f0 = &local_1a8;
        ppdVar14 = &local_f8;
        gml_Script__save_type(local_78,local_90,&local_a0,2,ppdVar14);
        switch(local_16c & 0xffffff) {
        case 1:
          local_178 = (double)FUN_1416940c0(&local_178);
          local_178 = local_178 + dVar12;
          local_16c = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_178,&local_178);
          break;
        case 7:
          local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
          break;
        case 10:
          local_178 = (double)((longlong)local_178 + 1);
          break;
        case 0xd:
          local_16c = 0;
        case 0:
          local_178 = local_178 + dVar12;
        }
      }
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      uVar6 = (undefined4)(uVar15 >> 0x20);
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar7 = (**(code **)(*local_78 + 8))(local_78,0x187a0);
      FUN_1400019a0(&local_158,uVar7);
      local_f8 = &local_158;
      FUN_140002730(&local_148,&DAT_1420b3810);
      local_f0 = &local_148;
      uVar13 = CONCAT44(uVar6,DAT_1420da430);
      uVar8 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar13,&local_f8);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      cVar2 = FUN_1416927d0(uVar8);
      if (cVar2 == '\0') {
        local_c8 = 0x42;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        uVar7 = (**(code **)(*local_78 + 0x10))(local_78,0x187a0);
        uVar8 = FUN_1416ab210(local_78,local_90,&local_b0,0,CONCAT44(uVar6,DAT_1420da020),0);
        FUN_1416a8cb0(local_78);
        FUN_1400019a0(uVar7,uVar8);
        FUN_1416a8c00(1);
      }
      local_c8 = 0x43;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      local_f8 = &local_88;
      FUN_1400019a0(&local_148,uVar7);
      local_f0 = &local_148;
      ppdVar14 = &local_f8;
      gml_Script__save_ds_list(local_78,local_90,&local_a0,2,ppdVar14);
      uVar6 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18b9d);
      FUN_1400019a0(&local_158,uVar7);
      local_f8 = &local_158;
      FUN_140002730(&local_148,&DAT_1420b3810);
      local_f0 = &local_148;
      ppdVar17 = &local_f8;
      uVar13 = CONCAT44(uVar6,DAT_1420da430);
      uVar8 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar13,ppdVar17);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      cVar2 = FUN_1416927d0(uVar8);
      if (cVar2 == '\0') {
        local_c8 = 0x45;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        (**(code **)(*local_78 + 0x10))(local_78,0x187a0);
        uVar7 = (**(code **)(*local_78 + 0x10))(local_78,0x18b9d);
        ppdVar17 = (double **)0x0;
        uVar8 = FUN_1416ab210(local_78,local_90,&local_b0,0,CONCAT44(uVar6,DAT_1420da020),0);
        FUN_1416a8cb0(local_78);
        FUN_1400019a0(uVar7,uVar8);
        FUN_1416a8c00(1);
      }
      local_c8 = 0x46;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      local_f8 = &local_88;
      FUN_1400019a0(&local_148,uVar7);
      local_f0 = &local_148;
      ppdVar14 = &local_f8;
      gml_Script__save_ds_list(local_78,local_90,&local_a0,2,ppdVar14);
      cVar2 = FUN_1416abe60(local_3d0,&local_78,&local_90);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(local_3d0,&local_78,&local_90);
  cVar2 = FUN_1416f8280(local_78,local_90,0x41);
  if (cVar2 != '\0') {
    local_c8 = 0x4b;
    local_b4 = 0;
    local_c0 = 65.0;
    iVar3 = FUN_1416ab810(&local_118,&local_78,&local_90,&local_c0);
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    dVar1 = _DAT_141981ea8;
    dVar12 = _DAT_141981e30;
    if (0 < iVar3) {
      do {
        local_c8 = 0x4d;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        uVar15 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                      (ulonglong)ppdVar17 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_158,&local_188);
        local_f8 = &local_158;
        uVar8 = CONCAT44(uVar6,DAT_1420da320);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,1,uVar8,&local_f8);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_1400019a0(&local_148,uVar7);
        local_f0 = &local_148;
        ppdVar14 = &local_f0;
        uVar15 = CONCAT44(uVar6,DAT_1420da2b0);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar15,ppdVar14);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,0xb,uVar7);
        local_c8 = 0x4e;
        uVar16 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59f8,0x80000000,&local_390,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,8,&local_390);
        local_c8 = 0x4f;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a08,0x80000000,&local_380,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,8,&local_380);
        local_c8 = 0x50;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d58e8,0x80000000,&local_370,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,8,&local_370);
        local_c8 = 0x51;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d58f8,0x80000000,&local_360,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,8,&local_360);
        local_c8 = 0x52;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a18,0x80000000,&local_350,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_350);
        local_c8 = 0x53;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a98,0x80000000,&local_340,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_340);
        local_c8 = 0x54;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5aa8,0x80000000,&local_330,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_330);
        local_c8 = 0x55;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5ab8,0x80000000,&local_320,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_320);
        local_c8 = 0x56;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5ac8,0x80000000,&local_310,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_310);
        local_c8 = 0x57;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5ad8,0x80000000,&local_300,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_300);
        local_c8 = 0x58;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5ae8,0x80000000,&local_2f0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_2f0);
        local_c8 = 0x59;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5af8,0x80000000,&local_2e0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_2e0);
        local_c8 = 0x5a;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5b08,0x80000000,&local_2d0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,8,&local_2d0);
        local_c8 = 0x5b;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5b18,0x80000000,&local_2c0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,5,&local_2c0);
        local_c8 = 0x5c;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5b28,0x80000000,&local_2b0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,5,&local_2b0);
        local_c8 = 0x5e;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,0,&local_2a0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_2a0);
        local_c8 = 0x5f;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,1,&local_290,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_290);
        local_c8 = 0x60;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,2,&local_280,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_280);
        local_c8 = 0x61;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,3,&local_270,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_270);
        local_c8 = 0x62;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,4,&local_260,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_260);
        local_c8 = 99;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,5,&local_250,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_250);
        local_c8 = 100;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,6,&local_240,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_240);
        local_c8 = 0x65;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,7,&local_230,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_230);
        local_c8 = 0x66;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,8,&local_220,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_220);
        local_c8 = 0x67;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,9,&local_210,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_210);
        local_c8 = 0x68;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,10,&local_200,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_200);
        local_c8 = 0x69;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a48,0xb,&local_1f0,uVar15,uVar16);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,4,&local_1f0);
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                      uVar16 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_158,&local_198);
        local_f8 = &local_158;
        if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_148);
        }
        FUN_1416ab000(&local_148,&DAT_1420b37e0);
        local_f0 = &local_148;
        ppdVar14 = &local_f8;
        uVar15 = CONCAT44(uVar6,DAT_1420da350);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 != '\0') {
          local_c8 = 0x6b;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          uVar7 = (**(code **)(*local_78 + 0x10))(local_78,0x18e49);
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                        (ulonglong)ppdVar14 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_138,&local_188);
          local_e8 = &local_138;
          FUN_140002730(&local_128,&DAT_1420b3840);
          local_e0 = &local_128;
          ppdVar14 = &local_e8;
          uVar15 = CONCAT44(uVar6,DAT_1420da330);
          uVar8 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
          cVar2 = FUN_1416927d0(uVar8);
          if (cVar2 == '\0') {
            bVar10 = false;
          }
          else {
            uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
            local_b4 = 0;
            local_c0 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18825);
              local_b4 = 0;
              local_c0 = 1.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
                local_b4 = 0;
                local_c0 = 0.0;
                bVar10 = false;
                iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  uVar8 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                  local_b4 = 0;
                  local_c0 = 0.0;
                  iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                  bVar10 = iVar3 != 0;
                }
              }
            }
          }
          local_c0 = (double)bVar10 * dVar1;
          local_b4 = 0;
          FUN_140003e00(uVar7,&local_c0);
          if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c0);
          }
        }
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_158,&local_198);
        local_f8 = &local_158;
        if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_148);
        }
        FUN_1416ab000(&local_148,&DAT_1420b37e2);
        local_f0 = &local_148;
        ppdVar14 = &local_f8;
        uVar15 = CONCAT44(uVar6,DAT_1420da350);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 != '\0') {
          local_c8 = 0x6c;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          uVar7 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4b);
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                        (ulonglong)ppdVar14 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_138,&local_188);
          local_e8 = &local_138;
          FUN_140002730(&local_128,&DAT_1420b3840);
          local_e0 = &local_128;
          ppdVar14 = &local_e8;
          uVar15 = CONCAT44(uVar6,DAT_1420da330);
          uVar8 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
          cVar2 = FUN_1416927d0(uVar8);
          if (cVar2 == '\0') {
            bVar10 = false;
          }
          else {
            uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
            local_b4 = 0;
            local_c0 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18825);
              local_b4 = 0;
              local_c0 = 1.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
                local_b4 = 0;
                local_c0 = 0.0;
                bVar10 = false;
                iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  uVar8 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                  local_b4 = 0;
                  local_c0 = 0.0;
                  iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                  bVar10 = iVar3 != 0;
                }
              }
            }
          }
          local_c0 = (double)bVar10 * dVar1;
          local_b4 = 0;
          FUN_140003e00(uVar7,&local_c0);
          if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c0);
          }
        }
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_158,&local_198);
        local_f8 = &local_158;
        if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_148);
        }
        FUN_1416ab000(&local_148,&DAT_1420b37e5);
        local_f0 = &local_148;
        ppdVar14 = &local_f8;
        uVar15 = CONCAT44(uVar6,DAT_1420da350);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar15,ppdVar14);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 != '\0') {
          local_c8 = 0x6d;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          uVar7 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4d);
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_1416cea80(local_78,DAT_1420d5a28,0x80000000,&local_188,uVar15,
                        (ulonglong)ppdVar14 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_138,&local_188);
          local_e8 = &local_138;
          FUN_140002730(&local_128,&DAT_1420b3840);
          local_e0 = &local_128;
          ppdVar14 = &local_e8;
          uVar15 = CONCAT44(uVar6,DAT_1420da330);
          uVar8 = FUN_1416ab210(local_78,local_90,&local_b0,2,uVar15,ppdVar14);
          cVar2 = FUN_1416927d0(uVar8);
          if (cVar2 == '\0') {
            bVar10 = false;
          }
          else {
            uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18b8c);
            local_b4 = 0;
            local_c0 = 1.0;
            bVar10 = false;
            iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18825);
              local_b4 = 0;
              local_c0 = 1.0;
              bVar10 = false;
              iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18afe);
                local_b4 = 0;
                local_c0 = 0.0;
                bVar10 = false;
                iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  uVar8 = (**(code **)(*local_78 + 8))(local_78,0x188a7);
                  local_b4 = 0;
                  local_c0 = 0.0;
                  iVar3 = FUN_1416d9df0(uVar8,&local_c0,DAT_1420f6b08,0);
                  bVar10 = iVar3 != 0;
                }
              }
            }
          }
          local_c0 = (double)bVar10 * dVar1;
          local_b4 = 0;
          FUN_140003e00(uVar7,&local_c0);
          if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c0);
          }
        }
        local_c8 = 0x6f;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        FUN_1400019a0(&local_158,&local_198);
        local_f8 = &local_158;
        uVar8 = CONCAT44(uVar6,DAT_1420da660);
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_f8);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_1400019a0(&local_168,uVar7);
        if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_1a8);
        }
        local_19c = 0;
        local_1a8 = 0.0;
        local_c8 = 0x71;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        ppdVar14 = (double **)CONCAT44(uVar6,DAT_1420da250);
        local_f8 = &local_168;
        uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,ppdVar14,&local_f8);
        dVar11 = local_88;
        if ((local_7c & 0xffffff) != 0) {
          dVar11 = (double)FUN_1416940c0(&local_88);
        }
        FUN_1416fbbe0((longlong)dVar11,3,uVar7);
        local_c8 = 0x73;
        if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_178);
        }
        local_16c = 0;
        local_178 = 0.0;
        while( true ) {
          uVar6 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_a0 = 0;
          local_98 = 0x500000000;
          ppdVar17 = &local_f8;
          ppdVar14 = (double **)CONCAT44(uVar6,DAT_1420da250);
          local_f8 = &local_168;
          uVar7 = FUN_1416ab210(local_78,local_90,&local_a0,1,ppdVar14,ppdVar17);
          iVar3 = FUN_1416d9df0(&local_178,uVar7,DAT_1420f6b08,1);
          if ((iVar3 == -2) || (-1 < iVar3)) break;
          local_c8 = 0x74;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          uVar15 = (ulonglong)ppdVar14 & 0xffffffffffffff00;
          FUN_1416cea80(local_78,DAT_1420d59e8,0x80000000,&local_198,uVar15,
                        (ulonglong)ppdVar17 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_148,&local_198);
          local_f0 = &local_148;
          iVar3 = FUN_141693b30(&local_178);
          if (((local_15c & 0xffffff) == 2) && (local_168 != 0.0)) {
            FUN_1416ba910();
            if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_168), iVar4 <= iVar3)) {
              uVar5 = FUN_1416ba8f0(local_168);
              FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar5);
              pdVar9 = (double *)0x0;
            }
            else {
              pdVar9 = (double *)FUN_1416ba8e0(local_168,iVar3);
            }
          }
          else {
            FUN_1416ab080("trying to index variable that is not an array");
            pdVar9 = &local_168;
          }
          FUN_1400019a0(&local_138,pdVar9);
          local_e8 = &local_138;
          uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,2,CONCAT44(uVar6,DAT_1420da670),
                                &local_f0);
          FUN_1400019a0(&local_1a8,uVar7);
          local_c8 = 0x76;
          iVar3 = FUN_141693b30(&local_178);
          if (((local_15c & 0xffffff) == 2) && (local_168 != 0.0)) {
            FUN_1416ba910();
            if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_168), iVar4 <= iVar3)) {
              uVar6 = FUN_1416ba8f0(local_168);
              FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar6);
              pdVar9 = (double *)0x0;
              dVar11 = local_88;
            }
            else {
              pdVar9 = (double *)FUN_1416ba8e0(local_168,iVar3);
              dVar11 = local_88;
            }
          }
          else {
            FUN_1416ab080("trying to index variable that is not an array");
            pdVar9 = &local_168;
            dVar11 = local_88;
          }
          local_88 = dVar11;
          if ((local_7c & 0xffffff) != 0) {
            dVar11 = (double)FUN_1416940c0(&local_88);
          }
          FUN_1416fbbe0((longlong)dVar11,0xb,pdVar9);
          local_c8 = 0x78;
          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_a0 = 0;
          local_98 = 0x500000000;
          local_f8 = &local_88;
          local_f0 = &local_1a8;
          ppdVar14 = &local_f8;
          gml_Script__save_type(local_78,local_90,&local_a0,2,ppdVar14);
          switch(local_16c & 0xffffff) {
          case 1:
            local_178 = (double)FUN_1416940c0(&local_178);
            local_178 = local_178 + dVar12;
            local_16c = 0;
            break;
          default:
            FUN_140001d70(&DAT_141981e6a,&local_178,&local_178);
            break;
          case 7:
            local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
            break;
          case 10:
            local_178 = (double)((longlong)local_178 + 1);
            break;
          case 0xd:
            local_16c = 0;
          case 0:
            local_178 = local_178 + dVar12;
          }
        }
        cVar2 = FUN_1416abe60(&local_118,&local_78,&local_90);
      } while (cVar2 != '\0');
    }
    FUN_1416ab620(&local_118,&local_78,&local_90);
    if (local_108 != 0) {
      thunk_FUN_1416c46f0();
      local_108 = 0;
    }
  }
  uVar6 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
  local_c8 = 0x7d;
  local_10c = 0;
  local_118 = 0.0;
  dVar12 = local_88;
  if ((local_7c & 0xffffff) != 0) {
    dVar12 = (double)FUN_1416940c0(&local_88);
  }
  FUN_1416fbbe0((longlong)dVar12,1,&local_118);
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  local_c8 = 0x7f;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  FUN_1416ce870(local_78,DAT_1420d59d8,0x80000000,&local_1e0);
  FUN_1400019a0(&local_158,local_3b0);
  local_f0 = &local_88;
  local_f8 = &local_158;
  FUN_1416ac010(&local_c0,s__CHARACTER_1420b3805);
  uVar8 = CONCAT44(uVar6,DAT_1420da2b0);
  uVar7 = FUN_1416ab210(local_78,local_90,&local_b0,1,uVar8,&local_f8);
  uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1416ac010(local_3a0,s_PROFILES_HEPTAVERSE__1420b37f0);
  local_1ac = local_1d4;
  local_1b0 = local_1d8;
  if ((0x46U >> (local_1d4 & 0x1f) & 1) == 0) {
    local_1b8 = local_1e0;
  }
  else {
    FUN_1401a7770(&local_1b8,&local_1e0);
  }
  FUN_140003ca0(&local_1b8,local_3a0);
  local_1bc = local_1ac;
  local_1c0 = local_1b0;
  if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
    local_1c8 = local_1b8;
  }
  else {
    FUN_1401a7770(&local_1c8,&local_1b8);
  }
  FUN_140003ca0(&local_1c8,uVar7);
  local_10c = local_1bc;
  local_110 = local_1c0;
  if ((0x46U >> (local_1bc & 0x1f) & 1) == 0) {
    local_118 = local_1c8;
  }
  else {
    FUN_1401a7770(&local_118,&local_1c8);
  }
  FUN_140003ca0(&local_118,&local_c0);
  FUN_1400019a0(&local_138,&local_118);
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_3a0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_e8 = &local_138;
  uVar7 = CONCAT44(uVar6,DAT_1420da360);
  FUN_1416ab210(local_78,local_90,&local_a0,2,uVar7,&local_f0);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_c8 = 0x80;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  local_f8 = &local_88;
  FUN_1416ab210(local_78,local_90,&local_a0,1,CONCAT44(uVar6,DAT_1420da370),&local_f8);
  if (local_3c0 != 0) {
    thunk_FUN_1416c46f0();
    local_3c0 = 0;
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e0);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f0);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
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
  if ((0x46U >> (local_2e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f0);
  }
  if ((0x46U >> (local_2f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_300);
  }
  if ((0x46U >> (local_304 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_310);
  }
  if ((0x46U >> (local_314 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_320);
  }
  if ((0x46U >> (local_324 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_330);
  }
  if ((0x46U >> (local_334 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_340);
  }
  if ((0x46U >> (local_344 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_350);
  }
  if ((0x46U >> (local_354 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_360);
  }
  if ((0x46U >> (local_364 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_370);
  }
  if ((0x46U >> (local_374 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_380);
  }
  if ((0x46U >> (local_384 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_390);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
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
  DAT_142182d78 = (undefined8 *)local_d8;
  return local_3a8;
}


