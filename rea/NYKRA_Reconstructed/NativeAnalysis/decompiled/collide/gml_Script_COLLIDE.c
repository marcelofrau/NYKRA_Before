// Function: gml_Script_COLLIDE @ 0x141671610

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_COLLIDE(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 in_XMM1_Qa;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double **in_stack_fffffffffffff898;
  ulonglong uVar27;
  double **ppdVar28;
  double **in_stack_fffffffffffff8a0;
  ulonglong uVar29;
  undefined8 uStack_750;
  uint uStack_744;
  undefined8 uStack_740;
  uint uStack_734;
  undefined8 uStack_730;
  uint uStack_724;
  undefined8 uStack_720;
  uint uStack_714;
  undefined8 uStack_710;
  uint uStack_704;
  undefined8 uStack_700;
  uint uStack_6f4;
  undefined8 uStack_6f0;
  uint uStack_6e4;
  undefined8 uStack_6e0;
  uint uStack_6d4;
  undefined8 uStack_6d0;
  uint uStack_6c4;
  undefined8 uStack_6c0;
  uint uStack_6b4;
  undefined8 uStack_6b0;
  uint uStack_6a4;
  undefined8 uStack_6a0;
  uint uStack_694;
  undefined8 uStack_690;
  undefined4 uStack_688;
  uint uStack_684;
  undefined8 uStack_680;
  uint uStack_674;
  undefined8 uStack_670;
  uint uStack_664;
  undefined8 uStack_660;
  undefined4 uStack_658;
  uint uStack_654;
  undefined8 uStack_650;
  undefined4 uStack_648;
  uint uStack_644;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  uint uStack_624;
  undefined8 uStack_620;
  uint uStack_614;
  undefined8 uStack_610;
  double dStack_608;
  uint uStack_5fc;
  undefined8 uStack_5f8;
  uint uStack_5ec;
  undefined8 uStack_5e8;
  uint uStack_5dc;
  double *pdStack_5d8;
  double *pdStack_5d0;
  double *pdStack_5c8;
  double *pdStack_5c0;
  double *pdStack_5b8;
  double *pdStack_5b0;
  double *pdStack_5a8;
  double *pdStack_5a0;
  double *pdStack_598;
  double *pdStack_590;
  double *pdStack_588;
  undefined8 *puStack_580;
  double *pdStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  double dStack_4e8;
  uint uStack_4dc;
  undefined8 uStack_4d8;
  uint uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  double dStack_4a8;
  uint uStack_49c;
  double dStack_498;
  uint uStack_48c;
  undefined8 uStack_488;
  uint uStack_47c;
  undefined8 uStack_478;
  undefined4 uStack_470;
  uint uStack_46c;
  double dStack_468;
  uint uStack_45c;
  double dStack_458;
  uint uStack_44c;
  double dStack_448;
  uint uStack_43c;
  double dStack_438;
  uint uStack_42c;
  double dStack_428;
  uint uStack_41c;
  double dStack_418;
  uint uStack_40c;
  double dStack_408;
  uint uStack_3fc;
  double dStack_3f8;
  uint uStack_3ec;
  double dStack_3e8;
  uint uStack_3dc;
  double dStack_3d8;
  uint uStack_3cc;
  double dStack_3c8;
  uint uStack_3bc;
  undefined8 uStack_3b8;
  uint uStack_3ac;
  double dStack_3a8;
  uint uStack_39c;
  undefined8 uStack_398;
  uint uStack_38c;
  undefined8 uStack_388;
  uint uStack_37c;
  undefined8 uStack_378;
  uint uStack_36c;
  undefined8 uStack_368;
  uint uStack_35c;
  undefined8 uStack_358;
  uint uStack_34c;
  undefined8 uStack_348;
  uint uStack_33c;
  undefined8 uStack_338;
  uint uStack_32c;
  undefined8 uStack_328;
  uint uStack_31c;
  undefined8 uStack_318;
  uint uStack_30c;
  undefined8 uStack_308;
  uint uStack_2fc;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  undefined8 uStack_2d8;
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
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined4 uStack_260;
  uint uStack_25c;
  double dStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_198;
  double dStack_190;
  uint uStack_184;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong lStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_1a0 = &UNK_14198655c;
  uStack_198 = 0;
  uStack_1a8 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_1a8;
  uStack_45c = 0xffffff;
  dStack_468 = 0.0;
  uStack_44c = 0xffffff;
  dStack_458 = 0.0;
  uStack_43c = 0xffffff;
  dStack_448 = 0.0;
  uStack_42c = 0xffffff;
  dStack_438 = 0.0;
  uStack_41c = 0xffffff;
  dStack_428 = 0.0;
  uStack_40c = 0xffffff;
  dStack_418 = 0.0;
  uStack_3fc = 0xffffff;
  dStack_408 = 0.0;
  uStack_3ec = 0xffffff;
  dStack_3f8 = 0.0;
  uStack_3dc = 0xffffff;
  dStack_3e8 = 0.0;
  uStack_3cc = 0xffffff;
  dStack_3d8 = 0.0;
  uStack_3bc = 0xffffff;
  dStack_3c8 = 0.0;
  uStack_3ac = 0xffffff;
  uStack_3b8 = 0;
  uStack_39c = 0xffffff;
  dStack_3a8 = 0.0;
  uStack_38c = 0xffffff;
  uStack_398 = 0;
  uStack_37c = 0xffffff;
  uStack_388 = 0;
  uStack_36c = 0xffffff;
  uStack_378 = 0;
  uStack_35c = 0xffffff;
  uStack_368 = 0;
  uStack_34c = 0xffffff;
  uStack_358 = 0;
  uStack_33c = 0xffffff;
  uStack_348 = 0;
  uStack_32c = 0xffffff;
  uStack_338 = 0;
  uStack_31c = 0xffffff;
  uStack_328 = 0;
  uStack_30c = 0xffffff;
  uStack_318 = 0;
  uStack_2fc = 0xffffff;
  uStack_308 = 0;
  uStack_2ec = 0xffffff;
  uStack_2f8 = 0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_2cc = 0xffffff;
  uStack_2d8 = 0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_5fc = 0xffffff;
  dStack_608 = 0.0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_46c = 0xffffff;
  uStack_478 = 0;
  uStack_4ac = 0xffffff;
  uStack_4b8 = 0;
  uStack_5ec = 0xffffff;
  uStack_5f8 = 0;
  uStack_5dc = 0xffffff;
  uStack_5e8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_684 = 0xffffff;
  uStack_690 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_674 = 0xffffff;
  uStack_680 = 0;
  uStack_664 = 0xffffff;
  uStack_670 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_184 = 0xffffff;
  dStack_190 = 0.0;
  uStack_624 = 0xffffff;
  uStack_630 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_49c = 0xffffff;
  dStack_4a8 = 0.0;
  uStack_48c = 0xffffff;
  dStack_498 = 0.0;
  uStack_24c = 0xffffff;
  dStack_258 = 0.0;
  uStack_614 = 0xffffff;
  uStack_620 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_744 = 0xffffff;
  uStack_750 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_734 = 0xffffff;
  uStack_740 = 0;
  uStack_654 = 0xffffff;
  uStack_660 = 0;
  uStack_6a4 = 0xffffff;
  uStack_6b0 = 0;
  uStack_644 = 0xffffff;
  uStack_650 = 0;
  uStack_694 = 0xffffff;
  uStack_6a0 = 0;
  uStack_724 = 0xffffff;
  uStack_730 = 0;
  uStack_714 = 0xffffff;
  uStack_720 = 0;
  uStack_704 = 0xffffff;
  uStack_710 = 0;
  uStack_6f4 = 0xffffff;
  uStack_700 = 0;
  uStack_6e4 = 0xffffff;
  uStack_6f0 = 0;
  uStack_6d4 = 0xffffff;
  uStack_6e0 = 0;
  uStack_4dc = 0xffffff;
  dStack_4e8 = 0.0;
  uStack_4cc = 0xffffff;
  uStack_4d8 = 0;
  uStack_6c4 = 0xffffff;
  uStack_6d0 = 0;
  uStack_6b4 = 0xffffff;
  uStack_6c0 = 0;
  uStack_130 = (ulonglong)(uint)uStack_130;
  uStack_138 = 0;
  uStack_170 = (ulonglong)(uint)uStack_170;
  uStack_178 = 0;
  uStack_1d0 = (ulonglong)(uint)uStack_1d0;
  uStack_1d8 = 0;
  uStack_1c0 = (ulonglong)(uint)uStack_1c0;
  uStack_1c8 = 0;
  uStack_220 = (ulonglong)(uint)uStack_220;
  uStack_228 = 0;
  uStack_210 = (ulonglong)(uint)uStack_210;
  uStack_218 = 0;
  uStack_4c0 = (ulonglong)(uint)uStack_4c0;
  uStack_4c8 = 0;
  uStack_638 = (ulonglong)(uint)uStack_638;
  uStack_640 = 0;
  plRam0000000142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  plStack_110 = param_2;
  plStack_f8 = param_1;
  FUN_1416ab750(uRam00000001420dc960);
  uStack_198 = 3;
  puVar9 = (undefined8 *)(**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0;
  uVar10 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18afe);
  uStack_14c = 0;
  uStack_158 = 0;
  iVar7 = FUN_1416d9df0(uVar10,&uStack_158,uRam00000001420f6b08,0);
  if (iVar7 == 0) {
    uStack_198 = 5;
    if ((0x46U >> (uStack_5fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_608);
    }
    uStack_5fc = 0;
    dStack_608 = -4.0;
    if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_278);
    }
    uStack_26c = 0;
    uStack_278 = 0;
    if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_268);
    }
    uStack_25c = 0;
    uStack_268 = 0;
    if ((0x46U >> (uStack_46c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_478);
    }
    uStack_46c = 0;
    uStack_478 = 0;
    if ((0x46U >> (uStack_4ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_4b8);
    }
    uStack_4ac = 0;
    uStack_4b8 = 0;
    if ((0x46U >> (uStack_5ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_5f8);
    }
    uStack_5ec = 0;
    uStack_5f8 = 0;
    if ((0x46U >> (uStack_5dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_5e8);
    }
    uStack_5dc = 0;
    uStack_5e8 = 0;
    iVar7 = func_0x0001416f82f0(plStack_f8,plStack_110,0x2b);
    if (0 < iVar7) {
      uStack_198 = 6;
      uStack_100 = uStack_100 & 0xffffffff;
      uStack_108 = 0x4045800000000000;
      iVar7 = FUN_1416ab810(&uStack_158,&plStack_f8,&plStack_110,&uStack_108);
      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_108);
      }
      uVar5 = _UNK_141986528;
      uVar4 = _UNK_141985628;
      uVar3 = _UNK_1419841c0;
      uVar2 = _UNK_141983d90;
      uVar15 = _UNK_141983800;
      uVar14 = _UNK_141982e78;
      dVar18 = _UNK_141982c40;
      dVar1 = _UNK_141981e30;
      uVar10 = _UNK_141981d18;
      if (0 < iVar7) {
        do {
          uStack_198 = 7;
          uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
          in_stack_fffffffffffff8a0 =
               (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
          in_stack_fffffffffffff898 =
               (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
          FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,
                        in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
          iVar7 = FUN_1416d9df0(uVar11,&uStack_1e8,uRam00000001420f6b08,1);
          if (-1 < iVar7) {
            uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
            puVar9 = (undefined8 *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e33);
            uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18c5f);
            in_stack_fffffffffffff8a0 =
                 (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
            in_stack_fffffffffffff898 =
                 (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
            FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,
                          in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
            uStack_120 = puVar9[1];
            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
              uStack_128 = *puVar9;
            }
            else {
              FUN_141670fe0(&uStack_128,puVar9);
            }
            FUN_140001fe0(&uStack_128,uVar12);
            uStack_100 = CONCAT44(uStack_1dc,uStack_1e0);
            if ((0x46U >> (uStack_1dc & 0x1f) & 1) == 0) {
              uStack_108 = uStack_1e8;
            }
            else {
              FUN_141670fe0(&uStack_108,&uStack_1e8);
            }
            FUN_140003ca0(&uStack_108,&uStack_128);
            iVar7 = FUN_1416d9df0(uVar11,&uStack_108,uRam00000001420f6b08,1);
            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_108);
            }
            if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_128);
            }
            if (iVar7 != -2 && iVar7 < 1) {
              uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18782);
              uVar12 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e26);
              uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
              uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_110,uRam00000001420d58f8,0x80000000,&uStack_690,uVar27,uVar29);
              in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00);
              in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
              FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                            in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
              uStack_15c = uStack_684;
              uStack_160 = uStack_688;
              if ((0x46U >> (uStack_684 & 0x1f) & 1) == 0) {
                uStack_168 = uStack_690;
              }
              else {
                FUN_141670fe0(&uStack_168,&uStack_690);
              }
              FUN_140003ca0(&uStack_168,uVar11);
              uStack_120 = CONCAT44(uStack_15c,uStack_160);
              if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                uStack_128 = uStack_168;
              }
              else {
                FUN_141670fe0(&uStack_128,&uStack_168);
              }
              FUN_140003ca0(&uStack_128,uVar12);
              uStack_100 = uStack_120;
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                uStack_108 = uStack_128;
              }
              else {
                FUN_141670fe0(&uStack_108,&uStack_128);
              }
              FUN_140001c50(&uStack_108,0x10);
              iVar7 = FUN_1416d9df0(&uStack_108,&uStack_1f8,uRam00000001420f6b08,1);
              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_108);
              }
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_128);
              }
              if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_168);
              }
              if (-1 < iVar7) {
                uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                in_stack_fffffffffffff8a0 =
                     (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                in_stack_fffffffffffff898 =
                     (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                              in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                uStack_120 = CONCAT44(uStack_1ec,uStack_1f0);
                if ((0x46U >> (uStack_1ec & 0x1f) & 1) == 0) {
                  uStack_128 = uStack_1f8;
                }
                else {
                  FUN_141670fe0(&uStack_128,&uStack_1f8);
                }
                FUN_140003ca0(&uStack_128,uVar12);
                uStack_100 = uStack_120;
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                  uStack_108 = uStack_128;
                }
                else {
                  FUN_141670fe0(&uStack_108,&uStack_128);
                }
                FUN_140001c50(&uStack_108,2);
                iVar7 = FUN_1416d9df0(uVar11,&uStack_108,uRam00000001420f6b08,1);
                if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_108);
                }
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_128);
                }
                if (iVar7 != -2 && iVar7 < 1) {
                  uStack_198 = 9;
                  puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x189cf);
                  uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                  uStack_47c = 0;
                  uStack_488 = 0x4050000000000000;
                  FUN_140003e00(&uStack_488,uVar11);
                  FUN_140004520(&uStack_1b8,&uStack_488,_UNK_141983260);
                  uStack_15c = 0;
                  uStack_168 = 0x3ff0000000000000;
                  FUN_140003ca0(&uStack_168,&uStack_1b8);
                  uStack_120 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    uStack_128 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&uStack_128,puVar9);
                  }
                  FUN_140004620(&uStack_128,&uStack_168);
                  FUN_140009980(&uStack_108,&uStack_128,_UNK_141985238);
                  FUN_1400019a0(&uStack_680,&uStack_108);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_128);
                  }
                  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_168);
                  }
                  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1b8);
                  }
                  if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_488);
                  }
                  puStack_180 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e26);
                  uStack_47c = 0;
                  uStack_488 = 0x4050000000000000;
                  FUN_140003e00(&uStack_488,uVar11);
                  FUN_140004520(&uStack_1b8,&uStack_488,dVar18);
                  puVar9 = puStack_180;
                  uStack_15c = 0;
                  uStack_168 = 0x3ff0000000000000;
                  FUN_140003ca0(&uStack_168,&uStack_1b8);
                  uStack_120 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    uStack_128 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&uStack_128,puVar9);
                  }
                  FUN_140004620(&uStack_128,&uStack_168);
                  FUN_140009980(&uStack_108,&uStack_128,_UNK_141985238);
                  FUN_1400019a0(&uStack_670,&uStack_108);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_128);
                  }
                  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_168);
                  }
                  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1b8);
                  }
                  if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_488);
                  }
                  uStack_198 = 10;
                  uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                  uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                  uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                  FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,uVar27,uVar29
                               );
                  iVar7 = FUN_1416d9df0(uVar11,&uStack_1f8,uRam00000001420f6b08,1);
                  if ((iVar7 != -2) && (iVar7 < 0)) {
                    (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                    puStack_180 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e26)
                    ;
                    puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,uVar27,
                                  uVar29);
                    uStack_100 = puVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                      uStack_108 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&uStack_108,puVar9);
                    }
                    FUN_140003ca0(&uStack_108,puStack_180);
                    iVar7 = FUN_1416d9df0(&uStack_108,&uStack_1f8,uRam00000001420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    if (-1 < iVar7) {
                      uStack_198 = 0xc;
                      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_138);
                      }
                      uStack_138 = 0;
                      uStack_130 = 0x500000000;
                      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_178);
                      }
                      uStack_178 = 0;
                      uStack_170 = 0x500000000;
                      uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,uVar27,
                                    uVar29);
                      FUN_1400019a0(&dStack_468,uVar11);
                      pdStack_5d8 = &dStack_468;
                      FUN_1400019a0(&dStack_458,&uStack_208);
                      pdStack_5d0 = &dStack_458;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar11 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                      puVar13 = (undefined8 *)
                                FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar11,
                                              &pdStack_5d8);
                      uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                      uStack_120 = puVar13[1];
                      if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                        uStack_128 = *puVar13;
                      }
                      else {
                        FUN_141670fe0(&uStack_128,puVar13);
                      }
                      FUN_140003e00(&uStack_128,&uStack_1e8);
                      FUN_140004520(&uStack_108,&uStack_128,uVar14);
                      FUN_1400019a0(&dStack_448,&uStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_128);
                      }
                      pdStack_5c8 = &dStack_448;
                      in_stack_fffffffffffff8a0 = &pdStack_5c8;
                      ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4b0);
                      uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,ppdVar28,
                                             in_stack_fffffffffffff8a0);
                      FUN_1400019a0(&dStack_190,uVar11);
                      do {
joined_r0x000141672e3a:
                        if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_138);
                        }
                        uStack_138 = 0;
                        uStack_130 = 0x500000000;
                        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_178);
                        }
                        uStack_178 = 0;
                        uStack_170 = 0x500000000;
                        uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                        uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,uVar27
                                      ,uVar29);
                        FUN_1400019a0(&dStack_468,uVar11);
                        pdStack_5d8 = &dStack_468;
                        FUN_1400019a0(&dStack_458,&uStack_208);
                        pdStack_5d0 = &dStack_458;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                      uVar29 & 0xffffffffffffff00);
                        uVar11 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                        puVar13 = (undefined8 *)
                                  FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar11,
                                                &pdStack_5d8);
                        uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                        uStack_120 = puVar13[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_128 = *puVar13;
                        }
                        else {
                          FUN_141670fe0(&uStack_128,puVar13);
                        }
                        FUN_140003e00(&uStack_128,&uStack_1e8);
                        FUN_140004520(&uStack_108,&uStack_128,uVar14);
                        FUN_1400019a0(&dStack_448,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_128);
                        }
                        pdStack_5c8 = &dStack_448;
                        in_stack_fffffffffffff8a0 = &pdStack_5c8;
                        ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4b0);
                        uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,ppdVar28,
                                               in_stack_fffffffffffff8a0);
                        uVar11 = uRam00000001420f6b08;
                        iVar7 = FUN_1416d9df0(&dStack_190,uVar12,uRam00000001420f6b08,1);
                        if ((iVar7 == -2) || (0 < iVar7)) {
                          for (iVar7 = 0x20; 0 < iVar7; iVar7 = iVar7 + -1) {
                            uStack_198 = 0x13;
                            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_138);
                            }
                            uStack_138 = 0;
                            uStack_130 = 0x500000000;
                            if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_178);
                            }
                            uStack_178 = 0;
                            uStack_170 = 0x500000000;
                            if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1d8);
                            }
                            uStack_1d8 = 0;
                            uStack_1d0 = 0x500000000;
                            if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1c8);
                            }
                            uStack_1c8 = 0;
                            uStack_1c0 = 0x500000000;
                            if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_228);
                            }
                            uStack_228 = 0;
                            uStack_220 = 0x500000000;
                            if ((0x46U >> (uStack_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_218);
                            }
                            uStack_218 = 0;
                            uStack_210 = 0x500000000;
                            puVar9 = (undefined8 *)
                                     (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,
                                          uVar27,uVar29);
                            dVar17 = (double)FUN_1416cdc60(uVar4,_UNK_141982ef8);
                            if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_468);
                            }
                            uStack_45c = 0;
                            pdStack_5d8 = &dStack_468;
                            dStack_468 = dVar17;
                            FUN_140002730(&dStack_458,0x14217ee40);
                            pdStack_5d0 = &dStack_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_448);
                            }
                            uStack_43c = 0;
                            pdStack_5c8 = &dStack_448;
                            dStack_448 = dVar17;
                            FUN_140002730(&dStack_438,0x14217ee40);
                            pdStack_5c0 = &dStack_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_630,
                                          uVar27,uVar29);
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&uStack_288,
                                          uVar27,uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&uStack_108,&uStack_630,1);
                            FUN_1400019a0(&dStack_428,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b8 = &dStack_428;
                            uStack_100._4_4_ = uStack_27c;
                            if ((0x46U >> (uStack_27c & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_288;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_288);
                            }
                            FUN_140001c50(&uStack_108,1);
                            FUN_1400019a0(&dStack_418,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b0 = &dStack_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_408);
                            }
                            dStack_408 = dVar17 + dVar18;
                            uStack_3fc = 0;
                            pdStack_5a8 = &dStack_408;
                            dVar17 = (double)FUN_1416cdc60(0,_UNK_1419842b0);
                            if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3f8);
                            }
                            uStack_3ec = 0;
                            pdStack_5a0 = &dStack_3f8;
                            dStack_3f8 = dVar17;
                            FUN_140002730(&dStack_3e8,0x1420b2748);
                            pdStack_598 = &dStack_3e8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar12,
                                                   &pdStack_5d8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = uStack_1fc;
                            if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_208;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_208);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&dStack_3d8,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_590 = &dStack_3d8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,2,uVar12,
                                                   &pdStack_5c8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar9);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&dStack_3c8,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_588 = &dStack_3c8;
                            uVar11 = FUN_1416cd660(&uStack_1c8,2,&pdStack_5b8);
                            FUN_1400019a0(&uStack_3b8,uVar11);
                            puStack_580 = &uStack_3b8;
                            FUN_140002730(&dStack_3a8,0x1420b2738);
                            pdStack_578 = &dStack_3a8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420d9ff0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_228,1,uVar12,
                                                   &pdStack_5a8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&uStack_108,uVar11,_UNK_141986538);
                            FUN_1400019a0(&uStack_398,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            puStack_570 = &uStack_398;
                            in_stack_fffffffffffff8a0 = &pdStack_5a0;
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_218,2,
                                                   CONCAT44(uVar22,uRam00000001420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&uStack_388,uVar11);
                            puStack_568 = &uStack_388;
                            FUN_140002730(&uStack_378,0x14217ee40);
                            puStack_560 = &uStack_378;
                            FUN_140002730(&uStack_368,0x14217ee40);
                            puStack_558 = &uStack_368;
                            FUN_140002730(&uStack_358,0x1420b2728);
                            puStack_550 = &uStack_358;
                            FUN_140002730(&uStack_348,0x14217ee40);
                            puStack_548 = &uStack_348;
                            FUN_140002730(&uStack_338,0x1420b2728);
                            puStack_540 = &uStack_338;
                            FUN_140002730(&uStack_328,0x1420b2758);
                            puStack_538 = &uStack_328;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_318);
                            }
                            uStack_30c = 0;
                            puStack_530 = &uStack_318;
                            uStack_318 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_308);
                            }
                            uStack_2fc = 0;
                            puStack_528 = &uStack_308;
                            uStack_308 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2f8);
                            }
                            uStack_2ec = 0;
                            puStack_520 = &uStack_2f8;
                            uStack_2f8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2e8);
                            }
                            uStack_2dc = 0;
                            puStack_518 = &uStack_2e8;
                            uStack_2e8 = uVar11;
                            FUN_140002730(&uStack_2d8,0x14217ee40);
                            puStack_510 = &uStack_2d8;
                            FUN_140002730(&uStack_2c8,0x1420b2768);
                            puStack_508 = &uStack_2c8;
                            ppdVar28 = &pdStack_590;
                            FUN_140106850(plStack_f8,plStack_110,&uStack_138,0x12,ppdVar28);
                          }
                          uStack_198 = 0x17;
                          puStack_180 = (undefined8 *)
                                        (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                          uStack_100 = uStack_100 & 0xffffffff;
                          uStack_108 = 0x3feccccccccccccd;
                          FUN_140001fe0(puStack_180,&uStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_108);
                          }
                          uStack_198 = 0x18;
                          if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_138);
                          }
                          uStack_138 = 0;
                          uStack_130 = 0x500000000;
                          if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_178);
                          }
                          uStack_178 = 0;
                          uStack_170 = 0x500000000;
                          FUN_140002730(&dStack_468,0x1420b2778);
                          pdStack_5d8 = &dStack_468;
                          FUN_140002730(&dStack_458,0x1420b2788);
                          pdStack_5d0 = &dStack_458;
                          FUN_140002730(&dStack_448,0x1420b2798);
                          pdStack_5c8 = &dStack_448;
                          FUN_140002730(&dStack_438,0x1420b27a8);
                          pdStack_5c0 = &dStack_438;
                          FUN_140002730(&dStack_428,0x1420b27b8);
                          pdStack_5b8 = &dStack_428;
                          uVar11 = FUN_1416cd660(&uStack_178,5,&pdStack_5d8);
                          FUN_1400019a0(&dStack_418,uVar11);
                          pdStack_5b0 = &dStack_418;
                          FUN_140002730(&dStack_408,0x1420b27c8);
                          pdStack_5a8 = &dStack_408;
                          FUN_140002730(&dStack_3f8,0x14217ee40);
                          pdStack_5a0 = &dStack_3f8;
                          dVar17 = (double)FUN_1416cdc60(_UNK_1419864f0,_UNK_1419864f8);
                          if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3e8);
                          }
                          dStack_3e8 = dVar17 * _UNK_141983970;
                          uStack_3dc = 0;
                          pdStack_598 = &dStack_3e8;
                          in_XMM1_Qa = _UNK_141986508;
                          dVar17 = (double)FUN_1416cdc60(_UNK_141986500,_UNK_141986508);
                          if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3d8);
                          }
                          dStack_3d8 = dVar17 / _UNK_1419843c8;
                          uStack_3cc = 0;
                          pdStack_590 = &dStack_3d8;
                          dVar17 = (double)FUN_1416cdc30(dVar18);
                          if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3c8);
                          }
                          dStack_3c8 = dVar17 + _UNK_141986510;
                          uStack_3bc = 0;
                          pdStack_588 = &dStack_3c8;
                          in_stack_fffffffffffff898 = &pdStack_5b0;
                          FUN_1400d2410(plStack_f8,plStack_110,&uStack_138,6,
                                        in_stack_fffffffffffff898);
                          goto code_r0x000141675d1a;
                        }
                        uStack_198 = 0xc;
                        uStack_100 = uStack_100 & 0xffffffff;
                        uStack_108 = 0;
                        iVar7 = FUN_1416d9df0(&dStack_190,&uStack_108,uVar11,1);
                        if (-1 < iVar7) {
                          if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_1d8);
                          }
                          uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                          uStack_1d8 = 0;
                          uStack_1d0 = 0x500000000;
                          uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                          FUN_1400019a0(&dStack_438,uVar11);
                          pdStack_5c0 = &dStack_438;
                          in_stack_fffffffffffff8a0 = &pdStack_5c0;
                          ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4c0);
                          uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,1,ppdVar28,
                                                 in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&dStack_190,uVar11,uRam00000001420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            uStack_198 = 0xe;
                            if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1c8);
                            }
                            uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            uStack_1c8 = 0;
                            uStack_1c0 = 0x500000000;
                            uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                            FUN_1400019a0(&dStack_428,uVar11);
                            pdStack_5b8 = &dStack_428;
                            pdStack_5b0 = &dStack_190;
                            FUN_140002730(&dStack_408,0x14217ee40);
                            pdStack_5a8 = &dStack_408;
                            plRam0000000142182d90 = (longlong *)0x480000;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(plStack_f8,plStack_110,&uStack_1c8,3,uVar12,
                                                    &pdStack_5b8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar13);
                            }
                            FUN_140003ca0(&uStack_108,&uStack_670);
                            if ((uStack_184 & 0xffffff) == 0) {
                              dVar17 = dStack_190;
                            }
                            else {
                              dVar17 = (double)FUN_1416940c0(&dStack_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,0,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            uStack_198 = 0xf;
                            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_138);
                            }
                            uStack_138 = 0;
                            uStack_130 = 0x500000000;
                            FUN_1400019a0(&dStack_468,uVar11);
                            pdStack_5d8 = &dStack_468;
                            pdStack_5d0 = &dStack_190;
                            FUN_140002730(&dStack_448,0x1420b2728);
                            pdStack_5c8 = &dStack_448;
                            in_stack_fffffffffffff8a0 = &pdStack_5d8;
                            ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,3,ppdVar28,
                                                    in_stack_fffffffffffff8a0);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar13);
                            }
                            FUN_140003ca0(&uStack_108,&uStack_670);
                            if ((uStack_184 & 0xffffff) == 0) {
                              dVar17 = dStack_190;
                            }
                            else {
                              dVar17 = (double)FUN_1416940c0(&dStack_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,1,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                          }
                        }
                        switch(uStack_184 & 0xffffff) {
                        case 1:
                          dStack_190 = (double)FUN_1416940c0(&dStack_190);
                          dStack_190 = dStack_190 + dVar1;
                          uStack_184 = 0;
                          goto joined_r0x000141672e3a;
                        default:
                          FUN_140001d70(&UNK_141981e6a,&dStack_190,&dStack_190);
                          break;
                        case 7:
                          dStack_190 = (double)CONCAT44(dStack_190._4_4_,dStack_190._0_4_ + 1);
                          goto joined_r0x000141672e3a;
                        case 10:
                          goto code_r0x000141673278;
                        case 0xd:
                          uStack_184 = 0;
                        case 0:
                          dStack_190 = dStack_190 + dVar1;
                          goto joined_r0x000141672e3a;
                        }
                      } while( true );
                    }
                  }
                  puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                  in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
                  FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  iVar7 = FUN_1416d9df0(puVar9,&uStack_1f8,uRam00000001420f6b08,1);
                  if (0 < iVar7) {
                    puStack_180 = (undefined8 *)
                                  (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                    puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    uStack_100 = puVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                      uStack_108 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&uStack_108,puVar9);
                    }
                    FUN_140003ca0(&uStack_108,puStack_180);
                    iVar7 = FUN_1416d9df0(&uStack_108,&uStack_1f8,uRam00000001420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    if (iVar7 != -2 && iVar7 < 1) {
                      uStack_198 = 0x1c;
                      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_138);
                      }
                      uStack_138 = 0;
                      uStack_130 = 0x500000000;
                      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_178);
                      }
                      uStack_178 = 0;
                      uStack_170 = 0x500000000;
                      uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                      uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,uVar27,
                                    uVar29);
                      FUN_1400019a0(&dStack_468,uVar11);
                      pdStack_5d8 = &dStack_468;
                      FUN_1400019a0(&dStack_458,&uStack_208);
                      pdStack_5d0 = &dStack_458;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar11 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                      puVar13 = (undefined8 *)
                                FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar11,
                                              &pdStack_5d8);
                      uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                      uStack_120 = puVar13[1];
                      if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                        uStack_128 = *puVar13;
                      }
                      else {
                        FUN_141670fe0(&uStack_128,puVar13);
                      }
                      FUN_140003e00(&uStack_128,&uStack_1e8);
                      FUN_140004520(&uStack_108,&uStack_128,uVar14);
                      FUN_1400019a0(&dStack_448,&uStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_128);
                      }
                      pdStack_5c8 = &dStack_448;
                      in_stack_fffffffffffff8a0 = &pdStack_5c8;
                      ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4b0);
                      uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,ppdVar28,
                                             in_stack_fffffffffffff8a0);
                      FUN_1400019a0(&dStack_190,uVar11);
                      do {
joined_r0x0001416741ba:
                        if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_138);
                        }
                        uStack_138 = 0;
                        uStack_130 = 0x500000000;
                        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_178);
                        }
                        uStack_178 = 0;
                        uStack_170 = 0x500000000;
                        uVar11 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                        uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,uVar27
                                      ,uVar29);
                        FUN_1400019a0(&dStack_468,uVar11);
                        pdStack_5d8 = &dStack_468;
                        FUN_1400019a0(&dStack_458,&uStack_208);
                        pdStack_5d0 = &dStack_458;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                      uVar29 & 0xffffffffffffff00);
                        uVar11 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                        puVar13 = (undefined8 *)
                                  FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar11,
                                                &pdStack_5d8);
                        uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                        uStack_120 = puVar13[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_128 = *puVar13;
                        }
                        else {
                          FUN_141670fe0(&uStack_128,puVar13);
                        }
                        FUN_140003e00(&uStack_128,&uStack_1e8);
                        FUN_140004520(&uStack_108,&uStack_128,uVar14);
                        FUN_1400019a0(&dStack_448,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_128);
                        }
                        pdStack_5c8 = &dStack_448;
                        in_stack_fffffffffffff8a0 = &pdStack_5c8;
                        ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4b0);
                        uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,ppdVar28,
                                               in_stack_fffffffffffff8a0);
                        uVar11 = uRam00000001420f6b08;
                        iVar7 = FUN_1416d9df0(&dStack_190,uVar12,uRam00000001420f6b08,1);
                        if ((iVar7 == -2) || (0 < iVar7)) {
                          for (iVar7 = 0x20; 0 < iVar7; iVar7 = iVar7 + -1) {
                            uStack_198 = 0x23;
                            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_138);
                            }
                            uStack_138 = 0;
                            uStack_130 = 0x500000000;
                            if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_178);
                            }
                            uStack_178 = 0;
                            uStack_170 = 0x500000000;
                            if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1d8);
                            }
                            uStack_1d8 = 0;
                            uStack_1d0 = 0x500000000;
                            if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1c8);
                            }
                            uStack_1c8 = 0;
                            uStack_1c0 = 0x500000000;
                            if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_228);
                            }
                            uStack_228 = 0;
                            uStack_220 = 0x500000000;
                            if ((0x46U >> (uStack_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_218);
                            }
                            uStack_218 = 0;
                            uStack_210 = 0x500000000;
                            puVar9 = (undefined8 *)
                                     (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,
                                          uVar27,uVar29);
                            dVar17 = (double)FUN_1416cdc60(uVar4,_UNK_141982ef8);
                            if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_468);
                            }
                            uStack_45c = 0;
                            pdStack_5d8 = &dStack_468;
                            dStack_468 = dVar17;
                            FUN_140002730(&dStack_458,0x14217ee40);
                            pdStack_5d0 = &dStack_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_448);
                            }
                            uStack_43c = 0;
                            pdStack_5c8 = &dStack_448;
                            dStack_448 = dVar17;
                            FUN_140002730(&dStack_438,0x14217ee40);
                            pdStack_5c0 = &dStack_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_630,
                                          uVar27,uVar29);
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&uStack_288,
                                          uVar27,uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&uStack_108,&uStack_630,1);
                            FUN_1400019a0(&dStack_428,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b8 = &dStack_428;
                            uStack_100._4_4_ = uStack_27c;
                            if ((0x46U >> (uStack_27c & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_288;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_288);
                            }
                            FUN_140001c50(&uStack_108,1);
                            FUN_1400019a0(&dStack_418,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b0 = &dStack_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_408);
                            }
                            dStack_408 = dVar17 + dVar18;
                            uStack_3fc = 0;
                            pdStack_5a8 = &dStack_408;
                            dVar17 = (double)FUN_1416cdc60(_UNK_141986518,_UNK_141986520);
                            if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3f8);
                            }
                            uStack_3ec = 0;
                            pdStack_5a0 = &dStack_3f8;
                            dStack_3f8 = dVar17;
                            FUN_140002730(&dStack_3e8,0x1420b2748);
                            pdStack_598 = &dStack_3e8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar12,
                                                   &pdStack_5d8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = uStack_1fc;
                            if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_208;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_208);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&dStack_3d8,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_590 = &dStack_3d8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,2,uVar12,
                                                   &pdStack_5c8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar9);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&dStack_3c8,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_588 = &dStack_3c8;
                            uVar11 = FUN_1416cd660(&uStack_1c8,2,&pdStack_5b8);
                            FUN_1400019a0(&uStack_3b8,uVar11);
                            puStack_580 = &uStack_3b8;
                            FUN_140002730(&dStack_3a8,0x1420b2738);
                            pdStack_578 = &dStack_3a8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420d9ff0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_228,1,uVar12,
                                                   &pdStack_5a8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&uStack_108,uVar11,_UNK_141986530);
                            FUN_1400019a0(&uStack_398,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            puStack_570 = &uStack_398;
                            in_stack_fffffffffffff8a0 = &pdStack_5a0;
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_218,2,
                                                   CONCAT44(uVar22,uRam00000001420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&uStack_388,uVar11);
                            puStack_568 = &uStack_388;
                            FUN_140002730(&uStack_378,0x14217ee40);
                            puStack_560 = &uStack_378;
                            FUN_140002730(&uStack_368,0x14217ee40);
                            puStack_558 = &uStack_368;
                            FUN_140002730(&uStack_358,0x1420b2728);
                            puStack_550 = &uStack_358;
                            FUN_140002730(&uStack_348,0x14217ee40);
                            puStack_548 = &uStack_348;
                            FUN_140002730(&uStack_338,0x1420b2728);
                            puStack_540 = &uStack_338;
                            FUN_140002730(&uStack_328,0x1420b2758);
                            puStack_538 = &uStack_328;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_318);
                            }
                            uStack_30c = 0;
                            puStack_530 = &uStack_318;
                            uStack_318 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_308);
                            }
                            uStack_2fc = 0;
                            puStack_528 = &uStack_308;
                            uStack_308 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2f8);
                            }
                            uStack_2ec = 0;
                            puStack_520 = &uStack_2f8;
                            uStack_2f8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2e8);
                            }
                            uStack_2dc = 0;
                            puStack_518 = &uStack_2e8;
                            uStack_2e8 = uVar11;
                            FUN_140002730(&uStack_2d8,0x14217ee40);
                            puStack_510 = &uStack_2d8;
                            FUN_140002730(&uStack_2c8,0x1420b2768);
                            puStack_508 = &uStack_2c8;
                            ppdVar28 = &pdStack_590;
                            FUN_140106850(plStack_f8,plStack_110,&uStack_138,0x12,ppdVar28);
                          }
                          for (iVar7 = 0x10; 0 < iVar7; iVar7 = iVar7 + -1) {
                            uStack_198 = 0x28;
                            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_138);
                            }
                            uStack_138 = 0;
                            uStack_130 = 0x500000000;
                            if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_178);
                            }
                            uStack_178 = 0;
                            uStack_170 = 0x500000000;
                            if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1d8);
                            }
                            uStack_1d8 = 0;
                            uStack_1d0 = 0x500000000;
                            if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1c8);
                            }
                            uStack_1c8 = 0;
                            uStack_1c0 = 0x500000000;
                            if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_228);
                            }
                            uStack_228 = 0;
                            uStack_220 = 0x500000000;
                            if ((0x46U >> (uStack_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_218);
                            }
                            uStack_218 = 0;
                            uStack_210 = 0x500000000;
                            if ((0x46U >> (uStack_4c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_4c8);
                            }
                            uStack_4c8 = 0;
                            uStack_4c0 = 0x500000000;
                            puVar9 = (undefined8 *)
                                     (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&uStack_208,
                                          uVar27,uVar29);
                            dVar17 = (double)FUN_1416cdc60(_UNK_141983d70,uVar14);
                            if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_468);
                            }
                            uStack_45c = 0;
                            pdStack_5d8 = &dStack_468;
                            dStack_468 = dVar17;
                            FUN_140002730(&dStack_458,0x14217ee40);
                            pdStack_5d0 = &dStack_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_448);
                            }
                            uStack_43c = 0;
                            pdStack_5c8 = &dStack_448;
                            dStack_448 = dVar17;
                            FUN_140002730(&dStack_438,0x14217ee40);
                            pdStack_5c0 = &dStack_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_630,
                                          uVar27,uVar29);
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&uStack_288,
                                          uVar27,uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&uStack_108,&uStack_630,1);
                            FUN_1400019a0(&dStack_428,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b8 = &dStack_428;
                            uStack_100._4_4_ = uStack_27c;
                            if ((0x46U >> (uStack_27c & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_288;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_288);
                            }
                            FUN_140001c50(&uStack_108,1);
                            FUN_1400019a0(&dStack_418,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_5b0 = &dStack_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_408);
                            }
                            dStack_408 = dVar17 + dVar18;
                            uStack_3fc = 0;
                            pdStack_5a8 = &dStack_408;
                            dVar17 = (double)FUN_1416cdc60(_UNK_141986518,_UNK_141986520);
                            if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3f8);
                            }
                            uStack_3ec = 0;
                            pdStack_5a0 = &dStack_3f8;
                            dStack_3f8 = dVar17;
                            FUN_140002730(&dStack_3e8,0x1420b2748);
                            pdStack_598 = &dStack_3e8;
                            FUN_140002730(&dStack_3d8,0x1420b2748);
                            pdStack_590 = &dStack_3d8;
                            dVar17 = (double)FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3c8);
                            }
                            uStack_3bc = 0;
                            pdStack_588 = &dStack_3c8;
                            dStack_3c8 = dVar17;
                            FUN_140002730(&uStack_3b8,0x1420b2728);
                            puStack_580 = &uStack_3b8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,uVar12,
                                                   &pdStack_5d8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = uStack_1fc;
                            if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
                              uStack_108 = uStack_208;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,&uStack_208);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&dStack_3a8,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            pdStack_578 = &dStack_3a8;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,2,uVar12,
                                                   &pdStack_5c8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar9);
                            }
                            FUN_140003ca0(&uStack_108,uVar11);
                            FUN_1400019a0(&uStack_398,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            puStack_570 = &uStack_398;
                            uVar11 = FUN_1416cd660(&uStack_1c8,2,&pdStack_5b8);
                            FUN_1400019a0(&uStack_388,uVar11);
                            puStack_568 = &uStack_388;
                            FUN_140002730(&uStack_378,0x1420b2738);
                            puStack_560 = &uStack_378;
                            uVar12 = CONCAT44(uVar22,uRam00000001420d9ff0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_228,1,uVar12,
                                                   &pdStack_5a8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&uStack_108,uVar11,_UNK_141985538);
                            FUN_1400019a0(&uStack_368,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            puStack_558 = &uStack_368;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da0c0);
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_218,3,uVar12,
                                                   &pdStack_5a0);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_1400019a0(&uStack_358,uVar11);
                            puStack_550 = &uStack_358;
                            FUN_140002730(&uStack_348,0x14217ee40);
                            puStack_548 = &uStack_348;
                            FUN_140002730(&uStack_338,0x14217ee40);
                            puStack_540 = &uStack_338;
                            FUN_140002730(&uStack_328,0x1420b2728);
                            puStack_538 = &uStack_328;
                            FUN_140002730(&uStack_318,0x14217ee40);
                            puStack_530 = &uStack_318;
                            FUN_140002730(&uStack_308,0x1420b2728);
                            puStack_528 = &uStack_308;
                            FUN_140002730(&uStack_2f8,0x1420b2758);
                            puStack_520 = &uStack_2f8;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2e8);
                            }
                            uStack_2dc = 0;
                            puStack_518 = &uStack_2e8;
                            uStack_2e8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2d8);
                            }
                            uStack_2cc = 0;
                            puStack_510 = &uStack_2d8;
                            uStack_2d8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_2c8);
                            }
                            uStack_2bc = 0;
                            puStack_508 = &uStack_2c8;
                            in_stack_fffffffffffff8a0 = &pdStack_588;
                            uStack_2c8 = uVar11;
                            uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_4c8,2,
                                                   CONCAT44(uVar22,uRam00000001420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&uStack_2b8,uVar11);
                            puStack_500 = &uStack_2b8;
                            FUN_140002730(&uStack_2a8,0x14217ee40);
                            puStack_4f8 = &uStack_2a8;
                            FUN_140002730(&uStack_298,0x1420b2768);
                            puStack_4f0 = &uStack_298;
                            ppdVar28 = &pdStack_578;
                            FUN_140106850(plStack_f8,plStack_110,&uStack_138,0x12,ppdVar28);
                          }
                          uStack_198 = 0x2c;
                          if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_138);
                          }
                          uStack_138 = 0;
                          uStack_130 = 0x500000000;
                          if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_178);
                          }
                          uStack_178 = 0;
                          uStack_170 = 0x500000000;
                          FUN_140002730(&dStack_468,0x1420b2778);
                          pdStack_5d8 = &dStack_468;
                          FUN_140002730(&dStack_458,0x1420b2788);
                          pdStack_5d0 = &dStack_458;
                          FUN_140002730(&dStack_448,0x1420b2798);
                          pdStack_5c8 = &dStack_448;
                          FUN_140002730(&dStack_438,0x1420b27a8);
                          pdStack_5c0 = &dStack_438;
                          FUN_140002730(&dStack_428,0x1420b27b8);
                          pdStack_5b8 = &dStack_428;
                          uVar11 = FUN_1416cd660(&uStack_178,5,&pdStack_5d8);
                          FUN_1400019a0(&dStack_418,uVar11);
                          pdStack_5b0 = &dStack_418;
                          FUN_140002730(&dStack_408,0x1420b27c8);
                          pdStack_5a8 = &dStack_408;
                          FUN_140002730(&dStack_3f8,0x14217ee40);
                          pdStack_5a0 = &dStack_3f8;
                          dVar17 = (double)FUN_1416cdc60(_UNK_1419864f0,_UNK_1419864f8);
                          if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3e8);
                          }
                          dStack_3e8 = dVar17 / _UNK_141983970;
                          uStack_3dc = 0;
                          pdStack_598 = &dStack_3e8;
                          in_XMM1_Qa = _UNK_141986508;
                          dVar17 = (double)FUN_1416cdc60(_UNK_141986500,_UNK_141986508);
                          if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3d8);
                          }
                          dStack_3d8 = dVar17 / _UNK_1419843c8;
                          uStack_3cc = 0;
                          pdStack_590 = &dStack_3d8;
                          dVar17 = (double)FUN_1416cdc30(dVar18);
                          if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_3c8);
                          }
                          dStack_3c8 = dVar17 + _UNK_141986510;
                          uStack_3bc = 0;
                          pdStack_588 = &dStack_3c8;
                          in_stack_fffffffffffff898 = &pdStack_5b0;
                          FUN_1400d2410(plStack_f8,plStack_110,&uStack_138,6,
                                        in_stack_fffffffffffff898);
                          break;
                        }
                        uStack_198 = 0x1c;
                        uStack_100 = uStack_100 & 0xffffffff;
                        uStack_108 = 0;
                        iVar7 = FUN_1416d9df0(&dStack_190,&uStack_108,uVar11,1);
                        if (-1 < iVar7) {
                          if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_1d8);
                          }
                          uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                          uStack_1d8 = 0;
                          uStack_1d0 = 0x500000000;
                          uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                          FUN_1400019a0(&dStack_438,uVar11);
                          pdStack_5c0 = &dStack_438;
                          in_stack_fffffffffffff8a0 = &pdStack_5c0;
                          ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da4c0);
                          uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,1,ppdVar28,
                                                 in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&dStack_190,uVar11,uRam00000001420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            uStack_198 = 0x1e;
                            if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1c8);
                            }
                            uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            uStack_1c8 = 0;
                            uStack_1c0 = 0x500000000;
                            uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                            FUN_1400019a0(&dStack_428,uVar11);
                            pdStack_5b8 = &dStack_428;
                            pdStack_5b0 = &dStack_190;
                            FUN_140002730(&dStack_408,0x14217ee40);
                            pdStack_5a8 = &dStack_408;
                            plRam0000000142182d90 = (longlong *)0x480000;
                            uVar12 = CONCAT44(uVar22,uRam00000001420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(plStack_f8,plStack_110,&uStack_1c8,3,uVar12,
                                                    &pdStack_5b8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar13);
                            }
                            FUN_140003ca0(&uStack_108,&uStack_670);
                            if ((uStack_184 & 0xffffff) == 0) {
                              dVar17 = dStack_190;
                            }
                            else {
                              dVar17 = (double)FUN_1416940c0(&dStack_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,0,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                            uStack_198 = 0x1f;
                            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_138);
                            }
                            uStack_138 = 0;
                            uStack_130 = 0x500000000;
                            FUN_1400019a0(&dStack_468,uVar11);
                            pdStack_5d8 = &dStack_468;
                            pdStack_5d0 = &dStack_190;
                            FUN_140002730(&dStack_448,0x1420b2728);
                            pdStack_5c8 = &dStack_448;
                            in_stack_fffffffffffff8a0 = &pdStack_5d8;
                            ppdVar28 = (double **)CONCAT44(uVar22,uRam00000001420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,3,ppdVar28,
                                                    in_stack_fffffffffffff8a0);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              uStack_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&uStack_108,puVar13);
                            }
                            FUN_140003ca0(&uStack_108,&uStack_670);
                            if ((uStack_184 & 0xffffff) == 0) {
                              dVar17 = dStack_190;
                            }
                            else {
                              dVar17 = (double)FUN_1416940c0(&dStack_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,1,&uStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_108);
                            }
                          }
                        }
                        switch(uStack_184 & 0xffffff) {
                        case 1:
                          dStack_190 = (double)FUN_1416940c0(&dStack_190);
                          dStack_190 = dStack_190 + dVar1;
                          uStack_184 = 0;
                          goto joined_r0x0001416741ba;
                        default:
                          FUN_140001d70(&UNK_141981e6a,&dStack_190,&dStack_190);
                          break;
                        case 7:
                          dStack_190 = (double)CONCAT44(dStack_190._4_4_,dStack_190._0_4_ + 1);
                          goto joined_r0x0001416741ba;
                        case 10:
                          goto code_r0x0001416745f8;
                        case 0xd:
                          uStack_184 = 0;
                        case 0:
                          dStack_190 = dStack_190 + dVar1;
                          goto joined_r0x0001416741ba;
                        }
                      } while( true );
                    }
                  }
code_r0x000141675d1a:
                  in_stack_fffffffffffff8a0 =
                       (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 =
                       (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                  FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  uStack_100 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    uStack_108 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&uStack_108,puVar9);
                  }
                  FUN_140003ca0(&uStack_108,puStack_180);
                  iVar7 = FUN_1416d9df0(&uStack_108,&uStack_1f8,uRam00000001420f6b08,1);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_108);
                  }
                  if (-1 < iVar7) {
                    uStack_198 = 0x30;
                    uVar11 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                    (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                    (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                    uStack_100 = uStack_100 & 0xffffffff;
                    uStack_108 = 0x3fec000000000000;
                    FUN_140001fe0(uVar11,&uStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    uStack_198 = 0x31;
                    uVar11 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                    uStack_100 = uStack_100 & 0xffffffff;
                    uStack_108 = 0x3feb333333333333;
                    FUN_140001fe0(uVar11,&uStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    uStack_198 = 0x32;
                    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_138);
                    }
                    uStack_138 = 0;
                    uStack_130 = 0x500000000;
                    uVar11 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                    puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                  (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    uVar22 = (undefined4)(uVar27 >> 0x20);
                    uStack_15c = *(uint *)((longlong)puVar9 + 0xc);
                    uStack_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&uStack_168,puVar9);
                    }
                    FUN_140003ca0(&uStack_168,uVar11);
                    uStack_120 = CONCAT44(uStack_15c,uStack_160);
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_128 = uStack_168;
                    }
                    else {
                      FUN_141670fe0(&uStack_128,&uStack_168);
                    }
                    FUN_140003e00(&uStack_128,&uStack_1e8);
                    FUN_140004520(&uStack_108,&uStack_128,uVar14);
                    FUN_1400019a0(&dStack_468,&uStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_128);
                    }
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_168);
                    }
                    pdStack_5d8 = &dStack_468;
                    ppdVar28 = &pdStack_5d8;
                    uVar27 = CONCAT44(uVar22,uRam00000001420da4b0);
                    uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,uVar27,ppdVar28);
                    FUN_1400019a0(&dStack_4a8,uVar11);
                    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_178);
                    }
                    uStack_178 = 0;
                    uStack_170 = 0x500000000;
                    uVar11 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                    puVar9 = (undefined8 *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                  (ulonglong)ppdVar28 & 0xffffffffffffff00);
                    uVar22 = (undefined4)(uVar27 >> 0x20);
                    uStack_15c = *(uint *)((longlong)puVar9 + 0xc);
                    uStack_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&uStack_168,puVar9);
                    }
                    FUN_140003ca0(&uStack_168,uVar11);
                    uStack_120 = CONCAT44(uStack_15c,uStack_160);
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_128 = uStack_168;
                    }
                    else {
                      FUN_141670fe0(&uStack_128,&uStack_168);
                    }
                    FUN_140003e00(&uStack_128,&uStack_1e8);
                    FUN_140004520(&uStack_108,&uStack_128,uVar14);
                    FUN_1400019a0(&dStack_458,&uStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_128);
                    }
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_168);
                    }
                    pdStack_5d0 = &dStack_458;
                    in_stack_fffffffffffff8a0 = &pdStack_5d0;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,uRam00000001420da4b0);
                    uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,1,
                                           in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    FUN_1400019a0(&dStack_498,uVar11);
                    uStack_100 = uStack_100 & 0xffffffff;
                    uStack_108 = 0;
                    uVar22 = (undefined4)uRam00000001420f6b08;
                    uVar8 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                    iVar7 = FUN_1416d9df0(&dStack_4a8,&uStack_108,uRam00000001420f6b08,1);
                    if (-1 < iVar7) {
                      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_138);
                      }
                      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      uStack_138 = 0;
                      uStack_130 = 0x500000000;
                      uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                      FUN_1400019a0(&dStack_468,uVar11);
                      pdStack_5d8 = &dStack_468;
                      in_stack_fffffffffffff8a0 = &pdStack_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,uRam00000001420da4c0);
                      uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      uVar22 = (undefined4)uRam00000001420f6b08;
                      uVar8 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                      iVar7 = FUN_1416d9df0(&dStack_4a8,uVar11,uRam00000001420f6b08,1);
                      if ((iVar7 != -2) && (iVar7 < 0)) {
                        uStack_198 = 0x34;
                        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_178);
                        }
                        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                        uStack_178 = 0;
                        uStack_170 = 0x500000000;
                        uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                        FUN_1400019a0(&dStack_458,uVar11);
                        pdStack_5d0 = &dStack_458;
                        pdStack_5c8 = &dStack_4a8;
                        FUN_140002730(&dStack_438,0x14217ee40);
                        pdStack_5c0 = &dStack_438;
                        plRam0000000142182d90 = (longlong *)0x480000;
                        uVar12 = CONCAT44(uVar22,uRam00000001420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,3,uVar12,
                                               &pdStack_5d0);
                        uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&uStack_108,puVar9);
                        }
                        FUN_140003ca0(&uStack_108,&uStack_680);
                        if ((uStack_49c & 0xffffff) == 0) {
                          dVar17 = dStack_4a8;
                        }
                        else {
                          dVar17 = (double)FUN_1416940c0(&dStack_4a8);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,0,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                        uStack_198 = 0x35;
                        if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_138);
                        }
                        uStack_138 = 0;
                        uStack_130 = 0x500000000;
                        FUN_1400019a0(&dStack_468,uVar11);
                        pdStack_5d8 = &dStack_468;
                        pdStack_5d0 = &dStack_4a8;
                        FUN_140002730(&dStack_448,0x1420b2728);
                        pdStack_5c8 = &dStack_448;
                        in_stack_fffffffffffff8a0 = &pdStack_5d8;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,uRam00000001420da240)
                        ;
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,3,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&uStack_108,puVar9);
                        }
                        FUN_140003ca0(&uStack_108,&uStack_680);
                        if ((uStack_49c & 0xffffff) == 0) {
                          dVar17 = dStack_4a8;
                        }
                        else {
                          dVar17 = (double)FUN_1416940c0(&dStack_4a8);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,1,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                        uVar22 = (undefined4)uRam00000001420f6b08;
                        uVar8 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                      }
                    }
                    uStack_100 = uStack_100 & 0xffffffff;
                    uStack_108 = 0;
                    iVar7 = FUN_1416d9df0(&dStack_498,&uStack_108,CONCAT44(uVar8,uVar22),1);
                    if (-1 < iVar7) {
                      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_138);
                      }
                      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      uStack_138 = 0;
                      uStack_130 = 0x500000000;
                      uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                      FUN_1400019a0(&dStack_468,uVar11);
                      pdStack_5d8 = &dStack_468;
                      in_stack_fffffffffffff8a0 = &pdStack_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,uRam00000001420da4c0);
                      uVar11 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      iVar7 = FUN_1416d9df0(&dStack_498,uVar11,uRam00000001420f6b08,1);
                      if ((iVar7 != -2) && (iVar7 < 0)) {
                        uStack_198 = 0x38;
                        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_178);
                        }
                        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                        uStack_178 = 0;
                        uStack_170 = 0x500000000;
                        uVar11 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                        FUN_1400019a0(&dStack_458,uVar11);
                        pdStack_5d0 = &dStack_458;
                        pdStack_5c8 = &dStack_498;
                        FUN_140002730(&dStack_438,0x14217ee40);
                        pdStack_5c0 = &dStack_438;
                        uVar12 = CONCAT44(uVar22,uRam00000001420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,3,uVar12,
                                               &pdStack_5d0);
                        uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&uStack_108,puVar9);
                        }
                        FUN_140003e00(&uStack_108,&uStack_680);
                        if ((uStack_48c & 0xffffff) == 0) {
                          dVar17 = dStack_498;
                        }
                        else {
                          dVar17 = (double)FUN_1416940c0(&dStack_498);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,0,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                        uStack_198 = 0x39;
                        if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_138);
                        }
                        uStack_138 = 0;
                        uStack_130 = 0x500000000;
                        FUN_1400019a0(&dStack_468,uVar11);
                        pdStack_5d8 = &dStack_468;
                        pdStack_5d0 = &dStack_498;
                        FUN_140002730(&dStack_448,0x1420b2728);
                        pdStack_5c8 = &dStack_448;
                        in_stack_fffffffffffff8a0 = &pdStack_5d8;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,uRam00000001420da240)
                        ;
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,3,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          uStack_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&uStack_108,puVar9);
                        }
                        FUN_140003e00(&uStack_108,&uStack_680);
                        if ((uStack_48c & 0xffffff) == 0) {
                          dVar17 = dStack_498;
                        }
                        else {
                          dVar17 = (double)FUN_1416940c0(&dStack_498);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,1,&uStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_108);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          cVar6 = func_0x0001416abe60(&uStack_158,&plStack_f8,&plStack_110);
        } while (cVar6 != '\0');
      }
      FUN_1416ab620(&uStack_158,&plStack_f8,&plStack_110);
      if (lStack_148 != 0) {
        func_0x000141695b90();
        lStack_148 = 0;
      }
    }
    uStack_198 = 0x3f;
    if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_258);
    }
    uVar22 = _UNK_141981f80;
    uVar10 = _UNK_141981ea8;
    dVar1 = _UNK_141981e30;
    uStack_24c = 0;
    dStack_258 = 0.0;
    while( true ) {
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      uStack_138 = 0;
      uStack_130 = 0x500000000;
      uStack_108 = 0;
      uStack_100 = 0;
      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18826,0x80000000,&uStack_108,uVar27,
                    (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar27 >> 0x20);
      FUN_1400019a0(&dStack_468,&uStack_108);
      in_stack_fffffffffffff8a0 = &pdStack_5d8;
      uVar27 = CONCAT44(uVar8,uRam00000001420da4d0);
      pdStack_5d8 = &dStack_468;
      uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,uVar27,in_stack_fffffffffffff8a0);
      iVar7 = FUN_1416d9df0(&dStack_258,uVar14,uRam00000001420f6b08,1);
      if ((iVar7 == -2) || (-1 < iVar7)) break;
      uStack_198 = 0x40;
      uStack_128 = 0;
      uStack_120 = 0;
      uVar8 = FUN_141693b30(&dStack_258);
      in_stack_fffffffffffff8a0 =
           (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
      in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
      FUN_1416d0010(0x4f,0x18826,uVar8,&uStack_128,in_stack_fffffffffffff898,
                    in_stack_fffffffffffff8a0);
      FUN_1400019a0(&dStack_608,&uStack_128);
      if ((uStack_5fc & 0xffffff) == 0) {
        dVar18 = dStack_608;
      }
      else {
        dVar18 = (double)FUN_1416940c0(&dStack_608);
      }
      cVar6 = FUN_1416f8280(plStack_f8,plStack_110,(longlong)dVar18);
      if (cVar6 != '\0') {
        uStack_198 = 0x41;
        in_stack_fffffffffffff8a0 =
             (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
        in_stack_fffffffffffff898 =
             (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
        FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,&uStack_620,
                      in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
        iVar7 = FUN_1416d9df0(&dStack_608,&uStack_620,uRam00000001420f6b08,0);
        if (iVar7 != 0) {
          FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
          uStack_14c = 0;
          uStack_158 = 0x4050400000000000;
          iVar7 = FUN_1416d9df0(&uStack_238,&uStack_158,uRam00000001420f6b08,0);
          if (iVar7 != 0) {
            uStack_198 = 0x42;
            if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_138);
            }
            uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
            uStack_138 = 0;
            uStack_130 = 0x500000000;
            FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
            FUN_1400019a0(&dStack_468,&uStack_238);
            pdStack_5d8 = &dStack_468;
            FUN_140002730(&dStack_458,0x1420b27d8);
            pdStack_5d0 = &dStack_458;
            in_stack_fffffffffffff8a0 = &pdStack_5d8;
            in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da330);
            uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,2,in_stack_fffffffffffff898,
                                   in_stack_fffffffffffff8a0);
            uStack_14c = 0;
            uStack_158 = 0x3ff0000000000000;
            iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,0);
            if (iVar7 == 0) {
              uStack_198 = 0x44;
              in_stack_fffffffffffff8a0 =
                   (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
              in_stack_fffffffffffff898 =
                   (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
              FUN_1416cfeb0(&dStack_608,0x18ccd,0x80000000,&uStack_750,in_stack_fffffffffffff898,
                            in_stack_fffffffffffff8a0);
              uStack_14c = 0;
              uStack_158 = 0x3ff0000000000000;
              iVar7 = FUN_1416d9df0(&uStack_750,&uStack_158,uRam00000001420f6b08,0);
              if (iVar7 == 0) {
                FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                uStack_14c = 0;
                uStack_158 = 0x4050000000000000;
                iVar7 = FUN_1416d9df0(&uStack_238,&uStack_158,uRam00000001420f6b08,0);
                if (iVar7 == 0) {
code_r0x000141676fd9:
                  uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bae);
                  uStack_14c = 0;
                  uStack_158 = 0x3ff0000000000000;
                  iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,0);
                  if (iVar7 != 0) goto code_r0x000141677028;
code_r0x0001416771b8:
                  in_stack_fffffffffffff8a0 =
                       (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 =
                       (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                  FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  uStack_14c = 0;
                  uStack_158 = 0x4050000000000000;
                  iVar7 = FUN_1416d9df0(&uStack_248,&uStack_158,uRam00000001420f6b08,0);
                  if (iVar7 == 0) {
code_r0x00014167736e:
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cfeb0(&dStack_608,0x18bae,0x80000000,&uStack_740,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    uStack_14c = 0;
                    uStack_158 = 0x3ff0000000000000;
                    iVar7 = FUN_1416d9df0(&uStack_740,&uStack_158,uRam00000001420f6b08,0);
                    if (iVar7 != 0) goto code_r0x0001416773cd;
code_r0x000141677587:
                    if ((0x46U >> (uStack_210._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_218);
                    }
                    uStack_218 = 0;
                    uStack_210 = 0x500000000;
                    if ((0x46U >> (uStack_4c0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_4c8);
                    }
                    uStack_4c8 = 0;
                    uStack_4c0 = 0x500000000;
                    if ((0x46U >> (uStack_638._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_640);
                    }
                    uStack_640 = 0;
                    uStack_638 = 0x500000000;
                    puStack_180 = (undefined8 *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x189cf);
                    uStack_610 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e26);
                    uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18d7b);
                    uVar15 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18d7a);
                    uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,uVar27,
                                  uVar29);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,uVar27,
                                  uVar29);
                    FUN_1416cfc30(&dStack_608,uRam00000001420d58e8,0x80000000,&uStack_660);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_608,0x189cf,0x80000000,&uStack_6b0,uVar27,uVar29);
                    FUN_1416cfc30(&dStack_608,uRam00000001420d58f8,0x80000000,&uStack_650);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_608,0x18e26,0x80000000,&uStack_6a0,uVar27,uVar29);
                    uStack_14c = uStack_1dc;
                    uStack_150 = uStack_1e0;
                    if ((0x46U >> (uStack_1dc & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_1e8;
                    }
                    else {
                      FUN_141670fe0(&uStack_158,&uStack_1e8);
                    }
                    FUN_140003ca0(&uStack_158,puStack_180);
                    FUN_1400019a0(&dStack_3c8,&uStack_158);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
                    pdStack_588 = &dStack_3c8;
                    uStack_14c = uStack_1ec;
                    uStack_150 = uStack_1f0;
                    if ((0x46U >> (uStack_1ec & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_1f8;
                    }
                    else {
                      FUN_141670fe0(&uStack_158,&uStack_1f8);
                    }
                    FUN_140003ca0(&uStack_158,uStack_610);
                    FUN_1400019a0(&uStack_3b8,&uStack_158);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
                    puStack_580 = &uStack_3b8;
                    uStack_14c = uStack_654;
                    uStack_150 = uStack_658;
                    if ((0x46U >> (uStack_654 & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_660;
                    }
                    else {
                      FUN_141670fe0(&uStack_158,&uStack_660);
                    }
                    FUN_140003ca0(&uStack_158,&uStack_6b0);
                    FUN_1400019a0(&dStack_3a8,&uStack_158);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
                    pdStack_578 = &dStack_3a8;
                    uStack_14c = uStack_644;
                    uStack_150 = uStack_648;
                    if ((0x46U >> (uStack_644 & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_650;
                    }
                    else {
                      FUN_141670fe0(&uStack_158,&uStack_650);
                    }
                    FUN_140003ca0(&uStack_158,&uStack_6a0);
                    FUN_1400019a0(&uStack_398,&uStack_158);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
                    puStack_570 = &uStack_398;
                    FUN_1400019a0(&uStack_388,uVar14);
                    puStack_568 = &uStack_388;
                    FUN_1400019a0(&uStack_378,uVar15);
                    puStack_560 = &uStack_378;
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_608,0x18d7b,0x80000000,&uStack_730,uVar27,uVar29);
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_608,0x18d7a,0x80000000,&uStack_720,uVar27,
                                  uVar29 & 0xffffffffffffff00);
                    uVar8 = (undefined4)(uVar27 >> 0x20);
                    FUN_1400019a0(&uStack_368,&uStack_730);
                    puStack_558 = &uStack_368;
                    FUN_1400019a0(&uStack_358,&uStack_720);
                    puStack_550 = &uStack_358;
                    uVar14 = FUN_1416cd900(&uStack_640,2,&puStack_558);
                    puVar9 = (undefined8 *)FUN_1416cd900(&uStack_4c8,2,&puStack_568);
                    uStack_15c = *(uint *)((longlong)puVar9 + 0xc);
                    uStack_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&uStack_168,puVar9);
                    }
                    FUN_140003ca0(&uStack_168,uVar14);
                    uStack_14c = uStack_15c;
                    uStack_150 = uStack_160;
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_168;
                    }
                    else {
                      FUN_141670fe0(&uStack_158,&uStack_168);
                    }
                    FUN_140001c50(&uStack_158,0x50);
                    in_stack_fffffffffffff8a0 = &pdStack_588;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da150);
                    uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_218,4,
                                           in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
                    if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_168);
                    }
                    uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
                    if (iVar7 != -2 && iVar7 < 1) {
                      uStack_198 = 0x4a;
                      uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x18e3b,0x80000000,&uStack_710,uVar27,uVar29);
                      FUN_1400019a0(&uStack_278,&uStack_710);
                      uStack_198 = 0x4b;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x18e4b,0x80000000,&uStack_700,uVar27,uVar29);
                      FUN_1400019a0(&uStack_268,&uStack_700);
                      uStack_198 = 0x4c;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x18e3d,0x80000000,&uStack_6f0,uVar27,uVar29);
                      FUN_1400019a0(&uStack_478,&uStack_6f0);
                      uStack_198 = 0x4d;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x18e4d,0x80000000,&uStack_6e0,uVar27,uVar29);
                      FUN_1400019a0(&uStack_4b8,&uStack_6e0);
                      uStack_198 = 0x4e;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x18e26,0x80000000,&uStack_6a0,uVar27,uVar29);
                      FUN_1400019a0(&uStack_5f8,&uStack_6a0);
                      uStack_198 = 0x4f;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_608,0x189cf,0x80000000,&uStack_6b0,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar20 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&uStack_5e8,&uStack_6b0);
                      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_138);
                      }
                      uStack_138 = 0;
                      uStack_130 = 0x500000000;
                      FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                      FUN_1400019a0(&dStack_468,&uStack_238);
                      in_stack_fffffffffffff8a0 = &pdStack_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar20,uRam00000001420da4e0);
                      pdStack_5d8 = &dStack_468;
                      uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      uStack_14c = 0;
                      uStack_158 = 0x4049800000000000;
                      iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,0);
                      if (iVar7 != 0) {
                        in_stack_fffffffffffff8a0 =
                             (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                        in_stack_fffffffffffff898 =
                             (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                        FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,
                                      in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        iVar7 = FUN_1416d9df0(&uStack_1e8,&uStack_278,uRam00000001420f6b08,1);
                        if (0 < iVar7) {
                          in_stack_fffffffffffff8a0 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                          in_stack_fffffffffffff898 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                          FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&uStack_1e8,
                                        in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&uStack_1e8,&uStack_478,uRam00000001420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            in_stack_fffffffffffff8a0 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                            in_stack_fffffffffffff898 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                            FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                                          in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                            iVar7 = FUN_1416d9df0(&uStack_1f8,&uStack_268,uRam00000001420f6b08,1);
                            if (0 < iVar7) {
                              in_stack_fffffffffffff8a0 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                              in_stack_fffffffffffff898 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                              FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&uStack_1f8,
                                            in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                              iVar7 = FUN_1416d9df0(&uStack_1f8,&uStack_4b8,uRam00000001420f6b08,1);
                              if ((iVar7 != -2) && (iVar7 < 0)) {
                                uStack_198 = 0x52;
                                puStack_180 = (undefined8 *)
                                              (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3a);
                                puVar13 = (undefined8 *)
                                          (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e49);
                                uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                                uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&dStack_608,0x18e3a,0x80000000,&dStack_4e8,uVar27,
                                              uVar29);
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&dStack_608,0x18e49,0x80000000,&uStack_4d8,uVar27,
                                              uVar29);
                                if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
                                  uVar20 = (undefined4)*puVar13;
                                  uVar21 = (undefined4)((ulonglong)*puVar13 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) != 0)
                                  goto code_r0x000141677fa2;
code_r0x000141677fbd:
                                  uVar23 = (undefined4)*puVar9;
                                  uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                                  if ((uStack_4cc & 0xffffff) != 0) goto code_r0x000141677fce;
code_r0x000141677fed:
                                  uVar25 = (undefined4)uStack_4d8;
                                  uVar26 = (undefined4)((ulonglong)uStack_4d8 >> 0x20);
                                  if ((uStack_4dc & 0xffffff) != 0) goto code_r0x000141678002;
code_r0x000141678010:
                                  dVar18 = dStack_4e8;
                                }
                                else {
                                  uVar14 = FUN_1416940c0(puVar13);
                                  uVar20 = (undefined4)uVar14;
                                  uVar21 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0)
                                  goto code_r0x000141677fbd;
code_r0x000141677fa2:
                                  uVar14 = FUN_1416940c0(puVar9);
                                  uVar23 = (undefined4)uVar14;
                                  uVar24 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((uStack_4cc & 0xffffff) == 0) goto code_r0x000141677fed;
code_r0x000141677fce:
                                  uVar14 = FUN_1416940c0(&uStack_4d8);
                                  uVar25 = (undefined4)uVar14;
                                  uVar26 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((uStack_4dc & 0xffffff) == 0) goto code_r0x000141678010;
code_r0x000141678002:
                                  dVar18 = (double)FUN_1416940c0(&dStack_4e8);
                                }
                                uVar19 = (ulonglong)(uint)(float)(double)CONCAT44(uVar24,uVar23);
                                uVar14 = FUN_1416cdb80((float)dVar18,
                                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar26
                                                  ,uVar25)),uVar19,
                                                  (float)(double)CONCAT44(uVar21,uVar20));
                                uVar8 = (undefined4)(uVar19 >> 0x20);
                                fVar16 = (float)FUN_1416cd800(uVar22,uVar14);
                                FUN_140003f30(puStack_180,(double)fVar16);
                                uStack_198 = 0x53;
                                puStack_180 = (undefined8 *)
                                              (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3a);
                                puVar13 = (undefined8 *)
                                          (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e49);
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&dStack_608,0x18e3a,0x80000000,&dStack_4e8,uVar27,
                                              uVar29);
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&dStack_608,0x18e49,0x80000000,&uStack_4d8,uVar27,
                                              uVar29);
                                if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
                                  uVar20 = (undefined4)*puVar13;
                                  uVar21 = (undefined4)((ulonglong)*puVar13 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) != 0)
                                  goto code_r0x000141678118;
code_r0x000141678133:
                                  uVar23 = (undefined4)*puVar9;
                                  uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                                  if ((uStack_4cc & 0xffffff) != 0) goto code_r0x000141678144;
code_r0x000141678163:
                                  uVar25 = (undefined4)uStack_4d8;
                                  uVar26 = (undefined4)((ulonglong)uStack_4d8 >> 0x20);
                                  if ((uStack_4dc & 0xffffff) != 0) goto code_r0x000141678178;
code_r0x000141678186:
                                  dVar18 = dStack_4e8;
                                }
                                else {
                                  uVar14 = FUN_1416940c0(puVar13);
                                  uVar20 = (undefined4)uVar14;
                                  uVar21 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0)
                                  goto code_r0x000141678133;
code_r0x000141678118:
                                  uVar14 = FUN_1416940c0(puVar9);
                                  uVar23 = (undefined4)uVar14;
                                  uVar24 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((uStack_4cc & 0xffffff) == 0) goto code_r0x000141678163;
code_r0x000141678144:
                                  uVar14 = FUN_1416940c0(&uStack_4d8);
                                  uVar25 = (undefined4)uVar14;
                                  uVar26 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((uStack_4dc & 0xffffff) == 0) goto code_r0x000141678186;
code_r0x000141678178:
                                  dVar18 = (double)FUN_1416940c0(&dStack_4e8);
                                }
                                uVar14 = FUN_1416cdb80((float)dVar18,
                                                       (float)(double)CONCAT44(uVar26,uVar25),
                                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar24
                                                  ,uVar23)),(float)(double)CONCAT44(uVar21,uVar20));
                                fVar16 = (float)FUN_1416cd880(uVar22,uVar14);
                                FUN_140003f30(puStack_180,(double)fVar16);
                                in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00)
                                ;
                                in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00)
                                ;
                                FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248
                                              ,in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                                uStack_14c = 0;
                                uStack_158 = 0x4050000000000000;
                                iVar7 = FUN_1416d9df0(&uStack_248,&uStack_158,uRam00000001420f6b08,0
                                                     );
                                if (iVar7 == 0) {
                                  uStack_198 = 0x55;
                                  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&uStack_138);
                                  }
                                  uStack_138 = 0;
                                  uStack_130 = 0x500000000;
                                  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&uStack_178);
                                  }
                                  uStack_178 = 0;
                                  uStack_170 = 0x500000000;
                                  uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00
                                  ;
                                  uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00
                                  ;
                                  FUN_1416cfeb0(&dStack_608,0x18e3a,0x80000000,&dStack_4e8,uVar27,
                                                uVar29);
                                  in_stack_fffffffffffff8a0 =
                                       (double **)(uVar29 & 0xffffffffffffff00);
                                  FUN_1416cfeb0(&dStack_608,0x18e49,0x80000000,&uStack_4d8,
                                                uVar27 & 0xffffffffffffff00,
                                                in_stack_fffffffffffff8a0);
                                  FUN_140002730(&dStack_468,0x1420b27f8);
                                  pdStack_5d8 = &dStack_468;
                                  FUN_140002730(&dStack_458,0x1420b2808);
                                  pdStack_5d0 = &dStack_458;
                                  FUN_140002730(&dStack_448,0x1420b2818);
                                  pdStack_5c8 = &dStack_448;
                                  FUN_140002730(&dStack_438,0x1420b2828);
                                  pdStack_5c0 = &dStack_438;
                                  FUN_140002730(&dStack_428,0x1420b2728);
                                  pdStack_5b8 = &dStack_428;
                                  FUN_1400019a0(&dStack_418,&dStack_4e8);
                                  pdStack_5b0 = &dStack_418;
                                  FUN_1400019a0(&dStack_408,&uStack_4d8);
                                  pdStack_5a8 = &dStack_408;
                                  uVar14 = FUN_1416cd660(&uStack_178,4,&pdStack_5d8);
                                  FUN_1400019a0(&dStack_3f8,uVar14);
                                  pdStack_5a0 = &dStack_3f8;
                                  in_stack_fffffffffffff898 = &pdStack_5b8;
                                  FUN_1400e28e0(plStack_f8,plStack_110,&uStack_138,4,
                                                in_stack_fffffffffffff898);
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4d);
                      uStack_14c = uStack_25c;
                      uStack_150 = uStack_260;
                      if ((0x46U >> (uStack_25c & 0x1f) & 1) == 0) {
                        uStack_158 = uStack_268;
                      }
                      else {
                        FUN_141670fe0(&uStack_158,&uStack_268);
                      }
                      FUN_140003f30(&uStack_158,uVar10);
                      iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_158);
                      }
                      if (0 < iVar7) {
                        uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                        FUN_140003ba0(&uStack_158,&uStack_4b8,uVar10);
                        iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                        if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_158);
                        }
                        if (iVar7 != -2 && iVar7 < 0) {
                          puVar9 = (undefined8 *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3d);
                          puStack_180 = (undefined8 *)
                                        (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                          uStack_14c = uStack_26c;
                          uStack_150 = uStack_270;
                          if ((0x46U >> (uStack_26c & 0x1f) & 1) == 0) {
                            uStack_158 = uStack_278;
                          }
                          else {
                            FUN_141670fe0(&uStack_158,&uStack_278);
                          }
                          FUN_140003ca0(&uStack_158,&uStack_5e8);
                          uStack_15c = *(uint *)((longlong)puVar9 + 0xc);
                          uStack_160 = *(undefined4 *)(puVar9 + 1);
                          if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                            uStack_168 = *puVar9;
                          }
                          else {
                            FUN_141670fe0(&uStack_168,puVar9);
                          }
                          FUN_140003ca0(&uStack_168,puStack_180);
                          iVar7 = FUN_1416d9df0(&uStack_168,&uStack_158,uRam00000001420f6b08,1);
                          if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_168);
                          }
                          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_158);
                          }
                          if (-1 < iVar7) {
                            puStack_180 = (undefined8 *)
                                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                            puVar9 = (undefined8 *)
                                     (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3b);
                            uStack_14c = uStack_46c;
                            uStack_150 = uStack_470;
                            if ((0x46U >> (uStack_46c & 0x1f) & 1) == 0) {
                              uStack_158 = uStack_478;
                            }
                            else {
                              FUN_141670fe0(&uStack_158,&uStack_478);
                            }
                            FUN_140003ca0(&uStack_158,&uStack_5e8);
                            uStack_15c = *(uint *)((longlong)puVar9 + 0xc);
                            uStack_160 = *(undefined4 *)(puVar9 + 1);
                            if ((0x46U >> (uStack_15c & 0x1f) & 1) == 0) {
                              uStack_168 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&uStack_168,puVar9);
                            }
                            FUN_140003ca0(&uStack_168,puStack_180);
                            iVar7 = FUN_1416d9df0(&uStack_168,&uStack_158,uRam00000001420f6b08,1);
                            if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_168);
                            }
                            if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_158);
                            }
                            if (iVar7 != -2 && iVar7 < 1) {
                              uStack_198 = 0x5c;
                              uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3b);
                              iVar7 = FUN_1416d9df0(uVar14,&uStack_278,uRam00000001420f6b08,1);
                              if ((iVar7 == -2) || (-1 < iVar7)) {
                                uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                                iVar7 = FUN_1416d9df0(uVar14,&uStack_478,uRam00000001420f6b08,1);
                                if (iVar7 < 1) goto code_r0x000141678b3c;
                                uStack_198 = 100;
                                uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(uVar14,&uStack_478);
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x65;
                                puStack_180 = (undefined8 *)
                                              (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                                uStack_610 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x187b4);
                                uStack_14c = *(uint *)((longlong)puVar9 + 0xc);
                                uStack_150 = *(undefined4 *)(puVar9 + 1);
                                if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
                                  uStack_158 = *puVar9;
                                }
                                else {
                                  FUN_141670fe0(&uStack_158,puVar9);
                                }
                                FUN_140003ca0(&uStack_158,uStack_610);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(puStack_180,&uStack_158);
                                if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&uStack_158);
                                }
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x66;
                                uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(uVar14,&uStack_5e8);
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x67;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
                                if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0)
                                {
                                  FUN_140001b50(puVar9);
                                }
                              }
                              else {
                                uStack_198 = 0x5d;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(puVar9,&uStack_278);
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x5e;
                                puStack_180 = (undefined8 *)
                                              (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                                uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x187b4);
                                uStack_14c = *(uint *)((longlong)puVar9 + 0xc);
                                uStack_150 = *(undefined4 *)(puVar9 + 1);
                                if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
                                  uStack_158 = *puVar9;
                                }
                                else {
                                  FUN_141670fe0(&uStack_158,puVar9);
                                }
                                FUN_140003e00(&uStack_158,uVar14);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(puStack_180,&uStack_158);
                                if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&uStack_158);
                                }
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x5f;
                                uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                                FUN_1416a8cb0(plStack_f8);
                                FUN_1400019a0(uVar14,&uStack_5e8);
                                func_0x0001416a8c00(1);
                                uStack_198 = 0x60;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
                                if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0)
                                {
                                  FUN_140001b50(puVar9);
                                }
                              }
                              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                              *puVar9 = 0x3ff0000000000000;
                            }
                          }
                        }
                      }
code_r0x000141678b3c:
                      uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                      uStack_14c = uStack_26c;
                      uStack_150 = uStack_270;
                      if ((0x46U >> (uStack_26c & 0x1f) & 1) == 0) {
                        uStack_158 = uStack_278;
                      }
                      else {
                        FUN_141670fe0(&uStack_158,&uStack_278);
                      }
                      in_XMM1_Qa = uVar10;
                      FUN_140003f30(&uStack_158,uVar10);
                      iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_158);
                      }
                      if (0 < iVar7) {
                        uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                        FUN_140003ba0(&uStack_158,&uStack_478,uVar10);
                        iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                        if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_158);
                        }
                        if (iVar7 != -2 && iVar7 < 0) {
                          puVar9 = (undefined8 *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4d);
                          puStack_180 = (undefined8 *)
                                        (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                          uStack_14c = uStack_25c;
                          uStack_150 = uStack_260;
                          if ((0x46U >> (uStack_25c & 0x1f) & 1) == 0) {
                            uStack_158 = uStack_268;
                          }
                          else {
                            FUN_141670fe0(&uStack_158,&uStack_268);
                          }
                          FUN_140003ca0(&uStack_158,&uStack_5f8);
                          uStack_1ac = *(uint *)((longlong)puVar9 + 0xc);
                          uStack_1b0 = *(undefined4 *)(puVar9 + 1);
                          if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
                            uStack_1b8 = *puVar9;
                          }
                          else {
                            FUN_141670fe0(&uStack_1b8,puVar9);
                          }
                          FUN_140003ca0(&uStack_1b8,puStack_180);
                          uStack_15c = uStack_1ac;
                          uStack_160 = uStack_1b0;
                          if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
                            uStack_168 = uStack_1b8;
                          }
                          else {
                            FUN_141670fe0(&uStack_168,&uStack_1b8);
                          }
                          in_XMM1_Qa = uVar10;
                          FUN_140003f30(&uStack_168,uVar10);
                          iVar7 = FUN_1416d9df0(&uStack_168,&uStack_158,uRam00000001420f6b08,1);
                          if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_168);
                          }
                          if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_1b8);
                          }
                          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_158);
                          }
                          if (-1 < iVar7) {
                            puStack_180 = (undefined8 *)
                                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                            puVar9 = (undefined8 *)
                                     (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                            uStack_14c = uStack_4ac;
                            uStack_150 = uStack_4b0;
                            if ((0x46U >> (uStack_4ac & 0x1f) & 1) == 0) {
                              uStack_158 = uStack_4b8;
                            }
                            else {
                              FUN_141670fe0(&uStack_158,&uStack_4b8);
                            }
                            FUN_140003ca0(&uStack_158,&uStack_5f8);
                            uStack_1ac = *(uint *)((longlong)puVar9 + 0xc);
                            uStack_1b0 = *(undefined4 *)(puVar9 + 1);
                            if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
                              uStack_1b8 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&uStack_1b8,puVar9);
                            }
                            FUN_140003ca0(&uStack_1b8,puStack_180);
                            FUN_140003ba0(&uStack_168,&uStack_1b8,uVar10);
                            iVar7 = FUN_1416d9df0(&uStack_168,&uStack_158,uRam00000001420f6b08,1);
                            puStack_180 = (undefined8 *)CONCAT71(puStack_180._1_7_,iVar7 < 1);
                            if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_168);
                            }
                            if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1b8);
                            }
                            if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_158);
                            }
                            if ((iVar7 != -2 & (byte)puStack_180) != 0) {
                              uStack_198 = 0x6b;
                              uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                              iVar7 = FUN_1416d9df0(uVar14,&uStack_268,uRam00000001420f6b08,1);
                              if ((iVar7 != -2) && (iVar7 < 0)) {
                                uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1881e);
                                uStack_14c = 0;
                                uStack_158 = 0;
                                iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,0);
                                if (iVar7 == 0) {
                                  uStack_198 = 0x6d;
                                  uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e4d);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uVar14,&uStack_268);
                                  func_0x0001416a8c00(1);
                                  uStack_198 = 0x6e;
                                  puStack_180 = (undefined8 *)
                                                (**(code **)(*plStack_f8 + 0x10))
                                                          (plStack_f8,0x18e4b);
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e4d);
                                  uStack_610 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1877f);
                                  uStack_14c = *(uint *)((longlong)puVar9 + 0xc);
                                  uStack_150 = *(undefined4 *)(puVar9 + 1);
                                  if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
                                    uStack_158 = *puVar9;
                                  }
                                  else {
                                    FUN_141670fe0(&uStack_158,puVar9);
                                  }
                                  FUN_140003e00(&uStack_158,uStack_610);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(puStack_180,&uStack_158);
                                  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&uStack_158);
                                  }
                                  func_0x0001416a8c00(1);
                                  uStack_198 = 0x6f;
                                  uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uVar14,&uStack_5f8);
                                  func_0x0001416a8c00(1);
                                  uStack_198 = 0x70;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b43);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x3ff0000000000000;
                                  uStack_198 = 0x71;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b42);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x3ff0000000000000;
                                  uStack_198 = 0x72;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c2);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x4020000000000000;
                                  uStack_198 = 0x73;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b3f);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x4020000000000000;
                                  uVar14 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1898f);
                                  uStack_14c = 0;
                                  uStack_158 = 0;
                                  iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,1);
                                  if (0 < iVar7) {
                                    uStack_198 = 0x74;
                                    in_stack_fffffffffffff8a0 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00)
                                    ;
                                    in_stack_fffffffffffff898 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00)
                                    ;
                                    FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,
                                                  &uStack_620,in_stack_fffffffffffff898,
                                                  in_stack_fffffffffffff8a0);
                                    FUN_1400019a0(&uStack_6d0,&uStack_620);
                                    FUN_1416d0720(&dStack_608,0x189c4,0x80000000,&uStack_6d0);
                                  }
                                  in_stack_fffffffffffff8a0 =
                                       (double **)
                                       ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                                  in_stack_fffffffffffff898 =
                                       (double **)
                                       ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                                  FUN_1416cfeb0(&dStack_608,0x18afe,0x80000000,&uStack_6c0,
                                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0)
                                  ;
                                  uStack_14c = 0;
                                  uStack_158 = 0x3ff0000000000000;
                                  iVar7 = FUN_1416d9df0(&uStack_6c0,&uStack_158,uRam00000001420f6b08
                                                        ,0);
                                  if (iVar7 == 0) {
                                    uStack_198 = 0x75;
                                    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&uStack_138);
                                    }
                                    uStack_138 = 0;
                                    uStack_130 = 0x500000000;
                                    uVar27 = (ulonglong)in_stack_fffffffffffff898 &
                                             0xffffffffffffff00;
                                    FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,
                                                  &uStack_248,uVar27,
                                                  (ulonglong)in_stack_fffffffffffff8a0 &
                                                  0xffffffffffffff00);
                                    uVar8 = (undefined4)(uVar27 >> 0x20);
                                    FUN_1400019a0(&dStack_468,&uStack_248);
                                    pdStack_5d8 = &dStack_468;
                                    FUN_140002730(&dStack_458,0x1420b27d8);
                                    pdStack_5d0 = &dStack_458;
                                    in_stack_fffffffffffff8a0 = &pdStack_5d8;
                                    in_stack_fffffffffffff898 =
                                         (double **)CONCAT44(uVar8,uRam00000001420da330);
                                    uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_138,2,
                                                           in_stack_fffffffffffff898,
                                                           in_stack_fffffffffffff8a0);
                                    uStack_14c = 0;
                                    uStack_158 = 0x3ff0000000000000;
                                    iVar7 = FUN_1416d9df0(uVar14,&uStack_158,uRam00000001420f6b08,0)
                                    ;
                                    if (iVar7 == 0) {
                                      uStack_198 = 0x76;
                                      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                                        FUN_140001b50(&uStack_178);
                                      }
                                      uStack_178 = 0;
                                      uStack_170 = 0x500000000;
                                      uVar14 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26)
                                      ;
                                      in_stack_fffffffffffff8a0 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff8a0 &
                                           0xffffffffffffff00);
                                      FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,
                                                    &uStack_620,
                                                    (ulonglong)in_stack_fffffffffffff898 &
                                                    0xffffffffffffff00,in_stack_fffffffffffff8a0);
                                      FUN_1400019a0(&dStack_448,&uStack_620);
                                      pdStack_5c8 = &dStack_448;
                                      FUN_1400019a0(&dStack_438,uVar14);
                                      pdStack_5c0 = &dStack_438;
                                      in_stack_fffffffffffff898 = &pdStack_5c8;
                                      FUN_140061cf0(plStack_f8,plStack_110,&uStack_178,2,
                                                    in_stack_fffffffffffff898);
                                    }
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
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    uStack_14c = 0;
                    uStack_158 = 0x4050400000000000;
                    iVar7 = FUN_1416d9df0(&uStack_248,&uStack_158,uRam00000001420f6b08,0);
                    if (iVar7 == 0) goto code_r0x00014167736e;
                    if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_1c8);
                    }
                    uStack_1c8 = 0;
                    uStack_1c0 = 0x500000000;
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,uVar27,
                                  (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    uVar8 = (undefined4)(uVar27 >> 0x20);
                    FUN_1400019a0(&dStack_408,&uStack_248);
                    pdStack_5a8 = &dStack_408;
                    FUN_140002730(&dStack_3f8,0x1420b27e8);
                    pdStack_5a0 = &dStack_3f8;
                    in_stack_fffffffffffff8a0 = &pdStack_5a8;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da330);
                    uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1c8,2,
                                           in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    cVar6 = FUN_1416927d0(uVar14);
                    if (cVar6 != '\0') goto code_r0x00014167736e;
code_r0x0001416773cd:
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    uStack_14c = 0;
                    uStack_158 = 0x4050000000000000;
                    iVar7 = FUN_1416d9df0(&uStack_248,&uStack_158,uRam00000001420f6b08,0);
                    if (iVar7 != 0) {
                      in_stack_fffffffffffff8a0 =
                           (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff898 =
                           (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                      FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,
                                    in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      uStack_14c = 0;
                      uStack_158 = 0x4050400000000000;
                      iVar7 = FUN_1416d9df0(&uStack_248,&uStack_158,uRam00000001420f6b08,0);
                      if (iVar7 != 0) {
                        if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_228);
                        }
                        uStack_228 = 0;
                        uStack_220 = 0x500000000;
                        uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_248,uVar27,
                                      (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                        uVar8 = (undefined4)(uVar27 >> 0x20);
                        FUN_1400019a0(&dStack_3e8,&uStack_248);
                        pdStack_598 = &dStack_3e8;
                        FUN_140002730(&dStack_3d8,0x1420b27e8);
                        pdStack_590 = &dStack_3d8;
                        in_stack_fffffffffffff8a0 = &pdStack_598;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da330);
                        uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_228,2,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        cVar6 = FUN_1416927d0(uVar14);
                        if (cVar6 == '\0') goto code_r0x000141677587;
                      }
                    }
                  }
                }
                else {
                  FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                  uStack_14c = 0;
                  uStack_158 = 0x4050400000000000;
                  iVar7 = FUN_1416d9df0(&uStack_238,&uStack_158,uRam00000001420f6b08,0);
                  if (iVar7 == 0) goto code_r0x000141676fd9;
                  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_178);
                  }
                  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                  uStack_178 = 0;
                  uStack_170 = 0x500000000;
                  FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                  FUN_1400019a0(&dStack_448,&uStack_238);
                  pdStack_5c8 = &dStack_448;
                  FUN_140002730(&dStack_438,0x1420b27e8);
                  pdStack_5c0 = &dStack_438;
                  in_stack_fffffffffffff8a0 = &pdStack_5c8;
                  in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da330);
                  uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_178,2,
                                         in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  cVar6 = FUN_1416927d0(uVar14);
                  if (cVar6 != '\0') goto code_r0x000141676fd9;
code_r0x000141677028:
                  FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                  uStack_14c = 0;
                  uStack_158 = 0x4050000000000000;
                  iVar7 = FUN_1416d9df0(&uStack_238,&uStack_158,uRam00000001420f6b08,0);
                  if (iVar7 != 0) {
                    FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                    uStack_14c = 0;
                    uStack_158 = 0x4050400000000000;
                    iVar7 = FUN_1416d9df0(&uStack_238,&uStack_158,uRam00000001420f6b08,0);
                    if (iVar7 != 0) {
                      if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_1d8);
                      }
                      uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      uStack_1d8 = 0;
                      uStack_1d0 = 0x500000000;
                      FUN_1416cfc30(&dStack_608,uRam00000001420d5a28,0x80000000,&uStack_238);
                      FUN_1400019a0(&dStack_428,&uStack_238);
                      pdStack_5b8 = &dStack_428;
                      FUN_140002730(&dStack_418,0x1420b27e8);
                      pdStack_5b0 = &dStack_418;
                      in_stack_fffffffffffff8a0 = &pdStack_5b8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,uRam00000001420da330);
                      uVar14 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1d8,2,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      cVar6 = FUN_1416927d0(uVar14);
                      if (cVar6 == '\0') goto code_r0x0001416771b8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      switch(uStack_24c & 0xffffff) {
      case 1:
        dStack_258 = (double)FUN_1416940c0(&dStack_258);
        dStack_258 = dStack_258 + dVar1;
        uStack_24c = 0;
        break;
      default:
        FUN_140001d70(&UNK_141981e6a,&dStack_258,&dStack_258);
        break;
      case 7:
        dStack_258 = (double)CONCAT44(dStack_258._4_4_,dStack_258._0_4_ + 1);
        break;
      case 10:
        dStack_258 = (double)((longlong)dStack_258 + 1);
        break;
      case 0xd:
        uStack_24c = 0;
      case 0:
        dStack_258 = dStack_258 + dVar1;
      }
    }
  }
  if ((0x46U >> (uStack_638._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_640);
  }
  if ((0x46U >> (uStack_4c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4c8);
  }
  if ((0x46U >> (uStack_210._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_6b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6c0);
  }
  if ((0x46U >> (uStack_6c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6d0);
  }
  if ((0x46U >> (uStack_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4d8);
  }
  if ((0x46U >> (uStack_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4e8);
  }
  if ((0x46U >> (uStack_6d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6e0);
  }
  if ((0x46U >> (uStack_6e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6f0);
  }
  if ((0x46U >> (uStack_6f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_700);
  }
  if ((0x46U >> (uStack_704 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_710);
  }
  if ((0x46U >> (uStack_714 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_720);
  }
  if ((0x46U >> (uStack_724 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_730);
  }
  if ((0x46U >> (uStack_694 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6a0);
  }
  if ((0x46U >> (uStack_644 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_650);
  }
  if ((0x46U >> (uStack_6a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6b0);
  }
  if ((0x46U >> (uStack_654 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_660);
  }
  if ((0x46U >> (uStack_734 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_740);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_744 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_750);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_614 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_620);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_258);
  }
  if ((0x46U >> (uStack_48c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_498);
  }
  if ((0x46U >> (uStack_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4a8);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_624 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_630);
  }
  if ((0x46U >> (uStack_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_190);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_664 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_670);
  }
  if ((0x46U >> (uStack_674 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_680);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_684 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_690);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_5dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5e8);
  }
  if ((0x46U >> (uStack_5ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5f8);
  }
  if ((0x46U >> (uStack_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b8);
  }
  if ((0x46U >> (uStack_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_478);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_5fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_608);
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
    FUN_140001b50(&uStack_2d8);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_308);
  }
  if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_318);
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
    FUN_140001b50(&uStack_358);
  }
  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_368);
  }
  if ((0x46U >> (uStack_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_378);
  }
  if ((0x46U >> (uStack_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_388);
  }
  if ((0x46U >> (uStack_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_398);
  }
  if ((0x46U >> (uStack_39c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3a8);
  }
  if ((0x46U >> (uStack_3ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b8);
  }
  if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3c8);
  }
  if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3d8);
  }
  if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3e8);
  }
  if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_3f8);
  }
  if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_408);
  }
  if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_418);
  }
  if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_428);
  }
  if ((0x46U >> (uStack_42c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_438);
  }
  if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_448);
  }
  if ((0x46U >> (uStack_44c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_458);
  }
  if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_468);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_1a8;
  return param_3;
code_r0x000141673278:
  dStack_190 = (double)((longlong)dStack_190 + 1);
  goto joined_r0x000141672e3a;
code_r0x0001416745f8:
  dStack_190 = (double)((longlong)dStack_190 + 1);
  goto joined_r0x0001416741ba;
}


