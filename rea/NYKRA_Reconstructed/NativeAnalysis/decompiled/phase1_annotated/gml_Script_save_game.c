// Function: gml_Script_save_game @ 0x1400be4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_game(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  double **ppdVar15;
  ulonglong uVar16;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638 [16];
  longlong local_628;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [12];
  uint local_5dc;
  undefined1 local_5d8 [12];
  uint local_5cc;
  undefined1 local_5c8 [12];
  uint local_5bc;
  undefined8 *local_5b8;
  undefined8 local_5b0;
  uint local_5a4;
  longlong local_5a0;
  undefined8 local_590;
  uint local_584;
  longlong local_580;
  undefined8 local_570;
  uint local_564;
  longlong local_560;
  undefined8 local_550;
  uint local_544;
  longlong local_540;
  undefined8 local_530;
  uint local_524;
  longlong local_520;
  undefined8 local_510;
  uint local_504;
  longlong local_500;
  undefined8 local_4f0;
  uint local_4e4;
  longlong local_4e0;
  undefined8 local_4d0;
  uint local_4c4;
  longlong local_4c0;
  undefined8 local_4b0;
  uint local_4a4;
  longlong local_4a0;
  undefined8 local_490;
  uint local_484;
  longlong local_480;
  undefined8 local_470;
  uint local_464;
  longlong local_460;
  undefined8 local_450;
  uint local_444;
  longlong local_440;
  undefined8 local_430;
  uint local_424;
  longlong local_420;
  undefined8 local_410;
  uint local_404;
  longlong local_400;
  undefined8 local_3f0;
  uint local_3e4;
  undefined8 local_3e0;
  uint local_3d4;
  undefined8 local_3d0;
  uint local_3c4;
  undefined8 local_3c0;
  uint local_3b4;
  undefined8 local_3b0;
  uint local_3a4;
  undefined8 local_3a0;
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
  longlong local_220;
  undefined8 local_210;
  uint local_204;
  double local_200;
  undefined4 local_1f8;
  uint local_1f4;
  double local_1f0;
  uint local_1e4;
  double local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  double local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  double local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  double local_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  undefined8 local_1a0;
  uint local_194;
  undefined8 local_190;
  double local_188;
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
  double local_128;
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined4 local_98;
  uint local_94;
  double local_90;
  uint local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_c0 = "gml_Script_save_game";
  local_b8 = 0;
  local_c8 = DAT_142182d78;
  DAT_142182d78 = &local_c8;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  DAT_142182d90 = param_1;
  local_5b8 = param_3;
  local_80 = param_2;
  local_78 = param_1;
  local_190 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e/*var:map*/);
  local_204 = 0xffffff;
  local_210 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_3e4 = 0xffffff;
  local_3f0 = 0;
  local_3d4 = 0xffffff;
  local_3e0 = 0;
  local_3c4 = 0xffffff;
  local_3d0 = 0;
  local_3b4 = 0xffffff;
  local_3c0 = 0;
  local_3a4 = 0xffffff;
  local_3b0 = 0;
  local_394 = 0xffffff;
  local_3a0 = 0;
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
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_1f4 = 0xffffff;
  local_200 = 0.0;
  local_618 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  local_610 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a/*var:CURRENTROOM*/);
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  local_d0 = (ulonglong)(uint)local_d0;
  local_d8 = 0;
  *(undefined4 *)((longlong)local_5b8 + 0xc) = 5;
  *local_5b8 = 0;
  FUN_1416ab750(DAT_1420dcd10/*gml_Script_save_game*/);
  local_b8 = 0x88;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  FUN_1401c2a30(local_78,local_80,&local_b0,0,0);
  local_b8 = 0x89;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  FUN_1401a77f0(local_78,local_80,&local_b0,0,0);
  local_b8 = 0x8a;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  uVar5 = 0;
  FUN_1401a0c30(local_78,local_80,&local_b0,0,0);
  local_b8 = 0x8d;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  FUN_140002730(&local_158,&DAT_1420b2a98);
  local_f8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b2aa8);
  local_f0 = &local_148;
  FUN_140002730(&local_138,&DAT_1420b2aa8);
  local_e8 = &local_138;
  uVar13 = CONCAT44(uVar5,DAT_1420da220/*buffer_create*/);
  uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,3,uVar13,&local_f8);
  uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_1400019a0(&local_90,uVar6);
  local_b8 = 0x8e;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  local_f8 = &local_90;
  FUN_140002730(&local_148,&DAT_14217f150);
  local_f0 = &local_148;
  FUN_140002730(&local_138,&DAT_14217f150);
  local_e8 = &local_138;
  ppdVar15 = &local_f8;
  uVar14 = CONCAT44(uVar5,DAT_1420da650/*buffer_seek*/);
  FUN_1416ab210(local_78,local_80,&local_b0,3,uVar14,ppdVar15);
  local_b8 = 0x92;
  local_5f8 = 0;
  uStack_5f0 = 0;
  uVar16 = (ulonglong)ppdVar15 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_5f8,uVar14,uVar16);
  dVar10 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar10 = (double)FUN_1416940c0(&local_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_5f8);
  local_b8 = 0x93;
  local_608 = 0;
  uStack_600 = 0;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_608,uVar14,uVar16);
  dVar10 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar10 = (double)FUN_1416940c0(&local_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_608);
  local_b8 = 0x94;
  local_648 = 0;
  uStack_640 = 0;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b9c/*var:planet*/,0x80000000,&local_648,uVar14,uVar16);
  dVar10 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar10 = (double)FUN_1416940c0(&local_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_648);
  local_b8 = 0x96;
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  dVar10 = _DAT_141981e30;
  local_fc = 0;
  local_108 = 0.0;
  while( true ) {
    ppdVar15 = (double **)(uVar16 & 0xffffffffffffff00);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_5f8,uVar14,ppdVar15);
    iVar2 = FUN_1416d9df0(&local_108,&local_5f8,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_b8 = 0x97;
    if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_178);
    }
    local_16c = 0;
    local_178 = 0.0;
    while( true ) {
      uVar16 = (ulonglong)ppdVar15 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_608,uVar14,uVar16);
      iVar2 = FUN_1416d9df0(&local_178,&local_608,DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      local_b8 = 0x98;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      uVar5 = (undefined4)(uVar14 >> 0x20);
      local_b0 = 0;
      local_a8 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      FUN_1400019a0(&local_158,local_190);
      local_f8 = &local_158;
      local_f0 = &local_108;
      uVar13 = CONCAT44(uVar5,DAT_1420da240/*array_get_2D*/);
      local_e8 = &local_178;
      uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,3,uVar13,&local_f8);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      FUN_1400019a0(&local_128,uVar6);
      local_e0 = &local_128;
      ppdVar15 = &local_e0;
      uVar14 = CONCAT44(uVar5,DAT_1420da230/*round*/);
      uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,1,uVar14,ppdVar15);
      dVar11 = local_90;
      if ((local_84 & 0xffffff) != 0) {
        dVar11 = (double)FUN_1416940c0(&local_90);
      }
      FUN_1416fbbe0((longlong)dVar11,3,uVar6);
      switch(local_16c & 0xffffff) {
      case 1:
        local_178 = (double)FUN_1416940c0(&local_178);
        local_178 = local_178 + dVar10;
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
        local_178 = local_178 + dVar10;
      }
    }
    switch(local_fc & 0xffffff) {
    case 1:
      local_108 = (double)FUN_1416940c0(&local_108);
      local_108 = local_108 + dVar10;
      local_fc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_108,&local_108);
      break;
    case 7:
      local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
      break;
    case 10:
      local_108 = (double)((longlong)local_108 + 1);
      break;
    case 0xd:
      local_fc = 0;
    case 0:
      local_108 = local_108 + dVar10;
    }
  }
  local_b8 = 0x9c;
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  local_204 = 0;
  local_210 = 0xc010000000000000/*-4*/;
  local_5a4 = 0;
  local_5b0 = 0x4054000000000000/*80 (obj:oControl_Pause)*/;
  iVar2 = FUN_1416ab810(local_638,&local_78,&local_80,&local_5b0);
  if ((0x46U >> (local_5a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5b0);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0x9f;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(local_638,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(local_638,&local_78,&local_80);
  local_584 = 0;
  local_590 = 0x4084280000000000/*645 (obj:parControlsTut)*/;
  iVar2 = FUN_1416ab810(&local_5b0,&local_78,&local_80,&local_590);
  if ((0x46U >> (local_584 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_590);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xa3;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_5b0,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_5b0,&local_78,&local_80);
  local_564 = 0;
  local_570 = 0x4057800000000000/*94 (obj:oTemp_Back_Leaves)*/;
  iVar2 = FUN_1416ab810(&local_590,&local_78,&local_80,&local_570);
  if ((0x46U >> (local_564 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_570);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xa7;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_590,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_590,&local_78,&local_80);
  local_544 = 0;
  local_550 = 0x407f400000000000/*500 (obj:DRAW_GNARCIER)*/;
  iVar2 = FUN_1416ab810(&local_570,&local_78,&local_80,&local_550);
  if ((0x46U >> (local_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_550);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xab;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_570,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_570,&local_78,&local_80);
  local_524 = 0;
  local_530 = 0x404b800000000000/*55 (obj:parDoor_Flat)*/;
  iVar2 = FUN_1416ab810(&local_550,&local_78,&local_80,&local_530);
  if ((0x46U >> (local_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_530);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xaf;
      puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x1890a/*var:fade*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      local_b8 = 0xb0;
      puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x1880b/*var:Clicked*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
      cVar1 = FUN_1416abe60(&local_550,&local_78,&local_80);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_550,&local_78,&local_80);
  local_504 = 0;
  local_510 = 0x4050c00000000000/*67 (obj:oAenox_bound)*/;
  iVar2 = FUN_1416ab810(&local_530,&local_78,&local_80,&local_510);
  if ((0x46U >> (local_504 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_510);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xb4;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_530,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_530,&local_78,&local_80);
  local_224 = 0;
  local_230 = 0x404a000000000000/*52 (obj:parPhysArray)*/;
  iVar2 = FUN_1416ab810(&local_510,&local_78,&local_80,&local_230);
  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_230);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xb7;
      ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,ppdVar15);
      local_224 = 0;
      local_230 = 0x4080100000000000/*514 (obj:oToka)*/;
      iVar2 = FUN_1416d9df0(&local_118,&local_230,DAT_1420f6b08,0);
      if (iVar2 != 0) {
        local_b8 = 0xb8;
        FUN_1416f8210(local_78,local_80,0,0);
      }
      cVar1 = FUN_1416abe60(&local_510,&local_78,&local_80);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_510,&local_78,&local_80);
  local_4e4 = 0;
  local_4f0 = 0x407f500000000000/*501 (obj:parFX)*/;
  iVar2 = FUN_1416ab810(&local_230,&local_78,&local_80,&local_4f0);
  if ((0x46U >> (local_4e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4f0);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xbc;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_230,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_230,&local_78,&local_80);
  local_4c4 = 0;
  local_4d0 = 0x4063800000000000/*156 (obj:oFADE_goto)*/;
  iVar2 = FUN_1416ab810(&local_4f0,&local_78,&local_80,&local_4d0);
  if ((0x46U >> (local_4c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4d0);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xc0;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_4f0,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_4f0,&local_78,&local_80);
  local_4a4 = 0;
  local_4b0 = 0x4063400000000000/*154 (obj:oFADE)*/;
  iVar2 = FUN_1416ab810(&local_4d0,&local_78,&local_80,&local_4b0);
  if ((0x46U >> (local_4a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b0);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xc4;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_4d0,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_4d0,&local_78,&local_80);
  local_484 = 0;
  local_490 = 0x4061000000000000/*136 (obj:oFade_in)*/;
  iVar2 = FUN_1416ab810(&local_4b0,&local_78,&local_80,&local_490);
  if ((0x46U >> (local_484 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_490);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 200;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_4b0,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_4b0,&local_78,&local_80);
  local_464 = 0;
  local_470 = 0x4084680000000000/*653 (obj:oFlash)*/;
  iVar2 = FUN_1416ab810(&local_490,&local_78,&local_80,&local_470);
  if ((0x46U >> (local_464 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_470);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xcc;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_490,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_490,&local_78,&local_80);
  local_444 = 0;
  local_450 = 0x4064e00000000000/*167 (obj:oPadlock)*/;
  iVar2 = FUN_1416ab810(&local_470,&local_78,&local_80,&local_450);
  if ((0x46U >> (local_444 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_450);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xd0;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_470,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_470,&local_78,&local_80);
  local_424 = 0;
  local_430 = 0x4085000000000000/*672 (obj:oNenmiar_trail)*/;
  iVar2 = FUN_1416ab810(&local_450,&local_78,&local_80,&local_430);
  if ((0x46U >> (local_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_430);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xd4;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_450,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_450,&local_78,&local_80);
  local_404 = 0;
  local_410 = 0x4035000000000000/*21 (obj:oGatna)*/;
  iVar2 = FUN_1416ab810(&local_430,&local_78,&local_80,&local_410);
  if ((0x46U >> (local_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_410);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0xd8;
      FUN_1416f8210(local_78,local_80,0,0);
      cVar1 = FUN_1416abe60(&local_430,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_430,&local_78,&local_80);
  local_94 = 0;
  local_a0 = -3.0;
  iVar2 = FUN_1416ab810(&local_410,&local_78,&local_80,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  dVar11 = _DAT_141981ea8;
  if (0 < iVar2) {
    do {
      local_b8 = 0xdb;
      ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a58/*persistent*/,0x80000000,&local_3f0,uVar14,ppdVar15);
      local_94 = 0;
      local_a0 = 1.0;
      iVar2 = FUN_1416d9df0(&local_3f0,&local_a0,DAT_1420f6b08,0);
      if (iVar2 != 0) {
        ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,ppdVar15);
        local_94 = 0;
        local_a0 = 79.0;
        iVar2 = FUN_1416d9df0(&local_118,&local_a0,DAT_1420f6b08,0);
        if (iVar2 != 0) {
          ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,ppdVar15);
          local_94 = 0;
          local_a0 = 64.0;
          iVar2 = FUN_1416d9df0(&local_118,&local_a0,DAT_1420f6b08,0);
          if (iVar2 != 0) {
            ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,ppdVar15);
            local_94 = 0;
            local_a0 = 65.0;
            iVar2 = FUN_1416d9df0(&local_118,&local_a0,DAT_1420f6b08,0);
            if (iVar2 != 0) {
              local_b8 = 0xde;
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_d8);
              }
              local_d8 = 0;
              local_d0 = 0x500000000;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,
                            (ulonglong)ppdVar15 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar14 >> 0x20);
              FUN_1400019a0(&local_158,&local_118);
              local_f8 = &local_158;
              uVar13 = CONCAT44(uVar5,DAT_1420da320/*object_get_name*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,1,uVar13,&local_f8);
              uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
              FUN_1400019a0(&local_148,uVar6);
              local_f0 = &local_148;
              ppdVar15 = &local_f0;
              uVar14 = CONCAT44(uVar5,DAT_1420da2b0/*string*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,1,uVar14,ppdVar15);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,0xb,uVar6);
              local_b8 = 0xdf;
              uVar16 = (ulonglong)ppdVar15 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d59f8/*xstart*/,0x80000000,&local_3e0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,8,&local_3e0);
              local_b8 = 0xe0;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a08/*ystart*/,0x80000000,&local_3d0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,8,&local_3d0);
              local_b8 = 0xe1;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_3c0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,8,&local_3c0);
              local_b8 = 0xe2;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_3b0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,8,&local_3b0);
              local_b8 = 0xe3;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_3a0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_3a0);
              local_b8 = 0xe4;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a98/*speed*/,0x80000000,&local_390,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_390);
              local_b8 = 0xe5;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5aa8/*direction*/,0x80000000,&local_380,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_380);
              local_b8 = 0xe6;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5ab8/*friction*/,0x80000000,&local_370,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_370);
              local_b8 = 0xe7;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5ac8/*gravity*/,0x80000000,&local_360,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_360);
              local_b8 = 0xe8;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_350,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_350);
              local_b8 = 0xe9;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5ae8/*image_index*/,0x80000000,&local_340,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_340);
              local_b8 = 0xea;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5af8/*image_speed*/,0x80000000,&local_330,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_330);
              local_b8 = 0xeb;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_320,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,8,&local_320);
              local_b8 = 0xec;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5b18/*image_blend*/,0x80000000,&local_310,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,5,&local_310);
              local_b8 = 0xed;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5b28/*visible*/,0x80000000,&local_300,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,5,&local_300);
              local_b8 = 0xef;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0,&local_2f0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2f0);
              local_b8 = 0xf0;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,1,&local_2e0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2e0);
              local_b8 = 0xf1;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,2,&local_2d0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2d0);
              local_b8 = 0xf2;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,3,&local_2c0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2c0);
              local_b8 = 0xf3;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,4,&local_2b0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2b0);
              local_b8 = 0xf4;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,5,&local_2a0,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_2a0);
              local_b8 = 0xf5;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,6,&local_290,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_290);
              local_b8 = 0xf6;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,7,&local_280,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_280);
              local_b8 = 0xf7;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,8,&local_270,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_270);
              local_b8 = 0xf8;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,9,&local_260,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_260);
              local_b8 = 0xf9;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,10,&local_250,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_250);
              local_b8 = 0xfa;
              uVar16 = uVar16 & 0xffffffffffffff00;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_240,uVar14,uVar16);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,4,&local_240);
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1a0,uVar14,
                            uVar16 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar14 >> 0x20);
              FUN_1400019a0(&local_158,&local_1a0);
              local_f8 = &local_158;
              if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_148);
              }
              FUN_1416ab000(&local_148,&DAT_1420b2a65);
              local_f0 = &local_148;
              ppdVar15 = &local_f8;
              uVar14 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,2,uVar14,ppdVar15);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                local_b8 = 0xfc;
                if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_d8);
                }
                local_d8 = 0;
                local_d0 = 0x500000000;
                local_190 = (**(code **)(*local_78 + 0x10))(local_78,0x18e49/*var:Y*/);
                uVar14 = uVar14 & 0xffffffffffffff00;
                FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,
                              (ulonglong)ppdVar15 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar14 >> 0x20);
                FUN_1400019a0(&local_138,&local_118);
                local_e8 = &local_138;
                FUN_140002730(&local_128,&DAT_1420b2ab8);
                local_e0 = &local_128;
                ppdVar15 = &local_e8;
                uVar14 = CONCAT44(uVar5,DAT_1420da330/*object_is_ancestor*/);
                uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,2,uVar14,ppdVar15);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b8c/*var:physics*/);
                  local_94 = 0;
                  local_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18825/*var:collide_object*/);
                    local_94 = 0;
                    local_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18afe/*var:mover*/);
                      local_94 = 0;
                      local_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*local_78 + 8))(local_78,0x188a7/*var:do_grav*/);
                        local_94 = 0;
                        local_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                local_a0 = (double)bVar9 * dVar11;
                local_94 = 0;
                FUN_140003e00(local_190,&local_a0);
                if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a0);
                }
              }
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1a0,uVar14,
                            (ulonglong)ppdVar15 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar14 >> 0x20);
              FUN_1400019a0(&local_158,&local_1a0);
              local_f8 = &local_158;
              if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_148);
              }
              FUN_1416ab000(&local_148,&DAT_1420b2a67);
              local_f0 = &local_148;
              ppdVar15 = &local_f8;
              uVar14 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,2,uVar14,ppdVar15);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                local_b8 = 0xfd;
                if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_d8);
                }
                local_d8 = 0;
                local_d0 = 0x500000000;
                local_190 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4b/*var:y1*/);
                uVar14 = uVar14 & 0xffffffffffffff00;
                FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,
                              (ulonglong)ppdVar15 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar14 >> 0x20);
                FUN_1400019a0(&local_138,&local_118);
                local_e8 = &local_138;
                FUN_140002730(&local_128,&DAT_1420b2ab8);
                local_e0 = &local_128;
                ppdVar15 = &local_e8;
                uVar14 = CONCAT44(uVar5,DAT_1420da330/*object_is_ancestor*/);
                uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,2,uVar14,ppdVar15);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b8c/*var:physics*/);
                  local_94 = 0;
                  local_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18825/*var:collide_object*/);
                    local_94 = 0;
                    local_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18afe/*var:mover*/);
                      local_94 = 0;
                      local_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*local_78 + 8))(local_78,0x188a7/*var:do_grav*/);
                        local_94 = 0;
                        local_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                local_a0 = (double)bVar9 * dVar11;
                local_94 = 0;
                FUN_140003e00(local_190,&local_a0);
                if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a0);
                }
              }
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1a0,uVar14,
                            (ulonglong)ppdVar15 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar14 >> 0x20);
              FUN_1400019a0(&local_158,&local_1a0);
              local_f8 = &local_158;
              if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_148);
              }
              FUN_1416ab000(&local_148,&DAT_1420b2a6a);
              local_f0 = &local_148;
              ppdVar15 = &local_f8;
              uVar14 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,2,uVar14,ppdVar15);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                local_b8 = 0xfe;
                if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_d8);
                }
                local_d8 = 0;
                local_d0 = 0x500000000;
                local_190 = (**(code **)(*local_78 + 0x10))(local_78,0x18e4d/*var:y2*/);
                uVar14 = uVar14 & 0xffffffffffffff00;
                FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_118,uVar14,
                              (ulonglong)ppdVar15 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar14 >> 0x20);
                FUN_1400019a0(&local_138,&local_118);
                local_e8 = &local_138;
                FUN_140002730(&local_128,&DAT_1420b2ab8);
                local_e0 = &local_128;
                ppdVar15 = &local_e8;
                uVar14 = CONCAT44(uVar5,DAT_1420da330/*object_is_ancestor*/);
                uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,2,uVar14,ppdVar15);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b8c/*var:physics*/);
                  local_94 = 0;
                  local_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18825/*var:collide_object*/);
                    local_94 = 0;
                    local_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18afe/*var:mover*/);
                      local_94 = 0;
                      local_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*local_78 + 8))(local_78,0x188a7/*var:do_grav*/);
                        local_94 = 0;
                        local_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&local_a0,DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                local_a0 = (double)bVar9 * dVar11;
                local_94 = 0;
                FUN_140003e00(local_190,&local_a0);
                if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a0);
                }
              }
              local_b8 = 0x100;
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1a0,uVar14,
                            (ulonglong)ppdVar15 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar14 >> 0x20);
              FUN_1400019a0(&local_158,&local_1a0);
              local_f8 = &local_158;
              uVar13 = CONCAT44(uVar5,DAT_1420da660/*variable_instance_get_names*/);
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,1,uVar13,&local_f8);
              uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
              FUN_1400019a0(&local_188,uVar6);
              if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1f0);
              }
              local_1e4 = 0;
              local_1f0 = 0.0;
              local_b8 = 0x102;
              if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_b0);
              }
              local_b0 = 0;
              local_a8 = 0x500000000;
              ppdVar15 = (double **)CONCAT44(uVar5,DAT_1420da250/*array_length*/);
              local_f8 = &local_188;
              uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,1,ppdVar15,&local_f8);
              dVar12 = local_90;
              if ((local_84 & 0xffffff) != 0) {
                dVar12 = (double)FUN_1416940c0(&local_90);
              }
              FUN_1416fbbe0((longlong)dVar12,3,uVar6);
              local_b8 = 0x104;
              if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_168);
              }
              local_15c = 0;
              local_168 = 0.0;
              while( true ) {
                uVar5 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
                if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_b0);
                }
                local_b0 = 0;
                local_a8 = 0x500000000;
                ppdVar15 = &local_f8;
                uVar14 = CONCAT44(uVar5,DAT_1420da250/*array_length*/);
                local_f8 = &local_188;
                uVar6 = FUN_1416ab210(local_78,local_80,&local_b0,1,uVar14,ppdVar15);
                iVar2 = FUN_1416d9df0(&local_168,uVar6,DAT_1420f6b08,1);
                if ((iVar2 == -2) || (-1 < iVar2)) break;
                local_b8 = 0x105;
                if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_d8);
                }
                local_d8 = 0;
                local_d0 = 0x500000000;
                uVar14 = uVar14 & 0xffffffffffffff00;
                FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1a0,uVar14,
                              (ulonglong)ppdVar15 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar14 >> 0x20);
                FUN_1400019a0(&local_148,&local_1a0);
                local_f0 = &local_148;
                iVar2 = FUN_141693b30(&local_168);
                if (((local_17c & 0xffffff) == 2) && (local_188 != 0.0)) {
                  FUN_1416ba910();
                  if ((iVar2 < 0) || (iVar3 = FUN_1416ba8f0(local_188), iVar3 <= iVar2)) {
                    uVar4 = FUN_1416ba8f0(local_188);
                    FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar2,uVar4);
                    pdVar8 = (double *)0x0;
                  }
                  else {
                    pdVar8 = (double *)FUN_1416ba8e0(local_188,iVar2);
                  }
                }
                else {
                  FUN_1416ab080("trying to index variable that is not an array");
                  pdVar8 = &local_188;
                }
                FUN_1400019a0(&local_138,pdVar8);
                local_e8 = &local_138;
                uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,2,CONCAT44(uVar5,DAT_1420da670/*variable_instance_get*/),
                                      &local_f0);
                FUN_1400019a0(&local_1f0,uVar6);
                local_b8 = 0x107;
                iVar2 = FUN_141693b30(&local_168);
                if (((local_17c & 0xffffff) == 2) && (local_188 != 0.0)) {
                  FUN_1416ba910();
                  if ((iVar2 < 0) || (iVar3 = FUN_1416ba8f0(local_188), iVar3 <= iVar2)) {
                    uVar5 = FUN_1416ba8f0(local_188);
                    FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar2,uVar5);
                    pdVar8 = (double *)0x0;
                    dVar12 = local_90;
                  }
                  else {
                    pdVar8 = (double *)FUN_1416ba8e0(local_188,iVar2);
                    dVar12 = local_90;
                  }
                }
                else {
                  FUN_1416ab080("trying to index variable that is not an array");
                  pdVar8 = &local_188;
                  dVar12 = local_90;
                }
                local_90 = dVar12;
                if ((local_84 & 0xffffff) != 0) {
                  dVar12 = (double)FUN_1416940c0(&local_90);
                }
                FUN_1416fbbe0((longlong)dVar12,0xb,pdVar8);
                local_b8 = 0x11b;
                if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_b0);
                }
                local_b0 = 0;
                local_a8 = 0x500000000;
                local_f8 = &local_90;
                local_f0 = &local_1f0;
                ppdVar15 = &local_f8;
                gml_Script__save_type(local_78,local_80,&local_b0,2,ppdVar15);
                switch(local_15c & 0xffffff) {
                case 1:
                  local_168 = (double)FUN_1416940c0(&local_168);
                  local_168 = local_168 + dVar10;
                  local_15c = 0;
                  break;
                default:
                  FUN_140001d70(&DAT_141981e6a,&local_168,&local_168);
                  break;
                case 7:
                  local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
                  break;
                case 10:
                  local_168 = (double)((longlong)local_168 + 1);
                  break;
                case 0xd:
                  local_15c = 0;
                case 0:
                  local_168 = local_168 + dVar10;
                }
              }
            }
          }
        }
      }
      cVar1 = FUN_1416abe60(&local_410,&local_78,&local_80);
    } while (cVar1 != '\0');
  }
  uVar5 = (undefined4)(uVar14 >> 0x20);
  FUN_1416ab620(&local_410,&local_78,&local_80);
  local_b8 = 0x164;
  local_94 = 0;
  local_a0 = 0.0;
  dVar10 = local_90;
  if ((local_84 & 0xffffff) != 0) {
    dVar10 = (double)FUN_1416940c0(&local_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_b8 = 0x166;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0x500000000;
  FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_200);
  FUN_1400019a0(&local_158,local_618);
  local_f0 = &local_90;
  local_f8 = &local_158;
  FUN_1416ac010(local_5e8,s__SAVE_1420b2a8d);
  FUN_1416ac010(local_5d8,s__ROOMS__1420b2a85);
  uVar13 = CONCAT44(uVar5,DAT_1420da2b0/*string*/);
  uVar6 = FUN_1416ab210(local_78,local_80,&local_d8,1,uVar13,&local_f8);
  uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_1416ac010(local_5c8,s_PROFILES_HEPTAVERSE__1420b2a70);
  local_1a4 = local_1f4;
  local_1a8 = local_1f8;
  if ((0x46U >> (local_1f4 & 0x1f) & 1) == 0) {
    local_1b0 = local_200;
  }
  else {
    FUN_1400c5d80(&local_1b0,&local_200);
  }
  FUN_140003ca0(&local_1b0,local_5c8);
  local_1b4 = local_1a4;
  local_1b8 = local_1a8;
  if ((0x46U >> (local_1a4 & 0x1f) & 1) == 0) {
    local_1c0 = local_1b0;
  }
  else {
    FUN_1400c5d80(&local_1c0,&local_1b0);
  }
  FUN_140003ca0(&local_1c0,uVar6);
  local_1c4 = local_1b4;
  local_1c8 = local_1b8;
  if ((0x46U >> (local_1b4 & 0x1f) & 1) == 0) {
    local_1d0 = local_1c0;
  }
  else {
    FUN_1400c5d80(&local_1d0,&local_1c0);
  }
  FUN_140003ca0(&local_1d0,local_5d8);
  local_1d4 = local_1c4;
  local_1d8 = local_1c8;
  if ((0x46U >> (local_1c4 & 0x1f) & 1) == 0) {
    local_1e0 = local_1d0;
  }
  else {
    FUN_1400c5d80(&local_1e0,&local_1d0);
  }
  FUN_140003ca0(&local_1e0,local_610);
  local_94 = local_1d4;
  local_98 = local_1d8;
  if ((0x46U >> (local_1d4 & 0x1f) & 1) == 0) {
    local_a0 = local_1e0;
  }
  else {
    FUN_1400c5d80(&local_a0,&local_1e0);
  }
  FUN_140003ca0(&local_a0,local_5e8);
  FUN_1400019a0(&local_138,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e0);
  }
  if ((0x46U >> (local_1c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d0);
  }
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b0);
  }
  if ((0x46U >> (local_5bc & 0x1f) & 1) != 0) {
    FUN_140001b50(local_5c8);
  }
  if ((0x46U >> (local_5cc & 0x1f) & 1) != 0) {
    FUN_140001b50(local_5d8);
  }
  if ((0x46U >> (local_5dc & 0x1f) & 1) != 0) {
    FUN_140001b50(local_5e8);
  }
  local_e8 = &local_138;
  uVar6 = CONCAT44(uVar5,DAT_1420da360/*buffer_save*/);
  FUN_1416ab210(local_78,local_80,&local_b0,2,uVar6,&local_f0);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_b8 = 0x167;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  local_f8 = &local_90;
  FUN_1416ab210(local_78,local_80,&local_b0,1,CONCAT44(uVar5,DAT_1420da370/*buffer_delete*/),&local_f8);
  if (local_400 != 0) {
    thunk_FUN_1416c46f0();
    local_400 = 0;
  }
  if (local_420 != 0) {
    thunk_FUN_1416c46f0();
    local_420 = 0;
  }
  if (local_440 != 0) {
    thunk_FUN_1416c46f0();
    local_440 = 0;
  }
  if (local_460 != 0) {
    thunk_FUN_1416c46f0();
    local_460 = 0;
  }
  if (local_480 != 0) {
    thunk_FUN_1416c46f0();
    local_480 = 0;
  }
  if (local_4a0 != 0) {
    thunk_FUN_1416c46f0();
    local_4a0 = 0;
  }
  if (local_4c0 != 0) {
    thunk_FUN_1416c46f0();
    local_4c0 = 0;
  }
  if (local_4e0 != 0) {
    thunk_FUN_1416c46f0();
    local_4e0 = 0;
  }
  if (local_220 != 0) {
    thunk_FUN_1416c46f0();
    local_220 = 0;
  }
  if (local_500 != 0) {
    thunk_FUN_1416c46f0();
    local_500 = 0;
  }
  if (local_520 != 0) {
    thunk_FUN_1416c46f0();
    local_520 = 0;
  }
  if (local_540 != 0) {
    thunk_FUN_1416c46f0();
    local_540 = 0;
  }
  if (local_560 != 0) {
    thunk_FUN_1416c46f0();
    local_560 = 0;
  }
  if (local_580 != 0) {
    thunk_FUN_1416c46f0();
    local_580 = 0;
  }
  if (local_5a0 != 0) {
    thunk_FUN_1416c46f0();
    local_5a0 = 0;
  }
  if (local_628 != 0) {
    thunk_FUN_1416c46f0();
    local_628 = 0;
  }
  if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f0);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a0);
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
  if ((0x46U >> (local_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3a0);
  }
  if ((0x46U >> (local_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3b0);
  }
  if ((0x46U >> (local_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3c0);
  }
  if ((0x46U >> (local_3c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d0);
  }
  if ((0x46U >> (local_3d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e0);
  }
  if ((0x46U >> (local_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f0);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
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
  DAT_142182d78 = (undefined8 *)local_c8;
  return local_5b8;
}


