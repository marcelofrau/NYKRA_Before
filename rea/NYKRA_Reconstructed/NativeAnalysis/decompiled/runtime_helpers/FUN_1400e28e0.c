// Function: FUN_1400e28e0 @ 0x1400e28e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1400e28e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double *pdVar9;
  undefined8 in_RDX;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffd68;
  undefined4 uVar20;
  ulonglong uVar18;
  undefined8 **ppuVar19;
  ulonglong in_stack_fffffffffffffd70;
  undefined1 auStack_288 [16];
  longlong lStack_278;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 *puStack_158;
  double dStack_150;
  uint uStack_144;
  double dStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 *puStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  int iStack_a4;
  double dStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_f8 = &UNK_141983978;
  uStack_f0 = 0;
  uStack_100 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_100;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_144 = 0xffffff;
  dStack_150 = 0.0;
  uStack_134 = 0xffffff;
  dStack_140 = 0.0;
  uStack_cc = 0xffffff;
  dStack_d8 = 0.0;
  uStack_124 = 0xffffff;
  uStack_130 = 0;
  plRam0000000142182d90 = param_1;
  puStack_120 = param_3;
  uStack_c8 = in_RDX;
  plStack_b0 = param_1;
  iStack_a4 = param_4;
  puStack_158 = (undefined8 *)
                (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1896f);
  uVar4 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187d0);
  uVar5 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cd);
  uVar6 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cc);
  uStack_b8 = (ulonglong)(uint)uStack_b8;
  uStack_c0 = 0;
  uStack_e0 = (ulonglong)(uint)uStack_e0;
  uStack_e8 = 0;
  *(undefined4 *)((longlong)puStack_120 + 0xc) = 5;
  *puStack_120 = 0;
  FUN_1416ab750(uRam00000001420dcfd0);
  uStack_94 = 0;
  dStack_a0 = 64.0;
  iVar3 = FUN_1416ab810(auStack_288,&plStack_b0,&uStack_c8,&dStack_a0);
  uStack_210 = uVar4;
  uStack_208 = uVar5;
  uStack_200 = uVar6;
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a0);
  }
  fVar12 = _UNK_141983924;
  if (0 < iVar3) {
    do {
      uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
      uStack_f0 = 4;
      in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
      in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_b0,uRam00000001420d58e8,0x80000000,&dStack_150,in_stack_fffffffffffffd68
                    ,in_stack_fffffffffffffd70);
      in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
      in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_b0,uRam00000001420d58f8,0x80000000,&dStack_140,in_stack_fffffffffffffd68
                    ,in_stack_fffffffffffffd70);
      pdVar9 = (double *)&DAT_1420b1000;
      if (2 < iStack_a4) {
        pdVar9 = (double *)param_5[2];
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar9;
      }
      else {
        dVar13 = (double)FUN_1416940c0();
      }
      pdVar9 = (double *)&DAT_1420b1000;
      if (1 < iStack_a4) {
        pdVar9 = (double *)param_5[1];
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar14 = *pdVar9;
        if ((uStack_134 & 0xffffff) == 0) goto code_r0x0001400e2ce0;
code_r0x0001400e2c81:
        dVar15 = (double)FUN_1416940c0(&dStack_140);
        if ((uStack_144 & 0xffffff) != 0) goto code_r0x0001400e2c98;
code_r0x0001400e2cf4:
        dVar16 = dStack_150;
      }
      else {
        dVar14 = (double)FUN_1416940c0();
        if ((uStack_134 & 0xffffff) != 0) goto code_r0x0001400e2c81;
code_r0x0001400e2ce0:
        dVar15 = dStack_140;
        if ((uStack_144 & 0xffffff) == 0) goto code_r0x0001400e2cf4;
code_r0x0001400e2c98:
        dVar16 = (double)FUN_1416940c0(&dStack_150);
      }
      param_2 = CONCAT44(uVar17,(float)dVar15);
      fVar11 = (float)FUN_1416cdb80((float)dVar16,param_2,(float)dVar14,(float)dVar13);
      if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_d8);
      }
      uStack_cc = 0;
      dStack_d8 = (double)(fVar11 + fVar12);
      uVar4 = (**(code **)(*plStack_b0 + 8))(plStack_b0,0x18864);
      uStack_94 = 0;
      dStack_a0 = 0.0;
      iVar3 = FUN_1416d9df0(uVar4,&dStack_a0,uRam00000001420f6b08,1);
      uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        uStack_f0 = 6;
        if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_c0);
        }
        uVar20 = (undefined4)(in_stack_fffffffffffffd68 >> 0x20);
        uStack_c0 = 0;
        uStack_b8 = 0x500000000;
        FUN_140002730(&uStack_1f8,0x1420b2f70);
        if (iStack_a4 < 1) {
          puVar10 = &DAT_1420b1000;
        }
        else {
          puVar10 = (undefined *)*param_5;
        }
        puStack_268 = &uStack_1f8;
        FUN_1400019a0(&uStack_1e8,puVar10);
        puStack_260 = &uStack_1e8;
        uVar4 = FUN_1416cd900(&uStack_c0,2,&puStack_268);
        FUN_1400019a0(&uStack_130,uVar4);
        uStack_f0 = 7;
        if ((0x46U >> (*(uint *)((longlong)puStack_158 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puStack_158);
        }
        *(undefined4 *)((longlong)puStack_158 + 0xc) = 0;
        *puStack_158 = 0;
        uStack_f0 = 8;
        puVar7 = (undefined8 *)(**(code **)(*plStack_b0 + 0x10))(plStack_b0,0x189cf);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        uStack_f0 = 9;
        puVar8 = (undefined8 *)(**(code **)(*plStack_b0 + 0x10))(plStack_b0,0x18e26);
        if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        uStack_f0 = 10;
        dVar13 = dStack_d8;
        if ((uStack_cc & 0xffffff) != 0) {
          dVar13 = (double)FUN_1416940c0(&dStack_d8);
        }
        FUN_140001a50(&dStack_a0,&uStack_130,2);
        dVar14 = dStack_a0;
        if ((uStack_94 & 0xffffff) != 0) {
          dVar14 = (double)FUN_1416940c0(&dStack_a0);
        }
        fVar12 = (float)FUN_1416cd800((float)dVar14,CONCAT44(uVar17,(float)dVar13));
        FUN_140003f30(puVar7,(double)fVar12 * _UNK_141981ea8);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        uStack_f0 = 0xb;
        dVar13 = dStack_d8;
        if ((uStack_cc & 0xffffff) != 0) {
          dVar13 = (double)FUN_1416940c0(&dStack_d8);
        }
        FUN_140001a50(&dStack_118,&uStack_130,2);
        if ((uStack_110 & 0xffffff00000000) != 0) {
          dStack_118 = (double)FUN_1416940c0(&dStack_118);
        }
        fVar12 = (float)FUN_1416cd880((float)dStack_118,(float)dVar13);
        dStack_a0 = (double)fVar12 * _UNK_141981ea8;
        uStack_94 = 0;
        FUN_140003e00(puVar8,&dStack_a0);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_118);
        }
        uStack_f0 = 0xc;
        if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_c0);
        }
        uStack_c0 = 0;
        uStack_b8 = 0x500000000;
        if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_e8);
        }
        uStack_e8 = 0;
        uStack_e0 = 0x500000000;
        uVar4 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,0x18864);
        FUN_140001a50(&dStack_a0,&uStack_130,0x11);
        FUN_1400019a0(&uStack_1f8,&dStack_a0);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        puStack_268 = &uStack_1f8;
        FUN_140002730(&uStack_1e8,0x1420b2f80);
        uVar6 = CONCAT44(uVar20,uRam00000001420da0c0);
        puStack_260 = &uStack_1e8;
        uVar5 = FUN_1416ab210(plStack_b0,uStack_c8,&uStack_e8,2,uVar6,&puStack_268);
        uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
        FUN_1400019a0(&uStack_1d8,uVar5);
        uVar18 = CONCAT44(uVar17,uRam00000001420da140);
        ppuVar19 = &puStack_258;
        puStack_258 = &uStack_1d8;
        pdVar9 = (double *)FUN_1416ab210(plStack_b0,uStack_c8,&uStack_c0,1,uVar18,&puStack_258);
        uStack_94 = *(uint *)((longlong)pdVar9 + 0xc);
        uStack_98 = *(undefined4 *)(pdVar9 + 1);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          dStack_a0 = *pdVar9;
        }
        else {
          FUN_1400e4820(&dStack_a0,pdVar9);
        }
        FUN_140001c50(&dStack_a0,1);
        FUN_1416a8cb0(plStack_b0);
        FUN_1400019a0(uVar4,&dStack_a0);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        func_0x0001416a8c00(1);
        uStack_f0 = 0xd;
        dStack_118 = 0.0;
        uStack_110 = 0;
        FUN_1416d0010(0x40,0x189cb,0x80000000,&dStack_118,uVar18 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        if (iStack_a4 < 1) {
          puVar10 = &DAT_1420b1000;
        }
        else {
          puVar10 = (undefined *)*param_5;
        }
        uVar4 = FUN_1416cfcc0(0x40);
        FUN_1416a8cb0(uVar4);
        FUN_140003e00(&dStack_118,puVar10);
        func_0x0001416a8c00(1);
        FUN_1416d0790(0x40,0x189cb,0x80000000,&dStack_118);
        uStack_f0 = 0xe;
        FUN_1416a8cb0(plRam000000014218ecf8);
        FUN_1400019a0(uStack_210,&uStack_130);
        func_0x0001416a8c00(1);
        uStack_f0 = 0xf;
        FUN_140001a50(&dStack_a0,&uStack_130,2);
        FUN_1416a8cb0(plRam000000014218ecf8);
        FUN_1400019a0(uStack_208,&dStack_a0);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        func_0x0001416a8c00(1);
        uStack_f0 = 0x10;
        FUN_140017bd0(&dStack_a0,&dStack_d8,0xb4);
        FUN_1416a8cb0(plRam000000014218ecf8);
        FUN_1400019a0(uStack_200,&dStack_a0);
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        func_0x0001416a8c00(1);
        uStack_f0 = 0x11;
        if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_c0);
        }
        uStack_c0 = 0;
        uStack_b8 = 0x500000000;
        FUN_140002730(&uStack_1f8,0x1420b2f90);
        ppuVar19 = &puStack_268;
        puStack_268 = &uStack_1f8;
        FUN_140087080(plStack_b0,uStack_c8,&uStack_c0,1,&puStack_268);
        uVar17 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
        if (iStack_a4 < 4) {
          puVar10 = &DAT_1420b1000;
        }
        else {
          puVar10 = (undefined *)param_5[3];
        }
        uStack_94 = 0;
        dStack_a0 = 0.0;
        iVar3 = FUN_1416d9df0(puVar10,&dStack_a0,uRam00000001420f6b08,0);
        if (iVar3 != 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0,0x189cf);
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0,0x18e26);
          if (iStack_a4 < 4) {
            puVar10 = &DAT_1420b1000;
          }
          else {
            puVar10 = (undefined *)param_5[3];
          }
          uStack_94 = 0;
          dStack_a0 = -1.0;
          iVar3 = FUN_1416d9df0(puVar10,&dStack_a0,uRam00000001420f6b08,0);
          if (iVar3 != 0) {
            uStack_f0 = 0x13;
            if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_c0);
            }
            uStack_c0 = 0;
            uStack_b8 = 0x500000000;
            if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_e8);
            }
            uStack_e8 = 0;
            uStack_e0 = 0x500000000;
            FUN_140002730(&uStack_1f8,0x1420b2f70);
            puStack_268 = &uStack_1f8;
            uVar4 = FUN_1416cdc60((int)_UNK_141983968,_UNK_141983970);
            if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_1e8);
            }
            uStack_1dc = 0;
            if (iStack_a4 < 4) {
              puVar10 = &DAT_1420b1000;
            }
            else {
              puVar10 = (undefined *)param_5[3];
            }
            puStack_260 = &uStack_1e8;
            uStack_1e8 = uVar4;
            FUN_1400019a0(&uStack_1d8,puVar10);
            puStack_258 = &uStack_1d8;
            FUN_140002730(&uStack_1c8,0x1420b2fa0);
            puStack_250 = &uStack_1c8;
            FUN_140002730(&uStack_1b8,0x14217f428);
            puStack_248 = &uStack_1b8;
            uVar4 = FUN_1416ab210(plStack_b0,uStack_c8,&uStack_e8,2,
                                  CONCAT44(uVar17,uRam00000001420da0c0),&puStack_268);
            FUN_1400019a0(&uStack_1a8,uVar4);
            puStack_240 = &uStack_1a8;
            FUN_140002730(&uStack_198,0x1420b2f70);
            puStack_238 = &uStack_198;
            FUN_140002730(&uStack_188,0x14217f428);
            if (iStack_a4 < 2) {
              puVar10 = &DAT_1420b1000;
            }
            else {
              puVar10 = (undefined *)param_5[1];
            }
            puStack_230 = &uStack_188;
            FUN_1400019a0(&uStack_178,puVar10);
            if (iStack_a4 < 3) {
              puVar10 = &DAT_1420b1000;
            }
            else {
              puVar10 = (undefined *)param_5[2];
            }
            puStack_228 = &uStack_178;
            FUN_1400019a0(&uStack_168,puVar10);
            puStack_220 = &uStack_168;
            FUN_1400d4470(plStack_b0,uStack_c8,&uStack_c0,8,&puStack_258);
          }
        }
        uStack_f0 = 0x15;
        if ((0x46U >> (*(uint *)((longlong)puStack_120 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puStack_120);
        }
        *(undefined4 *)((longlong)puStack_120 + 0xc) = 0;
        *puStack_120 = 0x3ff0000000000000;
        uVar18 = uStack_e0;
        goto joined_r0x0001400e37dd;
      }
      cVar2 = func_0x0001416abe60(auStack_288,&plStack_b0,&uStack_c8);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(auStack_288,&plStack_b0,&uStack_c8);
  uVar18 = uStack_e0;
joined_r0x0001400e37dd:
  if (lStack_278 == 0) {
    uStack_e0._4_4_ = (uint)(uVar18 >> 0x20);
    uVar1 = uStack_e0._4_4_;
  }
  else {
    uStack_e0 = uVar18;
    func_0x000141695b90();
    uVar18 = uStack_e0;
    uVar1 = uStack_e0._4_4_;
  }
  uStack_e0 = uVar18;
  lStack_278 = 0;
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    lStack_278 = 0;
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  if ((0x46U >> (uStack_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_d8);
  }
  if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_140);
  }
  if ((0x46U >> (uStack_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_150);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
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
  puRam0000000142182d78 = (undefined8 *)uStack_100;
  return puStack_120;
}


