// Function: gml_Object_oCamera_Step_2 @ 0x14063e640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCamera_Step_2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 in_RDX;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffffaa8;
  ulonglong uVar21;
  double **ppdVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  double **ppdVar25;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  uint uStack_52c;
  undefined8 uStack_528;
  uint uStack_51c;
  undefined8 uStack_518;
  uint uStack_50c;
  undefined8 uStack_508;
  uint uStack_4fc;
  undefined8 uStack_4f8;
  uint uStack_4ec;
  undefined8 uStack_4e8;
  uint uStack_4dc;
  undefined8 uStack_4d8;
  uint uStack_4cc;
  undefined8 uStack_4c8;
  uint uStack_4bc;
  undefined8 uStack_4b8;
  uint uStack_4ac;
  undefined8 uStack_4a8;
  uint uStack_49c;
  undefined8 uStack_498;
  uint uStack_48c;
  undefined8 uStack_488;
  uint uStack_47c;
  undefined8 uStack_478;
  uint uStack_46c;
  undefined8 uStack_468;
  uint uStack_45c;
  double *pdStack_458;
  double *pdStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_430;
  uint uStack_424;
  undefined8 uStack_420;
  uint uStack_414;
  undefined8 uStack_410;
  uint uStack_404;
  undefined8 uStack_400;
  uint uStack_3f4;
  undefined8 uStack_3f0;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  uint uStack_3c4;
  undefined8 uStack_3c0;
  uint uStack_3b4;
  undefined8 uStack_3b0;
  uint uStack_3a4;
  undefined8 uStack_3a0;
  double *pdStack_398;
  undefined8 uStack_390;
  uint uStack_384;
  undefined8 uStack_380;
  uint uStack_374;
  double dStack_370;
  uint uStack_364;
  double dStack_360;
  uint uStack_354;
  double dStack_350;
  uint uStack_344;
  undefined8 uStack_340;
  uint uStack_334;
  undefined8 uStack_330;
  uint uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  double dStack_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  double dStack_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  double dStack_2d8;
  uint uStack_2cc;
  double dStack_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  double dStack_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  double dStack_2a8;
  uint uStack_29c;
  double dStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
  double dStack_258;
  uint uStack_24c;
  double dStack_248;
  uint uStack_23c;
  double dStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  double dStack_218;
  uint uStack_20c;
  double dStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  double dStack_1a8;
  uint uStack_19c;
  double dStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  double dStack_178;
  undefined4 uStack_170;
  uint uStack_16c;
  double *pdStack_168;
  double *pdStack_160;
  double *pdStack_158;
  undefined8 *puStack_150;
  double *pdStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  double dStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  double dStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  double dStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;

  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffaa8 >> 0x20);
  uVar20 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_80 = 0xfffffffffffffffe;
  puStack_100 = &UNK_141987b18;
  uStack_f8 = 0;
  uStack_108 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_108;
  uStack_24c = 0xffffff;
  dStack_258 = 0.0;
  uStack_23c = 0xffffff;
  dStack_248 = 0.0;
  uStack_22c = 0xffffff;
  dStack_238 = 0.0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  dStack_218 = 0.0;
  uStack_1fc = 0xffffff;
  dStack_208 = 0.0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  plRam0000000142182d90 = param_1;
  uStack_c0 = in_RDX;
  uStack_300 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9/*var:cam*/);
  uStack_2bc = 0xffffff;
  dStack_2c8 = 0.0;
  uStack_2ac = 0xffffff;
  dStack_2b8 = 0.0;
  uStack_424 = 0xffffff;
  uStack_430 = 0;
  uStack_384 = 0xffffff;
  uStack_390 = 0;
  uStack_19c = 0xffffff;
  dStack_1a8 = 0.0;
  uStack_18c = 0xffffff;
  dStack_198 = 0.0;
  uStack_414 = 0xffffff;
  uStack_420 = 0;
  uStack_344 = 0xffffff;
  dStack_350 = 0.0;
  uStack_404 = 0xffffff;
  uStack_410 = 0;
  uStack_3f4 = 0xffffff;
  uStack_400 = 0;
  uStack_3e4 = 0xffffff;
  uStack_3f0 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_3d4 = 0xffffff;
  uStack_3e0 = 0;
  uStack_3c4 = 0xffffff;
  uStack_3d0 = 0;
  uStack_3b4 = 0xffffff;
  uStack_3c0 = 0;
  uStack_3a4 = 0xffffff;
  uStack_3b0 = 0;
  uStack_334 = 0xffffff;
  uStack_340 = 0;
  uStack_324 = 0xffffff;
  uStack_330 = 0;
  uStack_2ec = 0xffffff;
  dStack_2f8 = 0.0;
  uStack_2dc = 0xffffff;
  dStack_2e8 = 0.0;
  uStack_364 = 0xffffff;
  dStack_370 = 0.0;
  uStack_354 = 0xffffff;
  dStack_360 = 0.0;
  uStack_374 = 0xffffff;
  uStack_380 = 0;
  uStack_29c = 0xffffff;
  dStack_2a8 = 0.0;
  pdStack_450 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187d0/*var:cam_shake*/);
  uStack_3a0 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18c82/*var:SHAKE*/);
  uStack_2cc = 0xffffff;
  dStack_2d8 = 0.0;
  pdStack_398 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cd/*var:cam_push*/);
  pdStack_458 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cc/*var:cam_p_dir*/);
  uStack_c8._4_4_ = 0xffffff;
  uStack_d0 = 0;
  uStack_1b8 = CONCAT44(0xffffff,(undefined4)uStack_1b8);
  uStack_1c0 = 0;
  uStack_318 = CONCAT44(0xffffff,(undefined4)uStack_318);
  uStack_320 = 0;
  uStack_308 = CONCAT44(0xffffff,(undefined4)uStack_308);
  uStack_310 = 0;
  uStack_52c = 0xffffff;
  uStack_538 = 0;
  uStack_51c = 0xffffff;
  uStack_528 = 0;
  uStack_50c = 0xffffff;
  uStack_518 = 0;
  uStack_4fc = 0xffffff;
  uStack_508 = 0;
  uStack_4ec = 0xffffff;
  uStack_4f8 = 0;
  uStack_4dc = 0xffffff;
  uStack_4e8 = 0;
  uStack_4cc = 0xffffff;
  uStack_4d8 = 0;
  uStack_4bc = 0xffffff;
  uStack_4c8 = 0;
  uStack_4ac = 0xffffff;
  uStack_4b8 = 0;
  uStack_49c = 0xffffff;
  uStack_4a8 = 0;
  uStack_48c = 0xffffff;
  uStack_498 = 0;
  uStack_47c = 0xffffff;
  uStack_488 = 0;
  uStack_46c = 0xffffff;
  uStack_478 = 0;
  uStack_45c = 0xffffff;
  uStack_468 = 0;
  uStack_f8 = 2;
  uStack_b8 = 0;
  uStack_b0 = 0x500000000;
  FUN_1400019a0(&dStack_258,uStack_300);
  uVar8 = CONCAT44(uVar13,uRam00000001420da4a0);
  pdStack_168 = &dStack_258;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,1,uVar8,&pdStack_168);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&dStack_2c8,uVar6);
  if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  uStack_d0 = 0;
  uStack_c8 = 0x500000000;
  FUN_1400019a0(&dStack_248,uStack_300);
  ppdVar22 = &pdStack_160;
  uVar8 = CONCAT44(uVar13,uRam00000001420da560);
  pdStack_160 = &dStack_248;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,1,uVar8,ppdVar22);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&dStack_2b8,uVar6);
  uStack_f8 = 3;
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_b8 = 0;
  uStack_b0 = 0x500000000;
  FUN_1400019a0(&dStack_258,uStack_300);
  uVar8 = CONCAT44(uVar13,uRam00000001420da3b0);
  pdStack_168 = &dStack_258;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,1,uVar8,&pdStack_168);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&uStack_430,uVar6);
  if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  uStack_d0 = 0;
  uStack_c8 = 0x500000000;
  FUN_1400019a0(&dStack_248,uStack_300);
  uVar21 = CONCAT44(uVar13,uRam00000001420da3c0);
  pdStack_160 = &dStack_248;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,1,uVar21,ppdVar22);
  FUN_1400019a0(&uStack_390,uVar6);
  uStack_548 = 0;
  uStack_540 = 0;
  uVar24 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18d24/*var:START_GAME*/,0x80000000,&uStack_548,uVar21,uVar24);
  uStack_90 = (ulonglong)(uint)uStack_90;
  dStack_98 = 0.0;
  iVar5 = FUN_1416d9df0(&uStack_548,&dStack_98,uRam00000001420f6b08,0);
  if ((iVar5 == 0) && (cVar1 = FUN_1417099d0(0x4f), cVar1 != '\0')) {
    uStack_f8 = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  uStack_f8 = 7;
  uStack_448 = 0;
  uStack_440 = 0;
  ppdVar25 = (double **)(uVar24 & 0xffffffffffffff00);
  ppdVar22 = (double **)(uVar21 & 0xffffffffffffff00);
  FUN_1416d0010(0x4f,0x18ad9/*var:mode*/,0x80000000,&uStack_448,ppdVar22,ppdVar25);
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = 3.0;
  iVar5 = FUN_1416d9df0(&uStack_448,&dStack_98,uRam00000001420f6b08,0);
  if (iVar5 == 0) {
    uStack_f8 = 8;
    iVar5 = func_0x0001416f82f0(param_1,uStack_c0,0x41);
    if (iVar5 < 1) {
code_r0x00014063f618:
      uStack_f8 = 0xd;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
      uStack_90 = uStack_90 & 0xffffffff;
      dStack_98 = -1.0;
      iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
      if (iVar5 < 1) {
        uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
        uStack_90 = uStack_90 & 0xffffffff;
        dStack_98 = -2.0;
        iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
        if ((iVar5 != -2) && (iVar5 < 1)) {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
          uStack_90 = uStack_90 & 0xffffffff;
          dStack_98 = -4.0;
          iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,0);
          if (iVar5 != 0) {
            uStack_f8 = 0x34;
            uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
            uVar24 = (ulonglong)ppdVar25 & 0xffffffffffffff00;
            uVar21 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
            FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8,uVar21,uVar24);
            FUN_1416a8cb0(param_1);
            FUN_1400019a0(uVar6,&dStack_1a8);
            func_0x0001416a8c00(1);
            uStack_f8 = 0x35;
            uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
            ppdVar25 = (double **)(uVar24 & 0xffffffffffffff00);
            ppdVar22 = (double **)(uVar21 & 0xffffffffffffff00);
            FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&dStack_198,ppdVar22,ppdVar25);
            FUN_1416a8cb0(param_1);
            FUN_1400019a0(uVar6,&dStack_198);
            func_0x0001416a8c00(1);
            uStack_f8 = 0x36;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
            if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0;
            uStack_f8 = 0x37;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
            if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
            uStack_90 = uStack_90 & 0xffffffff;
            dStack_98 = -4.0;
            iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
            if ((iVar5 != -2) && (iVar5 < 1)) {
              uStack_f8 = 0x38;
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
              FUN_140001c50(uVar6,1);
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
              uStack_90 = uStack_90 & 0xffffffff;
              dStack_98 = -4.0;
              iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
              if ((-1 < iVar5) && (cVar1 = FUN_1416f8280(param_1,uStack_c0,0x40), cVar1 != '\0')) {
                uStack_f8 = 0x39;
                puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
                if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                uVar6 = 0x4050000000000000/*64 (obj:oPlayer)*/;
                goto code_r0x00014063ef5a;
              }
            }
          }
        }
      }
      else {
        uStack_f8 = 0xd;
        pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
          dVar14 = *pdVar9;
        }
        else {
          dVar14 = (double)FUN_1416940c0(pdVar9);
        }
        iVar5 = func_0x0001416f82f0(param_1,uStack_c0,(longlong)dVar14);
        if (0 < iVar5) {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
          FUN_1416cfc30(uVar6,uRam00000001420d5a28,0x80000000,&uStack_420);
          uStack_90 = uStack_90 & 0xffffffff;
          dStack_98 = 85.0;
          iVar5 = FUN_1416d9df0(&uStack_420,&dStack_98,uRam00000001420f6b08,0);
          if (iVar5 != 0) {
            uStack_f8 = 0xf;
            if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b8);
            }
            uStack_b8 = 0;
            uStack_b0 = 0x500000000;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
            uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
            FUN_1416cfc30(uVar6,uRam00000001420d58e8,0x80000000,&dStack_350);
            uVar21 = (ulonglong)ppdVar25 & 0xffffffffffffff00;
            FUN_1416cfeb0(uVar6,0x189cf/*var:hsp*/,0x80000000,&uStack_410,
                          (ulonglong)ppdVar22 & 0xffffffffffffff00,uVar21);
            FUN_1400019a0(&dStack_258,uVar8);
            uStack_90._4_4_ = uStack_344;
            pdStack_168 = &dStack_258;
            if ((0x46U >> (uStack_344 & 0x1f) & 1) == 0) {
              dStack_98 = dStack_350;
            }
            else {
              FUN_140647da0(&dStack_98,&dStack_350);
            }
            FUN_140003ca0(&dStack_98,&uStack_410);
            FUN_1400019a0(&dStack_248,&dStack_98);
            if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_98);
            }
            pdStack_160 = &dStack_248;
            FUN_140002730(&dStack_238,0x1420b8728);
            pdStack_158 = &dStack_238;
            ppdVar22 = &pdStack_168;
            uVar6 = FUN_1400b9c80(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
            FUN_1416a8cb0(param_1);
            FUN_1400019a0(uVar8,uVar6);
            func_0x0001416a8c00(1);
            uStack_f8 = 0x10;
            if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b8);
            }
            uStack_b8 = 0;
            uStack_b0 = 0x500000000;
            if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_d0);
            }
            uStack_d0 = 0;
            uStack_c8 = 0x500000000;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18942/*var:follow*/);
            uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
            FUN_1416cfc30(uVar6,uRam00000001420d58f8,0x80000000,&uStack_400);
            uVar24 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
            FUN_1416cfeb0(uVar6,0x18e26/*var:vsp*/,0x80000000,&uStack_3f0,uVar24,uVar21 & 0xffffffffffffff00);
            uVar13 = (undefined4)(uVar24 >> 0x20);
            FUN_140002730(&dStack_258,0x1420b8738);
            pdStack_168 = &dStack_258;
            FUN_140004520(&dStack_98,&uStack_390,_UNK_141982e78);
            FUN_1400019a0(&dStack_248,&dStack_98);
            if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_98);
            }
            pdStack_160 = &dStack_248;
            FUN_1400019a0(&dStack_238,uVar8);
            pdStack_158 = &dStack_238;
            uVar4 = FUN_1416f8280(param_1,uStack_c0,0x5b);
            uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,2,
                                  CONCAT44(uVar13,uRam00000001420da0c0),&pdStack_168);
            FUN_140001a50(&dStack_e0,uVar6,uVar4);
            FUN_140009980(&dStack_a8,&dStack_e0,_UNK_141987b08);
            FUN_140017bd0(&dStack_118,&uStack_400,0xb);
            uStack_e4 = uStack_10c;
            uStack_e8 = uStack_110;
            if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
              dStack_f0 = dStack_118;
            }
            else {
              FUN_140647da0(&dStack_f0,&dStack_118);
            }
            FUN_140003ca0(&dStack_f0,&uStack_3f0);
            uStack_90._0_4_ = uStack_e8;
            uStack_90._4_4_ = uStack_e4;
            if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
              dStack_98 = dStack_f0;
            }
            else {
              FUN_140647da0(&dStack_98,&dStack_f0);
            }
            FUN_140003e00(&dStack_98,&dStack_a8);
            FUN_1400019a0(&uStack_228,&dStack_98);
            if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_98);
            }
            if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_f0);
            }
            if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_118);
            }
            if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_a8);
            }
            if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_e0);
            }
            puStack_150 = &uStack_228;
            FUN_140002730(&dStack_218,0x1420b8728);
            ppdVar22 = &pdStack_158;
            pdStack_148 = &dStack_218;
            uVar6 = FUN_1400b9c80(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
            uVar13 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
            FUN_1416a8cb0(param_1);
            FUN_1400019a0(uVar8,uVar6);
            func_0x0001416a8c00(1);
            uStack_f8 = 0x11;
            if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_288);
            }
            uStack_27c = 0;
            uStack_288 = 0;
            uStack_f8 = 0x12;
            if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b8);
            }
            uStack_b8 = 0;
            uStack_b0 = 0x500000000;
            FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
            FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
            FUN_1400019a0(&dStack_258,&uStack_278);
            pdStack_168 = &dStack_258;
            FUN_1400019a0(&dStack_248,&uStack_268);
            pdStack_160 = &dStack_248;
            FUN_140002730(&dStack_238,0x1420b8748);
            pdStack_158 = &dStack_238;
            uVar8 = CONCAT44(uVar13,uRam00000001420dacf0);
            uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,uVar8,&pdStack_168);
            uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
            FUN_1400019a0(&uStack_188,uVar6);
            uStack_f8 = 0x13;
            uStack_90._4_4_ = 0;
            dStack_98 = -4.0;
            iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,uRam00000001420f6b08,0);
            if (iVar5 == 0) {
              uStack_f8 = 0x16;
              if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b8);
              }
              uStack_b8 = 0;
              uStack_b0 = 0x500000000;
              FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
              FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
              FUN_1400019a0(&dStack_258,&uStack_278);
              pdStack_168 = &dStack_258;
              FUN_1400019a0(&dStack_248,&uStack_268);
              pdStack_160 = &dStack_248;
              FUN_140002730(&dStack_238,0x1420b8758);
              pdStack_158 = &dStack_238;
              ppdVar25 = &pdStack_168;
              ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420dacf0);
              uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,ppdVar22,ppdVar25);
              FUN_1400019a0(&uStack_188,uVar6);
              uStack_90._4_4_ = 0;
              dStack_98 = -4.0;
              iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,uRam00000001420f6b08,0);
              if (iVar5 != 0) {
                uStack_f8 = 0x17;
                if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_288);
                }
                uVar13 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
                uStack_27c = 0;
                uStack_288 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
                FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58e8,0x80000000,&uStack_3c0);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58f8,0x80000000,&uStack_3b0);
                FUN_1400019a0(&dStack_258,&uStack_278);
                pdStack_168 = &dStack_258;
                FUN_1400019a0(&dStack_248,&uStack_268);
                pdStack_160 = &dStack_248;
                FUN_1400019a0(&dStack_238,&uStack_3c0);
                pdStack_158 = &dStack_238;
                FUN_1400019a0(&uStack_228,&uStack_3b0);
                puStack_150 = &uStack_228;
                ppdVar25 = &pdStack_168;
                ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420da150);
                uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,4,ppdVar22,ppdVar25);
                uStack_90._4_4_ = 0;
                dStack_98 = 70.0;
                iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
                if (-1 < iVar5) {
                  uStack_f8 = 0x18;
                  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_188);
                  }
                  goto code_r0x000140642458;
                }
              }
            }
            else {
              uStack_f8 = 0x13;
              if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b8);
              }
              uStack_b8 = 0;
              uStack_b0 = 0x500000000;
              FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
              FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
              FUN_1416cfc30(&uStack_188,uRam00000001420d58e8,0x80000000,&uStack_3e0);
              FUN_1416cfc30(&uStack_188,uRam00000001420d58f8,0x80000000,&uStack_3d0);
              FUN_1400019a0(&dStack_258,&uStack_278);
              pdStack_168 = &dStack_258;
              FUN_1400019a0(&dStack_248,&uStack_268);
              pdStack_160 = &dStack_248;
              FUN_1400019a0(&dStack_238,&uStack_3e0);
              pdStack_158 = &dStack_238;
              FUN_1400019a0(&uStack_228,&uStack_3d0);
              puStack_150 = &uStack_228;
              ppdVar25 = &pdStack_168;
              ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420da150);
              uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,4,ppdVar22,ppdVar25);
              uStack_90._4_4_ = 0;
              dStack_98 = 100.0;
              iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
              if (-1 < iVar5) {
                uStack_f8 = 0x14;
                if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_188);
                }
code_r0x000140642458:
                uStack_17c = 0;
                uStack_188 = 0xc010000000000000/*-4*/;
              }
            }
            uVar6 = uRam00000001420f6b08;
            uStack_90._4_4_ = 0;
            dStack_98 = -4.0;
            uVar13 = (undefined4)uRam00000001420f6b08;
            uVar18 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
            iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,uRam00000001420f6b08,0);
            if (iVar5 == 0) {
              uStack_90._4_4_ = 0;
              dStack_98 = -4.0;
              iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,uVar6,0);
              if (iVar5 == 0) {
                uVar6 = (**(code **)(*param_1 + 8))(param_1,0x1870b/*var:an*/);
                uStack_90._4_4_ = 0;
                dStack_98 = 1.0;
                uVar13 = (undefined4)uRam00000001420f6b08;
                uVar18 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
                if ((iVar5 != -2) && (iVar5 < 0)) goto code_r0x0001406424b8;
              }
            }
            else {
code_r0x0001406424b8:
              uVar19 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
              uStack_f8 = 0x1c;
              uStack_90._4_4_ = 0;
              dStack_98 = -4.0;
              iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,CONCAT44(uVar18,uVar13),0);
              if (iVar5 == 0) {
                uStack_f8 = 0x20;
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x1883f/*var:cpx*/);
                FUN_1416a8cb0(param_1);
                FUN_1400019a0(uVar8,uVar6);
                func_0x0001416a8c00(1);
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18840/*var:cpy*/);
                FUN_1416a8cb0(param_1);
                FUN_1400019a0(uVar8,uVar6);
              }
              else {
                uStack_f8 = 0x1d;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d0);
                }
                uStack_d0 = 0;
                uStack_c8 = 0x500000000;
                if ((0x46U >> (uStack_1b8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_1c0);
                }
                uStack_1c0 = 0;
                uStack_1b8 = 0x500000000;
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x1883f/*var:cpx*/);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58e8,0x80000000,&uStack_340);
                FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
                FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58f8,0x80000000,&uStack_330);
                FUN_1400019a0(&dStack_258,&uStack_278);
                pdStack_168 = &dStack_258;
                FUN_1400019a0(&dStack_248,&uStack_268);
                pdStack_160 = &dStack_248;
                FUN_1400019a0(&dStack_238,&uStack_340);
                pdStack_158 = &dStack_238;
                FUN_1400019a0(&uStack_228,&uStack_330);
                puStack_150 = &uStack_228;
                cVar1 = FUN_1416927d0(&uStack_288);
                uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
                if (cVar1 == '\0') {
                  uVar13 = (undefined4)_UNK_1419862d0;
                  uVar18 = (undefined4)((ulonglong)_UNK_1419862d0 >> 0x20);
                }
                else {
                  uVar13 = (undefined4)_UNK_141985608;
                  uVar18 = (undefined4)((ulonglong)_UNK_141985608 >> 0x20);
                }
                dStack_a8 = (double)CONCAT44(uVar18,uVar13);
                uVar23 = CONCAT44(uVar19,uRam00000001420da150);
                pdVar9 = (double *)
                         FUN_1416ab210(param_1,uStack_c0,&uStack_1c0,4,uVar23,&pdStack_168);
                uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
                uStack_90._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                uStack_90._0_4_ = *(uint *)(pdVar9 + 1);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
                  dStack_98 = *pdVar9;
                }
                else {
                  FUN_140647da0(&dStack_98,pdVar9);
                }
                FUN_140003e00(&dStack_98,&dStack_a8);
                FUN_1400019a0(&dStack_218,&dStack_98);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_98);
                }
                if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a8);
                }
                pdStack_148 = &dStack_218;
                FUN_140002730(&dStack_208,0x142180740);
                pdStack_140 = &dStack_208;
                FUN_1400019a0(&uStack_1f8,&uStack_340);
                puStack_138 = &uStack_1f8;
                FUN_1400019a0(&uStack_1e8,uVar6);
                puStack_130 = &uStack_1e8;
                uVar6 = FUN_1416cd900(&uStack_d0,2,&pdStack_148);
                FUN_140004520(&dStack_98,uVar6,_UNK_1419831a8);
                FUN_1400019a0(&uStack_1d8,&dStack_98);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_98);
                }
                uVar23 = CONCAT44(uVar13,uRam00000001420da590);
                puStack_128 = &uStack_1d8;
                uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,uVar23,&puStack_138);
                uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
                FUN_1416a8cb0(param_1);
                FUN_1400019a0(uVar8,uVar6);
                func_0x0001416a8c00(1);
                uStack_f8 = 0x1e;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d0);
                }
                uStack_d0 = 0;
                uStack_c8 = 0x500000000;
                if ((0x46U >> (uStack_1b8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_1c0);
                }
                uStack_1c0 = 0;
                uStack_1b8 = 0x500000000;
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18840/*var:cpy*/);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58f8,0x80000000,&uStack_330);
                FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&uStack_278);
                FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&uStack_268);
                FUN_1416cfc30(&uStack_188,uRam00000001420d58e8,0x80000000,&uStack_340);
                FUN_1400019a0(&dStack_258,&uStack_278);
                pdStack_168 = &dStack_258;
                FUN_1400019a0(&dStack_248,&uStack_268);
                pdStack_160 = &dStack_248;
                FUN_1400019a0(&dStack_238,&uStack_340);
                pdStack_158 = &dStack_238;
                FUN_1400019a0(&uStack_228,&uStack_330);
                puStack_150 = &uStack_228;
                cVar1 = FUN_1416927d0(&uStack_288);
                uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
                if (cVar1 == '\0') {
                  uVar18 = (undefined4)_UNK_1419862d0;
                  uVar19 = (undefined4)((ulonglong)_UNK_1419862d0 >> 0x20);
                }
                else {
                  uVar18 = (undefined4)_UNK_141985608;
                  uVar19 = (undefined4)((ulonglong)_UNK_141985608 >> 0x20);
                }
                dStack_a8 = (double)CONCAT44(uVar19,uVar18);
                uVar23 = CONCAT44(uVar13,uRam00000001420da150);
                pdVar9 = (double *)
                         FUN_1416ab210(param_1,uStack_c0,&uStack_1c0,4,uVar23,&pdStack_168);
                uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
                uStack_90._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                uStack_90._0_4_ = *(uint *)(pdVar9 + 1);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
                  dStack_98 = *pdVar9;
                }
                else {
                  FUN_140647da0(&dStack_98,pdVar9);
                }
                FUN_140003e00(&dStack_98,&dStack_a8);
                FUN_1400019a0(&dStack_218,&dStack_98);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_98);
                }
                if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a8);
                }
                pdStack_148 = &dStack_218;
                FUN_140002730(&dStack_208,0x142180740);
                pdStack_140 = &dStack_208;
                FUN_1400019a0(&uStack_1f8,&uStack_330);
                puStack_138 = &uStack_1f8;
                FUN_1400019a0(&uStack_1e8,uVar6);
                puStack_130 = &uStack_1e8;
                uVar6 = FUN_1416cd900(&uStack_d0,2,&pdStack_148);
                FUN_140004520(&dStack_98,uVar6,_UNK_1419831a8);
                FUN_1400019a0(&uStack_1d8,&dStack_98);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_98);
                }
                puStack_128 = &uStack_1d8;
                uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,
                                      CONCAT44(uVar13,uRam00000001420da590),&puStack_138);
                FUN_1416a8cb0(param_1);
                FUN_1400019a0(uVar8,uVar6);
                func_0x0001416a8c00(1);
                uStack_f8 = 0x1f;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
                FUN_1400019a0(&dStack_258,uVar6);
                pdStack_168 = &dStack_258;
                FUN_140002730(&dStack_248,0x142180740);
                pdStack_160 = &dStack_248;
                FUN_140002730(&dStack_238,0x1420b8768);
                pdStack_158 = &dStack_238;
                ppdVar22 = &pdStack_168;
                uVar8 = FUN_1400b9c80(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
                uVar19 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
                FUN_1416a8cb0(param_1);
                FUN_1400019a0(uVar6,uVar8);
              }
              func_0x0001416a8c00(1);
              uStack_f8 = 0x21;
              if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b8);
              }
              uStack_b8 = 0;
              uStack_b0 = 0x500000000;
              if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_d0);
              }
              uStack_d0 = 0;
              uStack_c8 = 0x500000000;
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
              uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x1883f/*var:cpx*/);
              puStack_1b0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
              FUN_1400019a0(&dStack_258,uVar8);
              pdStack_168 = &dStack_258;
              FUN_1400019a0(&dStack_248,uVar8);
              pdStack_160 = &dStack_248;
              FUN_1400019a0(&dStack_238,uVar8);
              pdStack_158 = &dStack_238;
              FUN_1400019a0(&uStack_228,uVar8);
              puStack_150 = &uStack_228;
              FUN_1400019a0(&dStack_218,uVar6);
              pdStack_148 = &dStack_218;
              uVar23 = CONCAT44(uVar19,uRam00000001420da0c0);
              uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,5,uVar23,&pdStack_168);
              uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
              FUN_1400019a0(&dStack_208,uVar8);
              pdStack_140 = &dStack_208;
              FUN_1400019a0(&uStack_1f8,uVar6);
              puStack_138 = &uStack_1f8;
              FUN_1400019a0(&uStack_1e8,puStack_1b0);
              uVar8 = CONCAT44(uVar13,uRam00000001420da590);
              puStack_130 = &uStack_1e8;
              uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,uVar8,&pdStack_140);
              uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
              FUN_1400019a0(&dStack_1a8,uVar6);
              FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8);
              uStack_f8 = 0x22;
              if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b8);
              }
              uStack_b8 = 0;
              uStack_b0 = 0x500000000;
              if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_d0);
              }
              uStack_d0 = 0;
              uStack_c8 = 0x500000000;
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
              uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18840/*var:cpy*/);
              FUN_1400019a0(&dStack_258,uVar8);
              pdStack_168 = &dStack_258;
              FUN_1400019a0(&dStack_248,uVar8);
              pdStack_160 = &dStack_248;
              FUN_1400019a0(&dStack_238,uVar8);
              pdStack_158 = &dStack_238;
              FUN_1400019a0(&uStack_228,uVar8);
              puStack_150 = &uStack_228;
              FUN_1400019a0(&dStack_218,uVar6);
              pdStack_148 = &dStack_218;
              uVar23 = CONCAT44(uVar13,uRam00000001420da0c0);
              uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,5,uVar23,&pdStack_168);
              uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
              FUN_1400019a0(&dStack_208,uVar8);
              pdStack_140 = &dStack_208;
              FUN_1400019a0(&uStack_1f8,uVar6);
              puStack_138 = &uStack_1f8;
              FUN_1400019a0(&uStack_1e8,puStack_1b0);
              ppdVar25 = &pdStack_140;
              ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420da590);
              puStack_130 = &uStack_1e8;
              uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,ppdVar22,ppdVar25);
              FUN_1400019a0(&dStack_198,uVar6);
              FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&dStack_198);
              cVar1 = FUN_1416927d0(&uStack_288);
              if (cVar1 != '\0') {
                uStack_f8 = 0x24;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
                uVar21 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8,uVar21,
                              (ulonglong)ppdVar25 & 0xffffffffffffff00);
                uVar13 = (undefined4)(uVar21 >> 0x20);
                FUN_1400019a0(&dStack_258,uVar6);
                pdStack_168 = &dStack_258;
                FUN_1400019a0(&dStack_248,&dStack_1a8);
                pdStack_160 = &dStack_248;
                FUN_1400019a0(&dStack_238,&dStack_1a8);
                pdStack_158 = &dStack_238;
                ppdVar22 = &pdStack_168;
                uVar21 = CONCAT44(uVar13,uRam00000001420da0c0);
                uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,uVar21,ppdVar22);
                FUN_1400019a0(&dStack_1a8,uVar6);
                FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8);
                uStack_f8 = 0x25;
                if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b8);
                }
                uStack_b8 = 0;
                uStack_b0 = 0x500000000;
                uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
                uVar21 = uVar21 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&dStack_198,uVar21,
                              (ulonglong)ppdVar22 & 0xffffffffffffff00);
                uVar13 = (undefined4)(uVar21 >> 0x20);
                FUN_1400019a0(&dStack_258,uVar6);
                pdStack_168 = &dStack_258;
                FUN_1400019a0(&dStack_248,&dStack_198);
                pdStack_160 = &dStack_248;
                FUN_1400019a0(&dStack_238,&dStack_198);
                pdStack_158 = &dStack_238;
                ppdVar25 = &pdStack_168;
                ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420da0c0);
                uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,ppdVar22,ppdVar25);
                FUN_1400019a0(&dStack_198,uVar6);
                FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&dStack_198);
              }
            }
            uStack_90 = (ulonglong)(uint)uStack_90;
            dStack_98 = -4.0;
            iVar5 = FUN_1416d9df0(&uStack_188,&dStack_98,uRam00000001420f6b08,0);
            if (iVar5 == 0) {
              uStack_f8 = 0x29;
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
              uStack_90 = uStack_90 & 0xffffffff;
              dStack_98 = 1.0;
              iVar5 = FUN_1416d9df0(uVar6,&dStack_98,uRam00000001420f6b08,1);
              if (-1 < iVar5) {
                uStack_f8 = 0x2b;
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
                FUN_1400019a0(&dStack_1a8,uVar8);
                FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8);
                uStack_f8 = 0x2c;
                uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
                FUN_1400019a0(&dStack_198,uVar8);
                FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&dStack_198);
              }
              uStack_f8 = 0x2e;
              if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b8);
              }
              uStack_b8 = 0;
              uStack_b0 = 0x500000000;
              FUN_1400019a0(&dStack_258,uVar6);
              pdStack_168 = &dStack_258;
              FUN_140002730(&dStack_248,0x1420b8778);
              pdStack_160 = &dStack_248;
              FUN_140002730(&dStack_238,0x1420b8768);
              pdStack_158 = &dStack_238;
              ppdVar22 = &pdStack_168;
              uVar8 = FUN_1400b9c80(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
              FUN_1416a8cb0(param_1);
              FUN_1400019a0(uVar6,uVar8);
              func_0x0001416a8c00(1);
            }
          }
        }
      }
    }
    else {
      dStack_a8 = 0.0;
      uStack_a0 = 0.0;
      ppdVar25 = (double **)((ulonglong)ppdVar25 & 0xffffffffffffff00);
      ppdVar22 = (double **)((ulonglong)ppdVar22 & 0xffffffffffffff00);
      FUN_1416d0010(0x41,0x18df4/*var:ui_open*/,0x80000000,&dStack_a8,ppdVar22,ppdVar25);
      uStack_90 = uStack_90 & 0xffffffff;
      dStack_98 = 0.0;
      iVar5 = FUN_1416d9df0(&dStack_a8,&dStack_98,uRam00000001420f6b08,0);
      if (iVar5 == 0) goto code_r0x00014063f618;
      uStack_f8 = 9;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_b8 = 0;
      uStack_b0 = 0x500000000;
      dStack_98 = 0.0;
      uStack_90 = 0;
      uVar24 = (ulonglong)ppdVar25 & 0xffffffffffffff00;
      uVar21 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8,uVar21,uVar24);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_1416d0010(0x41,0x18dea/*var:ui_cx*/,0x80000000,&dStack_98,uVar21 & 0xffffffffffffff00,uVar24);
      FUN_1400019a0(&dStack_258,&dStack_1a8);
      pdStack_168 = &dStack_258;
      FUN_1400019a0(&dStack_248,&dStack_98);
      uStack_a0 = (double)uStack_90;
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
        dStack_a8 = dStack_98;
        pdStack_160 = &dStack_248;
      }
      else {
        pdStack_160 = &dStack_248;
        FUN_140647da0(&dStack_a8,&dStack_98);
      }
      FUN_140003e00(&dStack_a8,&dStack_1a8);
      if (((ulonglong)uStack_a0 & 0xffffff00000000) == 0) {
        uVar13 = SUB84(dStack_a8,0);
      }
      else {
        uVar13 = FUN_1416940c0(&dStack_a8);
      }
      dVar14 = (double)func_0x0001416cd450(uVar13);
      if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_238);
      }
      dStack_238 = dVar14 / _UNK_141984368;
      uStack_22c = 0;
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_a8);
      }
      ppdVar22 = &pdStack_168;
      pdStack_158 = &dStack_238;
      uVar6 = FUN_14003b450(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
      FUN_1400019a0(&dStack_1a8,uVar6);
      FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8);
      uStack_f8 = 10;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_b8 = 0;
      uStack_b0 = 0x500000000;
      dStack_a8 = 0.0;
      uStack_a0 = 0.0;
      uVar24 = uVar24 & 0xffffffffffffff00;
      uVar21 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&dStack_198,uVar21,uVar24);
      ppdVar25 = (double **)(uVar24 & 0xffffffffffffff00);
      FUN_1416d0010(0x41,0x18deb/*var:ui_cy*/,0x80000000,&dStack_a8,uVar21 & 0xffffffffffffff00,ppdVar25);
      FUN_1400019a0(&dStack_258,&dStack_198);
      pdStack_168 = &dStack_258;
      FUN_1400019a0(&dStack_248,&dStack_a8);
      uStack_d4 = uStack_a0._4_4_;
      uStack_d8 = (undefined4)uStack_a0;
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) == 0) {
        dStack_e0 = dStack_a8;
        pdStack_160 = &dStack_248;
      }
      else {
        pdStack_160 = &dStack_248;
        FUN_140647da0(&dStack_e0,&dStack_a8);
      }
      FUN_140003e00(&dStack_e0,&dStack_198);
      if ((uStack_d4 & 0xffffff) == 0) {
        uVar13 = SUB84(dStack_e0,0);
      }
      else {
        uVar13 = FUN_1416940c0(&dStack_e0);
      }
      dVar14 = (double)func_0x0001416cd450(uVar13);
      if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_238);
      }
      dStack_238 = dVar14 / _UNK_141984368;
      uStack_22c = 0;
      if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_e0);
      }
      ppdVar22 = &pdStack_168;
      pdStack_158 = &dStack_238;
      uVar6 = FUN_14003b450(param_1,uStack_c0,&uStack_b8,3,ppdVar22);
      FUN_1400019a0(&dStack_198,uVar6);
      FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&dStack_198);
    }
  }
  else {
    uStack_f8 = 0x3b;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    uVar6 = 0xc014000000000000/*-5*/;
code_r0x00014063ef5a:
    *puVar7 = uVar6;
  }
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = 3.0;
  iVar5 = FUN_1416d9df0(&uStack_448,&dStack_98,uRam00000001420f6b08,0);
  if (iVar5 != 0) {
    uStack_f8 = 0x3d;
    cVar1 = FUN_1416f8280(param_1,uStack_c0,0x40);
    uVar13 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
    if (cVar1 != '\0') {
      uStack_f8 = 0x3e;
      dStack_98 = 0.0;
      uStack_90 = 0;
      FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&dStack_98);
    }
    uStack_f8 = 0x3f;
    if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b8);
    }
    uStack_b8 = 0;
    uStack_b0 = 0x500000000;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
    FUN_140002730(&dStack_258,0x1420b8788);
    pdStack_168 = &dStack_258;
    FUN_140002730(&dStack_248,0x1420b8798);
    uVar23 = CONCAT44(uVar13,uRam00000001420da0c0);
    pdStack_160 = &dStack_248;
    uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,2,uVar23,&pdStack_168);
    uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
    bVar2 = FUN_1417099d0(0x44);
    bVar3 = FUN_1417099d0(0x41);
    dStack_a8 = (double)(int)((uint)bVar2 - (uint)bVar3);
    uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
    FUN_140004620(&dStack_a8,uVar8);
    FUN_140004520(&dStack_98,&dStack_a8,_UNK_141987b10);
    FUN_140003ca0(uVar6,&dStack_98);
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_98);
    }
    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a8);
    }
    uStack_f8 = 0x40;
    if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b8);
    }
    uStack_b8 = 0;
    uStack_b0 = 0x500000000;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
    FUN_140002730(&dStack_258,0x1420b8788);
    pdStack_168 = &dStack_258;
    FUN_140002730(&dStack_248,0x1420b8798);
    uVar23 = CONCAT44(uVar13,uRam00000001420da0c0);
    pdStack_160 = &dStack_248;
    uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,2,uVar23,&pdStack_168);
    uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
    bVar2 = FUN_1417099d0(0x53);
    bVar3 = FUN_1417099d0(0x57);
    dStack_a8 = (double)(int)((uint)bVar2 - (uint)bVar3);
    uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
    FUN_140004620(&dStack_a8,uVar8);
    FUN_140004520(&dStack_98,&dStack_a8,_UNK_141987b10);
    FUN_140003ca0(uVar6,&dStack_98);
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_98);
    }
    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a8);
    }
    if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b8);
    }
    uStack_b8 = 0;
    uStack_b0 = 0x500000000;
    FUN_140002730(&dStack_258,0x1420b8728);
    ppdVar25 = &pdStack_168;
    ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420daf60);
    pdStack_168 = &dStack_258;
    uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,1,ppdVar22,ppdVar25);
    cVar1 = FUN_1416927d0(uVar6);
    if (cVar1 != '\0') {
      ppdVar25 = (double **)((ulonglong)ppdVar25 & 0xffffffffffffff00);
      ppdVar22 = (double **)((ulonglong)ppdVar22 & 0xffffffffffffff00);
      FUN_1416d0010(0x4f,0x18ad9/*var:mode*/,0x80000000,&uStack_448,ppdVar22,ppdVar25);
      uStack_90 = uStack_90 & 0xffffffff;
      dStack_98 = 1.0;
      iVar5 = FUN_1416d9df0(&uStack_448,&dStack_98,uRam00000001420f6b08,0);
      if (iVar5 == 0) {
        dStack_a8 = 0.0;
        uStack_a0 = 0.0;
        ppdVar25 = (double **)((ulonglong)ppdVar25 & 0xffffffffffffff00);
        ppdVar22 = (double **)((ulonglong)ppdVar22 & 0xffffffffffffff00);
        FUN_1416d0010(0x4f,0x189fe/*var:in_mc*/,0x80000000,&dStack_a8,ppdVar22,ppdVar25);
        uStack_90 = uStack_90 & 0xffffffff;
        dStack_98 = 1.0;
        iVar5 = FUN_1416d9df0(&dStack_a8,&dStack_98,uRam00000001420f6b08,0);
        if (iVar5 == 0) goto code_r0x00014063f815;
      }
      uStack_f8 = 0x43;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
      uVar8 = (**(code **)(*param_1 + 8))(param_1,0x18b0a/*var:mx*/);
      func_0x0001416ce870(param_1,uRam00000001420d5908,0x80000000,&dStack_2f8);
      uStack_a0 = (double)CONCAT44(uStack_2ec,uStack_2f0);
      if ((0x46U >> (uStack_2ec & 0x1f) & 1) == 0) {
        dStack_a8 = dStack_2f8;
      }
      else {
        FUN_140647da0(&dStack_a8,&dStack_2f8);
      }
      FUN_140003e00(&dStack_a8,uVar8);
      FUN_140004520(&dStack_98,&dStack_a8,_UNK_141983d78);
      FUN_140003e00(uVar6,&dStack_98);
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_98);
      }
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_a8);
      }
      uStack_f8 = 0x44;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
      uVar8 = (**(code **)(*param_1 + 8))(param_1,0x18b0c/*var:my*/);
      func_0x0001416ce870(param_1,uRam00000001420d5918,0x80000000,&dStack_2e8);
      uStack_a0 = (double)CONCAT44(uStack_2dc,uStack_2e0);
      if ((0x46U >> (uStack_2dc & 0x1f) & 1) == 0) {
        dStack_a8 = dStack_2e8;
      }
      else {
        FUN_140647da0(&dStack_a8,&dStack_2e8);
      }
      FUN_140003e00(&dStack_a8,uVar8);
      FUN_140004520(&dStack_98,&dStack_a8,_UNK_141983d78);
      FUN_140003e00(uVar6,&dStack_98);
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_98);
      }
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_a8);
      }
    }
  }
code_r0x00014063f815:
  puStack_1b0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = -2.0;
  iVar5 = FUN_1416d9df0(puStack_1b0,&dStack_98,uRam00000001420f6b08,1);
  if (iVar5 < 1) {
    puStack_1b0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
    uStack_90 = uStack_90 & 0xffffffff;
    dStack_98 = -4.0;
    iVar5 = FUN_1416d9df0(puStack_1b0,&dStack_98,uRam00000001420f6b08,0);
    if (iVar5 != 0) goto code_r0x00014063fc37;
  }
  iVar5 = func_0x0001416f82f0(param_1,uStack_c0,0x40);
  if (0 < iVar5) {
    ppdVar25 = (double **)((ulonglong)ppdVar25 & 0xffffffffffffff00);
    ppdVar22 = (double **)((ulonglong)ppdVar22 & 0xffffffffffffff00);
    FUN_1416d0010(0x4f,0x18d24/*var:START_GAME*/,0x80000000,&uStack_548,ppdVar22,ppdVar25);
    uStack_90 = uStack_90 & 0xffffffff;
    dStack_98 = 0.0;
    iVar5 = FUN_1416d9df0(&uStack_548,&dStack_98,uRam00000001420f6b08,0);
    if (iVar5 == 0) {
      uStack_f8 = 0x4a;
      puStack_1b0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
      uVar13 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
      if ((0x46U >> (*(uint *)((longlong)puStack_1b0 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puStack_1b0);
      }
      *(undefined4 *)((longlong)puStack_1b0 + 0xc) = 0;
      *puStack_1b0 = 0x4050000000000000/*64 (obj:oPlayer)*/;
      uStack_f8 = 0x4b;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_b8 = 0;
      uStack_b0 = 0x500000000;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
      FUN_140002730(&dStack_258,0x1420b87a8);
      pdStack_168 = &dStack_258;
      FUN_140002730(&dStack_248,0x1420b8798);
      uVar23 = CONCAT44(uVar13,uRam00000001420da0c0);
      pdStack_160 = &dStack_248;
      uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,2,uVar23,&pdStack_168);
      uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
      bVar2 = FUN_1417099d0(0x4b);
      bVar3 = FUN_1417099d0(0x48);
      dStack_a8 = (double)(int)((uint)bVar2 - (uint)bVar3);
      uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
      FUN_140004620(&dStack_a8,uVar8);
      FUN_140004520(&dStack_98,&dStack_a8,_UNK_141984368);
      FUN_140003ca0(uVar6,&dStack_98);
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_98);
      }
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_a8);
      }
      uStack_f8 = 0x4c;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_b8 = 0;
      uStack_b0 = 0x500000000;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
      FUN_140002730(&dStack_258,0x1420b87a8);
      pdStack_168 = &dStack_258;
      FUN_140002730(&dStack_248,0x1420b8798);
      ppdVar25 = &pdStack_168;
      ppdVar22 = (double **)CONCAT44(uVar13,uRam00000001420da0c0);
      pdStack_160 = &dStack_248;
      uVar8 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,2,ppdVar22,ppdVar25);
      bVar2 = FUN_1417099d0(0x4a);
      bVar3 = FUN_1417099d0(0x55);
      dStack_a8 = (double)(int)((uint)bVar2 - (uint)bVar3);
      uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff);
      FUN_140004620(&dStack_a8,uVar8);
      FUN_140004520(&dStack_98,&dStack_a8,_UNK_141984368);
      FUN_140003ca0(uVar6,&dStack_98);
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_98);
      }
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_a8);
      }
    }
  }
code_r0x00014063fc37:
  uStack_f8 = 0x50;
  FUN_140004520(&dStack_a8,&uStack_430,_UNK_141982c40);
  uStack_90._4_4_ = uStack_2bc;
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) == 0) {
    dStack_98 = dStack_2c8;
  }
  else {
    FUN_140647da0(&dStack_98,&dStack_2c8);
  }
  FUN_140003ca0(&dStack_98,&dStack_a8);
  FUN_1400019a0(&dStack_370,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a8);
  }
  uVar6 = _UNK_141982c40;
  FUN_140004520(&dStack_a8,&uStack_390,_UNK_141982c40);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_90._4_4_ = uStack_2ac;
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) == 0) {
    dStack_98 = dStack_2b8;
  }
  else {
    FUN_140647da0(&dStack_98,&dStack_2b8);
  }
  FUN_140003ca0(&dStack_98,&dStack_a8);
  FUN_1400019a0(&dStack_360,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a8);
  }
  uStack_f8 = 0x51;
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_b8 = 0;
  uStack_b0 = 0x500000000;
  uVar24 = (ulonglong)ppdVar25 & 0xffffffffffffff00;
  uVar21 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8,uVar21,uVar24);
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&dStack_198,uVar21,
                uVar24 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar21 >> 0x20);
  pdStack_168 = &dStack_370;
  pdStack_160 = &dStack_360;
  FUN_1400019a0(&dStack_238,&dStack_1a8);
  pdStack_158 = &dStack_238;
  FUN_1400019a0(&uStack_228,&dStack_198);
  puStack_150 = &uStack_228;
  ppdVar22 = &pdStack_168;
  uVar21 = CONCAT44(uVar18,uRam00000001420da150);
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_b8,4,uVar21,ppdVar22);
  FUN_1400019a0(&uStack_380,uVar6);
  uVar24 = (ulonglong)ppdVar22 & 0xffffffffffffff00;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&dStack_1a8,uVar21,uVar24);
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&dStack_198,uVar21,
                uVar24 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar21 >> 0x20);
  dVar14 = dStack_198;
  if ((uStack_18c & 0xffffff) != 0) {
    dVar14 = (double)FUN_1416940c0(&dStack_198);
  }
  if ((uStack_19c & 0xffffff) == 0) {
    dVar15 = dStack_1a8;
  }
  else {
    dVar15 = (double)FUN_1416940c0(&dStack_1a8);
  }
  if ((uStack_354 & 0xffffff) == 0) {
    dVar16 = dStack_360;
  }
  else {
    dVar16 = (double)FUN_1416940c0(&dStack_360);
  }
  if ((uStack_364 & 0xffffff) == 0) {
    dVar17 = dStack_370;
  }
  else {
    dVar17 = (double)FUN_1416940c0(&dStack_370);
  }
  uVar6 = CONCAT44(uVar20,(float)dVar16);
  fVar11 = (float)FUN_1416cdb80((float)dVar17,uVar6,CONCAT44(uVar13,(float)dVar15),(float)dVar14);
  uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2a8);
  }
  uStack_29c = 0;
  dStack_2a8 = (double)fVar11;
  uStack_f8 = 0x52;
  uStack_90._4_4_ = *(uint *)((longlong)pdStack_450 + 0xc);
  uStack_90._0_4_ = *(uint *)(pdStack_450 + 1);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
    dStack_98 = *pdStack_450;
  }
  else {
    FUN_140647da0(&dStack_98);
  }
  FUN_140001fe0(&dStack_98,uStack_3a0);
  FUN_1400019a0(&dStack_2d8,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  uStack_f8 = 0x53;
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_b8 = 0;
  uStack_b0 = 0x500000000;
  if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  uStack_d0 = 0;
  uStack_c8 = 0x500000000;
  if ((0x46U >> (uStack_1b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c0);
  }
  uStack_1c0 = 0;
  uStack_1b8 = 0x500000000;
  if ((0x46U >> (uStack_318._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_320);
  }
  uStack_320 = 0;
  uStack_318 = 0x500000000;
  if ((0x46U >> (uStack_308._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_310);
  }
  uStack_310 = 0;
  uStack_308 = 0x500000000;
  pdVar9 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18abd/*var:mh*/);
  pdVar10 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18b08/*var:mv*/);
  dVar14 = dStack_2d8;
  if ((uStack_2cc & 0xffffff) != 0) {
    dVar14 = (double)FUN_1416940c0(&dStack_2d8);
  }
  dStack_98 = (double)((ulonglong)dVar14 ^ _UNK_141982e90);
  uStack_90 = (ulonglong)(uint)uStack_90;
  FUN_1400019a0(&dStack_258,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  pdStack_168 = &dStack_258;
  pdStack_160 = &dStack_2d8;
  if ((*(uint *)((longlong)pdStack_458 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdStack_458;
  }
  else {
    dVar14 = (double)FUN_1416940c0();
  }
  uStack_e4 = *(uint *)((longlong)pdStack_398 + 0xc);
  uStack_e8 = *(uint *)(pdStack_398 + 1);
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
    dStack_f0 = *pdStack_398;
  }
  else {
    FUN_140647da0(&dStack_f0);
  }
  FUN_140001fe0(&dStack_f0,uStack_3a0);
  dVar15 = dStack_f0;
  if ((uStack_e4 & 0xffffff) != 0) {
    dVar15 = (double)FUN_1416940c0(&dStack_f0);
  }
  fVar11 = (float)FUN_1416cd800((float)dVar15,CONCAT44(uVar20,(float)dVar14));
  uVar6 = FUN_1416cd660(&uStack_1c0,2,&pdStack_168);
  dVar14 = dStack_2a8;
  if ((uStack_29c & 0xffffff) != 0) {
    dVar14 = (double)FUN_1416940c0(&dStack_2a8);
  }
  FUN_140004520(&dStack_298,&uStack_380,_UNK_141983d78);
  dVar15 = dStack_298;
  if ((uStack_28c & 0xffffff) != 0) {
    dVar15 = (double)FUN_1416940c0(&dStack_298);
  }
  fVar12 = (float)FUN_1416cd800((float)dVar15,(float)dVar14);
  uStack_16c = uStack_2bc;
  uStack_170 = uStack_2c0;
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) == 0) {
    dStack_178 = dStack_2c8;
  }
  else {
    FUN_140647da0(&dStack_178,&dStack_2c8);
  }
  FUN_140003f30(&dStack_178,(double)fVar12);
  uStack_10c = uStack_16c;
  uStack_110 = uStack_170;
  if ((0x46U >> (uStack_16c & 0x1f) & 1) == 0) {
    dStack_118 = dStack_178;
  }
  else {
    FUN_140647da0(&dStack_118,&dStack_178);
  }
  FUN_140003ca0(&dStack_118,uVar6);
  uStack_d4 = uStack_10c;
  uStack_d8 = uStack_110;
  if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
    dStack_e0 = dStack_118;
  }
  else {
    FUN_140647da0(&dStack_e0,&dStack_118);
  }
  dVar14 = (double)fVar11;
  FUN_140003f30(&dStack_e0,dVar14);
  uVar20 = (undefined4)((ulonglong)dVar14 >> 0x20);
  uStack_a0 = pdVar9[1];
  if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
    dStack_a8 = *pdVar9;
  }
  else {
    FUN_140647da0(&dStack_a8,pdVar9);
  }
  FUN_140003ca0(&dStack_a8,&dStack_e0);
  FUN_140001a50(&dStack_98,&dStack_a8,10);
  FUN_1400019a0(&dStack_238,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a8);
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_e0);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_298);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f0);
  }
  pdStack_158 = &dStack_238;
  dVar14 = dStack_2d8;
  if ((uStack_2cc & 0xffffff) != 0) {
    dVar14 = (double)FUN_1416940c0(&dStack_2d8);
  }
  dStack_98 = (double)((ulonglong)dVar14 ^ _UNK_141982e90);
  uStack_90 = uStack_90 & 0xffffffff;
  FUN_1400019a0(&uStack_228,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  puStack_150 = &uStack_228;
  pdStack_148 = &dStack_2d8;
  if ((*(uint *)((longlong)pdStack_458 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdStack_458;
  }
  else {
    dVar14 = (double)FUN_1416940c0();
  }
  uStack_e4 = *(uint *)((longlong)pdStack_398 + 0xc);
  uStack_e8 = *(uint *)(pdStack_398 + 1);
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
    dStack_f0 = *pdStack_398;
  }
  else {
    FUN_140647da0(&dStack_f0);
  }
  FUN_140001fe0(&dStack_f0,uStack_3a0);
  dVar15 = dStack_f0;
  if ((uStack_e4 & 0xffffff) != 0) {
    dVar15 = (double)FUN_1416940c0(&dStack_f0);
  }
  fVar11 = (float)FUN_1416cd880((float)dVar15,CONCAT44(uVar20,(float)dVar14));
  uVar6 = FUN_1416cd660(&uStack_310,2,&puStack_150);
  dVar14 = dStack_2a8;
  if ((uStack_29c & 0xffffff) != 0) {
    dVar14 = (double)FUN_1416940c0(&dStack_2a8);
  }
  FUN_140004520(&dStack_298,&uStack_380,_UNK_141983d78);
  if ((uStack_28c & 0xffffff) != 0) {
    dStack_298 = (double)FUN_1416940c0(&dStack_298);
  }
  fVar12 = (float)FUN_1416cd880((float)dStack_298,(float)dVar14);
  uStack_16c = uStack_2ac;
  uStack_170 = uStack_2b0;
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) == 0) {
    dStack_178 = dStack_2b8;
  }
  else {
    FUN_140647da0(&dStack_178,&dStack_2b8);
  }
  FUN_140003f30(&dStack_178,(double)fVar12);
  uStack_10c = uStack_16c;
  uStack_110 = uStack_170;
  if ((0x46U >> (uStack_16c & 0x1f) & 1) == 0) {
    dStack_118 = dStack_178;
  }
  else {
    FUN_140647da0(&dStack_118,&dStack_178);
  }
  FUN_140003ca0(&dStack_118,uVar6);
  uStack_d4 = uStack_10c;
  uStack_d8 = uStack_110;
  if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
    dStack_e0 = dStack_118;
  }
  else {
    FUN_140647da0(&dStack_e0,&dStack_118);
  }
  FUN_140003f30(&dStack_e0,(double)fVar11);
  uStack_a0 = pdVar10[1];
  if ((0x46U >> (*(uint *)((longlong)pdVar10 + 0xc) & 0x1f) & 1) == 0) {
    dStack_a8 = *pdVar10;
  }
  else {
    FUN_140647da0(&dStack_a8,pdVar10);
  }
  FUN_140003ca0(&dStack_a8,&dStack_e0);
  FUN_140001a50(&dStack_98,&dStack_a8,10);
  FUN_1400019a0(&dStack_208,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a8);
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_e0);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_298);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f0);
  }
  pdStack_140 = &dStack_208;
  FUN_1400019a0(&uStack_1f8,uStack_300);
  uVar8 = CONCAT44(uVar18,uRam00000001420da230);
  puStack_138 = &uStack_1f8;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_d0,1,uVar8,&pdStack_158);
  uVar20 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_140004520(&dStack_98,uVar6,_UNK_141984420);
  FUN_1400019a0(&uStack_1e8,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  uVar8 = CONCAT44(uVar20,uRam00000001420da230);
  puStack_130 = &uStack_1e8;
  uVar6 = FUN_1416ab210(param_1,uStack_c0,&uStack_320,1,uVar8,&pdStack_140);
  uVar20 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_140004520(&dStack_98,uVar6,_UNK_141984420);
  FUN_1400019a0(&uStack_1d8,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  puStack_128 = &uStack_1d8;
  FUN_1416ab210(param_1,uStack_c0,&uStack_b8,3,CONCAT44(uVar20,uRam00000001420da3a0),&puStack_138);
  uStack_f8 = 0x58;
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = 0.9;
  FUN_140001fe0(pdStack_450,&dStack_98);
  pdVar9 = pdStack_398;
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  uStack_f8 = 0x59;
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = 0.9;
  FUN_140001fe0(pdVar9,&dStack_98);
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_98);
  }
  uStack_f8 = 0x5b;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b0a/*var:mx*/);
  func_0x0001416ce870(param_1,uRam00000001420d5908,0x80000000,&dStack_2f8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&dStack_2f8);
  func_0x0001416a8c00(1);
  uStack_f8 = 0x5c;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b0c/*var:my*/);
  func_0x0001416ce870(param_1,uRam00000001420d5918,0x80000000,&dStack_2e8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&dStack_2e8);
  func_0x0001416a8c00(1);
  uStack_90 = uStack_90 & 0xffffffff;
  dStack_98 = -4.0;
  iVar5 = FUN_1416d9df0(puStack_1b0,&dStack_98,uRam00000001420f6b08,1);
  if ((iVar5 != -2) && (iVar5 < 0)) {
    (**(code **)(*param_1 + 0x10))(param_1,0x18942/*var:follow*/);
    cVar1 = FUN_1416f8280(param_1,uStack_c0,0x40);
    if (cVar1 != '\0') {
      uStack_f8 = 0x5e;
      dStack_98 = 0.0;
      uStack_90 = 0;
      FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&dStack_98);
    }
  }
  if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_468);
  }
  if ((0x46U >> (uStack_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_478);
  }
  if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_488);
  }
  if ((0x46U >> (uStack_48c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_498);
  }
  if ((0x46U >> (uStack_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4a8);
  }
  if ((0x46U >> (uStack_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b8);
  }
  if ((0x46U >> (uStack_4bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4c8);
  }
  if ((0x46U >> (uStack_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4d8);
  }
  if ((0x46U >> (uStack_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4e8);
  }
  if ((0x46U >> (uStack_4ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4f8);
  }
  if ((0x46U >> (uStack_4fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_508);
  }
  if ((0x46U >> (uStack_50c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_518);
  }
  if ((0x46U >> (uStack_51c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_528);
  }
  if ((0x46U >> (uStack_52c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_538);
  }
  if ((0x46U >> (uStack_308._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_310);
  }
  if ((0x46U >> (uStack_318._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_320);
  }
  if ((0x46U >> (uStack_1b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c0);
  }
  if ((0x46U >> (uStack_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2d8);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2a8);
  }
  if ((0x46U >> (uStack_374 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_380);
  }
  if ((0x46U >> (uStack_354 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_360);
  }
  if ((0x46U >> (uStack_364 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_370);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2e8);
  }
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2f8);
  }
  if ((0x46U >> (uStack_324 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_330);
  }
  if ((0x46U >> (uStack_334 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_340);
  }
  if ((0x46U >> (uStack_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b0);
  }
  if ((0x46U >> (uStack_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3c0);
  }
  if ((0x46U >> (uStack_3c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3d0);
  }
  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3e0);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
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
  if ((0x46U >> (uStack_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3f0);
  }
  if ((0x46U >> (uStack_3f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_400);
  }
  if ((0x46U >> (uStack_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_410);
  }
  if ((0x46U >> (uStack_344 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_350);
  }
  if ((0x46U >> (uStack_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_420);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1a8);
  }
  if ((0x46U >> (uStack_384 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_390);
  }
  if ((0x46U >> (uStack_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_430);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2b8);
  }
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_258);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_108;
  return;
}
