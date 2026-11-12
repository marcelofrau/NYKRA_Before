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
  undefined8 local_750;
  uint local_744;
  undefined8 local_740;
  uint local_734;
  undefined8 local_730;
  uint local_724;
  undefined8 local_720;
  uint local_714;
  undefined8 local_710;
  uint local_704;
  undefined8 local_700;
  uint local_6f4;
  undefined8 local_6f0;
  uint local_6e4;
  undefined8 local_6e0;
  uint local_6d4;
  undefined8 local_6d0;
  uint local_6c4;
  undefined8 local_6c0;
  uint local_6b4;
  undefined8 local_6b0;
  uint local_6a4;
  undefined8 local_6a0;
  uint local_694;
  undefined8 local_690;
  undefined4 local_688;
  uint local_684;
  undefined8 local_680;
  uint local_674;
  undefined8 local_670;
  uint local_664;
  undefined8 local_660;
  undefined4 local_658;
  uint local_654;
  undefined8 local_650;
  undefined4 local_648;
  uint local_644;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  uint local_624;
  undefined8 local_620;
  uint local_614;
  undefined8 local_610;
  double local_608;
  uint local_5fc;
  undefined8 local_5f8;
  uint local_5ec;
  undefined8 local_5e8;
  uint local_5dc;
  double *local_5d8;
  double *local_5d0;
  double *local_5c8;
  double *local_5c0;
  double *local_5b8;
  double *local_5b0;
  double *local_5a8;
  double *local_5a0;
  double *local_598;
  double *local_590;
  double *local_588;
  undefined8 *local_580;
  double *local_578;
  undefined8 *local_570;
  undefined8 *local_568;
  undefined8 *local_560;
  undefined8 *local_558;
  undefined8 *local_550;
  undefined8 *local_548;
  undefined8 *local_540;
  undefined8 *local_538;
  undefined8 *local_530;
  undefined8 *local_528;
  undefined8 *local_520;
  undefined8 *local_518;
  undefined8 *local_510;
  undefined8 *local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  double local_4e8;
  uint local_4dc;
  undefined8 local_4d8;
  uint local_4cc;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  double local_4a8;
  uint local_49c;
  double local_498;
  uint local_48c;
  undefined8 local_488;
  uint local_47c;
  undefined8 local_478;
  undefined4 local_470;
  uint local_46c;
  double local_468;
  uint local_45c;
  double local_458;
  uint local_44c;
  double local_448;
  uint local_43c;
  double local_438;
  uint local_42c;
  double local_428;
  uint local_41c;
  double local_418;
  uint local_40c;
  double local_408;
  uint local_3fc;
  double local_3f8;
  uint local_3ec;
  double local_3e8;
  uint local_3dc;
  double local_3d8;
  uint local_3cc;
  double local_3c8;
  uint local_3bc;
  undefined8 local_3b8;
  uint local_3ac;
  double local_3a8;
  uint local_39c;
  undefined8 local_398;
  uint local_38c;
  undefined8 local_388;
  uint local_37c;
  undefined8 local_378;
  uint local_36c;
  undefined8 local_368;
  uint local_35c;
  undefined8 local_358;
  uint local_34c;
  undefined8 local_348;
  uint local_33c;
  undefined8 local_338;
  uint local_32c;
  undefined8 local_328;
  uint local_31c;
  undefined8 local_318;
  uint local_30c;
  undefined8 local_308;
  uint local_2fc;
  undefined8 local_2f8;
  uint local_2ec;
  undefined8 local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_270;
  uint local_26c;
  undefined8 local_268;
  undefined4 local_260;
  uint local_25c;
  double local_258;
  uint local_24c;
  undefined8 local_248;
  uint local_23c;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  double local_190;
  uint local_184;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  local_1a0 = "gml_Script_COLLIDE";
  local_198 = 0;
  local_1a8 = DAT_142182d78;
  DAT_142182d78 = &local_1a8;
  local_45c = 0xffffff;
  local_468 = 0.0;
  local_44c = 0xffffff;
  local_458 = 0.0;
  local_43c = 0xffffff;
  local_448 = 0.0;
  local_42c = 0xffffff;
  local_438 = 0.0;
  local_41c = 0xffffff;
  local_428 = 0.0;
  local_40c = 0xffffff;
  local_418 = 0.0;
  local_3fc = 0xffffff;
  local_408 = 0.0;
  local_3ec = 0xffffff;
  local_3f8 = 0.0;
  local_3dc = 0xffffff;
  local_3e8 = 0.0;
  local_3cc = 0xffffff;
  local_3d8 = 0.0;
  local_3bc = 0xffffff;
  local_3c8 = 0.0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0.0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_5fc = 0xffffff;
  local_608 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_5ec = 0xffffff;
  local_5f8 = 0;
  local_5dc = 0xffffff;
  local_5e8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_684 = 0xffffff;
  local_690 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_674 = 0xffffff;
  local_680 = 0;
  local_664 = 0xffffff;
  local_670 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_624 = 0xffffff;
  local_630 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0.0;
  local_48c = 0xffffff;
  local_498 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_614 = 0xffffff;
  local_620 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_744 = 0xffffff;
  local_750 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_734 = 0xffffff;
  local_740 = 0;
  local_654 = 0xffffff;
  local_660 = 0;
  local_6a4 = 0xffffff;
  local_6b0 = 0;
  local_644 = 0xffffff;
  local_650 = 0;
  local_694 = 0xffffff;
  local_6a0 = 0;
  local_724 = 0xffffff;
  local_730 = 0;
  local_714 = 0xffffff;
  local_720 = 0;
  local_704 = 0xffffff;
  local_710 = 0;
  local_6f4 = 0xffffff;
  local_700 = 0;
  local_6e4 = 0xffffff;
  local_6f0 = 0;
  local_6d4 = 0xffffff;
  local_6e0 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0.0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_6c4 = 0xffffff;
  local_6d0 = 0;
  local_6b4 = 0xffffff;
  local_6c0 = 0;
  local_130 = (ulonglong)(uint)local_130;
  local_138 = 0;
  local_170 = (ulonglong)(uint)local_170;
  local_178 = 0;
  local_1d0 = (ulonglong)(uint)local_1d0;
  local_1d8 = 0;
  local_1c0 = (ulonglong)(uint)local_1c0;
  local_1c8 = 0;
  local_220 = (ulonglong)(uint)local_220;
  local_228 = 0;
  local_210 = (ulonglong)(uint)local_210;
  local_218 = 0;
  local_4c0 = (ulonglong)(uint)local_4c0;
  local_4c8 = 0;
  local_638 = (ulonglong)(uint)local_638;
  local_640 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_110 = param_2;
  local_f8 = param_1;
  FUN_1416ab750(DAT_1420dc960);
  local_198 = 3;
  puVar9 = (undefined8 *)(**(code **)(*local_f8 + 0x10))(local_f8,0x189c3);
  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0;
  uVar10 = (**(code **)(*local_f8 + 8))(local_f8,0x18afe);
  local_14c = 0;
  local_158 = 0;
  iVar7 = FUN_1416d9df0(uVar10,&local_158,DAT_1420f6b08,0);
  if (iVar7 == 0) {
    local_198 = 5;
    if ((0x46U >> (local_5fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_608);
    }
    local_5fc = 0;
    local_608 = -4.0;
    if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_278);
    }
    local_26c = 0;
    local_278 = 0;
    if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_268);
    }
    local_25c = 0;
    local_268 = 0;
    if ((0x46U >> (local_46c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_478);
    }
    local_46c = 0;
    local_478 = 0;
    if ((0x46U >> (local_4ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_4b8);
    }
    local_4ac = 0;
    local_4b8 = 0;
    if ((0x46U >> (local_5ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_5f8);
    }
    local_5ec = 0;
    local_5f8 = 0;
    if ((0x46U >> (local_5dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_5e8);
    }
    local_5dc = 0;
    local_5e8 = 0;
    iVar7 = FUN_1416f82f0(local_f8,local_110,0x2b);
    if (0 < iVar7) {
      local_198 = 6;
      uStack_100 = uStack_100 & 0xffffffff;
      local_108 = 0x4045800000000000;
      iVar7 = FUN_1416ab810(&local_158,&local_f8,&local_110,&local_108);
      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      uVar5 = DAT_141986528;
      uVar4 = DAT_141985628;
      uVar3 = _DAT_1419841c0;
      uVar2 = DAT_141983d90;
      uVar15 = _DAT_141983800;
      uVar14 = DAT_141982e78;
      dVar18 = _DAT_141982c40;
      dVar1 = _DAT_141981e30;
      uVar10 = _DAT_141981d18;
      if (0 < iVar7) {
        do {
          local_198 = 7;
          uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3b);
          in_stack_fffffffffffff8a0 =
               (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
          in_stack_fffffffffffff898 =
               (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
          FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,in_stack_fffffffffffff898,
                        in_stack_fffffffffffff8a0);
          iVar7 = FUN_1416d9df0(uVar11,&local_1e8,DAT_1420f6b08,1);
          if (-1 < iVar7) {
            uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3d);
            puVar9 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x18e33);
            uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18c5f);
            in_stack_fffffffffffff8a0 =
                 (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
            in_stack_fffffffffffff898 =
                 (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
            FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,in_stack_fffffffffffff898,
                          in_stack_fffffffffffff8a0);
            uStack_120 = puVar9[1];
            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
              local_128 = *puVar9;
            }
            else {
              FUN_141670fe0(&local_128,puVar9);
            }
            FUN_140001fe0(&local_128,uVar12);
            uStack_100 = CONCAT44(local_1dc,local_1e0);
            if ((0x46U >> (local_1dc & 0x1f) & 1) == 0) {
              local_108 = local_1e8;
            }
            else {
              FUN_141670fe0(&local_108,&local_1e8);
            }
            FUN_140003ca0(&local_108,&local_128);
            iVar7 = FUN_1416d9df0(uVar11,&local_108,DAT_1420f6b08,1);
            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_108);
            }
            if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_128);
            }
            if (iVar7 != -2 && iVar7 < 1) {
              uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18782);
              uVar12 = (**(code **)(*local_110 + 8))(local_110,0x18e26);
              uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
              uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
              FUN_1416cea80(local_110,DAT_1420d58f8,0x80000000,&local_690,uVar27,uVar29);
              in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00);
              in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
              FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,in_stack_fffffffffffff898,
                            in_stack_fffffffffffff8a0);
              local_15c = local_684;
              local_160 = local_688;
              if ((0x46U >> (local_684 & 0x1f) & 1) == 0) {
                local_168 = local_690;
              }
              else {
                FUN_141670fe0(&local_168,&local_690);
              }
              FUN_140003ca0(&local_168,uVar11);
              uStack_120 = CONCAT44(local_15c,local_160);
              if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                local_128 = local_168;
              }
              else {
                FUN_141670fe0(&local_128,&local_168);
              }
              FUN_140003ca0(&local_128,uVar12);
              uStack_100 = uStack_120;
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                local_108 = local_128;
              }
              else {
                FUN_141670fe0(&local_108,&local_128);
              }
              FUN_140001c50(&local_108,0x10);
              iVar7 = FUN_1416d9df0(&local_108,&local_1f8,DAT_1420f6b08,1);
              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_108);
              }
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_128);
              }
              if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_168);
              }
              if (-1 < iVar7) {
                uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e4d);
                uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x189a2);
                in_stack_fffffffffffff8a0 =
                     (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                in_stack_fffffffffffff898 =
                     (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,in_stack_fffffffffffff898
                              ,in_stack_fffffffffffff8a0);
                uStack_120 = CONCAT44(local_1ec,local_1f0);
                if ((0x46U >> (local_1ec & 0x1f) & 1) == 0) {
                  local_128 = local_1f8;
                }
                else {
                  FUN_141670fe0(&local_128,&local_1f8);
                }
                FUN_140003ca0(&local_128,uVar12);
                uStack_100 = uStack_120;
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                  local_108 = local_128;
                }
                else {
                  FUN_141670fe0(&local_108,&local_128);
                }
                FUN_140001c50(&local_108,2);
                iVar7 = FUN_1416d9df0(uVar11,&local_108,DAT_1420f6b08,1);
                if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_108);
                }
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_128);
                }
                if (iVar7 != -2 && iVar7 < 1) {
                  local_198 = 9;
                  puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x189cf);
                  uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x189a2);
                  local_47c = 0;
                  local_488 = 0x4050000000000000;
                  FUN_140003e00(&local_488,uVar11);
                  FUN_140004520(&local_1b8,&local_488,DAT_141983260);
                  local_15c = 0;
                  local_168 = 0x3ff0000000000000;
                  FUN_140003ca0(&local_168,&local_1b8);
                  uStack_120 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    local_128 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&local_128,puVar9);
                  }
                  FUN_140004620(&local_128,&local_168);
                  FUN_140009980(&local_108,&local_128,_DAT_141985238);
                  FUN_1400019a0(&local_680,&local_108);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_128);
                  }
                  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_168);
                  }
                  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1b8);
                  }
                  if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_488);
                  }
                  local_180 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e26);
                  local_47c = 0;
                  local_488 = 0x4050000000000000;
                  FUN_140003e00(&local_488,uVar11);
                  FUN_140004520(&local_1b8,&local_488,dVar18);
                  puVar9 = local_180;
                  local_15c = 0;
                  local_168 = 0x3ff0000000000000;
                  FUN_140003ca0(&local_168,&local_1b8);
                  uStack_120 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    local_128 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&local_128,puVar9);
                  }
                  FUN_140004620(&local_128,&local_168);
                  FUN_140009980(&local_108,&local_128,_DAT_141985238);
                  FUN_1400019a0(&local_670,&local_108);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_128);
                  }
                  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_168);
                  }
                  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1b8);
                  }
                  if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_488);
                  }
                  local_198 = 10;
                  uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e4d);
                  uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                  uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                  FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,uVar27,uVar29);
                  iVar7 = FUN_1416d9df0(uVar11,&local_1f8,DAT_1420f6b08,1);
                  if ((iVar7 != -2) && (iVar7 < 0)) {
                    (**(code **)(*local_f8 + 8))(local_f8,0x189a2);
                    local_180 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e26);
                    puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,uVar27,uVar29);
                    uStack_100 = puVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                      local_108 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&local_108,puVar9);
                    }
                    FUN_140003ca0(&local_108,local_180);
                    iVar7 = FUN_1416d9df0(&local_108,&local_1f8,DAT_1420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if (-1 < iVar7) {
                      local_198 = 0xc;
                      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_138);
                      }
                      local_138 = 0;
                      local_130 = 0x500000000;
                      if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_178);
                      }
                      local_178 = 0;
                      local_170 = 0x500000000;
                      uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3b);
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,uVar29);
                      FUN_1400019a0(&local_468,uVar11);
                      local_5d8 = &local_468;
                      FUN_1400019a0(&local_458,&local_208);
                      local_5d0 = &local_458;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar11 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0);
                      puVar13 = (undefined8 *)
                                FUN_1416ab210(local_f8,local_110,&local_178,2,uVar11,&local_5d8);
                      uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                      uStack_120 = puVar13[1];
                      if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                        local_128 = *puVar13;
                      }
                      else {
                        FUN_141670fe0(&local_128,puVar13);
                      }
                      FUN_140003e00(&local_128,&local_1e8);
                      FUN_140004520(&local_108,&local_128,uVar14);
                      FUN_1400019a0(&local_448,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_128);
                      }
                      local_5c8 = &local_448;
                      in_stack_fffffffffffff8a0 = &local_5c8;
                      ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4b0);
                      uVar11 = FUN_1416ab210(local_f8,local_110,&local_138,1,ppdVar28,
                                             in_stack_fffffffffffff8a0);
                      FUN_1400019a0(&local_190,uVar11);
                      do {
joined_r0x000141672e3a:
                        if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_138);
                        }
                        local_138 = 0;
                        local_130 = 0x500000000;
                        if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_178);
                        }
                        local_178 = 0;
                        local_170 = 0x500000000;
                        uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3d);
                        uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                        FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,uVar29);
                        FUN_1400019a0(&local_468,uVar11);
                        local_5d8 = &local_468;
                        FUN_1400019a0(&local_458,&local_208);
                        local_5d0 = &local_458;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                      uVar29 & 0xffffffffffffff00);
                        uVar11 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0);
                        puVar13 = (undefined8 *)
                                  FUN_1416ab210(local_f8,local_110,&local_178,2,uVar11,&local_5d8);
                        uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                        uStack_120 = puVar13[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                          local_128 = *puVar13;
                        }
                        else {
                          FUN_141670fe0(&local_128,puVar13);
                        }
                        FUN_140003e00(&local_128,&local_1e8);
                        FUN_140004520(&local_108,&local_128,uVar14);
                        FUN_1400019a0(&local_448,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_128);
                        }
                        local_5c8 = &local_448;
                        in_stack_fffffffffffff8a0 = &local_5c8;
                        ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4b0);
                        uVar12 = FUN_1416ab210(local_f8,local_110,&local_138,1,ppdVar28,
                                               in_stack_fffffffffffff8a0);
                        uVar11 = DAT_1420f6b08;
                        iVar7 = FUN_1416d9df0(&local_190,uVar12,DAT_1420f6b08,1);
                        if ((iVar7 == -2) || (0 < iVar7)) {
                          for (iVar7 = 0x20; 0 < iVar7; iVar7 = iVar7 + -1) {
                            local_198 = 0x13;
                            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_138);
                            }
                            local_138 = 0;
                            local_130 = 0x500000000;
                            if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_178);
                            }
                            local_178 = 0;
                            local_170 = 0x500000000;
                            if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1d8);
                            }
                            local_1d8 = 0;
                            local_1d0 = 0x500000000;
                            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1c8);
                            }
                            local_1c8 = 0;
                            local_1c0 = 0x500000000;
                            if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_228);
                            }
                            local_228 = 0;
                            local_220 = 0x500000000;
                            if ((0x46U >> (local_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_218);
                            }
                            local_218 = 0;
                            local_210 = 0x500000000;
                            puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,
                                          uVar29);
                            dVar17 = (double)FUN_1416cdc60(uVar4,_DAT_141982ef8);
                            if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_468);
                            }
                            local_45c = 0;
                            local_5d8 = &local_468;
                            local_468 = dVar17;
                            FUN_140002730(&local_458,&DAT_14217ee40);
                            local_5d0 = &local_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_448);
                            }
                            local_43c = 0;
                            local_5c8 = &local_448;
                            local_448 = dVar17;
                            FUN_140002730(&local_438,&DAT_14217ee40);
                            local_5c0 = &local_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_f8,DAT_1420d5a18,0x80000000,&local_630,uVar27,uVar29
                                         );
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d5a18,0x80000000,&local_288,uVar27,
                                          uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&local_108,&local_630,1);
                            FUN_1400019a0(&local_428,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b8 = &local_428;
                            uStack_100._4_4_ = local_27c;
                            if ((0x46U >> (local_27c & 0x1f) & 1) == 0) {
                              local_108 = local_288;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_288);
                            }
                            FUN_140001c50(&local_108,1);
                            FUN_1400019a0(&local_418,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b0 = &local_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_408);
                            }
                            local_408 = dVar17 + dVar18;
                            local_3fc = 0;
                            local_5a8 = &local_408;
                            dVar17 = (double)FUN_1416cdc60(0,_DAT_1419842b0);
                            if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3f8);
                            }
                            local_3ec = 0;
                            local_5a0 = &local_3f8;
                            local_3f8 = dVar17;
                            FUN_140002730(&local_3e8,&DAT_1420b2748);
                            local_598 = &local_3e8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_178,2,uVar12,&local_5d8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = local_1fc;
                            if ((0x46U >> (local_1fc & 0x1f) & 1) == 0) {
                              local_108 = local_208;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_208);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_3d8,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_590 = &local_3d8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_1d8,2,uVar12,&local_5c8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar9);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_3c8,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_588 = &local_3c8;
                            uVar11 = FUN_1416cd660(&local_1c8,2,&local_5b8);
                            FUN_1400019a0(&local_3b8,uVar11);
                            local_580 = &local_3b8;
                            FUN_140002730(&local_3a8,&DAT_1420b2738);
                            local_578 = &local_3a8;
                            uVar12 = CONCAT44(uVar22,DAT_1420d9ff0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_228,1,uVar12,&local_5a8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&local_108,uVar11,_DAT_141986538);
                            FUN_1400019a0(&local_398,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_570 = &local_398;
                            in_stack_fffffffffffff8a0 = &local_5a0;
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_218,2,
                                                   CONCAT44(uVar22,DAT_1420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&local_388,uVar11);
                            local_568 = &local_388;
                            FUN_140002730(&local_378,&DAT_14217ee40);
                            local_560 = &local_378;
                            FUN_140002730(&local_368,&DAT_14217ee40);
                            local_558 = &local_368;
                            FUN_140002730(&local_358,&DAT_1420b2728);
                            local_550 = &local_358;
                            FUN_140002730(&local_348,&DAT_14217ee40);
                            local_548 = &local_348;
                            FUN_140002730(&local_338,&DAT_1420b2728);
                            local_540 = &local_338;
                            FUN_140002730(&local_328,&DAT_1420b2758);
                            local_538 = &local_328;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_318);
                            }
                            local_30c = 0;
                            local_530 = &local_318;
                            local_318 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_308);
                            }
                            local_2fc = 0;
                            local_528 = &local_308;
                            local_308 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2f8);
                            }
                            local_2ec = 0;
                            local_520 = &local_2f8;
                            local_2f8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2e8);
                            }
                            local_2dc = 0;
                            local_518 = &local_2e8;
                            local_2e8 = uVar11;
                            FUN_140002730(&local_2d8,&DAT_14217ee40);
                            local_510 = &local_2d8;
                            FUN_140002730(&local_2c8,&DAT_1420b2768);
                            local_508 = &local_2c8;
                            ppdVar28 = &local_590;
                            FUN_140106850(local_f8,local_110,&local_138,0x12,ppdVar28);
                          }
                          local_198 = 0x17;
                          local_180 = (undefined8 *)
                                      (**(code **)(*local_110 + 0x10))(local_110,0x18e26);
                          uStack_100 = uStack_100 & 0xffffffff;
                          local_108 = 0x3feccccccccccccd;
                          FUN_140001fe0(local_180,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          local_198 = 0x18;
                          if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_138);
                          }
                          local_138 = 0;
                          local_130 = 0x500000000;
                          if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_178);
                          }
                          local_178 = 0;
                          local_170 = 0x500000000;
                          FUN_140002730(&local_468,&DAT_1420b2778);
                          local_5d8 = &local_468;
                          FUN_140002730(&local_458,&DAT_1420b2788);
                          local_5d0 = &local_458;
                          FUN_140002730(&local_448,&DAT_1420b2798);
                          local_5c8 = &local_448;
                          FUN_140002730(&local_438,&DAT_1420b27a8);
                          local_5c0 = &local_438;
                          FUN_140002730(&local_428,&DAT_1420b27b8);
                          local_5b8 = &local_428;
                          uVar11 = FUN_1416cd660(&local_178,5,&local_5d8);
                          FUN_1400019a0(&local_418,uVar11);
                          local_5b0 = &local_418;
                          FUN_140002730(&local_408,&DAT_1420b27c8);
                          local_5a8 = &local_408;
                          FUN_140002730(&local_3f8,&DAT_14217ee40);
                          local_5a0 = &local_3f8;
                          dVar17 = (double)FUN_1416cdc60(DAT_1419864f0,DAT_1419864f8);
                          if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3e8);
                          }
                          local_3e8 = dVar17 * _DAT_141983970;
                          local_3dc = 0;
                          local_598 = &local_3e8;
                          in_XMM1_Qa = DAT_141986508;
                          dVar17 = (double)FUN_1416cdc60(DAT_141986500,DAT_141986508);
                          if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3d8);
                          }
                          local_3d8 = dVar17 / DAT_1419843c8;
                          local_3cc = 0;
                          local_590 = &local_3d8;
                          dVar17 = (double)FUN_1416cdc30(dVar18);
                          if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3c8);
                          }
                          local_3c8 = dVar17 + _DAT_141986510;
                          local_3bc = 0;
                          local_588 = &local_3c8;
                          in_stack_fffffffffffff898 = &local_5b0;
                          FUN_1400d2410(local_f8,local_110,&local_138,6,in_stack_fffffffffffff898);
                          goto LAB_141675d1a;
                        }
                        local_198 = 0xc;
                        uStack_100 = uStack_100 & 0xffffffff;
                        local_108 = 0;
                        iVar7 = FUN_1416d9df0(&local_190,&local_108,uVar11,1);
                        if (-1 < iVar7) {
                          if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_1d8);
                          }
                          uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                          local_1d8 = 0;
                          local_1d0 = 0x500000000;
                          uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                          FUN_1400019a0(&local_438,uVar11);
                          local_5c0 = &local_438;
                          in_stack_fffffffffffff8a0 = &local_5c0;
                          ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4c0);
                          uVar11 = FUN_1416ab210(local_f8,local_110,&local_1d8,1,ppdVar28,
                                                 in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&local_190,uVar11,DAT_1420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            local_198 = 0xe;
                            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1c8);
                            }
                            uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            local_1c8 = 0;
                            local_1c0 = 0x500000000;
                            uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                            FUN_1400019a0(&local_428,uVar11);
                            local_5b8 = &local_428;
                            local_5b0 = &local_190;
                            FUN_140002730(&local_408,&DAT_14217ee40);
                            local_5a8 = &local_408;
                            DAT_142182d90 = (longlong *)0x480000;
                            uVar12 = CONCAT44(uVar22,DAT_1420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(local_f8,local_110,&local_1c8,3,uVar12,
                                                    &local_5b8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar13);
                            }
                            FUN_140003ca0(&local_108,&local_670);
                            dVar17 = local_190;
                            if ((local_184 & 0xffffff) != 0) {
                              dVar17 = (double)FUN_1416940c0(&local_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,0,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_198 = 0xf;
                            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_138);
                            }
                            local_138 = 0;
                            local_130 = 0x500000000;
                            FUN_1400019a0(&local_468,uVar11);
                            local_5d8 = &local_468;
                            local_5d0 = &local_190;
                            FUN_140002730(&local_448,&DAT_1420b2728);
                            local_5c8 = &local_448;
                            in_stack_fffffffffffff8a0 = &local_5d8;
                            ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(local_f8,local_110,&local_138,3,ppdVar28,
                                                    in_stack_fffffffffffff8a0);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar13);
                            }
                            FUN_140003ca0(&local_108,&local_670);
                            dVar17 = local_190;
                            if ((local_184 & 0xffffff) != 0) {
                              dVar17 = (double)FUN_1416940c0(&local_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,1,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                          }
                        }
                        switch(local_184 & 0xffffff) {
                        case 1:
                          local_190 = (double)FUN_1416940c0(&local_190);
                          local_190 = local_190 + dVar1;
                          local_184 = 0;
                          goto joined_r0x000141672e3a;
                        default:
                          FUN_140001d70(&DAT_141981e6a,&local_190,&local_190);
                          break;
                        case 7:
                          local_190 = (double)CONCAT44(local_190._4_4_,local_190._0_4_ + 1);
                          goto joined_r0x000141672e3a;
                        case 10:
                          goto code_r0x000141673278;
                        case 0xd:
                          local_184 = 0;
                        case 0:
                          local_190 = local_190 + dVar1;
                          goto joined_r0x000141672e3a;
                        }
                      } while( true );
                    }
                  }
                  puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                  in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
                  FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  iVar7 = FUN_1416d9df0(puVar9,&local_1f8,DAT_1420f6b08,1);
                  if (0 < iVar7) {
                    local_180 = (undefined8 *)(**(code **)(*local_110 + 0x10))(local_110,0x18e26);
                    puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    uStack_100 = puVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                      local_108 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&local_108,puVar9);
                    }
                    FUN_140003ca0(&local_108,local_180);
                    iVar7 = FUN_1416d9df0(&local_108,&local_1f8,DAT_1420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if (iVar7 != -2 && iVar7 < 1) {
                      local_198 = 0x1c;
                      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_138);
                      }
                      local_138 = 0;
                      local_130 = 0x500000000;
                      if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_178);
                      }
                      local_178 = 0;
                      local_170 = 0x500000000;
                      uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3b);
                      uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                      FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,uVar29);
                      FUN_1400019a0(&local_468,uVar11);
                      local_5d8 = &local_468;
                      FUN_1400019a0(&local_458,&local_208);
                      local_5d0 = &local_458;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar11 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0);
                      puVar13 = (undefined8 *)
                                FUN_1416ab210(local_f8,local_110,&local_178,2,uVar11,&local_5d8);
                      uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                      uStack_120 = puVar13[1];
                      if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                        local_128 = *puVar13;
                      }
                      else {
                        FUN_141670fe0(&local_128,puVar13);
                      }
                      FUN_140003e00(&local_128,&local_1e8);
                      FUN_140004520(&local_108,&local_128,uVar14);
                      FUN_1400019a0(&local_448,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_128);
                      }
                      local_5c8 = &local_448;
                      in_stack_fffffffffffff8a0 = &local_5c8;
                      ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4b0);
                      uVar11 = FUN_1416ab210(local_f8,local_110,&local_138,1,ppdVar28,
                                             in_stack_fffffffffffff8a0);
                      FUN_1400019a0(&local_190,uVar11);
                      do {
joined_r0x0001416741ba:
                        if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_138);
                        }
                        local_138 = 0;
                        local_130 = 0x500000000;
                        if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_178);
                        }
                        local_178 = 0;
                        local_170 = 0x500000000;
                        uVar11 = (**(code **)(*local_110 + 8))(local_110,0x18e3d);
                        uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                        FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,uVar29);
                        FUN_1400019a0(&local_468,uVar11);
                        local_5d8 = &local_468;
                        FUN_1400019a0(&local_458,&local_208);
                        local_5d0 = &local_458;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                      uVar29 & 0xffffffffffffff00);
                        uVar11 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0);
                        puVar13 = (undefined8 *)
                                  FUN_1416ab210(local_f8,local_110,&local_178,2,uVar11,&local_5d8);
                        uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
                        uStack_120 = puVar13[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                          local_128 = *puVar13;
                        }
                        else {
                          FUN_141670fe0(&local_128,puVar13);
                        }
                        FUN_140003e00(&local_128,&local_1e8);
                        FUN_140004520(&local_108,&local_128,uVar14);
                        FUN_1400019a0(&local_448,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_128);
                        }
                        local_5c8 = &local_448;
                        in_stack_fffffffffffff8a0 = &local_5c8;
                        ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4b0);
                        uVar12 = FUN_1416ab210(local_f8,local_110,&local_138,1,ppdVar28,
                                               in_stack_fffffffffffff8a0);
                        uVar11 = DAT_1420f6b08;
                        iVar7 = FUN_1416d9df0(&local_190,uVar12,DAT_1420f6b08,1);
                        if ((iVar7 == -2) || (0 < iVar7)) {
                          for (iVar7 = 0x20; 0 < iVar7; iVar7 = iVar7 + -1) {
                            local_198 = 0x23;
                            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_138);
                            }
                            local_138 = 0;
                            local_130 = 0x500000000;
                            if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_178);
                            }
                            local_178 = 0;
                            local_170 = 0x500000000;
                            if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1d8);
                            }
                            local_1d8 = 0;
                            local_1d0 = 0x500000000;
                            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1c8);
                            }
                            local_1c8 = 0;
                            local_1c0 = 0x500000000;
                            if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_228);
                            }
                            local_228 = 0;
                            local_220 = 0x500000000;
                            if ((0x46U >> (local_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_218);
                            }
                            local_218 = 0;
                            local_210 = 0x500000000;
                            puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,
                                          uVar29);
                            dVar17 = (double)FUN_1416cdc60(uVar4,_DAT_141982ef8);
                            if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_468);
                            }
                            local_45c = 0;
                            local_5d8 = &local_468;
                            local_468 = dVar17;
                            FUN_140002730(&local_458,&DAT_14217ee40);
                            local_5d0 = &local_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_448);
                            }
                            local_43c = 0;
                            local_5c8 = &local_448;
                            local_448 = dVar17;
                            FUN_140002730(&local_438,&DAT_14217ee40);
                            local_5c0 = &local_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_f8,DAT_1420d5a18,0x80000000,&local_630,uVar27,uVar29
                                         );
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d5a18,0x80000000,&local_288,uVar27,
                                          uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&local_108,&local_630,1);
                            FUN_1400019a0(&local_428,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b8 = &local_428;
                            uStack_100._4_4_ = local_27c;
                            if ((0x46U >> (local_27c & 0x1f) & 1) == 0) {
                              local_108 = local_288;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_288);
                            }
                            FUN_140001c50(&local_108,1);
                            FUN_1400019a0(&local_418,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b0 = &local_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_408);
                            }
                            local_408 = dVar17 + dVar18;
                            local_3fc = 0;
                            local_5a8 = &local_408;
                            dVar17 = (double)FUN_1416cdc60(DAT_141986518,DAT_141986520);
                            if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3f8);
                            }
                            local_3ec = 0;
                            local_5a0 = &local_3f8;
                            local_3f8 = dVar17;
                            FUN_140002730(&local_3e8,&DAT_1420b2748);
                            local_598 = &local_3e8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_178,2,uVar12,&local_5d8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = local_1fc;
                            if ((0x46U >> (local_1fc & 0x1f) & 1) == 0) {
                              local_108 = local_208;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_208);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_3d8,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_590 = &local_3d8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_1d8,2,uVar12,&local_5c8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar9);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_3c8,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_588 = &local_3c8;
                            uVar11 = FUN_1416cd660(&local_1c8,2,&local_5b8);
                            FUN_1400019a0(&local_3b8,uVar11);
                            local_580 = &local_3b8;
                            FUN_140002730(&local_3a8,&DAT_1420b2738);
                            local_578 = &local_3a8;
                            uVar12 = CONCAT44(uVar22,DAT_1420d9ff0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_228,1,uVar12,&local_5a8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&local_108,uVar11,DAT_141986530);
                            FUN_1400019a0(&local_398,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_570 = &local_398;
                            in_stack_fffffffffffff8a0 = &local_5a0;
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_218,2,
                                                   CONCAT44(uVar22,DAT_1420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&local_388,uVar11);
                            local_568 = &local_388;
                            FUN_140002730(&local_378,&DAT_14217ee40);
                            local_560 = &local_378;
                            FUN_140002730(&local_368,&DAT_14217ee40);
                            local_558 = &local_368;
                            FUN_140002730(&local_358,&DAT_1420b2728);
                            local_550 = &local_358;
                            FUN_140002730(&local_348,&DAT_14217ee40);
                            local_548 = &local_348;
                            FUN_140002730(&local_338,&DAT_1420b2728);
                            local_540 = &local_338;
                            FUN_140002730(&local_328,&DAT_1420b2758);
                            local_538 = &local_328;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_318);
                            }
                            local_30c = 0;
                            local_530 = &local_318;
                            local_318 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_308);
                            }
                            local_2fc = 0;
                            local_528 = &local_308;
                            local_308 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2f8);
                            }
                            local_2ec = 0;
                            local_520 = &local_2f8;
                            local_2f8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2e8);
                            }
                            local_2dc = 0;
                            local_518 = &local_2e8;
                            local_2e8 = uVar11;
                            FUN_140002730(&local_2d8,&DAT_14217ee40);
                            local_510 = &local_2d8;
                            FUN_140002730(&local_2c8,&DAT_1420b2768);
                            local_508 = &local_2c8;
                            ppdVar28 = &local_590;
                            FUN_140106850(local_f8,local_110,&local_138,0x12,ppdVar28);
                          }
                          for (iVar7 = 0x10; 0 < iVar7; iVar7 = iVar7 + -1) {
                            local_198 = 0x28;
                            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_138);
                            }
                            local_138 = 0;
                            local_130 = 0x500000000;
                            if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_178);
                            }
                            local_178 = 0;
                            local_170 = 0x500000000;
                            if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1d8);
                            }
                            local_1d8 = 0;
                            local_1d0 = 0x500000000;
                            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1c8);
                            }
                            local_1c8 = 0;
                            local_1c0 = 0x500000000;
                            if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_228);
                            }
                            local_228 = 0;
                            local_220 = 0x500000000;
                            if ((0x46U >> (local_210._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_218);
                            }
                            local_218 = 0;
                            local_210 = 0x500000000;
                            if ((0x46U >> (local_4c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_4c8);
                            }
                            local_4c8 = 0;
                            local_4c0 = 0x500000000;
                            puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e4d);
                            uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                            uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d58e8,0x80000000,&local_208,uVar27,
                                          uVar29);
                            dVar17 = (double)FUN_1416cdc60(DAT_141983d70,uVar14);
                            if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_468);
                            }
                            local_45c = 0;
                            local_5d8 = &local_468;
                            local_468 = dVar17;
                            FUN_140002730(&local_458,&DAT_14217ee40);
                            local_5d0 = &local_458;
                            dVar17 = (double)FUN_1416cdc60(uVar2,dVar18);
                            if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_448);
                            }
                            local_43c = 0;
                            local_5c8 = &local_448;
                            local_448 = dVar17;
                            FUN_140002730(&local_438,&DAT_14217ee40);
                            local_5c0 = &local_438;
                            uVar29 = uVar29 & 0xffffffffffffff00;
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_f8,DAT_1420d5a18,0x80000000,&local_630,uVar27,uVar29
                                         );
                            uVar27 = uVar27 & 0xffffffffffffff00;
                            FUN_1416cea80(local_110,DAT_1420d5a18,0x80000000,&local_288,uVar27,
                                          uVar29 & 0xffffffffffffff00);
                            uVar22 = (undefined4)(uVar27 >> 0x20);
                            FUN_140017bd0(&local_108,&local_630,1);
                            FUN_1400019a0(&local_428,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b8 = &local_428;
                            uStack_100._4_4_ = local_27c;
                            if ((0x46U >> (local_27c & 0x1f) & 1) == 0) {
                              local_108 = local_288;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_288);
                            }
                            FUN_140001c50(&local_108,1);
                            FUN_1400019a0(&local_418,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_5b0 = &local_418;
                            dVar17 = (double)FUN_1416cdc30(dVar18);
                            if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_408);
                            }
                            local_408 = dVar17 + dVar18;
                            local_3fc = 0;
                            local_5a8 = &local_408;
                            dVar17 = (double)FUN_1416cdc60(DAT_141986518,DAT_141986520);
                            if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3f8);
                            }
                            local_3ec = 0;
                            local_5a0 = &local_3f8;
                            local_3f8 = dVar17;
                            FUN_140002730(&local_3e8,&DAT_1420b2748);
                            local_598 = &local_3e8;
                            FUN_140002730(&local_3d8,&DAT_1420b2748);
                            local_590 = &local_3d8;
                            dVar17 = (double)FUN_1416cdc60(uVar5,dVar1);
                            if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3c8);
                            }
                            local_3bc = 0;
                            local_588 = &local_3c8;
                            local_3c8 = dVar17;
                            FUN_140002730(&local_3b8,&DAT_1420b2728);
                            local_580 = &local_3b8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_178,2,uVar12,&local_5d8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100._4_4_ = local_1fc;
                            if ((0x46U >> (local_1fc & 0x1f) & 1) == 0) {
                              local_108 = local_208;
                            }
                            else {
                              FUN_141670fe0(&local_108,&local_208);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_3a8,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_578 = &local_3a8;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_1d8,2,uVar12,&local_5c8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar9[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar9);
                            }
                            FUN_140003ca0(&local_108,uVar11);
                            FUN_1400019a0(&local_398,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_570 = &local_398;
                            uVar11 = FUN_1416cd660(&local_1c8,2,&local_5b8);
                            FUN_1400019a0(&local_388,uVar11);
                            local_568 = &local_388;
                            FUN_140002730(&local_378,&DAT_1420b2738);
                            local_560 = &local_378;
                            uVar12 = CONCAT44(uVar22,DAT_1420d9ff0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_228,1,uVar12,&local_5a8
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_140004520(&local_108,uVar11,DAT_141985538);
                            FUN_1400019a0(&local_368,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_558 = &local_368;
                            uVar12 = CONCAT44(uVar22,DAT_1420da0c0);
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_218,3,uVar12,&local_5a0
                                                  );
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            FUN_1400019a0(&local_358,uVar11);
                            local_550 = &local_358;
                            FUN_140002730(&local_348,&DAT_14217ee40);
                            local_548 = &local_348;
                            FUN_140002730(&local_338,&DAT_14217ee40);
                            local_540 = &local_338;
                            FUN_140002730(&local_328,&DAT_1420b2728);
                            local_538 = &local_328;
                            FUN_140002730(&local_318,&DAT_14217ee40);
                            local_530 = &local_318;
                            FUN_140002730(&local_308,&DAT_1420b2728);
                            local_528 = &local_308;
                            FUN_140002730(&local_2f8,&DAT_1420b2758);
                            local_520 = &local_2f8;
                            uVar11 = FUN_1416cd770(1);
                            if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2e8);
                            }
                            local_2dc = 0;
                            local_518 = &local_2e8;
                            local_2e8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar15,dVar1);
                            if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2d8);
                            }
                            local_2cc = 0;
                            local_510 = &local_2d8;
                            local_2d8 = uVar11;
                            uVar11 = FUN_1416cdc60(uVar10,uVar3);
                            if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_2c8);
                            }
                            local_2bc = 0;
                            local_508 = &local_2c8;
                            in_stack_fffffffffffff8a0 = &local_588;
                            local_2c8 = uVar11;
                            uVar11 = FUN_1416ab210(local_f8,local_110,&local_4c8,2,
                                                   CONCAT44(uVar22,DAT_1420da0c0),
                                                   in_stack_fffffffffffff8a0);
                            FUN_1400019a0(&local_2b8,uVar11);
                            local_500 = &local_2b8;
                            FUN_140002730(&local_2a8,&DAT_14217ee40);
                            local_4f8 = &local_2a8;
                            FUN_140002730(&local_298,&DAT_1420b2768);
                            local_4f0 = &local_298;
                            ppdVar28 = &local_578;
                            FUN_140106850(local_f8,local_110,&local_138,0x12,ppdVar28);
                          }
                          local_198 = 0x2c;
                          if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_138);
                          }
                          local_138 = 0;
                          local_130 = 0x500000000;
                          if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_178);
                          }
                          local_178 = 0;
                          local_170 = 0x500000000;
                          FUN_140002730(&local_468,&DAT_1420b2778);
                          local_5d8 = &local_468;
                          FUN_140002730(&local_458,&DAT_1420b2788);
                          local_5d0 = &local_458;
                          FUN_140002730(&local_448,&DAT_1420b2798);
                          local_5c8 = &local_448;
                          FUN_140002730(&local_438,&DAT_1420b27a8);
                          local_5c0 = &local_438;
                          FUN_140002730(&local_428,&DAT_1420b27b8);
                          local_5b8 = &local_428;
                          uVar11 = FUN_1416cd660(&local_178,5,&local_5d8);
                          FUN_1400019a0(&local_418,uVar11);
                          local_5b0 = &local_418;
                          FUN_140002730(&local_408,&DAT_1420b27c8);
                          local_5a8 = &local_408;
                          FUN_140002730(&local_3f8,&DAT_14217ee40);
                          local_5a0 = &local_3f8;
                          dVar17 = (double)FUN_1416cdc60(DAT_1419864f0,DAT_1419864f8);
                          if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3e8);
                          }
                          local_3e8 = dVar17 / _DAT_141983970;
                          local_3dc = 0;
                          local_598 = &local_3e8;
                          in_XMM1_Qa = DAT_141986508;
                          dVar17 = (double)FUN_1416cdc60(DAT_141986500,DAT_141986508);
                          if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3d8);
                          }
                          local_3d8 = dVar17 / DAT_1419843c8;
                          local_3cc = 0;
                          local_590 = &local_3d8;
                          dVar17 = (double)FUN_1416cdc30(dVar18);
                          if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_3c8);
                          }
                          local_3c8 = dVar17 + _DAT_141986510;
                          local_3bc = 0;
                          local_588 = &local_3c8;
                          in_stack_fffffffffffff898 = &local_5b0;
                          FUN_1400d2410(local_f8,local_110,&local_138,6,in_stack_fffffffffffff898);
                          break;
                        }
                        local_198 = 0x1c;
                        uStack_100 = uStack_100 & 0xffffffff;
                        local_108 = 0;
                        iVar7 = FUN_1416d9df0(&local_190,&local_108,uVar11,1);
                        if (-1 < iVar7) {
                          if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_1d8);
                          }
                          uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                          local_1d8 = 0;
                          local_1d0 = 0x500000000;
                          uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                          FUN_1400019a0(&local_438,uVar11);
                          local_5c0 = &local_438;
                          in_stack_fffffffffffff8a0 = &local_5c0;
                          ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da4c0);
                          uVar11 = FUN_1416ab210(local_f8,local_110,&local_1d8,1,ppdVar28,
                                                 in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&local_190,uVar11,DAT_1420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            local_198 = 0x1e;
                            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1c8);
                            }
                            uVar22 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            local_1c8 = 0;
                            local_1c0 = 0x500000000;
                            uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                            FUN_1400019a0(&local_428,uVar11);
                            local_5b8 = &local_428;
                            local_5b0 = &local_190;
                            FUN_140002730(&local_408,&DAT_14217ee40);
                            local_5a8 = &local_408;
                            DAT_142182d90 = (longlong *)0x480000;
                            uVar12 = CONCAT44(uVar22,DAT_1420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(local_f8,local_110,&local_1c8,3,uVar12,
                                                    &local_5b8);
                            uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar13);
                            }
                            FUN_140003ca0(&local_108,&local_670);
                            dVar17 = local_190;
                            if ((local_184 & 0xffffff) != 0) {
                              dVar17 = (double)FUN_1416940c0(&local_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,0,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_198 = 0x1f;
                            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_138);
                            }
                            local_138 = 0;
                            local_130 = 0x500000000;
                            FUN_1400019a0(&local_468,uVar11);
                            local_5d8 = &local_468;
                            local_5d0 = &local_190;
                            FUN_140002730(&local_448,&DAT_1420b2728);
                            local_5c8 = &local_448;
                            in_stack_fffffffffffff8a0 = &local_5d8;
                            ppdVar28 = (double **)CONCAT44(uVar22,DAT_1420da240);
                            puVar13 = (undefined8 *)
                                      FUN_1416ab210(local_f8,local_110,&local_138,3,ppdVar28,
                                                    in_stack_fffffffffffff8a0);
                            uStack_100 = puVar13[1];
                            if ((0x46U >> (*(uint *)((longlong)puVar13 + 0xc) & 0x1f) & 1) == 0) {
                              local_108 = *puVar13;
                            }
                            else {
                              FUN_141670fe0(&local_108,puVar13);
                            }
                            FUN_140003ca0(&local_108,&local_670);
                            dVar17 = local_190;
                            if ((local_184 & 0xffffff) != 0) {
                              dVar17 = (double)FUN_1416940c0(&local_190);
                            }
                            FUN_1416cd560(uVar11,(longlong)dVar17,1,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                          }
                        }
                        switch(local_184 & 0xffffff) {
                        case 1:
                          local_190 = (double)FUN_1416940c0(&local_190);
                          local_190 = local_190 + dVar1;
                          local_184 = 0;
                          goto joined_r0x0001416741ba;
                        default:
                          FUN_140001d70(&DAT_141981e6a,&local_190,&local_190);
                          break;
                        case 7:
                          local_190 = (double)CONCAT44(local_190._4_4_,local_190._0_4_ + 1);
                          goto joined_r0x0001416741ba;
                        case 10:
                          goto code_r0x0001416745f8;
                        case 0xd:
                          local_184 = 0;
                        case 0:
                          local_190 = local_190 + dVar1;
                          goto joined_r0x0001416741ba;
                        }
                      } while( true );
                    }
                  }
LAB_141675d1a:
                  in_stack_fffffffffffff8a0 =
                       (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 =
                       (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                  FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  uStack_100 = puVar9[1];
                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                    local_108 = *puVar9;
                  }
                  else {
                    FUN_141670fe0(&local_108,puVar9);
                  }
                  FUN_140003ca0(&local_108,local_180);
                  iVar7 = FUN_1416d9df0(&local_108,&local_1f8,DAT_1420f6b08,1);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_108);
                  }
                  if (-1 < iVar7) {
                    local_198 = 0x30;
                    uVar11 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf);
                    (**(code **)(*local_110 + 0x10))(local_110,0x18e26);
                    (**(code **)(*local_110 + 8))(local_110,0x18e4d);
                    uStack_100 = uStack_100 & 0xffffffff;
                    local_108 = 0x3fec000000000000;
                    FUN_140001fe0(uVar11,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    local_198 = 0x31;
                    uVar11 = (**(code **)(*local_110 + 0x10))(local_110,0x18e26);
                    uStack_100 = uStack_100 & 0xffffffff;
                    local_108 = 0x3feb333333333333;
                    FUN_140001fe0(uVar11,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    local_198 = 0x32;
                    if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_138);
                    }
                    local_138 = 0;
                    local_130 = 0x500000000;
                    uVar11 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf);
                    puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e3b);
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                  (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    uVar22 = (undefined4)(uVar27 >> 0x20);
                    local_15c = *(uint *)((longlong)puVar9 + 0xc);
                    local_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&local_168,puVar9);
                    }
                    FUN_140003ca0(&local_168,uVar11);
                    uStack_120 = CONCAT44(local_15c,local_160);
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_128 = local_168;
                    }
                    else {
                      FUN_141670fe0(&local_128,&local_168);
                    }
                    FUN_140003e00(&local_128,&local_1e8);
                    FUN_140004520(&local_108,&local_128,uVar14);
                    FUN_1400019a0(&local_468,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_168);
                    }
                    local_5d8 = &local_468;
                    ppdVar28 = &local_5d8;
                    uVar27 = CONCAT44(uVar22,DAT_1420da4b0);
                    uVar11 = FUN_1416ab210(local_f8,local_110,&local_138,1,uVar27,ppdVar28);
                    FUN_1400019a0(&local_4a8,uVar11);
                    if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_178);
                    }
                    local_178 = 0;
                    local_170 = 0x500000000;
                    uVar11 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf);
                    puVar9 = (undefined8 *)(**(code **)(*local_110 + 8))(local_110,0x18e3d);
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,
                                  (ulonglong)ppdVar28 & 0xffffffffffffff00);
                    uVar22 = (undefined4)(uVar27 >> 0x20);
                    local_15c = *(uint *)((longlong)puVar9 + 0xc);
                    local_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&local_168,puVar9);
                    }
                    FUN_140003ca0(&local_168,uVar11);
                    uStack_120 = CONCAT44(local_15c,local_160);
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_128 = local_168;
                    }
                    else {
                      FUN_141670fe0(&local_128,&local_168);
                    }
                    FUN_140003e00(&local_128,&local_1e8);
                    FUN_140004520(&local_108,&local_128,uVar14);
                    FUN_1400019a0(&local_458,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_168);
                    }
                    local_5d0 = &local_458;
                    in_stack_fffffffffffff8a0 = &local_5d0;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,DAT_1420da4b0);
                    uVar11 = FUN_1416ab210(local_f8,local_110,&local_178,1,in_stack_fffffffffffff898
                                           ,in_stack_fffffffffffff8a0);
                    FUN_1400019a0(&local_498,uVar11);
                    uStack_100 = uStack_100 & 0xffffffff;
                    local_108 = 0;
                    uVar22 = (undefined4)DAT_1420f6b08;
                    uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                    iVar7 = FUN_1416d9df0(&local_4a8,&local_108,DAT_1420f6b08,1);
                    if (-1 < iVar7) {
                      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_138);
                      }
                      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      local_138 = 0;
                      local_130 = 0x500000000;
                      uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                      FUN_1400019a0(&local_468,uVar11);
                      local_5d8 = &local_468;
                      in_stack_fffffffffffff8a0 = &local_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,DAT_1420da4c0);
                      uVar11 = FUN_1416ab210(local_f8,local_110,&local_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      uVar22 = (undefined4)DAT_1420f6b08;
                      uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                      iVar7 = FUN_1416d9df0(&local_4a8,uVar11,DAT_1420f6b08,1);
                      if ((iVar7 != -2) && (iVar7 < 0)) {
                        local_198 = 0x34;
                        if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_178);
                        }
                        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                        local_178 = 0;
                        local_170 = 0x500000000;
                        uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                        FUN_1400019a0(&local_458,uVar11);
                        local_5d0 = &local_458;
                        local_5c8 = &local_4a8;
                        FUN_140002730(&local_438,&DAT_14217ee40);
                        local_5c0 = &local_438;
                        DAT_142182d90 = (longlong *)0x480000;
                        uVar12 = CONCAT44(uVar22,DAT_1420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(local_f8,local_110,&local_178,3,uVar12,&local_5d0);
                        uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          local_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&local_108,puVar9);
                        }
                        FUN_140003ca0(&local_108,&local_680);
                        dVar17 = local_4a8;
                        if ((local_49c & 0xffffff) != 0) {
                          dVar17 = (double)FUN_1416940c0(&local_4a8);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,0,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        local_198 = 0x35;
                        if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_138);
                        }
                        local_138 = 0;
                        local_130 = 0x500000000;
                        FUN_1400019a0(&local_468,uVar11);
                        local_5d8 = &local_468;
                        local_5d0 = &local_4a8;
                        FUN_140002730(&local_448,&DAT_1420b2728);
                        local_5c8 = &local_448;
                        in_stack_fffffffffffff8a0 = &local_5d8;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,DAT_1420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(local_f8,local_110,&local_138,3,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          local_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&local_108,puVar9);
                        }
                        FUN_140003ca0(&local_108,&local_680);
                        dVar17 = local_4a8;
                        if ((local_49c & 0xffffff) != 0) {
                          dVar17 = (double)FUN_1416940c0(&local_4a8);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,1,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        uVar22 = (undefined4)DAT_1420f6b08;
                        uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                      }
                    }
                    uStack_100 = uStack_100 & 0xffffffff;
                    local_108 = 0;
                    iVar7 = FUN_1416d9df0(&local_498,&local_108,CONCAT44(uVar8,uVar22),1);
                    if (-1 < iVar7) {
                      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_138);
                      }
                      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      local_138 = 0;
                      local_130 = 0x500000000;
                      uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                      FUN_1400019a0(&local_468,uVar11);
                      local_5d8 = &local_468;
                      in_stack_fffffffffffff8a0 = &local_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,DAT_1420da4c0);
                      uVar11 = FUN_1416ab210(local_f8,local_110,&local_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      iVar7 = FUN_1416d9df0(&local_498,uVar11,DAT_1420f6b08,1);
                      if ((iVar7 != -2) && (iVar7 < 0)) {
                        local_198 = 0x38;
                        if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_178);
                        }
                        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                        local_178 = 0;
                        local_170 = 0x500000000;
                        uVar11 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb);
                        FUN_1400019a0(&local_458,uVar11);
                        local_5d0 = &local_458;
                        local_5c8 = &local_498;
                        FUN_140002730(&local_438,&DAT_14217ee40);
                        local_5c0 = &local_438;
                        uVar12 = CONCAT44(uVar22,DAT_1420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(local_f8,local_110,&local_178,3,uVar12,&local_5d0);
                        uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          local_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&local_108,puVar9);
                        }
                        FUN_140003e00(&local_108,&local_680);
                        dVar17 = local_498;
                        if ((local_48c & 0xffffff) != 0) {
                          dVar17 = (double)FUN_1416940c0(&local_498);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,0,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        local_198 = 0x39;
                        if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_138);
                        }
                        local_138 = 0;
                        local_130 = 0x500000000;
                        FUN_1400019a0(&local_468,uVar11);
                        local_5d8 = &local_468;
                        local_5d0 = &local_498;
                        FUN_140002730(&local_448,&DAT_1420b2728);
                        local_5c8 = &local_448;
                        in_stack_fffffffffffff8a0 = &local_5d8;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar22,DAT_1420da240);
                        puVar9 = (undefined8 *)
                                 FUN_1416ab210(local_f8,local_110,&local_138,3,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        uStack_100 = puVar9[1];
                        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) == 0) {
                          local_108 = *puVar9;
                        }
                        else {
                          FUN_141670fe0(&local_108,puVar9);
                        }
                        FUN_140003e00(&local_108,&local_680);
                        dVar17 = local_498;
                        if ((local_48c & 0xffffff) != 0) {
                          dVar17 = (double)FUN_1416940c0(&local_498);
                        }
                        FUN_1416cd560(uVar11,(longlong)dVar17,1,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          cVar6 = FUN_1416abe60(&local_158,&local_f8,&local_110);
        } while (cVar6 != '\0');
      }
      FUN_1416ab620(&local_158,&local_f8,&local_110);
      if (local_148 != 0) {
        thunk_FUN_1416c46f0();
        local_148 = 0;
      }
    }
    local_198 = 0x3f;
    if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_258);
    }
    uVar22 = _DAT_141981f80;
    uVar10 = _DAT_141981ea8;
    dVar1 = _DAT_141981e30;
    local_24c = 0;
    local_258 = 0.0;
    while( true ) {
      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      local_138 = 0;
      local_130 = 0x500000000;
      local_108 = 0;
      uStack_100 = 0;
      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18826,0x80000000,&local_108,uVar27,
                    (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar27 >> 0x20);
      FUN_1400019a0(&local_468,&local_108);
      in_stack_fffffffffffff8a0 = &local_5d8;
      uVar27 = CONCAT44(uVar8,DAT_1420da4d0);
      local_5d8 = &local_468;
      uVar14 = FUN_1416ab210(local_f8,local_110,&local_138,1,uVar27,in_stack_fffffffffffff8a0);
      iVar7 = FUN_1416d9df0(&local_258,uVar14,DAT_1420f6b08,1);
      if ((iVar7 == -2) || (-1 < iVar7)) break;
      local_198 = 0x40;
      local_128 = 0;
      uStack_120 = 0;
      uVar8 = FUN_141693b30(&local_258);
      in_stack_fffffffffffff8a0 =
           (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
      in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00);
      FUN_1416d0010(0x4f,0x18826,uVar8,&local_128,in_stack_fffffffffffff898,
                    in_stack_fffffffffffff8a0);
      FUN_1400019a0(&local_608,&local_128);
      dVar18 = local_608;
      if ((local_5fc & 0xffffff) != 0) {
        dVar18 = (double)FUN_1416940c0(&local_608);
      }
      cVar6 = FUN_1416f8280(local_f8,local_110,(longlong)dVar18);
      if (cVar6 != '\0') {
        local_198 = 0x41;
        in_stack_fffffffffffff8a0 =
             (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
        in_stack_fffffffffffff898 =
             (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
        FUN_1416cea80(local_f8,DAT_1420d59e8,0x80000000,&local_620,in_stack_fffffffffffff898,
                      in_stack_fffffffffffff8a0);
        iVar7 = FUN_1416d9df0(&local_608,&local_620,DAT_1420f6b08,0);
        if (iVar7 != 0) {
          FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
          local_14c = 0;
          local_158 = 0x4050400000000000;
          iVar7 = FUN_1416d9df0(&local_238,&local_158,DAT_1420f6b08,0);
          if (iVar7 != 0) {
            local_198 = 0x42;
            if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_138);
            }
            uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
            local_138 = 0;
            local_130 = 0x500000000;
            FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
            FUN_1400019a0(&local_468,&local_238);
            local_5d8 = &local_468;
            FUN_140002730(&local_458,&DAT_1420b27d8);
            local_5d0 = &local_458;
            in_stack_fffffffffffff8a0 = &local_5d8;
            in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da330);
            uVar14 = FUN_1416ab210(local_f8,local_110,&local_138,2,in_stack_fffffffffffff898,
                                   in_stack_fffffffffffff8a0);
            local_14c = 0;
            local_158 = 0x3ff0000000000000;
            iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,0);
            if (iVar7 == 0) {
              local_198 = 0x44;
              in_stack_fffffffffffff8a0 =
                   (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
              in_stack_fffffffffffff898 =
                   (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
              FUN_1416cfeb0(&local_608,0x18ccd,0x80000000,&local_750,in_stack_fffffffffffff898,
                            in_stack_fffffffffffff8a0);
              local_14c = 0;
              local_158 = 0x3ff0000000000000;
              iVar7 = FUN_1416d9df0(&local_750,&local_158,DAT_1420f6b08,0);
              if (iVar7 == 0) {
                FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                local_14c = 0;
                local_158 = 0x4050000000000000;
                iVar7 = FUN_1416d9df0(&local_238,&local_158,DAT_1420f6b08,0);
                if (iVar7 == 0) {
LAB_141676fd9:
                  uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18bae);
                  local_14c = 0;
                  local_158 = 0x3ff0000000000000;
                  iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,0);
                  if (iVar7 != 0) goto LAB_141677028;
LAB_1416771b8:
                  in_stack_fffffffffffff8a0 =
                       (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff898 =
                       (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                  FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                  local_14c = 0;
                  local_158 = 0x4050000000000000;
                  iVar7 = FUN_1416d9df0(&local_248,&local_158,DAT_1420f6b08,0);
                  if (iVar7 == 0) {
LAB_14167736e:
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cfeb0(&local_608,0x18bae,0x80000000,&local_740,in_stack_fffffffffffff898
                                  ,in_stack_fffffffffffff8a0);
                    local_14c = 0;
                    local_158 = 0x3ff0000000000000;
                    iVar7 = FUN_1416d9df0(&local_740,&local_158,DAT_1420f6b08,0);
                    if (iVar7 != 0) goto LAB_1416773cd;
LAB_141677587:
                    if ((0x46U >> (local_210._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_218);
                    }
                    local_218 = 0;
                    local_210 = 0x500000000;
                    if ((0x46U >> (local_4c0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_4c8);
                    }
                    local_4c8 = 0;
                    local_4c0 = 0x500000000;
                    if ((0x46U >> (local_638._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_640);
                    }
                    local_640 = 0;
                    local_638 = 0x500000000;
                    local_180 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x189cf);
                    local_610 = (**(code **)(*local_f8 + 8))(local_f8,0x18e26);
                    uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18d7b);
                    uVar15 = (**(code **)(*local_f8 + 8))(local_f8,0x18d7a);
                    uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,uVar27,uVar29);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,uVar27,uVar29);
                    FUN_1416cfc30(&local_608,DAT_1420d58e8,0x80000000,&local_660);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_608,0x189cf,0x80000000,&local_6b0,uVar27,uVar29);
                    FUN_1416cfc30(&local_608,DAT_1420d58f8,0x80000000,&local_650);
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_608,0x18e26,0x80000000,&local_6a0,uVar27,uVar29);
                    local_14c = local_1dc;
                    local_150 = local_1e0;
                    if ((0x46U >> (local_1dc & 0x1f) & 1) == 0) {
                      local_158 = local_1e8;
                    }
                    else {
                      FUN_141670fe0(&local_158,&local_1e8);
                    }
                    FUN_140003ca0(&local_158,local_180);
                    FUN_1400019a0(&local_3c8,&local_158);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    local_588 = &local_3c8;
                    local_14c = local_1ec;
                    local_150 = local_1f0;
                    if ((0x46U >> (local_1ec & 0x1f) & 1) == 0) {
                      local_158 = local_1f8;
                    }
                    else {
                      FUN_141670fe0(&local_158,&local_1f8);
                    }
                    FUN_140003ca0(&local_158,local_610);
                    FUN_1400019a0(&local_3b8,&local_158);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    local_580 = &local_3b8;
                    local_14c = local_654;
                    local_150 = local_658;
                    if ((0x46U >> (local_654 & 0x1f) & 1) == 0) {
                      local_158 = local_660;
                    }
                    else {
                      FUN_141670fe0(&local_158,&local_660);
                    }
                    FUN_140003ca0(&local_158,&local_6b0);
                    FUN_1400019a0(&local_3a8,&local_158);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    local_578 = &local_3a8;
                    local_14c = local_644;
                    local_150 = local_648;
                    if ((0x46U >> (local_644 & 0x1f) & 1) == 0) {
                      local_158 = local_650;
                    }
                    else {
                      FUN_141670fe0(&local_158,&local_650);
                    }
                    FUN_140003ca0(&local_158,&local_6a0);
                    FUN_1400019a0(&local_398,&local_158);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    local_570 = &local_398;
                    FUN_1400019a0(&local_388,uVar14);
                    local_568 = &local_388;
                    FUN_1400019a0(&local_378,uVar15);
                    local_560 = &local_378;
                    uVar29 = uVar29 & 0xffffffffffffff00;
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_608,0x18d7b,0x80000000,&local_730,uVar27,uVar29);
                    uVar27 = uVar27 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_608,0x18d7a,0x80000000,&local_720,uVar27,
                                  uVar29 & 0xffffffffffffff00);
                    uVar8 = (undefined4)(uVar27 >> 0x20);
                    FUN_1400019a0(&local_368,&local_730);
                    local_558 = &local_368;
                    FUN_1400019a0(&local_358,&local_720);
                    local_550 = &local_358;
                    uVar14 = FUN_1416cd900(&local_640,2,&local_558);
                    puVar9 = (undefined8 *)FUN_1416cd900(&local_4c8,2,&local_568);
                    local_15c = *(uint *)((longlong)puVar9 + 0xc);
                    local_160 = *(undefined4 *)(puVar9 + 1);
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_168 = *puVar9;
                    }
                    else {
                      FUN_141670fe0(&local_168,puVar9);
                    }
                    FUN_140003ca0(&local_168,uVar14);
                    local_14c = local_15c;
                    local_150 = local_160;
                    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                      local_158 = local_168;
                    }
                    else {
                      FUN_141670fe0(&local_158,&local_168);
                    }
                    FUN_140001c50(&local_158,0x50);
                    in_stack_fffffffffffff8a0 = &local_588;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da150);
                    uVar14 = FUN_1416ab210(local_f8,local_110,&local_218,4,in_stack_fffffffffffff898
                                           ,in_stack_fffffffffffff8a0);
                    iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_168);
                    }
                    uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
                    if (iVar7 != -2 && iVar7 < 1) {
                      local_198 = 0x4a;
                      uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x18e3b,0x80000000,&local_710,uVar27,uVar29);
                      FUN_1400019a0(&local_278,&local_710);
                      local_198 = 0x4b;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x18e4b,0x80000000,&local_700,uVar27,uVar29);
                      FUN_1400019a0(&local_268,&local_700);
                      local_198 = 0x4c;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x18e3d,0x80000000,&local_6f0,uVar27,uVar29);
                      FUN_1400019a0(&local_478,&local_6f0);
                      local_198 = 0x4d;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x18e4d,0x80000000,&local_6e0,uVar27,uVar29);
                      FUN_1400019a0(&local_4b8,&local_6e0);
                      local_198 = 0x4e;
                      uVar29 = uVar29 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x18e26,0x80000000,&local_6a0,uVar27,uVar29);
                      FUN_1400019a0(&local_5f8,&local_6a0);
                      local_198 = 0x4f;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_608,0x189cf,0x80000000,&local_6b0,uVar27,
                                    uVar29 & 0xffffffffffffff00);
                      uVar20 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&local_5e8,&local_6b0);
                      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_138);
                      }
                      local_138 = 0;
                      local_130 = 0x500000000;
                      FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                      FUN_1400019a0(&local_468,&local_238);
                      in_stack_fffffffffffff8a0 = &local_5d8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar20,DAT_1420da4e0);
                      local_5d8 = &local_468;
                      uVar14 = FUN_1416ab210(local_f8,local_110,&local_138,1,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      local_14c = 0;
                      local_158 = 0x4049800000000000;
                      iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,0);
                      if (iVar7 != 0) {
                        in_stack_fffffffffffff8a0 =
                             (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                        in_stack_fffffffffffff898 =
                             (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                        FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,
                                      in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        iVar7 = FUN_1416d9df0(&local_1e8,&local_278,DAT_1420f6b08,1);
                        if (0 < iVar7) {
                          in_stack_fffffffffffff8a0 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                          in_stack_fffffffffffff898 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                          FUN_1416cea80(local_f8,DAT_1420d58e8,0x80000000,&local_1e8,
                                        in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                          iVar7 = FUN_1416d9df0(&local_1e8,&local_478,DAT_1420f6b08,1);
                          if ((iVar7 != -2) && (iVar7 < 0)) {
                            in_stack_fffffffffffff8a0 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                            in_stack_fffffffffffff898 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                            FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,
                                          in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                            iVar7 = FUN_1416d9df0(&local_1f8,&local_268,DAT_1420f6b08,1);
                            if (0 < iVar7) {
                              in_stack_fffffffffffff8a0 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                              in_stack_fffffffffffff898 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                              FUN_1416cea80(local_f8,DAT_1420d58f8,0x80000000,&local_1f8,
                                            in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                              iVar7 = FUN_1416d9df0(&local_1f8,&local_4b8,DAT_1420f6b08,1);
                              if ((iVar7 != -2) && (iVar7 < 0)) {
                                local_198 = 0x52;
                                local_180 = (undefined8 *)
                                            (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 8))(local_f8,0x18e3a);
                                puVar13 = (undefined8 *)
                                          (**(code **)(*local_f8 + 8))(local_f8,0x18e49);
                                uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00;
                                uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&local_608,0x18e3a,0x80000000,&local_4e8,uVar27,uVar29
                                             );
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&local_608,0x18e49,0x80000000,&local_4d8,uVar27,uVar29
                                             );
                                if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
                                  uVar20 = (undefined4)*puVar13;
                                  uVar21 = (undefined4)((ulonglong)*puVar13 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) != 0)
                                  goto LAB_141677fa2;
LAB_141677fbd:
                                  uVar23 = (undefined4)*puVar9;
                                  uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                                  if ((local_4cc & 0xffffff) != 0) goto LAB_141677fce;
LAB_141677fed:
                                  uVar25 = (undefined4)local_4d8;
                                  uVar26 = (undefined4)((ulonglong)local_4d8 >> 0x20);
                                  dVar18 = local_4e8;
                                }
                                else {
                                  uVar14 = FUN_1416940c0(puVar13);
                                  uVar20 = (undefined4)uVar14;
                                  uVar21 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0)
                                  goto LAB_141677fbd;
LAB_141677fa2:
                                  uVar14 = FUN_1416940c0(puVar9);
                                  uVar23 = (undefined4)uVar14;
                                  uVar24 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((local_4cc & 0xffffff) == 0) goto LAB_141677fed;
LAB_141677fce:
                                  uVar14 = FUN_1416940c0(&local_4d8);
                                  uVar25 = (undefined4)uVar14;
                                  uVar26 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  dVar18 = local_4e8;
                                }
                                local_4e8 = dVar18;
                                if ((local_4dc & 0xffffff) != 0) {
                                  dVar18 = (double)FUN_1416940c0(&local_4e8);
                                }
                                uVar19 = (ulonglong)(uint)(float)(double)CONCAT44(uVar24,uVar23);
                                uVar14 = FUN_1416cdb80((float)dVar18,
                                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar26
                                                  ,uVar25)),uVar19,
                                                  (float)(double)CONCAT44(uVar21,uVar20));
                                uVar8 = (undefined4)(uVar19 >> 0x20);
                                fVar16 = (float)FUN_1416cd800(uVar22,uVar14);
                                FUN_140003f30(local_180,(double)fVar16);
                                local_198 = 0x53;
                                local_180 = (undefined8 *)
                                            (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 8))(local_f8,0x18e3a);
                                puVar13 = (undefined8 *)
                                          (**(code **)(*local_f8 + 8))(local_f8,0x18e49);
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&local_608,0x18e3a,0x80000000,&local_4e8,uVar27,uVar29
                                             );
                                uVar29 = uVar29 & 0xffffffffffffff00;
                                uVar27 = uVar27 & 0xffffffffffffff00;
                                FUN_1416cfeb0(&local_608,0x18e49,0x80000000,&local_4d8,uVar27,uVar29
                                             );
                                if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
                                  uVar20 = (undefined4)*puVar13;
                                  uVar21 = (undefined4)((ulonglong)*puVar13 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) != 0)
                                  goto LAB_141678118;
LAB_141678133:
                                  uVar23 = (undefined4)*puVar9;
                                  uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                                  if ((local_4cc & 0xffffff) != 0) goto LAB_141678144;
LAB_141678163:
                                  uVar25 = (undefined4)local_4d8;
                                  uVar26 = (undefined4)((ulonglong)local_4d8 >> 0x20);
                                  dVar18 = local_4e8;
                                }
                                else {
                                  uVar14 = FUN_1416940c0(puVar13);
                                  uVar20 = (undefined4)uVar14;
                                  uVar21 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0)
                                  goto LAB_141678133;
LAB_141678118:
                                  uVar14 = FUN_1416940c0(puVar9);
                                  uVar23 = (undefined4)uVar14;
                                  uVar24 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  if ((local_4cc & 0xffffff) == 0) goto LAB_141678163;
LAB_141678144:
                                  uVar14 = FUN_1416940c0(&local_4d8);
                                  uVar25 = (undefined4)uVar14;
                                  uVar26 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                  dVar18 = local_4e8;
                                }
                                local_4e8 = dVar18;
                                if ((local_4dc & 0xffffff) != 0) {
                                  dVar18 = (double)FUN_1416940c0(&local_4e8);
                                }
                                uVar14 = FUN_1416cdb80((float)dVar18,
                                                       (float)(double)CONCAT44(uVar26,uVar25),
                                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar24
                                                  ,uVar23)),(float)(double)CONCAT44(uVar21,uVar20));
                                fVar16 = (float)FUN_1416cd880(uVar22,uVar14);
                                FUN_140003f30(local_180,(double)fVar16);
                                in_stack_fffffffffffff8a0 = (double **)(uVar29 & 0xffffffffffffff00)
                                ;
                                in_stack_fffffffffffff898 = (double **)(uVar27 & 0xffffffffffffff00)
                                ;
                                FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                              in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                                local_14c = 0;
                                local_158 = 0x4050000000000000;
                                iVar7 = FUN_1416d9df0(&local_248,&local_158,DAT_1420f6b08,0);
                                if (iVar7 == 0) {
                                  local_198 = 0x55;
                                  if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_138);
                                  }
                                  local_138 = 0;
                                  local_130 = 0x500000000;
                                  if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_178);
                                  }
                                  local_178 = 0;
                                  local_170 = 0x500000000;
                                  uVar29 = (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00
                                  ;
                                  uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00
                                  ;
                                  FUN_1416cfeb0(&local_608,0x18e3a,0x80000000,&local_4e8,uVar27,
                                                uVar29);
                                  in_stack_fffffffffffff8a0 =
                                       (double **)(uVar29 & 0xffffffffffffff00);
                                  FUN_1416cfeb0(&local_608,0x18e49,0x80000000,&local_4d8,
                                                uVar27 & 0xffffffffffffff00,
                                                in_stack_fffffffffffff8a0);
                                  FUN_140002730(&local_468,&DAT_1420b27f8);
                                  local_5d8 = &local_468;
                                  FUN_140002730(&local_458,&DAT_1420b2808);
                                  local_5d0 = &local_458;
                                  FUN_140002730(&local_448,&DAT_1420b2818);
                                  local_5c8 = &local_448;
                                  FUN_140002730(&local_438,&DAT_1420b2828);
                                  local_5c0 = &local_438;
                                  FUN_140002730(&local_428,&DAT_1420b2728);
                                  local_5b8 = &local_428;
                                  FUN_1400019a0(&local_418,&local_4e8);
                                  local_5b0 = &local_418;
                                  FUN_1400019a0(&local_408,&local_4d8);
                                  local_5a8 = &local_408;
                                  uVar14 = FUN_1416cd660(&local_178,4,&local_5d8);
                                  FUN_1400019a0(&local_3f8,uVar14);
                                  local_5a0 = &local_3f8;
                                  in_stack_fffffffffffff898 = &local_5b8;
                                  FUN_1400e28e0(local_f8,local_110,&local_138,4,
                                                in_stack_fffffffffffff898);
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4d);
                      local_14c = local_25c;
                      local_150 = local_260;
                      if ((0x46U >> (local_25c & 0x1f) & 1) == 0) {
                        local_158 = local_268;
                      }
                      else {
                        FUN_141670fe0(&local_158,&local_268);
                      }
                      FUN_140003f30(&local_158,uVar10);
                      iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                      if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_158);
                      }
                      if (0 < iVar7) {
                        uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4b);
                        FUN_140003ba0(&local_158,&local_4b8,uVar10);
                        iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                        if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_158);
                        }
                        if (iVar7 != -2 && iVar7 < 0) {
                          puVar9 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x18e3d);
                          local_180 = (undefined8 *)
                                      (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf);
                          local_14c = local_26c;
                          local_150 = local_270;
                          if ((0x46U >> (local_26c & 0x1f) & 1) == 0) {
                            local_158 = local_278;
                          }
                          else {
                            FUN_141670fe0(&local_158,&local_278);
                          }
                          FUN_140003ca0(&local_158,&local_5e8);
                          local_15c = *(uint *)((longlong)puVar9 + 0xc);
                          local_160 = *(undefined4 *)(puVar9 + 1);
                          if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                            local_168 = *puVar9;
                          }
                          else {
                            FUN_141670fe0(&local_168,puVar9);
                          }
                          FUN_140003ca0(&local_168,local_180);
                          iVar7 = FUN_1416d9df0(&local_168,&local_158,DAT_1420f6b08,1);
                          if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_168);
                          }
                          if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_158);
                          }
                          if (-1 < iVar7) {
                            local_180 = (undefined8 *)
                                        (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf);
                            puVar9 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x18e3b);
                            local_14c = local_46c;
                            local_150 = local_470;
                            if ((0x46U >> (local_46c & 0x1f) & 1) == 0) {
                              local_158 = local_478;
                            }
                            else {
                              FUN_141670fe0(&local_158,&local_478);
                            }
                            FUN_140003ca0(&local_158,&local_5e8);
                            local_15c = *(uint *)((longlong)puVar9 + 0xc);
                            local_160 = *(undefined4 *)(puVar9 + 1);
                            if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
                              local_168 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&local_168,puVar9);
                            }
                            FUN_140003ca0(&local_168,local_180);
                            iVar7 = FUN_1416d9df0(&local_168,&local_158,DAT_1420f6b08,1);
                            if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_168);
                            }
                            if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_158);
                            }
                            if (iVar7 != -2 && iVar7 < 1) {
                              local_198 = 0x5c;
                              uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18e3b);
                              iVar7 = FUN_1416d9df0(uVar14,&local_278,DAT_1420f6b08,1);
                              if ((iVar7 == -2) || (-1 < iVar7)) {
                                uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d);
                                iVar7 = FUN_1416d9df0(uVar14,&local_478,DAT_1420f6b08,1);
                                if (iVar7 < 1) goto LAB_141678b3c;
                                local_198 = 100;
                                uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(uVar14,&local_478);
                                FUN_1416a8c00(1);
                                local_198 = 0x65;
                                local_180 = (undefined8 *)
                                            (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d);
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b);
                                local_610 = (**(code **)(*local_f8 + 8))(local_f8,0x187b4);
                                local_14c = *(uint *)((longlong)puVar9 + 0xc);
                                local_150 = *(undefined4 *)(puVar9 + 1);
                                if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
                                  local_158 = *puVar9;
                                }
                                else {
                                  FUN_141670fe0(&local_158,puVar9);
                                }
                                FUN_140003ca0(&local_158,local_610);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(local_180,&local_158);
                                if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&local_158);
                                }
                                FUN_1416a8c00(1);
                                local_198 = 0x66;
                                uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(uVar14,&local_5e8);
                                FUN_1416a8c00(1);
                                local_198 = 0x67;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 0x10))(local_f8,0x189c3);
                                if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0)
                                {
                                  FUN_140001b50(puVar9);
                                }
                              }
                              else {
                                local_198 = 0x5d;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(puVar9,&local_278);
                                FUN_1416a8c00(1);
                                local_198 = 0x5e;
                                local_180 = (undefined8 *)
                                            (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b);
                                uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x187b4);
                                local_14c = *(uint *)((longlong)puVar9 + 0xc);
                                local_150 = *(undefined4 *)(puVar9 + 1);
                                if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
                                  local_158 = *puVar9;
                                }
                                else {
                                  FUN_141670fe0(&local_158,puVar9);
                                }
                                FUN_140003e00(&local_158,uVar14);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(local_180,&local_158);
                                if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&local_158);
                                }
                                FUN_1416a8c00(1);
                                local_198 = 0x5f;
                                uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf);
                                FUN_1416a8cb0(local_f8);
                                FUN_1400019a0(uVar14,&local_5e8);
                                FUN_1416a8c00(1);
                                local_198 = 0x60;
                                puVar9 = (undefined8 *)
                                         (**(code **)(*local_f8 + 0x10))(local_f8,0x189c3);
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
LAB_141678b3c:
                      uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d);
                      local_14c = local_26c;
                      local_150 = local_270;
                      if ((0x46U >> (local_26c & 0x1f) & 1) == 0) {
                        local_158 = local_278;
                      }
                      else {
                        FUN_141670fe0(&local_158,&local_278);
                      }
                      in_XMM1_Qa = uVar10;
                      FUN_140003f30(&local_158,uVar10);
                      iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                      if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_158);
                      }
                      if (0 < iVar7) {
                        uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b);
                        FUN_140003ba0(&local_158,&local_478,uVar10);
                        iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                        if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_158);
                        }
                        if (iVar7 != -2 && iVar7 < 0) {
                          puVar9 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x18e4d);
                          local_180 = (undefined8 *)
                                      (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26);
                          local_14c = local_25c;
                          local_150 = local_260;
                          if ((0x46U >> (local_25c & 0x1f) & 1) == 0) {
                            local_158 = local_268;
                          }
                          else {
                            FUN_141670fe0(&local_158,&local_268);
                          }
                          FUN_140003ca0(&local_158,&local_5f8);
                          local_1ac = *(uint *)((longlong)puVar9 + 0xc);
                          local_1b0 = *(undefined4 *)(puVar9 + 1);
                          if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
                            local_1b8 = *puVar9;
                          }
                          else {
                            FUN_141670fe0(&local_1b8,puVar9);
                          }
                          FUN_140003ca0(&local_1b8,local_180);
                          local_15c = local_1ac;
                          local_160 = local_1b0;
                          if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
                            local_168 = local_1b8;
                          }
                          else {
                            FUN_141670fe0(&local_168,&local_1b8);
                          }
                          in_XMM1_Qa = uVar10;
                          FUN_140003f30(&local_168,uVar10);
                          iVar7 = FUN_1416d9df0(&local_168,&local_158,DAT_1420f6b08,1);
                          if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_168);
                          }
                          if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_1b8);
                          }
                          if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_158);
                          }
                          if (-1 < iVar7) {
                            local_180 = (undefined8 *)
                                        (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26);
                            puVar9 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,0x18e4b);
                            local_14c = local_4ac;
                            local_150 = local_4b0;
                            if ((0x46U >> (local_4ac & 0x1f) & 1) == 0) {
                              local_158 = local_4b8;
                            }
                            else {
                              FUN_141670fe0(&local_158,&local_4b8);
                            }
                            FUN_140003ca0(&local_158,&local_5f8);
                            local_1ac = *(uint *)((longlong)puVar9 + 0xc);
                            local_1b0 = *(undefined4 *)(puVar9 + 1);
                            if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
                              local_1b8 = *puVar9;
                            }
                            else {
                              FUN_141670fe0(&local_1b8,puVar9);
                            }
                            FUN_140003ca0(&local_1b8,local_180);
                            FUN_140003ba0(&local_168,&local_1b8,uVar10);
                            iVar7 = FUN_1416d9df0(&local_168,&local_158,DAT_1420f6b08,1);
                            local_180 = (undefined8 *)CONCAT71(local_180._1_7_,iVar7 < 1);
                            if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_168);
                            }
                            if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1b8);
                            }
                            if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_158);
                            }
                            if ((iVar7 != -2 & (byte)local_180) != 0) {
                              local_198 = 0x6b;
                              uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4b);
                              iVar7 = FUN_1416d9df0(uVar14,&local_268,DAT_1420f6b08,1);
                              if ((iVar7 != -2) && (iVar7 < 0)) {
                                uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x1881e);
                                local_14c = 0;
                                local_158 = 0;
                                iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,0);
                                if (iVar7 == 0) {
                                  local_198 = 0x6d;
                                  uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4d);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(uVar14,&local_268);
                                  FUN_1416a8c00(1);
                                  local_198 = 0x6e;
                                  local_180 = (undefined8 *)
                                              (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4b);
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4d);
                                  local_610 = (**(code **)(*local_f8 + 8))(local_f8,0x1877f);
                                  local_14c = *(uint *)((longlong)puVar9 + 0xc);
                                  local_150 = *(undefined4 *)(puVar9 + 1);
                                  if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
                                    local_158 = *puVar9;
                                  }
                                  else {
                                    FUN_141670fe0(&local_158,puVar9);
                                  }
                                  FUN_140003e00(&local_158,local_610);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(local_180,&local_158);
                                  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_158);
                                  }
                                  FUN_1416a8c00(1);
                                  local_198 = 0x6f;
                                  uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(uVar14,&local_5f8);
                                  FUN_1416a8c00(1);
                                  local_198 = 0x70;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x18b43);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x3ff0000000000000;
                                  local_198 = 0x71;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x18b42);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x3ff0000000000000;
                                  local_198 = 0x72;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x189c2);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x4020000000000000;
                                  local_198 = 0x73;
                                  puVar9 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x18b3f);
                                  if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar9);
                                  }
                                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                                  *puVar9 = 0x4020000000000000;
                                  uVar14 = (**(code **)(*local_f8 + 8))(local_f8,0x1898f);
                                  local_14c = 0;
                                  local_158 = 0;
                                  iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,1);
                                  if (0 < iVar7) {
                                    local_198 = 0x74;
                                    in_stack_fffffffffffff8a0 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00)
                                    ;
                                    in_stack_fffffffffffff898 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00)
                                    ;
                                    FUN_1416cea80(local_f8,DAT_1420d59e8,0x80000000,&local_620,
                                                  in_stack_fffffffffffff898,
                                                  in_stack_fffffffffffff8a0);
                                    FUN_1400019a0(&local_6d0,&local_620);
                                    FUN_1416d0720(&local_608,0x189c4,0x80000000,&local_6d0);
                                  }
                                  in_stack_fffffffffffff8a0 =
                                       (double **)
                                       ((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                                  in_stack_fffffffffffff898 =
                                       (double **)
                                       ((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                                  FUN_1416cfeb0(&local_608,0x18afe,0x80000000,&local_6c0,
                                                in_stack_fffffffffffff898,in_stack_fffffffffffff8a0)
                                  ;
                                  local_14c = 0;
                                  local_158 = 0x3ff0000000000000;
                                  iVar7 = FUN_1416d9df0(&local_6c0,&local_158,DAT_1420f6b08,0);
                                  if (iVar7 == 0) {
                                    local_198 = 0x75;
                                    if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&local_138);
                                    }
                                    local_138 = 0;
                                    local_130 = 0x500000000;
                                    uVar27 = (ulonglong)in_stack_fffffffffffff898 &
                                             0xffffffffffffff00;
                                    FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                                  uVar27,(ulonglong)in_stack_fffffffffffff8a0 &
                                                         0xffffffffffffff00);
                                    uVar8 = (undefined4)(uVar27 >> 0x20);
                                    FUN_1400019a0(&local_468,&local_248);
                                    local_5d8 = &local_468;
                                    FUN_140002730(&local_458,&DAT_1420b27d8);
                                    local_5d0 = &local_458;
                                    in_stack_fffffffffffff8a0 = &local_5d8;
                                    in_stack_fffffffffffff898 =
                                         (double **)CONCAT44(uVar8,DAT_1420da330);
                                    uVar14 = FUN_1416ab210(local_f8,local_110,&local_138,2,
                                                           in_stack_fffffffffffff898,
                                                           in_stack_fffffffffffff8a0);
                                    local_14c = 0;
                                    local_158 = 0x3ff0000000000000;
                                    iVar7 = FUN_1416d9df0(uVar14,&local_158,DAT_1420f6b08,0);
                                    if (iVar7 == 0) {
                                      local_198 = 0x76;
                                      if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                                        FUN_140001b50(&local_178);
                                      }
                                      local_178 = 0;
                                      local_170 = 0x500000000;
                                      uVar14 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26);
                                      in_stack_fffffffffffff8a0 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff8a0 &
                                           0xffffffffffffff00);
                                      FUN_1416cea80(local_f8,DAT_1420d59e8,0x80000000,&local_620,
                                                    (ulonglong)in_stack_fffffffffffff898 &
                                                    0xffffffffffffff00,in_stack_fffffffffffff8a0);
                                      FUN_1400019a0(&local_448,&local_620);
                                      local_5c8 = &local_448;
                                      FUN_1400019a0(&local_438,uVar14);
                                      local_5c0 = &local_438;
                                      in_stack_fffffffffffff898 = &local_5c8;
                                      gml_Script_col_move(local_f8,local_110,&local_178,2,
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
                    FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    local_14c = 0;
                    local_158 = 0x4050400000000000;
                    iVar7 = FUN_1416d9df0(&local_248,&local_158,DAT_1420f6b08,0);
                    if (iVar7 == 0) goto LAB_14167736e;
                    if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_1c8);
                    }
                    local_1c8 = 0;
                    local_1c0 = 0x500000000;
                    uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,uVar27,
                                  (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    uVar8 = (undefined4)(uVar27 >> 0x20);
                    FUN_1400019a0(&local_408,&local_248);
                    local_5a8 = &local_408;
                    FUN_140002730(&local_3f8,&DAT_1420b27e8);
                    local_5a0 = &local_3f8;
                    in_stack_fffffffffffff8a0 = &local_5a8;
                    in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da330);
                    uVar14 = FUN_1416ab210(local_f8,local_110,&local_1c8,2,in_stack_fffffffffffff898
                                           ,in_stack_fffffffffffff8a0);
                    cVar6 = FUN_1416927d0(uVar14);
                    if (cVar6 != '\0') goto LAB_14167736e;
LAB_1416773cd:
                    in_stack_fffffffffffff8a0 =
                         (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff898 =
                         (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                    FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                  in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                    local_14c = 0;
                    local_158 = 0x4050000000000000;
                    iVar7 = FUN_1416d9df0(&local_248,&local_158,DAT_1420f6b08,0);
                    if (iVar7 != 0) {
                      in_stack_fffffffffffff8a0 =
                           (double **)((ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff898 =
                           (double **)((ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00);
                      FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,
                                    in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      local_14c = 0;
                      local_158 = 0x4050400000000000;
                      iVar7 = FUN_1416d9df0(&local_248,&local_158,DAT_1420f6b08,0);
                      if (iVar7 != 0) {
                        if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_228);
                        }
                        local_228 = 0;
                        local_220 = 0x500000000;
                        uVar27 = (ulonglong)in_stack_fffffffffffff898 & 0xffffffffffffff00;
                        FUN_1416cea80(local_f8,DAT_1420d5a28,0x80000000,&local_248,uVar27,
                                      (ulonglong)in_stack_fffffffffffff8a0 & 0xffffffffffffff00);
                        uVar8 = (undefined4)(uVar27 >> 0x20);
                        FUN_1400019a0(&local_3e8,&local_248);
                        local_598 = &local_3e8;
                        FUN_140002730(&local_3d8,&DAT_1420b27e8);
                        local_590 = &local_3d8;
                        in_stack_fffffffffffff8a0 = &local_598;
                        in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da330);
                        uVar14 = FUN_1416ab210(local_f8,local_110,&local_228,2,
                                               in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                        cVar6 = FUN_1416927d0(uVar14);
                        if (cVar6 == '\0') goto LAB_141677587;
                      }
                    }
                  }
                }
                else {
                  FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                  local_14c = 0;
                  local_158 = 0x4050400000000000;
                  iVar7 = FUN_1416d9df0(&local_238,&local_158,DAT_1420f6b08,0);
                  if (iVar7 == 0) goto LAB_141676fd9;
                  if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_178);
                  }
                  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                  local_178 = 0;
                  local_170 = 0x500000000;
                  FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                  FUN_1400019a0(&local_448,&local_238);
                  local_5c8 = &local_448;
                  FUN_140002730(&local_438,&DAT_1420b27e8);
                  local_5c0 = &local_438;
                  in_stack_fffffffffffff8a0 = &local_5c8;
                  in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da330);
                  uVar14 = FUN_1416ab210(local_f8,local_110,&local_178,2,in_stack_fffffffffffff898,
                                         in_stack_fffffffffffff8a0);
                  cVar6 = FUN_1416927d0(uVar14);
                  if (cVar6 != '\0') goto LAB_141676fd9;
LAB_141677028:
                  FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                  local_14c = 0;
                  local_158 = 0x4050000000000000;
                  iVar7 = FUN_1416d9df0(&local_238,&local_158,DAT_1420f6b08,0);
                  if (iVar7 != 0) {
                    FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                    local_14c = 0;
                    local_158 = 0x4050400000000000;
                    iVar7 = FUN_1416d9df0(&local_238,&local_158,DAT_1420f6b08,0);
                    if (iVar7 != 0) {
                      if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_1d8);
                      }
                      uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff898 >> 0x20);
                      local_1d8 = 0;
                      local_1d0 = 0x500000000;
                      FUN_1416cfc30(&local_608,DAT_1420d5a28,0x80000000,&local_238);
                      FUN_1400019a0(&local_428,&local_238);
                      local_5b8 = &local_428;
                      FUN_140002730(&local_418,&DAT_1420b27e8);
                      local_5b0 = &local_418;
                      in_stack_fffffffffffff8a0 = &local_5b8;
                      in_stack_fffffffffffff898 = (double **)CONCAT44(uVar8,DAT_1420da330);
                      uVar14 = FUN_1416ab210(local_f8,local_110,&local_1d8,2,
                                             in_stack_fffffffffffff898,in_stack_fffffffffffff8a0);
                      cVar6 = FUN_1416927d0(uVar14);
                      if (cVar6 == '\0') goto LAB_1416771b8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      switch(local_24c & 0xffffff) {
      case 1:
        local_258 = (double)FUN_1416940c0(&local_258);
        local_258 = local_258 + dVar1;
        local_24c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_258,&local_258);
        break;
      case 7:
        local_258 = (double)CONCAT44(local_258._4_4_,local_258._0_4_ + 1);
        break;
      case 10:
        local_258 = (double)((longlong)local_258 + 1);
        break;
      case 0xd:
        local_24c = 0;
      case 0:
        local_258 = local_258 + dVar1;
      }
    }
  }
  if ((0x46U >> (local_638._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_640);
  }
  if ((0x46U >> (local_4c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4c8);
  }
  if ((0x46U >> (local_210._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_170._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_6b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6c0);
  }
  if ((0x46U >> (local_6c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6d0);
  }
  if ((0x46U >> (local_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4d8);
  }
  if ((0x46U >> (local_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4e8);
  }
  if ((0x46U >> (local_6d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6e0);
  }
  if ((0x46U >> (local_6e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6f0);
  }
  if ((0x46U >> (local_6f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_700);
  }
  if ((0x46U >> (local_704 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_710);
  }
  if ((0x46U >> (local_714 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_720);
  }
  if ((0x46U >> (local_724 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_730);
  }
  if ((0x46U >> (local_694 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6a0);
  }
  if ((0x46U >> (local_644 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_650);
  }
  if ((0x46U >> (local_6a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6b0);
  }
  if ((0x46U >> (local_654 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_660);
  }
  if ((0x46U >> (local_734 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_740);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_744 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_750);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_614 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_620);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_48c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_498);
  }
  if ((0x46U >> (local_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4a8);
  }
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  if ((0x46U >> (local_624 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_630);
  }
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_664 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_670);
  }
  if ((0x46U >> (local_674 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_680);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_684 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_690);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_5dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5e8);
  }
  if ((0x46U >> (local_5ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5f8);
  }
  if ((0x46U >> (local_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b8);
  }
  if ((0x46U >> (local_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_478);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_5fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_608);
  }
  if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_298);
  }
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
  }
  if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_318);
  }
  if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_328);
  }
  if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_338);
  }
  if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_348);
  }
  if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_358);
  }
  if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_368);
  }
  if ((0x46U >> (local_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_378);
  }
  if ((0x46U >> (local_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_388);
  }
  if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_398);
  }
  if ((0x46U >> (local_39c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3a8);
  }
  if ((0x46U >> (local_3ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3b8);
  }
  if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3c8);
  }
  if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d8);
  }
  if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e8);
  }
  if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f8);
  }
  if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_408);
  }
  if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_418);
  }
  if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_428);
  }
  if ((0x46U >> (local_42c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_438);
  }
  if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_448);
  }
  if ((0x46U >> (local_44c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_458);
  }
  if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_468);
  }
  DAT_142182d78 = (undefined8 *)local_1a8;
  return param_3;
code_r0x000141673278:
  local_190 = (double)((longlong)local_190 + 1);
  goto joined_r0x000141672e3a;
code_r0x0001416745f8:
  local_190 = (double)((longlong)local_190 + 1);
  goto joined_r0x0001416741ba;
}


