// Function: gml_Object_oPlayer_Step_1 @ 0x1404cc690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPlayer_Step_1(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_stack_fffffffffffff958;
  double **ppdVar26;
  double **ppdVar27;
  undefined8 **ppuVar28;
  undefined8 uStack_678;
  uint uStack_66c;
  undefined8 uStack_668;
  uint uStack_65c;
  undefined8 uStack_658;
  uint uStack_64c;
  undefined8 uStack_648;
  uint uStack_63c;
  undefined8 uStack_638;
  uint uStack_62c;
  undefined8 uStack_628;
  uint uStack_61c;
  undefined8 uStack_618;
  uint uStack_60c;
  undefined1 auStack_608 [12];
  uint uStack_5fc;
  undefined8 uStack_5f8;
  double *pdStack_5f0;
  double *pdStack_5e8;
  undefined8 uStack_5e0;
  uint uStack_5d4;
  undefined8 uStack_5d0;
  uint uStack_5c4;
  undefined8 uStack_5c0;
  uint uStack_5b4;
  undefined8 uStack_5b0;
  uint uStack_5a4;
  undefined8 uStack_5a0;
  uint uStack_594;
  undefined8 uStack_590;
  uint uStack_584;
  undefined8 uStack_580;
  uint uStack_574;
  undefined8 uStack_570;
  uint uStack_564;
  undefined8 uStack_560;
  uint uStack_554;
  undefined8 uStack_550;
  uint uStack_544;
  undefined8 uStack_540;
  uint uStack_534;
  undefined8 uStack_530;
  uint uStack_524;
  undefined8 uStack_520;
  uint uStack_514;
  undefined8 uStack_510;
  uint uStack_504;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  uint uStack_4e4;
  double dStack_4e0;
  uint uStack_4d4;
  double dStack_4d0;
  uint uStack_4c4;
  undefined8 uStack_4c0;
  uint uStack_4b4;
  undefined8 uStack_4b0;
  uint uStack_4a4;
  undefined8 uStack_4a0;
  uint uStack_494;
  undefined8 uStack_490;
  uint uStack_484;
  undefined8 uStack_480;
  uint uStack_474;
  undefined8 uStack_470;
  uint uStack_464;
  undefined8 uStack_460;
  uint uStack_454;
  undefined8 uStack_450;
  uint uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  double dStack_430;
  undefined4 uStack_428;
  uint uStack_424;
  undefined8 uStack_420;
  uint uStack_414;
  double dStack_410;
  undefined4 uStack_408;
  uint uStack_404;
  undefined8 uStack_400;
  uint uStack_3f4;
  undefined8 uStack_3f0;
  uint uStack_3e4;
  double dStack_3e0;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  double dStack_3c8;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  double dStack_3b8;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  double dStack_3a8;
  undefined4 uStack_3a0;
  uint uStack_39c;
  double dStack_398;
  uint uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  double dStack_378;
  uint uStack_36c;
  double dStack_368;
  uint uStack_35c;
  double dStack_358;
  uint uStack_34c;
  undefined8 uStack_348;
  uint uStack_33c;
  undefined8 uStack_338;
  uint uStack_32c;
  undefined8 uStack_328;
  uint uStack_31c;
  double dStack_318;
  uint uStack_30c;
  double dStack_308;
  uint uStack_2fc;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  double dStack_2d8;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  uint uStack_29c;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
  double dStack_258;
  undefined8 uStack_250;
  double *pdStack_248;
  double *pdStack_240;
  double *pdStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  double *pdStack_218;
  double *pdStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  double *pdStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double dStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double dStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  longlong lStack_b8;
  longlong *plStack_a8;
  undefined8 uStack_a0;

  uStack_a0 = 0xfffffffffffffffe;
  puStack_108 = &UNK_141987280;
  uStack_100 = 0;
  uStack_110 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_110;
  uStack_36c = 0xffffff;
  dStack_378 = 0.0;
  uStack_35c = 0xffffff;
  dStack_368 = 0.0;
  uStack_34c = 0xffffff;
  dStack_358 = 0.0;
  uStack_33c = 0xffffff;
  uStack_348 = 0;
  uStack_32c = 0xffffff;
  uStack_338 = 0;
  uStack_31c = 0xffffff;
  uStack_328 = 0;
  uStack_30c = 0xffffff;
  dStack_318 = 0.0;
  uStack_2fc = 0xffffff;
  dStack_308 = 0.0;
  uStack_2ec = 0xffffff;
  uStack_2f8 = 0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_2cc = 0xffffff;
  dStack_2d8 = 0.0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  plRam0000000142182d90 = param_1;
  uStack_e0 = param_2;
  plStack_a8 = param_1;
  uVar7 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885a);
  uStack_15c = 0xffffff;
  dStack_168 = 0.0;
  uStack_17c = 0xffffff;
  dStack_188 = 0.0;
  pdStack_5f0 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a4f);
  uStack_4f8 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a4b);
  uStack_5d4 = 0xffffff;
  uStack_5e0 = 0;
  uStack_5c4 = 0xffffff;
  uStack_5d0 = 0;
  pdVar8 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a48);
  uStack_4a4 = 0xffffff;
  uStack_4b0 = 0;
  uStack_494 = 0xffffff;
  uStack_4a0 = 0;
  uStack_5b4 = 0xffffff;
  uStack_5c0 = 0;
  uStack_5a4 = 0xffffff;
  uStack_5b0 = 0;
  uStack_594 = 0xffffff;
  uStack_5a0 = 0;
  uStack_584 = 0xffffff;
  uStack_590 = 0;
  uStack_574 = 0xffffff;
  uStack_580 = 0;
  uStack_564 = 0xffffff;
  uStack_570 = 0;
  uStack_404 = 0xffffff;
  dStack_410 = 0.0;
  uStack_484 = 0xffffff;
  uStack_490 = 0;
  uStack_554 = 0xffffff;
  uStack_560 = 0;
  uStack_544 = 0xffffff;
  uStack_550 = 0;
  uStack_534 = 0xffffff;
  uStack_540 = 0;
  uStack_524 = 0xffffff;
  uStack_530 = 0;
  uStack_3ac = 0xffffff;
  dStack_3b8 = 0.0;
  uStack_39c = 0xffffff;
  dStack_3a8 = 0.0;
  uStack_38c = 0xffffff;
  dStack_398 = 0.0;
  uStack_4e4 = 0xffffff;
  uStack_4f0 = 0;
  uStack_3f4 = 0xffffff;
  uStack_400 = 0;
  uStack_3e4 = 0xffffff;
  uStack_3f0 = 0;
  uStack_414 = 0xffffff;
  uStack_420 = 0;
  uStack_474 = 0xffffff;
  uStack_480 = 0;
  uStack_464 = 0xffffff;
  uStack_470 = 0;
  uStack_454 = 0xffffff;
  uStack_460 = 0;
  uStack_514 = 0xffffff;
  uStack_520 = 0;
  uStack_504 = 0xffffff;
  uStack_510 = 0;
  uStack_444 = 0xffffff;
  uStack_450 = 0;
  pdVar9 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a50);
  pdVar10 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a51);
  pdStack_5e8 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a53);
  pdVar11 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a4e);
  uStack_4d4 = 0xffffff;
  dStack_4e0 = 0.0;
  uStack_4c4 = 0xffffff;
  dStack_4d0 = 0.0;
  uStack_500 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18998);
  uStack_d0._4_4_ = 0xffffff;
  uStack_d8 = 0;
  uStack_140 = CONCAT44(0xffffff,(undefined4)uStack_140);
  uStack_148 = 0;
  uStack_190 = CONCAT44(0xffffff,(undefined4)uStack_190);
  uStack_198 = 0;
  uStack_380 = CONCAT44(0xffffff,(undefined4)uStack_380);
  uStack_388 = 0;
  uStack_438 = CONCAT44(0xffffff,(undefined4)uStack_438);
  uStack_440 = 0;
  uStack_66c = 0xffffff;
  uStack_678 = 0;
  uStack_65c = 0xffffff;
  uStack_668 = 0;
  uStack_64c = 0xffffff;
  uStack_658 = 0;
  uStack_63c = 0xffffff;
  uStack_648 = 0;
  uStack_62c = 0xffffff;
  uStack_638 = 0;
  uStack_61c = 0xffffff;
  uStack_628 = 0;
  uStack_60c = 0xffffff;
  uStack_618 = 0;
  uStack_100 = 1;
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18c4a);
  uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18dd1);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar13,uVar12);
  func_0x0001416a8c00(1);
  uStack_100 = 2;
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18c4b);
  uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18dd2);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar13,uVar12);
  func_0x0001416a8c00(1);
  uStack_100 = 3;
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18c4c);
  uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18dd3);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar13,uVar12);
  func_0x0001416a8c00(1);
  uStack_3d0 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
  cVar2 = FUN_1416927d0(uStack_3d0);
  uVar6 = (undefined4)(in_stack_fffffffffffff958 >> 0x20);
  if (cVar2 != '\0') {
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0._0_4_ = 0;
    uStack_d0._4_4_ = 5;
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18e26);
    FUN_1400019a0(&dStack_378,uVar12);
    ppdVar26 = &pdStack_248;
    in_stack_fffffffffffff958 = CONCAT44(uVar6,uRam00000001420da230);
    pdStack_248 = &dStack_378;
    uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,in_stack_fffffffffffff958,ppdVar26);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18836);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18df5);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 == 0) {
          uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b8c);
          uStack_bc = 0;
          dStack_c8 = 1.0;
          iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
          if (iVar4 == 0) {
            uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x188b9);
            uStack_bc = 0;
            dStack_c8 = 1.0;
            iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
            if (iVar4 == 0) {
              uStack_100 = 6;
              uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18c4a);
              FUN_1416a8cb0(plStack_a8);
              FUN_1400019a0(uVar12,uVar7);
              func_0x0001416a8c00(1);
              uStack_100 = 7;
              uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18c4b);
              uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
              in_stack_fffffffffffff958 = in_stack_fffffffffffff958 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,
                            in_stack_fffffffffffff958,uVar18);
              FUN_1416a8cb0(plStack_a8);
              FUN_1400019a0(uVar7,&dStack_168);
              func_0x0001416a8c00(1);
              uStack_100 = 8;
              uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18c4c);
              in_stack_fffffffffffff958 = in_stack_fffffffffffff958 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                            in_stack_fffffffffffff958,uVar18 & 0xffffffffffffff00);
              FUN_1416a8cb0(plStack_a8);
              FUN_1400019a0(uVar7,&dStack_188);
              func_0x0001416a8c00(1);
            }
          }
        }
      }
    }
  }
  uVar6 = (undefined4)(in_stack_fffffffffffff958 >> 0x20);
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1886c);
  cVar2 = FUN_1416927d0(uVar7);
  if (cVar2 != '\0') {
    uStack_100 = 0xb;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18df5);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0x3ff0000000000000;
  }
  uStack_100 = 0xd;
  pdVar15 = (double *)(**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a2e);
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18ca1);
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18771);
  uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d66);
  uStack_f0._4_4_ = *(uint *)((longlong)pdVar15 + 0xc);
  uStack_f0._0_4_ = *(undefined4 *)(pdVar15 + 1);
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
    dStack_f8 = *pdVar15;
  }
  else {
    FUN_1404de250(&dStack_f8,pdVar15);
  }
  FUN_140003ca0(&dStack_f8,uVar7);
  uStack_bc = uStack_f0._4_4_;
  uStack_c0 = (undefined4)uStack_f0;
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
    dStack_c8 = dStack_f8;
  }
  else {
    FUN_1404de250(&dStack_c8,&dStack_f8);
  }
  FUN_140003ca0(&dStack_c8,uVar12);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar13,&dStack_c8);
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_c8);
  }
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f8);
  }
  func_0x0001416a8c00(1);
  uStack_100 = 0x12;
  puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b3f);
  if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar14);
  }
  *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
  *puVar14 = 0xbff0000000000000;
  uStack_100 = 0x13;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a55);
  FUN_1400019a0(&dStack_378,pdStack_5f0);
  pdStack_248 = &dStack_378;
  uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,CONCAT44(uVar6,uRam00000001420da6d0),
                         &pdStack_248);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar7,uVar12);
  func_0x0001416a8c00(1);
  uStack_100 = 0x14;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  pdVar15 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18837);
  puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
  FUN_1400019a0(&dStack_378,pdVar15);
  pdStack_248 = &dStack_378;
  FUN_1400019a0(&dStack_368,puStack_118);
  pdStack_240 = &dStack_368;
  FUN_140002730(&dStack_358,0x1420b69d8);
  pdStack_238 = &dStack_358;
  uVar7 = FUN_1400b9c80(plStack_a8,uStack_e0,&uStack_d8,3,&pdStack_248);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(pdVar15,uVar7);
  func_0x0001416a8c00(1);
  uStack_f0._4_4_ = *(uint *)((longlong)pdVar15 + 0xc);
  uStack_f0._0_4_ = *(undefined4 *)(pdVar15 + 1);
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
    dStack_f8 = *pdVar15;
  }
  else {
    FUN_1404de250(&dStack_f8,pdVar15);
  }
  uVar7 = _UNK_141986c38;
  FUN_140003f30(&dStack_f8,_UNK_141986c38);
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(&dStack_f8,&dStack_c8,uRam00000001420f6b08,1);
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f8);
  }
  if (0 < iVar4) {
    uStack_100 = 0x15;
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18837);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18df5);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
  }
  uStack_100 = 0x16;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18c0e);
  uStack_5f8 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189cb);
  FUN_1400019a0(&dStack_378,uVar12);
  pdStack_248 = &dStack_378;
  FUN_1400019a0(&dStack_368,uStack_5f8);
  pdStack_240 = &dStack_368;
  FUN_140002730(&dStack_358,0x1420b69e8);
  pdStack_238 = &dStack_358;
  ppdVar26 = &pdStack_248;
  uVar13 = FUN_1400b9c80(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
  uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar12,uVar13);
  func_0x0001416a8c00(1);
  uStack_100 = 0x17;
  puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d93);
  if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar14);
  }
  *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
  *puVar14 = 0;
  uStack_100 = 0x18;
  puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
  if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar14);
  }
  *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
  *puVar14 = 0xc010000000000000;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1899f);
  FUN_1400019a0(&dStack_378,uVar12);
  pdStack_248 = &dStack_378;
  ppdVar27 = &pdStack_248;
  ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da4b0);
  uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
  cVar2 = FUN_1416927d0(uVar12);
  if (cVar2 != '\0') {
    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    uStack_148 = 0;
    uStack_140 = 0x500000000;
    dStack_f8 = 0.0;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
    pdVar15 = &dStack_f8;
    FUN_1416d0010(0x4f,0x18963,0x80000000,pdVar15,uVar18,(ulonglong)ppdVar27 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar18 >> 0x20);
    if (((uStack_f0._4_4_ & 0xffffff) == 2) && (dStack_f8 != 0.0)) {
      func_0x0001416ba910();
      iVar4 = func_0x0001416ba8f0(dStack_f8);
      if (iVar4 < 4) {
        uVar5 = func_0x0001416ba8f0(dStack_f8);
        FUN_1416ab080(&UNK_141981ee8,3,uVar5);
        pdVar15 = (double *)0x0;
        uVar1 = uRam000000000000000c;
        goto joined_r0x0001404cd96c;
      }
      pdVar15 = (double *)func_0x0001416ba8e0(dStack_f8,3);
      if ((*(uint *)((longlong)pdVar15 + 0xc) & 0xffffff) == 2) goto code_r0x0001404cd96e;
code_r0x0001404cd9c2:
      FUN_1416ab080(&UNK_141981f1a);
    }
    else {
      FUN_1416ab080(&UNK_141981f1a);
      uVar1 = uStack_f0._4_4_;
joined_r0x0001404cd96c:
      if ((uVar1 & 0xffffff) != 2) goto code_r0x0001404cd9c2;
code_r0x0001404cd96e:
      if (*pdVar15 == 0.0) goto code_r0x0001404cd9c2;
      func_0x0001416ba910();
      iVar4 = func_0x0001416ba8f0(*pdVar15);
      if (iVar4 < 1) {
        uVar5 = func_0x0001416ba8f0(*pdVar15);
        pdVar15 = (double *)0x0;
        FUN_1416ab080(&UNK_141981ee8,0,uVar5);
      }
      else {
        pdVar15 = (double *)func_0x0001416ba8e0(*pdVar15,0);
      }
    }
    FUN_1400019a0(&dStack_f8,pdVar15);
    FUN_1400019a0(&dStack_368,&dStack_f8);
    pdStack_240 = &dStack_368;
    ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da4b0);
    ppdVar27 = &pdStack_240;
    uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_148,1,ppdVar26,&pdStack_240);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uStack_100 = 0x1e;
      puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18d82);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 != 0) goto code_r0x0001404cdf69;
        if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_198);
        }
        uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
        uStack_198 = 0;
        uStack_190 = 0x500000000;
        FUN_1400019a0(&dStack_358,uStack_4f8);
        pdStack_238 = &dStack_358;
        ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da6d0);
        ppdVar27 = &pdStack_238;
        uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_198,1,ppdVar26,&pdStack_238);
        cVar2 = FUN_1416927d0(uVar12);
        if (cVar2 == '\0') goto code_r0x0001404cdf69;
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18d83);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 != 0) goto code_r0x0001404cdf69;
        uStack_100 = 0x1f;
        puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d83);
        if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar14);
        }
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        *puVar14 = 0x3ff0000000000000;
      }
      else {
code_r0x0001404cdf69:
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18d82);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 == 0) {
          if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_d8);
          }
          uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
          uStack_d8 = 0;
          uStack_d0 = 0x500000000;
          FUN_1400019a0(&dStack_378,uStack_4f8);
          ppdVar27 = &pdStack_248;
          ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da6d0);
          pdStack_248 = &dStack_378;
          uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
          cVar2 = FUN_1416927d0(uVar12);
          if (cVar2 != '\0') {
            uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d83);
            uStack_bc = 0;
            dStack_c8 = 1.0;
            iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
            if (iVar4 == 0) {
              uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18d84);
              uStack_bc = 0;
              dStack_c8 = 2.0;
              iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,1);
              if (0 < iVar4) {
                uStack_100 = 0x23;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d82);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0x3ff0000000000000;
                uStack_100 = 0x24;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d83);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0;
                uStack_100 = 0x25;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d84);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0;
                puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
                uStack_bc = 0;
                dStack_c8 = 0.0;
                iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,0);
                if (iVar4 == 0) {
                  uStack_100 = 0x26;
                  puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
                  if ((0x46U >> (*(uint *)((longlong)puStack_118 + 0xc) & 0x1f) & 1) != 0) {
                    FUN_140001b50(puStack_118);
                  }
                  *(undefined4 *)((longlong)puStack_118 + 0xc) = 0;
                  *puStack_118 = 0x3ff0000000000000;
                }
              }
            }
          }
        }
      }
      uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d84);
      uStack_bc = 0;
      dStack_c8 = 10.0;
      iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,1);
      if (-1 < iVar4) {
        uStack_100 = 0x2a;
        puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d82);
        if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar14);
        }
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        *puVar14 = 0x3ff0000000000000;
        uStack_100 = 0x2b;
        puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d83);
        if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar14);
        }
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        *puVar14 = 0;
        uStack_100 = 0x2c;
        puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d84);
        if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar14);
        }
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        *puVar14 = 0;
        puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 == 0) {
          uStack_100 = 0x2d;
          puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
          if ((0x46U >> (*(uint *)((longlong)puStack_118 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puStack_118);
          }
          *(undefined4 *)((longlong)puStack_118 + 0xc) = 0;
          *puStack_118 = 0x3ff0000000000000;
        }
      }
    }
  }
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186e7);
  cVar2 = FUN_1416927d0(uVar12);
  if (cVar2 != '\0') {
    puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18df5);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uStack_100 = 0x33;
        uVar13 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186f0);
        uStack_bc = 0;
        dStack_c8 = -4.0;
        uVar12 = uRam00000001420f6b08;
        iVar4 = FUN_1416d9df0(uVar13,&dStack_c8,uRam00000001420f6b08,0);
        if (iVar4 == 0) {
          uStack_100 = 0x33;
          iVar4 = func_0x0001416f82f0(plStack_a8,uStack_e0,0x20d);
          if (0 < iVar4) {
            uStack_100 = 0x35;
            if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_d8);
            }
            uStack_d8 = 0;
            uStack_d0 = 0x500000000;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
            uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18908);
            uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
            uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,
                          uVar19 & 0xffffffffffffff00);
            uVar6 = (undefined4)(uVar18 >> 0x20);
            uStack_f0._4_4_ = 0;
            dStack_f8 = 8.0;
            FUN_140001fe0(&dStack_f8,uVar12);
            uStack_bc = uStack_15c;
            uStack_c0 = uStack_160;
            if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
              dStack_c8 = dStack_168;
            }
            else {
              FUN_1404de250(&dStack_c8,&dStack_168);
            }
            FUN_140003ca0(&dStack_c8,&dStack_f8);
            FUN_1400019a0(&dStack_378,&dStack_c8);
            if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_c8);
            }
            if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_f8);
            }
            pdStack_248 = &dStack_378;
            FUN_1400019a0(&dStack_368,&dStack_188);
            pdStack_240 = &dStack_368;
            FUN_140002730(&dStack_358,0x1420b69f8);
            pdStack_238 = &dStack_358;
            ppdVar26 = &pdStack_248;
            uVar18 = CONCAT44(uVar6,uRam00000001420dacf0);
            uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,3,uVar18,ppdVar26);
            FUN_1416a8cb0(plStack_a8);
            FUN_1400019a0(uVar7,uVar12);
            func_0x0001416a8c00(1);
            if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_d8);
            }
            uStack_d8 = 0;
            uStack_d0 = 0x500000000;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
            uVar19 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
            uVar18 = uVar18 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,
                          uVar19 & 0xffffffffffffff00);
            uVar6 = (undefined4)(uVar18 >> 0x20);
            FUN_1416cfc30(uVar7,uRam00000001420d58e8,0x80000000,&uStack_5e0);
            FUN_1416cfc30(uVar7,uRam00000001420d58f8,0x80000000,&uStack_5d0);
            FUN_1400019a0(&dStack_378,&dStack_168);
            pdStack_248 = &dStack_378;
            FUN_1400019a0(&dStack_368,&dStack_188);
            pdStack_240 = &dStack_368;
            FUN_1400019a0(&dStack_358,&uStack_5e0);
            pdStack_238 = &dStack_358;
            FUN_1400019a0(&uStack_348,&uStack_5d0);
            ppdVar27 = &pdStack_248;
            ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da150);
            puStack_230 = &uStack_348;
            uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,4,ppdVar26,ppdVar27);
            uStack_bc = 0;
            dStack_c8 = 29.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
            if ((iVar4 != -2) && (iVar4 < 0)) {
              uStack_100 = 0x36;
              puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d93);
              if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar14);
              }
              *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
              *puVar14 = 0x3ff0000000000000;
            }
          }
          uStack_100 = 0x38;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189be);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          pdVar15 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
          if ((*(uint *)((longlong)pdVar15 + 0xc) & 0xffffff) == 0) {
            dVar25 = *pdVar15;
          }
          else {
            dVar25 = (double)FUN_1416940c0(pdVar15);
          }
          cVar2 = FUN_1416f8280(plStack_a8,uStack_e0,(longlong)dVar25);
          if (cVar2 != '\0') {
            uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189a3);
            uStack_bc = 0;
            dStack_c8 = 0.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
            if (0 < iVar4) {
              uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189a7);
              uStack_bc = 0;
              dStack_c8 = 0.0;
              iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
              if (iVar4 == 0) {
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d93);
                cVar2 = FUN_1416927d0(uVar7);
                if (cVar2 != '\0') {
                  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                  uStack_bc = 0;
                  dStack_c8 = -4.0;
                  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
                  if (iVar4 != 0) {
                    uStack_100 = 0x39;
                    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
                      dVar25 = *pdVar8;
                    }
                    else {
                      dVar25 = (double)FUN_1416940c0(pdVar8);
                    }
                    cVar2 = FUN_1417099d0((longlong)dVar25);
                    if (cVar2 != '\0') {
                      uStack_100 = 0x3a;
                      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_d8);
                      }
                      uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
                      uStack_d8 = 0;
                      uStack_d0 = 0x500000000;
                      FUN_1400019a0(&dStack_378,pdVar8);
                      ppdVar27 = &pdStack_248;
                      ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da6d0);
                      pdStack_248 = &dStack_378;
                      uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
                      cVar2 = FUN_1416927d0(uVar7);
                      if (cVar2 != '\0') {
                        uStack_100 = 0x3c;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        if ((0x46U >> (uStack_4a4 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_4b0);
                        }
                        uStack_4a4 = 0;
                        uStack_4b0 = 0;
                        FUN_1416d0720(uVar7,0x18705,0x80000000,&uStack_4b0);
                        uStack_100 = 0x3d;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        if ((0x46U >> (uStack_494 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_4a0);
                        }
                        uStack_494 = 0;
                        uStack_4a0 = 0x3ff0000000000000;
                        FUN_1416d0720(uVar7,0x18743,0x80000000,&uStack_4a0);
                        uStack_100 = 0x3e;
                        puVar14 = (undefined8 *)
                                  (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fc);
                        if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                          FUN_140001b50(puVar14);
                        }
                        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                        *puVar14 = 0x3ff0000000000000;
                        uStack_100 = 0x3f;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fd);
                        FUN_1416cfc30(uVar7,uRam00000001420d58e8,0x80000000,&uStack_5c0);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar12,&uStack_5c0);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x40;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fe);
                        FUN_1416cfc30(uVar7,uRam00000001420d58f8,0x80000000,&uStack_5b0);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar12,&uStack_5b0);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x41;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186f0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        FUN_1416cfc30(uVar12,uRam00000001420d5a28,0x80000000,&uStack_5a0);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar7,&uStack_5a0);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x42;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186f1);
                        FUN_1416cfc30(uVar7,uRam00000001420d59e8,0x80000000,&uStack_590);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar12,&uStack_590);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x43;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186ea);
                        uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                        uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                        FUN_1416cfeb0(uVar7,0x187b4,0x80000000,&uStack_580,uVar18,uVar19);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar12,&uStack_580);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x44;
                        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b0);
                        uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186e9);
                        uVar19 = uVar19 & 0xffffffffffffff00;
                        uVar18 = uVar18 & 0xffffffffffffff00;
                        FUN_1416cfeb0(uVar7,0x1877f,0x80000000,&uStack_570,uVar18,uVar19);
                        FUN_1416a8cb0(plStack_a8);
                        FUN_1400019a0(uVar12,&uStack_570);
                        func_0x0001416a8c00(1);
                        uStack_100 = 0x45;
                        if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_d8);
                        }
                        uStack_d8 = 0;
                        uStack_d0 = 0x500000000;
                        uVar19 = uVar19 & 0xffffffffffffff00;
                        uVar18 = uVar18 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,
                                      uVar19);
                        ppdVar27 = (double **)(uVar19 & 0xffffffffffffff00);
                        FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                                      uVar18 & 0xffffffffffffff00,ppdVar27);
                        FUN_140002730(&dStack_378,0x1420b6a08);
                        pdStack_248 = &dStack_378;
                        FUN_140002730(&dStack_368,0x1420b6a18);
                        pdStack_240 = &dStack_368;
                        FUN_140002730(&dStack_358,0x142180348);
                        pdStack_238 = &dStack_358;
                        FUN_140002730(&uStack_348,0x1420b6a28);
                        puStack_230 = &uStack_348;
                        FUN_140002730(&uStack_338,0x1420b6a38);
                        puStack_228 = &uStack_338;
                        FUN_140002730(&uStack_328,0x142180348);
                        puStack_220 = &uStack_328;
                        FUN_1400019a0(&dStack_318,&dStack_168);
                        pdStack_218 = &dStack_318;
                        FUN_1400019a0(&dStack_308,&dStack_188);
                        ppdVar26 = &pdStack_248;
                        pdStack_210 = &dStack_308;
                        FUN_1400d4470(plStack_a8,uStack_e0,&uStack_d8,8,ppdVar26);
                        uStack_100 = 0x46;
                        plRam0000000142182d90 = (longlong *)0x28a91;
                        plVar20 = (longlong *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d2e);
                        FUN_1416a8cb0(plStack_a8);
                        puVar14 = (undefined8 *)FUN_1416924a0(plVar20,0);
                        FUN_1416a8cb0(*plVar20);
                        uVar7 = FUN_1416924a0(puVar14,2);
                        FUN_1416a8cb0(*puVar14);
                        FUN_140001c50(uVar7,1);
                        func_0x0001416a8c00(3);
                        if (((*(uint *)((longlong)plVar20 + 0xc) & 0xffffff) == 2) &&
                           (*plVar20 != 0)) {
                          func_0x0001416ba910();
                          iVar4 = func_0x0001416ba8f0(*plVar20);
                          if (iVar4 < 1) {
                            uVar6 = func_0x0001416ba8f0(*plVar20);
                            plVar20 = (longlong *)0x0;
                            FUN_1416ab080(&UNK_141981ee8,0,uVar6);
                            goto code_r0x0001404d69bb;
                          }
                          plVar20 = (longlong *)func_0x0001416ba8e0(*plVar20,0);
                          if ((*(uint *)((longlong)plVar20 + 0xc) & 0xffffff) == 2)
                          goto code_r0x0001404d69c8;
code_r0x0001404d69f8:
                          FUN_1416ab080(&UNK_141981f1a);
                        }
                        else {
                          FUN_1416ab080(&UNK_141981f1a);
code_r0x0001404d69bb:
                          if ((*(uint *)((longlong)plVar20 + 0xc) & 0xffffff) != 2)
                          goto code_r0x0001404d69f8;
code_r0x0001404d69c8:
                          if (*plVar20 == 0) goto code_r0x0001404d69f8;
                          func_0x0001416ba910();
                          iVar4 = func_0x0001416ba8f0(*plVar20);
                          if (iVar4 < 3) {
                            uVar6 = func_0x0001416ba8f0(*plVar20);
                            FUN_1416ab080(&UNK_141981ee8,2,uVar6);
                            plVar20 = (longlong *)0x0;
                          }
                          else {
                            plVar20 = (longlong *)func_0x0001416ba8e0(*plVar20,2);
                          }
                        }
                        uStack_bc = 0;
                        dStack_c8 = 1.0;
                        iVar4 = FUN_1416d9df0(plVar20,&dStack_c8,uRam00000001420f6b08,0);
                        if (iVar4 == 0) {
                          uStack_100 = 0x47;
                          if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_d8);
                          }
                          uStack_d8 = 0;
                          uStack_d0 = 0x500000000;
                          (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d2e);
                          uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                          uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,
                                        uVar18,uVar19);
                          uVar18 = uVar18 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                                        uVar18,uVar19 & 0xffffffffffffff00);
                          uVar6 = (undefined4)(uVar18 >> 0x20);
                          FUN_1400019a0(&dStack_378,&dStack_168);
                          pdStack_248 = &dStack_378;
                          FUN_1400019a0(&dStack_368,&dStack_188);
                          pdStack_240 = &dStack_368;
                          FUN_140002730(&dStack_358,0x1420b6a48);
                          pdStack_238 = &dStack_358;
                          FUN_140002730(&uStack_348,0x1420b6a58);
                          ppdVar27 = &pdStack_248;
                          ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da400);
                          puStack_230 = &uStack_348;
                          FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,4,ppdVar26,ppdVar27);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uStack_100 = 0x4c;
          iVar4 = func_0x0001416f82f0(plStack_a8,uStack_e0,0x43);
          if (iVar4 < 1) {
            uStack_100 = 0x4c;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fc);
            uStack_bc = 0;
            dStack_c8 = 0.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
            if (iVar4 == 0) {
              uStack_100 = 0x4d;
              if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_d8);
              }
              uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
              uStack_d8 = 0;
              uStack_d0 = 0x500000000;
              FUN_1400019a0(&dStack_378,pdVar8);
              ppdVar27 = &pdStack_248;
              ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da6d0);
              pdStack_248 = &dStack_378;
              uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
              cVar2 = FUN_1416927d0(uVar7);
              if (cVar2 != '\0') {
                uStack_100 = 0x4f;
                if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_148);
                }
                uStack_148 = 0;
                uStack_140 = 0x500000000;
                uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
                uVar19 = uVar19 & 0xffffffffffffff00;
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,uVar19);
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d5a18,0x80000000,&dStack_410,uVar18,
                              uVar19 & 0xffffffffffffff00);
                uVar6 = (undefined4)(uVar18 >> 0x20);
                FUN_1400019a0(&dStack_368,&dStack_168);
                pdStack_240 = &dStack_368;
                FUN_1400019a0(&dStack_358,&dStack_188);
                pdStack_238 = &dStack_358;
                FUN_140017bd0(&dStack_c8,&dStack_410,1);
                FUN_1400019a0(&uStack_348,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                puStack_230 = &uStack_348;
                FUN_140002730(&uStack_338,0x1420b6a68);
                uVar12 = CONCAT44(uVar6,uRam00000001420da400);
                puStack_228 = &uStack_338;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_148,4,uVar12,&pdStack_240);
                uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
                FUN_1400019a0(&uStack_490,uVar7);
                uStack_100 = 0x50;
                pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186ea);
                uStack_bc = *(uint *)((longlong)pdVar8 + 0xc);
                uStack_c0 = *(undefined4 *)(pdVar8 + 1);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
                  dStack_c8 = *pdVar8;
                }
                else {
                  FUN_1404de250(&dStack_c8,pdVar8);
                }
                FUN_140001c50(&dStack_c8,3);
                FUN_1400019a0(&uStack_560,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                FUN_1416d0720(&uStack_490,0x18962,0x80000000,&uStack_560);
                uStack_100 = 0x51;
                pdVar15 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186e9);
                uStack_bc = *(uint *)((longlong)pdVar15 + 0xc);
                uStack_c0 = *(undefined4 *)(pdVar15 + 1);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
                  dStack_c8 = *pdVar15;
                }
                else {
                  FUN_1404de250(&dStack_c8,pdVar15);
                }
                FUN_140001c50(&dStack_c8,3);
                FUN_1400019a0(&uStack_550,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                FUN_1416d0720(&uStack_490,0x18961,0x80000000,&uStack_550);
                uStack_100 = 0x52;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uStack_f0 = pdVar8[1];
                if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) == 0) {
                  dStack_f8 = *pdVar8;
                }
                else {
                  FUN_1404de250(&dStack_f8,pdVar8);
                }
                FUN_140001c50(&dStack_f8,3);
                FUN_140004520(&dStack_c8,&dStack_f8,_UNK_141984518);
                FUN_1400019a0(&dStack_378,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_f8);
                }
                uVar12 = CONCAT44(uVar6,uRam00000001420da140);
                pdStack_248 = &dStack_378;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,uVar12,&pdStack_248);
                uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
                FUN_1400019a0(&uStack_540,uVar7);
                (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186ea);
                FUN_1416d0720(&uStack_490,0x187b4,0x80000000,&uStack_540);
                uStack_100 = 0x53;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uStack_f0._4_4_ = *(uint *)((longlong)pdVar15 + 0xc);
                uStack_f0._0_4_ = *(undefined4 *)(pdVar15 + 1);
                if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
                  dStack_f8 = *pdVar15;
                }
                else {
                  FUN_1404de250(&dStack_f8,pdVar15);
                }
                FUN_140001c50(&dStack_f8,3);
                FUN_140004520(&dStack_c8,&dStack_f8,_UNK_141984518);
                FUN_1400019a0(&dStack_378,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_f8);
                }
                ppdVar27 = &pdStack_248;
                ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da140);
                pdStack_248 = &dStack_378;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
                FUN_1400019a0(&uStack_530,uVar7);
                (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186e9);
                FUN_1416d0720(&uStack_490,0x1877f,0x80000000,&uStack_530);
              }
            }
          }
          else {
            uStack_100 = 0x58;
            if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
              dVar25 = *pdVar8;
            }
            else {
              dVar25 = (double)FUN_1416940c0(pdVar8);
            }
            cVar2 = FUN_1417099d0((longlong)dVar25);
            if (cVar2 == '\0') {
              uStack_100 = 0x61;
              cVar2 = FUN_1416f8280(plStack_a8,uStack_e0,0x43);
              if (cVar2 != '\0') {
                dStack_f8 = 0.0;
                uStack_f0._0_4_ = 0;
                uStack_f0._4_4_ = 0;
                ppdVar27 = (double **)((ulonglong)ppdVar27 & 0xffffffffffffff00);
                ppdVar26 = (double **)((ulonglong)ppdVar26 & 0xffffffffffffff00);
                FUN_1416d0010(0x43,0x1873b,0x80000000,&dStack_f8,ppdVar26,ppdVar27);
                uStack_bc = 0;
                dStack_c8 = 0.6666666666666666;
                iVar4 = FUN_1416d9df0(&dStack_f8,&dStack_c8,uRam00000001420f6b08,1);
                if ((iVar4 != -2) && (iVar4 < 0)) {
                  uStack_100 = 0x62;
                  uStack_f0._4_4_ = 0;
                  dStack_f8 = 67.0;
                  iVar4 = FUN_1416ab810(&dStack_c8,&plStack_a8,&uStack_e0,&dStack_f8);
                  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_f8);
                  }
                  if (0 < iVar4) {
                    do {
                      uStack_100 = 100;
                      FUN_1416f8210(plStack_a8,uStack_e0,0,0);
                      cVar2 = func_0x0001416abe60(&dStack_c8,&plStack_a8);
                    } while (cVar2 != '\0');
                  }
                  FUN_1416ab620(&dStack_c8,&plStack_a8,&uStack_e0);
                  if (lStack_b8 != 0) {
                    func_0x000141695b90();
                    lStack_b8 = 0;
                  }
                }
              }
              cVar2 = FUN_1416f8280(plStack_a8,uStack_e0,0x43);
              if (cVar2 != '\0') {
                uStack_100 = 0x69;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_148);
                }
                uStack_148 = 0;
                uStack_140 = 0x500000000;
                if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_198);
                }
                uStack_198 = 0;
                uStack_190 = 0x500000000;
                if ((0x46U >> (uStack_380._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_388);
                }
                uStack_388 = 0;
                uStack_380 = 0x500000000;
                if ((0x46U >> (uStack_438._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_440);
                }
                uStack_440 = 0;
                uStack_438 = 0x500000000;
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186f0);
                dStack_f8 = 0.0;
                uStack_f0._0_4_ = 0;
                uStack_f0._4_4_ = 0;
                uStack_158 = 0;
                uStack_150 = 0;
                dStack_258 = 0.0;
                uStack_250 = 0.0;
                dStack_1b8 = 0.0;
                uStack_1b0 = 0.0;
                uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                FUN_1416d0010(0x43,0x18e3b,0x80000000,&dStack_f8,uVar18,uVar19);
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416d0010(0x43,0x18e3d,0x80000000,&uStack_158,uVar18,uVar19 & 0xffffffffffffff00
                             );
                uVar6 = (undefined4)(uVar18 >> 0x20);
                FUN_1400019a0(&dStack_378,&dStack_f8);
                pdStack_248 = &dStack_378;
                FUN_1400019a0(&dStack_368,&uStack_158);
                pdStack_240 = &dStack_368;
                FUN_1416ab670(0x43,uRam00000001420d58e8,0x80000000,&uStack_400);
                ppdVar26 = &pdStack_248;
                uVar18 = CONCAT44(uVar6,uRam00000001420da0c0);
                uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_198,2,uVar18,ppdVar26);
                FUN_1400019a0(&dStack_358,uVar12);
                pdStack_238 = &dStack_358;
                FUN_1400019a0(&uStack_348,&uStack_400);
                puStack_230 = &uStack_348;
                uVar19 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416d0010(0x43,0x18e4b,0x80000000,&dStack_258,uVar18,uVar19);
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416d0010(0x43,0x18e4d,0x80000000,&dStack_1b8,uVar18,uVar19 & 0xffffffffffffff00
                             );
                uVar6 = (undefined4)(uVar18 >> 0x20);
                FUN_1400019a0(&uStack_338,&dStack_258);
                puStack_228 = &uStack_338;
                FUN_1400019a0(&uStack_328,&dStack_1b8);
                puStack_220 = &uStack_328;
                FUN_1416ab670(0x43,uRam00000001420d58f8,0x80000000,&uStack_3f0);
                ppuVar28 = &puStack_228;
                uVar18 = CONCAT44(uVar6,uRam00000001420da0c0);
                uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_440,2,uVar18,ppuVar28);
                FUN_1400019a0(&dStack_318,uVar12);
                pdStack_218 = &dStack_318;
                FUN_1400019a0(&dStack_308,&uStack_3f0);
                uVar18 = uVar18 & 0xffffffffffffff00;
                pdStack_210 = &dStack_308;
                FUN_1416cea80(plStack_a8,uRam00000001420d5a18,0x80000000,&dStack_410,uVar18,
                              (ulonglong)ppuVar28 & 0xffffffffffffff00);
                uVar13 = CONCAT44((int)(uVar18 >> 0x20),uRam00000001420da0c0);
                uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_148,2,uVar13,&pdStack_238);
                uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
                FUN_1400019a0(&uStack_2f8,uVar12);
                uVar13 = CONCAT44(uVar6,uRam00000001420da0c0);
                puStack_208 = &uStack_2f8;
                uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_388,2,uVar13,&pdStack_218);
                uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
                FUN_1400019a0(&uStack_2e8,uVar12);
                uStack_bc = uStack_404;
                uStack_c0 = uStack_408;
                puStack_200 = &uStack_2e8;
                if ((0x46U >> (uStack_404 & 0x1f) & 1) == 0) {
                  dStack_c8 = dStack_410;
                }
                else {
                  FUN_1404de250(&dStack_c8,&dStack_410);
                }
                FUN_140001c50(&dStack_c8,1);
                FUN_1400019a0(&dStack_2d8,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                pdStack_1f8 = &dStack_2d8;
                FUN_1400019a0(&uStack_2c8,uVar7);
                ppuVar28 = &puStack_208;
                uVar18 = CONCAT44(uVar6,uRam00000001420da400);
                puStack_1f0 = &uStack_2c8;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,4,uVar18,ppuVar28);
                FUN_1400019a0(&uStack_420,uVar7);
                uStack_100 = 0x6a;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uVar19 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
                uVar19 = uVar19 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                              uVar18 & 0xffffffffffffff00,uVar19);
                FUN_140002730(&dStack_378,0x1420b6a78);
                pdStack_248 = &dStack_378;
                FUN_140002730(&dStack_368,0x1420b6a18);
                pdStack_240 = &dStack_368;
                FUN_140002730(&dStack_358,0x142180348);
                pdStack_238 = &dStack_358;
                FUN_140002730(&uStack_348,0x1420b6a28);
                puStack_230 = &uStack_348;
                FUN_140002730(&uStack_338,0x1420b6a38);
                puStack_228 = &uStack_338;
                FUN_140002730(&uStack_328,0x142180348);
                puStack_220 = &uStack_328;
                FUN_1400019a0(&dStack_318,&dStack_168);
                pdStack_218 = &dStack_318;
                FUN_1400019a0(&dStack_308,&dStack_188);
                ppdVar26 = &pdStack_248;
                pdStack_210 = &dStack_308;
                FUN_1400d4470(plStack_a8,uStack_e0,&uStack_d8,8,ppdVar26);
                uStack_100 = 0x6f;
                if ((0x46U >> (uStack_474 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_480);
                }
                uStack_474 = 0;
                uStack_480 = 0x3ff0000000000000;
                FUN_1416d0720(&uStack_420,0x18757,0x80000000,&uStack_480);
                uStack_100 = 0x70;
                if ((0x46U >> (uStack_464 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_470);
                }
                uStack_464 = 0;
                uStack_470 = 0x3ff0000000000000;
                FUN_1416d0720(&uStack_420,0x18705,0x80000000,&uStack_470);
                uStack_100 = 0x71;
                if ((0x46U >> (uStack_454 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_460);
                }
                uStack_454 = 0;
                uStack_460 = 0;
                FUN_1416d0720(&uStack_420,0x18709,0x80000000,&uStack_460);
                uStack_100 = 0x73;
                dStack_128 = 0.0;
                uStack_120 = 0.0;
                uVar19 = uVar19 & 0xffffffffffffff00;
                uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                FUN_1416d0010(0x43,0x187b4,0x80000000,&dStack_128,uVar18,uVar19);
                FUN_140004520(&dStack_c8,&dStack_128,_UNK_141982c40);
                FUN_1400019a0(&uStack_520,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                FUN_1416d0720(&uStack_420,0x187b4,0x80000000,&uStack_520);
                uStack_100 = 0x74;
                uStack_178 = 0;
                uStack_170 = 0;
                ppdVar27 = (double **)(uVar19 & 0xffffffffffffff00);
                ppdVar26 = (double **)(uVar18 & 0xffffffffffffff00);
                FUN_1416d0010(0x43,0x1877f,0x80000000,&uStack_178,ppdVar26,ppdVar27);
                FUN_140004520(&dStack_c8,&uStack_178,_UNK_141982c40);
                FUN_1400019a0(&uStack_510,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                FUN_1416d0720(&uStack_420,0x1877f,0x80000000,&uStack_510);
                uStack_100 = 0x7a;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fc);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0x3ff0000000000000;
                uStack_100 = 0x7b;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186f0);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0xc010000000000000;
                uStack_100 = 0x7d;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186e8);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0;
                uStack_100 = 0x7e;
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fd);
                FUN_1416ab670(0x43,uRam00000001420d58e8,0x80000000,&uStack_400);
                FUN_1416a8cb0(plStack_a8);
                FUN_1400019a0(uVar7,&uStack_400);
                func_0x0001416a8c00(1);
                uStack_100 = 0x7f;
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186fe);
                FUN_1416ab670(0x43,uRam00000001420d58f8,0x80000000,&uStack_3f0);
                FUN_1416a8cb0(plStack_a8);
                FUN_1400019a0(uVar7,&uStack_3f0);
                func_0x0001416a8c00(1);
                uStack_100 = 0x80;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186ea);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0;
                uStack_100 = 0x81;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186e9);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0;
                uStack_100 = 0x82;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186f1);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0xc010000000000000;
                uStack_130 = (ulonglong)(uint)uStack_130;
                dStack_138 = 67.0;
                iVar4 = FUN_1416ab810(&dStack_c8,&plStack_a8,&uStack_e0,&dStack_138);
                if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_138);
                }
                if (0 < iVar4) {
                  do {
                    uStack_100 = 0x84;
                    FUN_1416f8210(plStack_a8,uStack_e0,0,0);
                    cVar2 = func_0x0001416abe60(&dStack_c8,&plStack_a8);
                  } while (cVar2 != '\0');
                }
                FUN_1416ab620(&dStack_c8,&plStack_a8,&uStack_e0);
                if (lStack_b8 != 0) {
                  func_0x000141695b90();
                  goto code_r0x0001404d59f2;
                }
              }
            }
            else {
              uStack_100 = 0x58;
              uStack_f0._4_4_ = 0;
              dStack_f8 = 67.0;
              iVar4 = FUN_1416ab810(&dStack_c8,&plStack_a8,&uStack_e0,&dStack_f8);
              if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_f8);
              }
              uVar13 = _UNK_141985620;
              if (0 < iVar4) {
                do {
                  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
                  uStack_100 = 0x5a;
                  dStack_f8 = 0.0;
                  uStack_f0._0_4_ = 0;
                  uStack_f0._4_4_ = 0;
                  uStack_158 = 0;
                  uStack_150 = 0;
                  dStack_258 = 0.0;
                  uStack_250 = 0.0;
                  dStack_1b8 = 0.0;
                  uStack_1b0 = 0.0;
                  uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                  uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                  FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19
                               );
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,uVar19
                               );
                  FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&dStack_3b8);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416d0010(0x40,0x18908,0x80000000,&dStack_f8,uVar18,uVar19);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416d0010(0x40,0x189cf,0x80000000,&uStack_158,uVar18,uVar19);
                  FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&dStack_3a8);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416d0010(0x40,0x18a59,0x80000000,&dStack_258,uVar18,uVar19);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416d0010(0x40,0x18a46,0x80000000,&dStack_1b8,uVar18,uVar19);
                  FUN_140001a50(&uStack_1a8,&dStack_1b8,7);
                  FUN_140001a50(&dStack_3e0,&dStack_258,7);
                  uStack_130._4_4_ = uStack_3d4;
                  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) == 0) {
                    dStack_138 = dStack_3e0;
                  }
                  else {
                    FUN_1404de250(&dStack_138,&dStack_3e0);
                  }
                  FUN_140003e00(&dStack_138,&uStack_1a8);
                  uStack_170 = uStack_170 & 0xffffffff;
                  uStack_178 = 0x4022000000000000;
                  FUN_140003ca0(&uStack_178,&dStack_138);
                  uStack_120 = (double)CONCAT44(uStack_39c,uStack_3a0);
                  if ((0x46U >> (uStack_39c & 0x1f) & 1) == 0) {
                    dStack_128 = dStack_3a8;
                  }
                  else {
                    FUN_1404de250(&dStack_128,&dStack_3a8);
                  }
                  FUN_140003e00(&dStack_128,&uStack_178);
                  dVar25 = dStack_128;
                  if (((ulonglong)uStack_120 & 0xffffff00000000) != 0) {
                    dVar25 = (double)FUN_1416940c0(&dStack_128);
                  }
                  FUN_140001a50(auStack_608,&uStack_158,5);
                  uStack_4b4 = 0;
                  uStack_4c0 = 0x4038000000000000;
                  FUN_140001fe0(&uStack_4c0,&dStack_f8);
                  uStack_3bc = uStack_3ac;
                  uStack_3c0 = uStack_3b0;
                  if ((0x46U >> (uStack_3ac & 0x1f) & 1) == 0) {
                    dStack_3c8 = dStack_3b8;
                  }
                  else {
                    FUN_1404de250(&dStack_3c8,&dStack_3b8);
                  }
                  FUN_140003ca0(&dStack_3c8,&uStack_4c0);
                  uStack_424 = uStack_3bc;
                  uStack_428 = uStack_3c0;
                  if ((0x46U >> (uStack_3bc & 0x1f) & 1) == 0) {
                    dStack_430 = dStack_3c8;
                  }
                  else {
                    FUN_1404de250(&dStack_430,&dStack_3c8);
                  }
                  FUN_140003ca0(&dStack_430,auStack_608);
                  if ((uStack_424 & 0xffffff) == 0) {
                    dVar22 = dStack_430;
                    if ((uStack_17c & 0xffffff) == 0) goto code_r0x0001404d0468;
code_r0x0001404d042a:
                    dVar23 = (double)FUN_1416940c0(&dStack_188);
                    if ((uStack_15c & 0xffffff) != 0) goto code_r0x0001404d0446;
code_r0x0001404d047c:
                    dVar24 = dStack_168;
                  }
                  else {
                    dVar22 = (double)FUN_1416940c0(&dStack_430);
                    if ((uStack_17c & 0xffffff) != 0) goto code_r0x0001404d042a;
code_r0x0001404d0468:
                    dVar23 = dStack_188;
                    if ((uStack_15c & 0xffffff) == 0) goto code_r0x0001404d047c;
code_r0x0001404d0446:
                    dVar24 = (double)FUN_1416940c0(&dStack_168);
                  }
                  uVar7 = CONCAT44(uVar6,(float)dVar23);
                  fVar21 = (float)FUN_1416cdb80((float)dVar24,uVar7,CONCAT44(uVar5,(float)dVar22),
                                                (float)dVar25);
                  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                  if ((0x46U >> (uStack_38c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_398);
                  }
                  uStack_38c = 0;
                  dStack_398 = (double)fVar21;
                  if ((0x46U >> (uStack_424 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_430);
                  }
                  if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_3c8);
                  }
                  if ((0x46U >> (uStack_4b4 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_4c0);
                  }
                  if ((0x46U >> (uStack_5fc & 0x1f) & 1) != 0) {
                    FUN_140001b50(auStack_608);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_178);
                  }
                  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_138);
                  }
                  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_3e0);
                  }
                  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1a8);
                  }
                  uStack_100 = 0x5b;
                  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_d8);
                  }
                  uStack_d8 = 0;
                  uStack_d0 = 0x500000000;
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19
                               );
                  uVar18 = uVar18 & 0xffffffffffffff00;
                  FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,
                                uVar19 & 0xffffffffffffff00);
                  uVar5 = (undefined4)(uVar18 >> 0x20);
                  FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&dStack_3b8);
                  FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&dStack_3a8);
                  FUN_1400019a0(&dStack_378,&dStack_168);
                  pdStack_248 = &dStack_378;
                  FUN_1400019a0(&dStack_368,&dStack_188);
                  pdStack_240 = &dStack_368;
                  FUN_140001a50(&uStack_178,&uStack_158,5);
                  uStack_1a0 = uStack_1a0 & 0xffffffff;
                  uStack_1a8 = 0x4038000000000000;
                  FUN_140001fe0(&uStack_1a8,&dStack_f8);
                  uStack_130._4_4_ = uStack_3ac;
                  if ((0x46U >> (uStack_3ac & 0x1f) & 1) == 0) {
                    dStack_138 = dStack_3b8;
                  }
                  else {
                    FUN_1404de250(&dStack_138,&dStack_3b8);
                  }
                  FUN_140003ca0(&dStack_138,&uStack_1a8);
                  uStack_120._4_4_ = uStack_130._4_4_;
                  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) == 0) {
                    dStack_128 = dStack_138;
                  }
                  else {
                    FUN_1404de250(&dStack_128,&dStack_138);
                  }
                  FUN_140003ca0(&dStack_128,&uStack_178);
                  FUN_1400019a0(&dStack_358,&dStack_128);
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_138);
                  }
                  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1a8);
                  }
                  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_178);
                  }
                  pdStack_238 = &dStack_358;
                  FUN_140001a50(&uStack_1a8,&dStack_1b8,7);
                  FUN_140001a50(&dStack_3e0,&dStack_258,7);
                  uStack_130 = CONCAT44(uStack_3d4,uStack_3d8);
                  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) == 0) {
                    dStack_138 = dStack_3e0;
                  }
                  else {
                    FUN_1404de250(&dStack_138,&dStack_3e0);
                  }
                  FUN_140003e00(&dStack_138,&uStack_1a8);
                  uStack_170 = uStack_170 & 0xffffffff;
                  uStack_178 = 0x4022000000000000;
                  FUN_140003ca0(&uStack_178,&dStack_138);
                  uStack_120 = (double)CONCAT44(uStack_39c,uStack_3a0);
                  if ((0x46U >> (uStack_39c & 0x1f) & 1) == 0) {
                    dStack_128 = dStack_3a8;
                  }
                  else {
                    FUN_1404de250(&dStack_128,&dStack_3a8);
                  }
                  FUN_140003e00(&dStack_128,&uStack_178);
                  FUN_1400019a0(&uStack_348,&dStack_128);
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_178);
                  }
                  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_138);
                  }
                  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_3e0);
                  }
                  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1a8);
                  }
                  puStack_230 = &uStack_348;
                  ppdVar27 = &pdStack_248;
                  uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,4,
                                        CONCAT44(uVar5,uRam00000001420da150),ppdVar27);
                  FUN_1400019a0(&uStack_4f0,uVar7);
                  uStack_100 = 0x5c;
                  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_d8);
                  }
                  uStack_d8 = 0;
                  uStack_d0 = 0x500000000;
                  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
                  FUN_1400019a0(&dStack_378,uVar7);
                  pdStack_248 = &dStack_378;
                  dVar25 = dStack_398;
                  if ((uStack_38c & 0xffffff) != 0) {
                    dVar25 = (double)FUN_1416940c0(&dStack_398);
                  }
                  FUN_140004520(&dStack_128,&uStack_4f0,uVar13);
                  dVar22 = dStack_128;
                  if (((ulonglong)uStack_120 & 0xffffff00000000) != 0) {
                    dVar22 = (double)FUN_1416940c0(&dStack_128);
                  }
                  uVar12 = CONCAT44(uVar6,(float)dVar25);
                  fVar21 = (float)FUN_1416cd800((float)dVar22,uVar12);
                  uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
                  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_368);
                  }
                  uStack_35c = 0;
                  dStack_368 = (double)fVar21;
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  pdStack_240 = &dStack_368;
                  FUN_140002730(&dStack_358,0x1420b69d8);
                  pdStack_238 = &dStack_358;
                  uVar12 = FUN_1400b9c80(plStack_a8,uStack_e0,&uStack_d8,3,&pdStack_248);
                  FUN_1416a8cb0(plStack_a8);
                  FUN_1400019a0(uVar7,uVar12);
                  func_0x0001416a8c00(1);
                  uStack_100 = 0x5d;
                  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_d8);
                  }
                  uStack_d8 = 0;
                  uStack_d0 = 0x500000000;
                  uVar16 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
                  FUN_1400019a0(&dStack_378,uVar16);
                  pdStack_248 = &dStack_378;
                  dVar25 = dStack_398;
                  if ((uStack_38c & 0xffffff) != 0) {
                    dVar25 = (double)FUN_1416940c0(&dStack_398);
                  }
                  uVar12 = uVar13;
                  FUN_140004520(&dStack_128,&uStack_4f0,uVar13);
                  dVar22 = dStack_128;
                  if (((ulonglong)uStack_120 & 0xffffff00000000) != 0) {
                    dVar22 = (double)FUN_1416940c0(&dStack_128);
                  }
                  uVar7 = CONCAT44(uVar6,(float)dVar25);
                  fVar21 = (float)FUN_1416cd880((float)dVar22,uVar7);
                  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_368);
                  }
                  uStack_35c = 0;
                  dStack_368 = (double)fVar21;
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  pdStack_240 = &dStack_368;
                  FUN_140002730(&dStack_358,0x1420b69d8);
                  pdStack_238 = &dStack_358;
                  ppdVar26 = &pdStack_248;
                  uVar17 = FUN_1400b9c80(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
                  FUN_1416a8cb0(plStack_a8);
                  FUN_1400019a0(uVar16,uVar17);
                  func_0x0001416a8c00(1);
                  cVar2 = func_0x0001416abe60(&dStack_c8,&plStack_a8,&uStack_e0);
                } while (cVar2 != '\0');
              }
              FUN_1416ab620(&dStack_c8,&plStack_a8,&uStack_e0);
              if (lStack_b8 != 0) {
                func_0x000141695b90();
code_r0x0001404d59f2:
                lStack_b8 = 0;
              }
            }
            cVar2 = FUN_1416f8280(plStack_a8,uStack_e0,0x43);
            if (cVar2 != '\0') {
              dStack_f8 = 0.0;
              uStack_f0._0_4_ = 0;
              uStack_f0._4_4_ = 0;
              ppdVar27 = (double **)((ulonglong)ppdVar27 & 0xffffffffffffff00);
              ppdVar26 = (double **)((ulonglong)ppdVar26 & 0xffffffffffffff00);
              FUN_1416d0010(0x43,0x1873b,0x80000000,&dStack_f8,ppdVar26,ppdVar27);
              uStack_bc = 0;
              dStack_c8 = 0.9;
              iVar4 = FUN_1416d9df0(&dStack_f8,&dStack_c8,uRam00000001420f6b08,1);
              if (0 < iVar4) {
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_148);
                }
                uStack_148 = 0;
                uStack_140 = 0x500000000;
                if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_198);
                }
                uStack_198 = 0;
                uStack_190 = 0x500000000;
                FUN_1416ab670(0x43,uRam00000001420d58e8,0x80000000,&uStack_400);
                uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
                uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
                FUN_1400019a0(&dStack_378,&uStack_400);
                pdStack_248 = &dStack_378;
                FUN_1400019a0(&dStack_368,&uStack_400);
                pdStack_240 = &dStack_368;
                FUN_1400019a0(&dStack_358,&dStack_168);
                pdStack_238 = &dStack_358;
                FUN_1416ab670(0x43,uRam00000001420d58f8,0x80000000,&uStack_3f0);
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,
                              uVar19 & 0xffffffffffffff00);
                uVar6 = (undefined4)(uVar18 >> 0x20);
                FUN_1400019a0(&uStack_348,&uStack_3f0);
                puStack_230 = &uStack_348;
                FUN_1400019a0(&uStack_338,&uStack_3f0);
                puStack_228 = &uStack_338;
                FUN_1400019a0(&uStack_328,&dStack_188);
                uVar12 = CONCAT44(uVar6,uRam00000001420da0c0);
                puStack_220 = &uStack_328;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_148,3,uVar12,&pdStack_248);
                uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
                FUN_1400019a0(&dStack_318,uVar7);
                uVar12 = CONCAT44(uVar6,uRam00000001420da0c0);
                pdStack_218 = &dStack_318;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_198,3,uVar12,&puStack_230);
                uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
                FUN_1400019a0(&dStack_308,uVar7);
                pdStack_210 = &dStack_308;
                FUN_1400019a0(&uStack_2f8,&dStack_168);
                puStack_208 = &uStack_2f8;
                FUN_1400019a0(&uStack_2e8,&dStack_188);
                ppdVar27 = &pdStack_218;
                ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da150);
                puStack_200 = &uStack_2e8;
                uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,4,ppdVar26,ppdVar27);
                uStack_bc = 0;
                dStack_c8 = 32.0;
                iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
                if (0 < iVar4) {
                  uStack_100 = 0x88;
                  uStack_f0._4_4_ = 0;
                  dStack_f8 = 67.0;
                  iVar4 = FUN_1416ab810(&dStack_c8,&plStack_a8,&uStack_e0,&dStack_f8);
                  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_f8);
                  }
                  if (0 < iVar4) {
                    do {
                      uStack_100 = 0x8a;
                      FUN_1416f8210(plStack_a8,uStack_e0,0,0);
                      cVar2 = func_0x0001416abe60(&dStack_c8,&plStack_a8);
                    } while (cVar2 != '\0');
                  }
                  FUN_1416ab620(&dStack_c8,&plStack_a8,&uStack_e0);
                  if (lStack_b8 != 0) {
                    func_0x000141695b90();
                    lStack_b8 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uStack_100 = 0x91;
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189be);
  cVar2 = FUN_1416927d0(uVar7);
  if (cVar2 == '\0') {
code_r0x0001404cdb96:
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b3);
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 != '\0') {
      uStack_100 = 0x9b;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a3);
      uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189af);
      FUN_1400019a0(&dStack_378,uVar7);
      pdStack_248 = &dStack_378;
      FUN_1400019a0(&dStack_368,uVar12);
      pdStack_240 = &dStack_368;
      FUN_140002730(&dStack_358,0x1420b6a98);
      pdStack_238 = &dStack_358;
      ppdVar26 = &pdStack_248;
      uVar12 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
      FUN_1416a8cb0(plStack_a8);
      FUN_1400019a0(uVar7,uVar12);
      func_0x0001416a8c00(1);
      uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a7);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a3);
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189af);
        FUN_140004520(&dStack_c8,uVar12,_UNK_141982c40);
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_c8);
        }
        if (-1 < iVar4) {
          uStack_100 = 0x9d;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a7);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
        }
      }
    }
  }
  else {
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189a7);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404cdb96;
    uStack_100 = 0x92;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a3);
    FUN_1400019a0(&dStack_378,uVar7);
    pdStack_248 = &dStack_378;
    FUN_140002730(&dStack_368,0x142180348);
    pdStack_240 = &dStack_368;
    FUN_140002730(&dStack_358,0x1420b6a88);
    pdStack_238 = &dStack_358;
    ppdVar26 = &pdStack_248;
    uVar12 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(uVar7,uVar12);
    func_0x0001416a8c00(1);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
    if ((iVar4 != -2) && (iVar4 < 1)) {
      uStack_100 = 0x94;
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a3);
      puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189a7);
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar14);
      }
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      *puVar14 = 0x3ff0000000000000;
    }
    uStack_100 = 0x96;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189b3);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0x97;
    plRam0000000142182d90 = (longlong *)0x109fa;
    if ((0x46U >> (uStack_444 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_450);
    }
    uStack_444 = 0;
    uStack_450 = 0x405e000000000000;
    FUN_1416cfae0(plStack_a8,uRam00000001420d5a48,1,&uStack_450);
  }
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189cc);
  FUN_140004520(&dStack_c8,uVar7,_UNK_141986ad0);
  iVar4 = FUN_1416d9df0(uStack_5f8,&dStack_c8,uRam00000001420f6b08,1);
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_c8);
  }
  if (iVar4 != -2 && iVar4 < 1) {
    uStack_100 = 0xa1;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cb);
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189cc);
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18ad8);
    FUN_1400019a0(&dStack_378,pdVar8);
    pdStack_248 = &dStack_378;
    FUN_1400019a0(&dStack_368,uVar7);
    pdStack_240 = &dStack_368;
    uStack_120 = pdVar8[1];
    if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) == 0) {
      dStack_128 = *pdVar8;
    }
    else {
      FUN_1404de250(&dStack_128,pdVar8);
    }
    FUN_140004620(&dStack_128,uVar7);
    uStack_1b0 = uStack_120;
    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
      dStack_1b8 = dStack_128;
    }
    else {
      FUN_1404de250(&dStack_1b8,&dStack_128);
    }
    FUN_140001fe0(&dStack_1b8,uVar7);
    uStack_250 = uStack_1b0;
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) == 0) {
      dStack_258 = dStack_1b8;
    }
    else {
      FUN_1404de250(&dStack_258,&dStack_1b8);
    }
    FUN_140001c50(&dStack_258,1);
    cVar2 = FUN_1416927d0(uVar12);
    uStack_170 = uStack_130;
    uStack_130 = uStack_130 & 0xffffffff;
    if (cVar2 == '\0') {
      uVar6 = (undefined4)_UNK_141987270;
      uVar5 = (undefined4)((ulonglong)_UNK_141987270 >> 0x20);
    }
    else {
      uVar6 = (undefined4)_UNK_141985af0;
      uVar5 = (undefined4)((ulonglong)_UNK_141985af0 >> 0x20);
    }
    dStack_138 = (double)CONCAT44(uVar5,uVar6);
    uStack_170 = uStack_170 & 0xffffffff;
    uStack_178 = CONCAT44(uVar5,uVar6);
    FUN_140001fe0(&uStack_178,uVar7);
    uStack_150 = uStack_170;
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) == 0) {
      uStack_158 = uStack_178;
    }
    else {
      FUN_1404de250(&uStack_158,&uStack_178);
    }
    FUN_140004620(&uStack_158,&dStack_258);
    FUN_140004520(&dStack_f8,&uStack_158,_UNK_141986630);
    FUN_140004520(&dStack_c8,&dStack_f8,_UNK_141982c40);
    FUN_1400019a0(&dStack_358,&dStack_c8);
    if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c8);
    }
    if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_f8);
    }
    if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_158);
    }
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_178);
    }
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_138);
    }
    if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_258);
    }
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_1b8);
    }
    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_128);
    }
    pdStack_238 = &dStack_358;
    ppdVar26 = &pdStack_248;
    uVar7 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(pdVar8,uVar7);
    func_0x0001416a8c00(1);
  }
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x188ae);
  uStack_bc = 0;
  dStack_c8 = -1.0;
  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 != 0) {
    uStack_100 = 0xa4;
    puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    if ((0x46U >> (*(uint *)((longlong)puStack_118 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_118);
    }
    *(undefined4 *)((longlong)puStack_118 + 0xc) = 0;
    *puStack_118 = 0;
    uStack_f0._4_4_ = 0;
    dStack_f8 = 55.0;
    iVar4 = FUN_1416ab810(&dStack_c8,&plStack_a8,&uStack_e0,&dStack_f8);
    if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_f8);
    }
    if (0 < iVar4) {
      do {
        uStack_100 = 0xa6;
        uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b0e);
        dStack_f8 = 0.0;
        uStack_f0._0_4_ = 0;
        uStack_f0._4_4_ = 0;
        ppdVar27 = (double **)((ulonglong)ppdVar27 & 0xffffffffffffff00);
        ppdVar26 = (double **)((ulonglong)ppdVar26 & 0xffffffffffffff00);
        FUN_1416d0010(0x40,0x188ae,0x80000000,&dStack_f8,ppdVar26,ppdVar27);
        iVar4 = FUN_1416d9df0(uVar7,&dStack_f8,uRam00000001420f6b08,0);
        if (iVar4 == 0) {
          uStack_100 = 0xa7;
          if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_d8);
          }
          uStack_d8 = 0;
          uStack_d0 = 0x500000000;
          uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
          uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
          ppdVar27 = (double **)(uVar19 & 0xffffffffffffff00);
          FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                        uVar18 & 0xffffffffffffff00,ppdVar27);
          FUN_140002730(&dStack_378,0x1420b6aa8);
          pdStack_248 = &dStack_378;
          FUN_1400019a0(&dStack_368,&dStack_168);
          pdStack_240 = &dStack_368;
          FUN_140017bd0(&uStack_158,&dStack_188,0x10);
          FUN_1400019a0(&dStack_358,&uStack_158);
          if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_158);
          }
          pdStack_238 = &dStack_358;
          ppdVar26 = &pdStack_248;
          FUN_140060650(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
          iVar4 = func_0x0001416f82f0(plStack_a8,uStack_e0,0x41);
          if (0 < iVar4) {
            uStack_100 = 0xa9;
            if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_d8);
            }
            uStack_d8 = 0;
            uStack_d0 = 0x500000000;
            uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
            uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
            uVar19 = uVar19 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,
                          uVar18 & 0xffffffffffffff00,uVar19);
            FUN_140002730(&dStack_378,0x1420b6ab8);
            pdStack_248 = &dStack_378;
            FUN_1400019a0(&dStack_368,&dStack_168);
            pdStack_240 = &dStack_368;
            FUN_140017bd0(&uStack_158,&dStack_188,0x10);
            FUN_1400019a0(&dStack_358,&uStack_158);
            if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_158);
            }
            pdStack_238 = &dStack_358;
            ppdVar26 = &pdStack_248;
            FUN_140060650(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar26);
            uStack_100 = 0xaa;
            uStack_158 = 0;
            uStack_150 = 0;
            FUN_1416d0790(0x41,0x18ddd,0x80000000,&uStack_158);
            uStack_100 = 0xab;
            dStack_258 = 0.0;
            uStack_250 = 0.0;
            FUN_1416d0790(0x41,0x18de1,0x80000000,&dStack_258);
            uStack_100 = 0xac;
            dStack_1b8 = 0.0;
            uStack_1b0 = 0.0;
            FUN_1416d0790(0x41,0x189cf,0x80000000,&dStack_1b8);
            uStack_100 = 0xad;
            dStack_128 = 0.0;
            uStack_120 = 0.0;
            FUN_1416d0790(0x41,0x18e26,0x80000000,&dStack_128);
            uStack_100 = 0xae;
            if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_d8);
            }
            uStack_d8 = 0;
            uStack_d0 = 0x500000000;
            uStack_178 = 0;
            uStack_170 = 0;
            uVar18 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
            FUN_1416d0010(0x41,0x18df6,0x80000000,&uStack_178,uVar18,uVar19 & 0xffffffffffffff00);
            uVar6 = (undefined4)(uVar18 >> 0x20);
            FUN_1400019a0(&dStack_378,&uStack_178);
            pdStack_248 = &dStack_378;
            ppdVar27 = &pdStack_248;
            ppdVar26 = (double **)CONCAT44(uVar6,uRam00000001420da010);
            FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar26,ppdVar27);
            uStack_100 = 0xaf;
            uStack_130 = 0;
            dStack_138 = 1.0;
            FUN_1416d0790(0x41,0x187da,0x80000000,&dStack_138);
            uStack_100 = 0xb0;
            uStack_1a0 = 0;
            uStack_1a8 = 0x3ff0000000000000;
            FUN_1416d0790(0x41,0x189ff,0x80000000,&uStack_1a8);
          }
          uStack_100 = 0xb2;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18910);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb3;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1890a);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x4008000000000000;
          uStack_100 = 0xb4;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b45);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb5;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1871e);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb6;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18730);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb7;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1873b);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb8;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1873e);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xb9;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18740);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xba;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18741);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0x3ff0000000000000;
          uStack_100 = 0xbb;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1880b);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
        }
        else {
          uStack_100 = 0xbd;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b45);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xbe;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1871e);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xbf;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18730);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xc0;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1873b);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xc1;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1873e);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xc2;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18740);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          uStack_100 = 0xc3;
          puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18741);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
        }
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        *puVar14 = 0;
        cVar2 = func_0x0001416abe60(&dStack_c8,&plStack_a8,&uStack_e0);
      } while (cVar2 != '\0');
    }
    FUN_1416ab620(&dStack_c8,&plStack_a8,&uStack_e0);
    uStack_100 = 199;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x188ae);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0xbff0000000000000;
    if (lStack_b8 != 0) {
      func_0x000141695b90();
      lStack_b8 = 0;
    }
  }
  uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
  uStack_100 = 0xca;
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
  uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186c4);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar12,uVar7);
  func_0x0001416a8c00(1);
  uStack_100 = 0xcb;
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186c1);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar7,uStack_3d0);
  func_0x0001416a8c00(1);
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 == 0) {
    uStack_3d0 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18df5);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18d82);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uStack_100 = 0xcd;
        if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_d8);
        }
        uStack_d8 = 0;
        uStack_d0 = 0x500000000;
        FUN_1400019a0(&dStack_378,uStack_4f8);
        uVar12 = CONCAT44(uVar6,uRam00000001420da6d0);
        pdStack_248 = &dStack_378;
        uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,uVar12,&pdStack_248);
        uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
        cVar2 = FUN_1416927d0(uVar7);
        if (cVar2 != '\0') {
          uStack_100 = 0xce;
          uStack_3d0 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
          cVar2 = FUN_1416927d0(uStack_3d0);
          if (cVar2 == '\0') {
            uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18768);
            uStack_bc = 0;
            dStack_c8 = 0.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
            uStack_100 = 0xcf;
            if (iVar4 == 0) {
              puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
              if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar14);
              }
              *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
              *puVar14 = 0xbff0000000000000;
              puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1876a);
              if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar14);
              }
              *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
              *puVar14 = 0;
              goto code_r0x0001404d1abe;
            }
          }
          uStack_100 = 0xd0;
          uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
          uStack_bc = 0;
          dStack_c8 = 0.0;
          iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
          if (iVar4 == 0) {
            uStack_100 = 0xd0;
            puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
            if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar14);
            }
            *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
            *puVar14 = 0x3ff0000000000000;
            puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1876a);
            if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar14);
            }
            *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
            *puVar14 = 0;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
            uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18908);
            uStack_bc = 0;
            dStack_c8 = 0.5;
            FUN_140001fe0(&dStack_c8,uVar12);
            FUN_140003ca0(uVar7,&dStack_c8);
            if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_c8);
            }
          }
          else {
            uStack_100 = 0xd1;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
            uStack_bc = 0;
            dStack_c8 = 1.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
            if (iVar4 == 0) {
              uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1876a);
              uStack_bc = 0;
              dStack_c8 = 2.0;
              iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
              if (0 < iVar4) {
                uStack_100 = 0xd1;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0x4000000000000000;
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
                uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18908);
                uStack_bc = 0;
                dStack_c8 = 0.5;
                FUN_140001fe0(&dStack_c8,uVar12);
                FUN_140003ca0(uVar7,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
                goto code_r0x0001404d1abe;
              }
            }
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
            uStack_bc = 0;
            dStack_c8 = 2.0;
            iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
            if (iVar4 == 0) {
              uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1876a);
              uStack_bc = 0;
              dStack_c8 = 9.0;
              iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
              if (0 < iVar4) {
                uStack_100 = 0xd2;
                puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
                if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar14);
                }
                *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
                *puVar14 = 0x4008000000000000;
                uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
                uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18908);
                uStack_bc = 0;
                dStack_c8 = 0.5;
                FUN_140001fe0(&dStack_c8,uVar12);
                FUN_140003ca0(uVar7,&dStack_c8);
                if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_c8);
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001404d1abe:
  uStack_100 = 0xd7;
  pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdVar9;
  }
  else {
    dVar25 = (double)FUN_1416940c0();
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar8);
  }
  *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
  *pdVar8 = (double)bVar3;
  uStack_100 = 0xd8;
  pdVar9 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdVar10;
  }
  else {
    dVar25 = (double)FUN_1416940c0();
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar9);
  }
  *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
  *pdVar9 = (double)bVar3;
  uStack_100 = 0xd9;
  pdVar10 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a59);
  if ((*(uint *)((longlong)pdStack_5e8 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdStack_5e8;
  }
  else {
    dVar25 = (double)FUN_1416940c0();
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)bVar3;
  uStack_100 = 0xda;
  pdVar10 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
  if ((*(uint *)((longlong)pdStack_5f0 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdStack_5f0;
  }
  else {
    dVar25 = (double)FUN_1416940c0();
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)bVar3;
  uStack_100 = 0xdb;
  pdVar10 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a46);
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdVar11;
  }
  else {
    dVar25 = (double)FUN_1416940c0();
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar10);
  }
  *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
  *pdVar10 = (double)bVar3;
  uStack_100 = 0xdc;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a52);
  uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a58);
  FUN_1400019a0(&dStack_378,uVar7);
  uVar13 = CONCAT44(uVar6,uRam00000001420da6d0);
  pdStack_248 = &dStack_378;
  uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,uVar13,&pdStack_248);
  uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar12,uVar7);
  func_0x0001416a8c00(1);
  uStack_100 = 0xdd;
  pdVar10 = (double *)(**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a4d);
  pdVar11 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a45);
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar25 = *pdVar10;
  }
  else {
    dVar25 = (double)FUN_1416940c0(pdVar10);
  }
  bVar3 = FUN_1417099d0((longlong)dVar25);
  if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar11);
  }
  *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
  *pdVar11 = (double)bVar3;
  uStack_100 = 0xde;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a56);
  FUN_1400019a0(&dStack_378,pdStack_5e8);
  ppdVar26 = &pdStack_248;
  ppdVar27 = (double **)CONCAT44(uVar6,uRam00000001420da6d0);
  pdStack_248 = &dStack_378;
  uVar12 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,1,ppdVar27,ppdVar26);
  FUN_1416a8cb0(plStack_a8);
  FUN_1400019a0(uVar7,uVar12);
  func_0x0001416a8c00(1);
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,1);
  if ((iVar4 != -2) && (iVar4 < 0)) {
    uStack_100 = 0xe1;
    puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
    if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar8);
    }
    *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
    *pdVar8 = 0.0;
    uStack_100 = 0xe2;
    pdVar9 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar9);
    }
    *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
    *pdVar9 = 0.0;
    uStack_100 = 0xe3;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a59);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0xe4;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0xe5;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a46);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0xe6;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a58);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0xe7;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a45);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0xe8;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a55);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
  }
  uStack_100 = 0xee;
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186dc);
  FUN_1400019a0(&dStack_4e0,uVar7);
  uVar7 = uStack_3d0;
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(uStack_3d0,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 == 0) {
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) {
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 != 0) goto code_r0x0001404d21ee;
    }
  }
  else {
code_r0x0001404d21ee:
    uStack_100 = 0xef;
    uStack_bc = 0;
    dStack_c8 = 3.0;
    FUN_140004620(&dStack_4e0,&dStack_c8);
    if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c8);
    }
  }
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18838);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,1);
  if (0 < iVar4) {
    uStack_100 = 0xf0;
    pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
    if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar8);
    }
    *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
    *pdVar8 = 1.0;
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18838);
    FUN_140001fe0(&dStack_4e0,uVar12);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18838);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
  }
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1883a);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,1);
  if (0 < iVar4) {
    uStack_100 = 0xf1;
    pdVar9 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar9);
    }
    *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
    *pdVar9 = 1.0;
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1883a);
    FUN_140001fe0(&dStack_4e0,uVar12);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1883a);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
  }
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a25);
  uStack_bc = 0;
  dStack_c8 = 0.1;
  iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,1);
  if (0 < iVar4) {
    uStack_100 = 0xf3;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a56);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
  }
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b7b);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 != 0) {
    uStack_100 = 0xf6;
    pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
    if ((0x46U >> (*(uint *)((longlong)pdVar8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar8);
    }
    *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
    *pdVar8 = 0.0;
    uStack_100 = 0xf7;
    pdVar9 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar9);
    }
    *(undefined4 *)((longlong)pdVar9 + 0xc) = 0;
    *pdVar9 = 0.0;
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b7b);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uStack_100 = 0xf8;
      pdVar10 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
      pdVar8 = pdVar10;
      if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(pdVar10);
      }
    }
    else {
      pdVar10 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
      pdVar9 = pdVar10;
      if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) == 0) {
      }
      else {
        FUN_140001b50(pdVar10);
      }
    }
    *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
    *pdVar10 = 1.0;
  }
  uStack_100 = 0xfa;
  uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18aac);
  bVar3 = FUN_1417099d0(0x10);
  FUN_140004520(&dStack_c8,uVar12,(double)bVar3 / _UNK_141985238 + _UNK_141981e30);
  FUN_1400019a0(&dStack_4d0,&dStack_c8);
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_c8);
  }
  cVar2 = FUN_1416927d0(pdVar9);
  if (cVar2 != '\0') {
    uStack_100 = 0xfb;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    pdVar9 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
    FUN_1400019a0(&dStack_378,uVar12);
    ppdVar27 = &pdStack_248;
    pdStack_248 = &dStack_378;
    pdStack_240 = &dStack_4d0;
    pdStack_238 = &dStack_4e0;
    uVar13 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(uVar12,uVar13);
    func_0x0001416a8c00(1);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18908);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0x3ff0000000000000;
  }
  cVar2 = FUN_1416927d0(pdVar8);
  if (cVar2 != '\0') {
    uStack_100 = 0xfc;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
    FUN_1400019a0(&dStack_378,uVar12);
    pdStack_248 = &dStack_378;
    dVar25 = dStack_4d0;
    if ((uStack_4c4 & 0xffffff) != 0) {
      dVar25 = (double)FUN_1416940c0(&dStack_4d0);
    }
    dStack_c8 = (double)((ulonglong)dVar25 ^ _UNK_141982e90);
    uStack_bc = 0;
    FUN_1400019a0(&dStack_368,&dStack_c8);
    if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c8);
    }
    pdStack_240 = &dStack_368;
    ppdVar27 = &pdStack_248;
    pdStack_238 = &dStack_4e0;
    uVar13 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(uVar12,uVar13);
    func_0x0001416a8c00(1);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18908);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0xbff0000000000000;
  }
  uVar18 = FUN_141693ca0(pdVar8);
  uVar19 = FUN_141693ca0(pdVar9);
  if ((longlong)(uVar19 ^ uVar18) < 1) {
    uStack_100 = 0xfe;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a54);
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a57);
    uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186dc);
    uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
    FUN_1400019a0(&dStack_378,uVar13);
    pdStack_248 = &dStack_378;
    FUN_140002730(&dStack_368,0x142180348);
    pdStack_240 = &dStack_368;
    FUN_1400019a0(&dStack_358,uVar12);
    pdStack_238 = &dStack_358;
    ppdVar27 = &pdStack_248;
    uVar12 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(uVar13,uVar12);
    func_0x0001416a8c00(1);
  }
  uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18768);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar12,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 != 0) {
    uStack_100 = 0x100;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) {
      uStack_100 = 0x103;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186dc);
      uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
      FUN_1400019a0(&dStack_378,uVar13);
      pdStack_248 = &dStack_378;
      FUN_140002730(&dStack_368,0x142180348);
      pdStack_240 = &dStack_368;
      FUN_140004520(&dStack_c8,uVar12,_UNK_141982e78);
      FUN_1400019a0(&dStack_358,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      pdStack_238 = &dStack_358;
      ppdVar27 = &pdStack_248;
      uVar12 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
      FUN_1416a8cb0(plStack_a8);
      FUN_1400019a0(uVar13,uVar12);
    }
    else {
      uStack_100 = 0x101;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x186dc);
      uVar13 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
      FUN_1400019a0(&dStack_378,uVar13);
      pdStack_248 = &dStack_378;
      FUN_140002730(&dStack_368,0x142180348);
      pdStack_240 = &dStack_368;
      FUN_1400019a0(&dStack_358,uVar12);
      pdStack_238 = &dStack_358;
      ppdVar27 = &pdStack_248;
      uVar12 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
      FUN_1416a8cb0(plStack_a8);
      FUN_1400019a0(uVar13,uVar12);
    }
    func_0x0001416a8c00(1);
  }
  uStack_100 = 0x109;
  FUN_140003f30(puStack_118,_UNK_141987210);
  uStack_bc = 0;
  dStack_c8 = 1.0;
  uVar6 = (undefined4)uRam00000001420f6b08;
  uVar5 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
  iVar4 = FUN_1416d9df0(puStack_118,&dStack_c8,uRam00000001420f6b08,1);
  if (0 < iVar4) {
    uStack_100 = 0x10a;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0x3ff0000000000000;
    uVar6 = (undefined4)uRam00000001420f6b08;
    uVar5 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
  }
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,CONCAT44(uVar5,uVar6),0);
  if (iVar4 == 0) {
    uStack_100 = 0x10c;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a43);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 == '\0') goto code_r0x0001404d304b;
code_r0x0001404d2f85:
    uStack_100 = 0x117;
    (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b59);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0x3ff0000000000000;
  }
  else {
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 != '\0') goto code_r0x0001404d2f85;
code_r0x0001404d304b:
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b59);
    FUN_1400019a0(&dStack_378,uVar12);
    pdStack_248 = &dStack_378;
    FUN_1400019a0(&dStack_368,uVar7);
    pdStack_240 = &dStack_368;
    FUN_140002730(&dStack_358,0x1420b6ac8);
    pdStack_238 = &dStack_358;
    ppdVar27 = &pdStack_248;
    uVar7 = FUN_14003b450(plStack_a8,uStack_e0,&uStack_d8,3,ppdVar27);
    FUN_1416a8cb0(plStack_a8);
    FUN_1400019a0(uVar12,uVar7);
    func_0x0001416a8c00(1);
  }
  uStack_100 = 0x119;
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a3f);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
  if (iVar4 < 0) {
code_r0x0001404d328a:
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 == '\0') {
      uStack_100 = 0x139;
      puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar14);
      }
code_r0x0001404d32dc:
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      *puVar14 = 0;
    }
  }
  else {
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b8c);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d328a;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d328a;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189c7);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d328a;
    uStack_100 = 0x11a;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a3f);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) {
      uStack_100 = 0x121;
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
      if (iVar4 < 1) {
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b59);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if (0 < iVar4) goto code_r0x0001404d454b;
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186c1);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if (0 < iVar4) goto code_r0x0001404d454b;
      }
      else {
code_r0x0001404d454b:
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
        uStack_bc = 0;
        dStack_c8 = 1.0;
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if (0 < iVar4) {
          uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
          cVar2 = FUN_1416927d0(uVar7);
          if (cVar2 != '\0') {
            uStack_100 = 0x122;
            uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
            uStack_bc = 0;
            dStack_c8 = 1.0;
            FUN_140003e00(uVar7,&dStack_c8);
            if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_c8);
            }
            goto code_r0x0001404d32ea;
          }
        }
      }
      uStack_100 = 0x127;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_148);
      }
      uStack_148 = 0;
      uStack_140 = 0x500000000;
      if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_198);
      }
      uStack_198 = 0;
      uStack_190 = 0x500000000;
      if ((0x46U >> (uStack_380._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_388);
      }
      uStack_388 = 0;
      uStack_380 = 0x500000000;
      puStack_118 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
      pdVar8 = (double *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
      pdVar9 = (double *)(**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a41);
      FUN_140002730(&dStack_378,0x1420b6ad8);
      uStack_f0._4_4_ = *(uint *)((longlong)pdVar8 + 0xc);
      uStack_f0._0_4_ = *(undefined4 *)(pdVar8 + 1);
      pdStack_248 = &dStack_378;
      if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
        dStack_f8 = *pdVar8;
      }
      else {
        FUN_1404de250(&dStack_f8,pdVar8);
      }
      FUN_140004620(&dStack_f8,pdVar9);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      FUN_140003e00(&dStack_c8,&dStack_f8);
      FUN_1400019a0(&dStack_368,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_f8);
      }
      pdStack_240 = &dStack_368;
      FUN_140002730(&dStack_358,0x142180348);
      pdStack_238 = &dStack_358;
      FUN_140002730(&uStack_348,0x1420b6a28);
      puStack_230 = &uStack_348;
      FUN_140002730(&uStack_338,0x1420b6a28);
      ppdVar26 = &pdStack_248;
      puStack_228 = &uStack_338;
      uVar7 = FUN_140064100(plStack_a8,uStack_e0,&uStack_388,5,ppdVar26);
      uVar6 = (undefined4)((ulonglong)ppdVar26 >> 0x20);
      FUN_1400019a0(&uStack_328,uVar7);
      uVar12 = CONCAT44(uVar6,uRam00000001420d9ff0);
      puStack_220 = &uStack_328;
      uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_198,1,uVar12,&puStack_220);
      uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
      FUN_1400019a0(&dStack_318,uVar7);
      uVar7 = CONCAT44(uVar6,uRam00000001420d9ff0);
      pdStack_218 = &dStack_318;
      pdVar10 = (double *)FUN_1416ab210(plStack_a8,uStack_e0,&uStack_148,1,uVar7,&pdStack_218);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_bc = *(uint *)((longlong)pdVar10 + 0xc);
      uStack_c0 = *(undefined4 *)(pdVar10 + 1);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
        dStack_c8 = *pdVar10;
      }
      else {
        FUN_1404de250(&dStack_c8,pdVar10);
      }
      FUN_140001fe0(&dStack_c8,pdVar9);
      FUN_1400019a0(&dStack_308,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      uStack_bc = *(uint *)((longlong)pdVar9 + 0xc);
      uStack_c0 = *(undefined4 *)(pdVar9 + 1);
      pdStack_210 = &dStack_308;
      if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
        dStack_c8 = *pdVar9;
      }
      else {
        FUN_1404de250(&dStack_c8,pdVar9);
      }
      FUN_140003e00(&dStack_c8,pdVar8);
      FUN_1400019a0(&uStack_2f8,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      ppdVar26 = &pdStack_210;
      uVar18 = CONCAT44(uVar6,uRam00000001420da0c0);
      ppdVar27 = ppdVar26;
      puStack_208 = &uStack_2f8;
      puVar14 = (undefined8 *)FUN_1416ab210(plStack_a8,uStack_e0,&uStack_d8,2,uVar18,ppdVar26);
      uStack_150 = puVar14[1];
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) == 0) {
        uStack_158 = *puVar14;
      }
      else {
        FUN_1404de250(&uStack_158,puVar14);
      }
      FUN_140003f30(&uStack_158,_UNK_141985bd8);
      FUN_140009980(&dStack_f8,&uStack_158,_UNK_141983970);
      uStack_bc = uStack_f0._4_4_;
      uStack_c0 = (undefined4)uStack_f0;
      if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) == 0) {
        dStack_c8 = dStack_f8;
      }
      else {
        FUN_1404de250(&dStack_c8,&dStack_f8);
      }
      FUN_140003f30(&dStack_c8,_UNK_141983800);
      FUN_140003e00(puStack_118,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_f8);
      }
      if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_158);
      }
      uStack_100 = 0x128;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_148);
      }
      uStack_148 = 0;
      uStack_140 = 0x500000000;
      if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_198);
      }
      uStack_198 = 0;
      uStack_190 = 0x500000000;
      FUN_140002730(&dStack_378,0x1420b6ae8);
      pdStack_248 = &dStack_378;
      FUN_140002730(&dStack_368,0x1420b6af8);
      pdStack_240 = &dStack_368;
      FUN_140002730(&dStack_358,0x1420b6b08);
      pdStack_238 = &dStack_358;
      FUN_140002730(&uStack_348,0x1420b6b18);
      puStack_230 = &uStack_348;
      FUN_140002730(&uStack_338,0x1420b6b28);
      puStack_228 = &uStack_338;
      FUN_140002730(&uStack_328,0x1420b6b38);
      puStack_220 = &uStack_328;
      FUN_140002730(&dStack_318,0x1420b6b48);
      pdStack_218 = &dStack_318;
      dVar25 = (double)FUN_1416cdc60((int)_UNK_141987218,_UNK_141987220);
      if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_308);
      }
      dStack_308 = (dVar25 + _UNK_141981e30) * _UNK_141987278;
      uStack_2fc = 0;
      pdStack_210 = &dStack_308;
      FUN_140002730(&uStack_2f8,0x1420b6a28);
      puStack_208 = &uStack_2f8;
      FUN_140002730(&uStack_2e8,0x1420b6a28);
      uVar19 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
      uVar18 = uVar18 & 0xffffffffffffff00;
      puStack_200 = &uStack_2e8;
      FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
      uVar18 = uVar18 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18,
                    uVar19 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar18 >> 0x20);
      uVar7 = FUN_1416cd660(&uStack_148,7,&pdStack_248);
      FUN_1400019a0(&dStack_2d8,uVar7);
      pdStack_1f8 = &dStack_2d8;
      FUN_140002730(&uStack_2c8,0x1420b6a18);
      puStack_1f0 = &uStack_2c8;
      FUN_140002730(&uStack_2b8,0x142180348);
      puStack_1e8 = &uStack_2b8;
      uVar7 = FUN_1416ab210(plStack_a8,uStack_e0,&uStack_198,3,CONCAT44(uVar6,uRam00000001420da0c0),
                            ppdVar26);
      FUN_140009980(&dStack_c8,uVar7,_UNK_141983970);
      FUN_1400019a0(&uStack_2a8,&dStack_c8);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_c8);
      }
      puStack_1e0 = &uStack_2a8;
      FUN_140002730(&uStack_298,0x1420b6b58);
      puStack_1d8 = &uStack_298;
      FUN_140002730(&uStack_288,0x142180348);
      puStack_1d0 = &uStack_288;
      FUN_1400019a0(&uStack_278,&dStack_168);
      puStack_1c8 = &uStack_278;
      FUN_1400019a0(&uStack_268,&dStack_188);
      ppdVar27 = &pdStack_1f8;
      puStack_1c0 = &uStack_268;
      FUN_1400d4470(plStack_a8,uStack_e0,&uStack_d8,8,ppdVar27);
      uStack_100 = 0x12a;
      puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a43);
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar14);
      }
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      *puVar14 = 0x3ff0000000000000;
      uStack_100 = 299;
      puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar14);
      }
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      *puVar14 = 0xbff0000000000000;
      uStack_100 = 300;
      puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b59);
      if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar14);
      }
      goto code_r0x0001404d32dc;
    }
    uStack_100 = 0x11a;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
      if (iVar4 < 1) {
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18b59);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if (iVar4 < 1) {
          uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x186c1);
          uStack_bc = 0;
          dStack_c8 = 0.0;
          iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
          if (iVar4 < 1) goto code_r0x0001404d32ea;
        }
      }
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a41);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
      if (0 < iVar4) {
        uStack_100 = 0x11c;
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
        uVar12 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18a41);
        FUN_140017bd0(&dStack_c8,uVar12,1);
        FUN_1416a8cb0(plStack_a8);
        FUN_1400019a0(uVar7,&dStack_c8);
        if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_c8);
        }
        func_0x0001416a8c00(1);
      }
    }
  }
code_r0x0001404d32ea:
  uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a43);
  uStack_bc = 0;
  dStack_c8 = 1.0;
  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 == 0) {
code_r0x0001404d3380:
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a4c);
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 == '\0') {
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b43);
      uStack_bc = 0;
      dStack_c8 = 0.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
        uStack_bc = 0;
        dStack_c8 = 0.0;
        iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
        if ((iVar4 != -2) && (iVar4 < 0)) {
          uStack_100 = 0x13d;
          uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
          FUN_140004520(&dStack_c8,uStack_500,_UNK_141982c40);
          FUN_140003ca0(uVar7,&dStack_c8);
          if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_c8);
          }
          uStack_100 = 0x13e;
          uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
          uStack_bc = 0;
          dStack_c8 = 0.975;
          FUN_140001fe0(uVar7,&dStack_c8);
          if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_c8);
          }
        }
      }
    }
  }
  else {
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a3f);
    uStack_bc = 0;
    dStack_c8 = -1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 == 0) goto code_r0x0001404d3380;
  }
  uStack_100 = 0x143;
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1898d);
  uStack_bc = 0;
  dStack_c8 = 0.0;
  iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
  if (iVar4 == 0) {
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b8c);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d3485;
    uStack_100 = 0x144;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
    FUN_1416a8cb0(plStack_a8);
    FUN_140003ca0(uVar7,uStack_500);
    func_0x0001416a8c00(1);
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1898e);
    uStack_bc = 0;
    dStack_c8 = 0.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,1);
    if (iVar4 < 1) goto code_r0x0001404d3c53;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a55);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d3c53;
    uStack_100 = 0x146;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x1898d);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
    FUN_1416a8cb0(plStack_a8);
    FUN_140003ca0(uVar12,uVar7);
    func_0x0001416a8c00(1);
    uStack_100 = 0x147;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
    uStack_bc = 0;
    dStack_c8 = 3.333;
    FUN_140003e00(uVar7,&dStack_c8);
    if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c8);
    }
    uStack_100 = 0x148;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1898d);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0x149;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1898e);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
  }
  else {
code_r0x0001404d3485:
    uStack_100 = 0x14d;
    uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18c9b);
    cVar2 = FUN_1416927d0(uVar7);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x18b8c);
      uStack_bc = 0;
      dStack_c8 = 1.0;
      iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
      if (iVar4 == 0) {
        uStack_100 = 0x14e;
        uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
        FUN_140004520(&dStack_c8,uStack_500,_UNK_141986e28);
        FUN_140003ca0(uVar7,&dStack_c8);
        if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_c8);
        }
        goto code_r0x0001404d3c53;
      }
    }
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18a55);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d3c53;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18836);
    uStack_bc = 0;
    dStack_c8 = 1.0;
    iVar4 = FUN_1416d9df0(uVar7,&dStack_c8,uRam00000001420f6b08,0);
    if (iVar4 != 0) goto code_r0x0001404d3c53;
    uStack_100 = 0x150;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1898d);
    uVar12 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x189cf);
    FUN_1416a8cb0(plStack_a8);
    FUN_140003ca0(uVar12,uVar7);
    func_0x0001416a8c00(1);
    uStack_100 = 0x151;
    uVar7 = (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x18e26);
    uStack_bc = 0;
    dStack_c8 = 3.333;
    FUN_140003e00(uVar7,&dStack_c8);
    if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c8);
    }
    uStack_100 = 0x152;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    uStack_148 = 0;
    uStack_140 = 0x500000000;
    FUN_140002730(&dStack_378,0x1420b6ae8);
    pdStack_248 = &dStack_378;
    FUN_140002730(&dStack_368,0x1420b6af8);
    pdStack_240 = &dStack_368;
    FUN_140002730(&dStack_358,0x1420b6b08);
    pdStack_238 = &dStack_358;
    FUN_140002730(&uStack_348,0x1420b6b18);
    puStack_230 = &uStack_348;
    FUN_140002730(&uStack_338,0x1420b6b28);
    puStack_228 = &uStack_338;
    FUN_140002730(&uStack_328,0x1420b6b38);
    puStack_220 = &uStack_328;
    FUN_140002730(&dStack_318,0x1420b6b48);
    uVar19 = (ulonglong)ppdVar26 & 0xffffffffffffff00;
    uVar18 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
    pdStack_218 = &dStack_318;
    FUN_1416cea80(plStack_a8,uRam00000001420d58e8,0x80000000,&dStack_168,uVar18,uVar19);
    FUN_1416cea80(plStack_a8,uRam00000001420d58f8,0x80000000,&dStack_188,uVar18 & 0xffffffffffffff00
                  ,uVar19 & 0xffffffffffffff00);
    uVar7 = FUN_1416cd660(&uStack_148,7,&pdStack_248);
    FUN_1400019a0(&dStack_308,uVar7);
    pdStack_210 = &dStack_308;
    FUN_140002730(&uStack_2f8,0x1420b6a18);
    puStack_208 = &uStack_2f8;
    FUN_140002730(&uStack_2e8,0x142180348);
    puStack_200 = &uStack_2e8;
    dVar25 = (double)FUN_1416cdc60((int)_UNK_141987218,_UNK_141987220);
    if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_2d8);
    }
    dStack_2d8 = dVar25 + _UNK_141981e30;
    uStack_2cc = 0;
    pdStack_1f8 = &dStack_2d8;
    FUN_140002730(&uStack_2c8,0x1420b6b68);
    puStack_1f0 = &uStack_2c8;
    FUN_140002730(&uStack_2b8,0x142180348);
    puStack_1e8 = &uStack_2b8;
    FUN_1400019a0(&uStack_2a8,&dStack_168);
    puStack_1e0 = &uStack_2a8;
    FUN_1400019a0(&uStack_298,&dStack_188);
    puStack_1d8 = &uStack_298;
    FUN_1400d4470(plStack_a8,uStack_e0,&uStack_d8,8,&pdStack_210);
    uStack_100 = 0x154;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1898d);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *puVar14 = 0;
    uStack_100 = 0x155;
    puVar14 = (undefined8 *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8,0x1898e);
    if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar14);
    }
  }
  *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
  *puVar14 = 0;
code_r0x0001404d3c53:
  uStack_100 = 0x159;
  FUN_141706ee0(plStack_a8,uStack_e0);
  uVar7 = (**(code **)(*plStack_a8 + 8))(plStack_a8,0x189c7);
  cVar2 = FUN_1416927d0(uVar7);
  if (cVar2 != '\0') {
    uStack_100 = 0x15b;
  }
  if ((0x46U >> (uStack_60c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_618);
  }
  if ((0x46U >> (uStack_61c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_628);
  }
  if ((0x46U >> (uStack_62c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_638);
  }
  if ((0x46U >> (uStack_63c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_648);
  }
  if ((0x46U >> (uStack_64c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_658);
  }
  if ((0x46U >> (uStack_65c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_668);
  }
  if ((0x46U >> (uStack_66c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_678);
  }
  if ((0x46U >> (uStack_438._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_440);
  }
  if ((0x46U >> (uStack_380._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_388);
  }
  if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_4c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4d0);
  }
  if ((0x46U >> (uStack_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4e0);
  }
  if ((0x46U >> (uStack_444 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_450);
  }
  if ((0x46U >> (uStack_504 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_510);
  }
  if ((0x46U >> (uStack_514 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_520);
  }
  if ((0x46U >> (uStack_454 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_460);
  }
  if ((0x46U >> (uStack_464 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_470);
  }
  if ((0x46U >> (uStack_474 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_480);
  }
  if ((0x46U >> (uStack_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_420);
  }
  if ((0x46U >> (uStack_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3f0);
  }
  if ((0x46U >> (uStack_3f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_400);
  }
  if ((0x46U >> (uStack_4e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4f0);
  }
  if ((0x46U >> (uStack_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_398);
  }
  if ((0x46U >> (uStack_39c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3a8);
  }
  if ((0x46U >> (uStack_3ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3b8);
  }
  if ((0x46U >> (uStack_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_530);
  }
  if ((0x46U >> (uStack_534 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_540);
  }
  if ((0x46U >> (uStack_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_550);
  }
  if ((0x46U >> (uStack_554 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_560);
  }
  if ((0x46U >> (uStack_484 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_490);
  }
  if ((0x46U >> (uStack_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_410);
  }
  if ((0x46U >> (uStack_564 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_570);
  }
  if ((0x46U >> (uStack_574 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_580);
  }
  if ((0x46U >> (uStack_584 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_590);
  }
  if ((0x46U >> (uStack_594 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5a0);
  }
  if ((0x46U >> (uStack_5a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5b0);
  }
  if ((0x46U >> (uStack_5b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5c0);
  }
  if ((0x46U >> (uStack_494 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4a0);
  }
  if ((0x46U >> (uStack_4a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b0);
  }
  if ((0x46U >> (uStack_5c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5d0);
  }
  if ((0x46U >> (uStack_5d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5e0);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_188);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_168);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_298);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b8);
  }
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c8);
  }
  if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2d8);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_308);
  }
  if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_318);
  }
  if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_328);
  }
  if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_338);
  }
  if ((0x46U >> (uStack_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_348);
  }
  if ((0x46U >> (uStack_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_358);
  }
  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_368);
  }
  if ((0x46U >> (uStack_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_378);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_110;
  return;
}
