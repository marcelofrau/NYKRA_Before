// Function: gml_Object_oDoor_chunky2_Draw_0 @ 0x140c46f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDoor_chunky2_Draw_0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong in_stack_fffffffffffffcb8;
  ulonglong uVar14;
  undefined8 uVar15;
  double **ppdVar16;
  double **ppdVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffcc0;
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
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  double *pdStack_1f8;
  undefined8 *puStack_1f0;
  double *pdStack_1e8;
  double *pdStack_1e0;
  undefined8 *puStack_1d8;
  double *pdStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  double dStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  double dStack_188;
  uint uStack_17c;
  double dStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  double dStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  double dStack_108;
  uint uStack_fc;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d8;
  double dStack_d0;
  uint uStack_c4;
  double dStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_e0 = &UNK_14198c748;
  uStack_e8 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_e8;
  uStack_19c = 0xffffff;
  dStack_1a8 = 0.0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  dStack_188 = 0.0;
  uStack_16c = 0xffffff;
  dStack_178 = 0.0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  dStack_158 = 0.0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_12c = 0xffffff;
  uStack_138 = 0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_c4 = 0xffffff;
  dStack_d0 = 0.0;
  uStack_b4 = 0xffffff;
  dStack_c0 = 0.0;
  uStack_fc = 0xffffff;
  dStack_108 = 0.0;
  uStack_90 = CONCAT44(0xffffff,(undefined4)uStack_90);
  uStack_98 = 0;
  uStack_a8 = CONCAT44(0xffffff,(undefined4)uStack_a8);
  uStack_b0 = 0;
  uStack_220 = CONCAT44(0xffffff,(undefined4)uStack_220);
  uStack_228 = 0;
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
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_d8 = 1;
  plRam0000000142182d90 = param_1;
  uStack_a0 = param_2;
  FUN_1416f1550(_UNK_141981f80);
  iVar3 = func_0x0001416f82f0(param_1,uStack_a0,0xf5);
  if (0 < iVar3) {
    uStack_d8 = 6;
    dStack_88 = 0.0;
    uStack_80 = 0.0;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    in_stack_fffffffffffffcb8 = in_stack_fffffffffffffcb8 & 0xffffffffffffff00;
    FUN_1416d0010(0xf5,0x18bd2/*var:power_on*/,0x80000000,&dStack_88,in_stack_fffffffffffffcb8,
                  in_stack_fffffffffffffcc0 & 0xffffffffffffff00);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,&dStack_88);
    func_0x0001416a8c00(1);
  }
  uVar4 = (undefined4)(in_stack_fffffffffffffcb8 >> 0x20);
  uStack_d8 = 9;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
  cVar2 = FUN_1416927d0(uVar5);
  if (cVar2 == '\0') {
    uStack_d8 = 0xd;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    uStack_98 = 0;
    uStack_90 = 0x500000000;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    uStack_80 = pdVar6[1];
    if ((0x46U >> (*(uint *)((longlong)pdVar6 + 0xc) & 0x1f) & 1) == 0) {
      dStack_88 = *pdVar6;
    }
    else {
      FUN_140c4a1b0(&dStack_88,pdVar6);
    }
    FUN_140003e00(&dStack_88,uVar5);
    if (((ulonglong)uStack_80 & 0xffffff00000000) == 0) {
      uVar10 = SUB84(dStack_88,0);
    }
    else {
      uVar10 = FUN_1416940c0(&dStack_88);
    }
    dVar11 = (double)func_0x0001416cd450(uVar10);
    if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_1a8);
    }
    dStack_1a8 = dVar11 / _UNK_141985620;
    uStack_19c = 0;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_88);
    }
    pdStack_1f8 = &dStack_1a8;
    FUN_140002730(&uStack_198,0x1420be978);
    puStack_1f0 = &uStack_198;
    FUN_1400019a0(&dStack_188,uVar5);
    pdStack_1e8 = &dStack_188;
    FUN_1400019a0(&dStack_178,pdVar6);
    pdStack_1e0 = &dStack_178;
    ppdVar17 = &pdStack_1f8;
    uVar7 = FUN_1416ab210(param_1,uStack_a0,&uStack_b0,2,CONCAT44(uVar4,uRam00000001420da0c0),
                          ppdVar17);
    FUN_1400019a0(&uStack_168,uVar7);
    ppdVar16 = &pdStack_1e8;
    puStack_1d8 = &uStack_168;
    uVar7 = FUN_14003b450(param_1,uStack_a0,&uStack_98,3,ppdVar16);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar7);
    func_0x0001416a8c00(1);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
    uStack_80 = (double)((ulonglong)uStack_80 & 0xffffffff);
    dStack_88 = -4.0;
    iVar3 = FUN_1416d9df0(uVar5,&dStack_88,uRam00000001420f6b08,0);
    if (iVar3 != 0) goto code_r0x000140c47f05;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    iVar3 = FUN_1416d9df0(uVar5,pdVar6,uRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x000140c47f05;
    uStack_d8 = 0xe;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    uStack_98 = 0;
    uStack_90 = 0x500000000;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
    FUN_140002730(&dStack_1a8,0x1420be918);
    pdStack_1f8 = &dStack_1a8;
    FUN_140002730(&uStack_198,0x1420be928);
    uVar18 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
    uVar14 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
    puStack_1f0 = &uStack_198;
    FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_218,uVar14,uVar18);
    ppdVar17 = (double **)(uVar18 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_208,uVar14 & 0xffffffffffffff00,
                  ppdVar17);
    uVar7 = FUN_1416cd660(&uStack_b0,2,&pdStack_1f8);
    FUN_1400019a0(&dStack_188,uVar7);
    pdStack_1e8 = &dStack_188;
    FUN_140002730(&dStack_178,0x1420be938);
    pdStack_1e0 = &dStack_178;
    FUN_140002730(&uStack_168,0x1420be948);
    puStack_1d8 = &uStack_168;
    dVar11 = (double)FUN_1416cdc60((int)_UNK_141981e30,_UNK_1419864f8);
    pdStack_1d0 = &dStack_158;
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(pdStack_1d0);
    }
    dStack_158 = dVar11 * _UNK_141981d18;
    uStack_14c = 0;
    FUN_140002730(&uStack_148,0x1420be958);
    puStack_1c8 = &uStack_148;
    FUN_140002730(&uStack_138,0x1420be968);
    puStack_1c0 = &uStack_138;
    FUN_1400019a0(&uStack_128,&uStack_218);
    puStack_1b8 = &uStack_128;
    FUN_1400019a0(&uStack_118,&uStack_208);
    ppdVar16 = &pdStack_1e8;
    puStack_1b0 = &uStack_118;
    uVar7 = FUN_1400d4470(param_1,uStack_a0,&uStack_98,8,ppdVar16);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar7);
  }
  else {
    uStack_d8 = 10;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    uStack_98 = 0;
    uStack_90 = 0x500000000;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_228);
    }
    uStack_228 = 0;
    uStack_220 = 0x500000000;
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    uStack_80 = pdVar6[1];
    if ((0x46U >> (*(uint *)((longlong)pdVar6 + 0xc) & 0x1f) & 1) == 0) {
      dStack_88 = *pdVar6;
    }
    else {
      FUN_140c4a1b0(&dStack_88,pdVar6);
    }
    FUN_140003e00(&dStack_88,uVar5);
    if (((ulonglong)uStack_80 & 0xffffff00000000) == 0) {
      uVar10 = SUB84(dStack_88,0);
    }
    else {
      uVar10 = FUN_1416940c0(&dStack_88);
    }
    dVar11 = (double)func_0x0001416cd450(uVar10);
    if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_1a8);
    }
    dStack_1a8 = dVar11 / _UNK_141984368;
    uStack_19c = 0;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_88);
    }
    pdStack_1f8 = &dStack_1a8;
    FUN_140002730(&uStack_198,0x1420be8e8);
    puStack_1f0 = &uStack_198;
    FUN_140002730(&dStack_188,0x1420be8f8);
    pdStack_1e8 = &dStack_188;
    uVar15 = CONCAT44(uVar4,uRam00000001420da0c0);
    uVar7 = FUN_1416ab210(param_1,uStack_a0,&uStack_228,3,uVar15,&pdStack_1f8);
    uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_140004520(&dStack_88,uVar7,_UNK_141984420);
    FUN_1400019a0(&dStack_178,&dStack_88);
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_88);
    }
    pdStack_1e0 = &dStack_178;
    FUN_140002730(&uStack_168,0x1420be908);
    puStack_1d8 = &uStack_168;
    FUN_1400019a0(&dStack_158,uVar5);
    pdStack_1d0 = &dStack_158;
    FUN_1400019a0(&uStack_148,pdVar6);
    ppdVar17 = &pdStack_1e0;
    puStack_1c8 = &uStack_148;
    uVar7 = FUN_1416ab210(param_1,uStack_a0,&uStack_b0,2,CONCAT44(uVar4,uRam00000001420da0c0),
                          ppdVar17);
    FUN_140004520(&dStack_88,uVar7,_UNK_141983970);
    FUN_1400019a0(&uStack_138,&dStack_88);
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_88);
    }
    ppdVar16 = &pdStack_1d0;
    puStack_1c0 = &uStack_138;
    uVar7 = FUN_14003b450(param_1,uStack_a0,&uStack_98,3,ppdVar16);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar7);
    func_0x0001416a8c00(1);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18caa/*var:snd*/);
    uStack_80 = (double)((ulonglong)uStack_80 & 0xffffffff);
    dStack_88 = -4.0;
    iVar3 = FUN_1416d9df0(uVar5,&dStack_88,uRam00000001420f6b08,0);
    if (iVar3 != 0) goto code_r0x000140c47f05;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    iVar3 = FUN_1416d9df0(uVar5,pdVar6,uRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x000140c47f05;
    uStack_d8 = 0xb;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    uStack_98 = 0;
    uStack_90 = 0x500000000;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
    FUN_140002730(&dStack_1a8,0x1420be918);
    pdStack_1f8 = &dStack_1a8;
    FUN_140002730(&uStack_198,0x1420be928);
    puStack_1f0 = &uStack_198;
    uVar18 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
    uVar14 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_218,uVar14,uVar18);
    ppdVar17 = (double **)(uVar18 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_208,uVar14 & 0xffffffffffffff00,
                  ppdVar17);
    uVar7 = FUN_1416cd660(&uStack_b0,2,&pdStack_1f8);
    FUN_1400019a0(&dStack_188,uVar7);
    pdStack_1e8 = &dStack_188;
    FUN_140002730(&dStack_178,0x1420be938);
    pdStack_1e0 = &dStack_178;
    FUN_140002730(&uStack_168,0x1420be948);
    puStack_1d8 = &uStack_168;
    dVar11 = (double)FUN_1416cdc60((int)_UNK_141981e30,_UNK_1419864f8);
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_158);
    }
    dStack_158 = dVar11 * _UNK_141981d18;
    uStack_14c = 0;
    pdStack_1d0 = &dStack_158;
    FUN_140002730(&uStack_148,0x1420be958);
    puStack_1c8 = &uStack_148;
    FUN_140002730(&uStack_138,0x1420be968);
    puStack_1c0 = &uStack_138;
    FUN_1400019a0(&uStack_128,&uStack_218);
    puStack_1b8 = &uStack_128;
    FUN_1400019a0(&uStack_118,&uStack_208);
    ppdVar16 = &pdStack_1e8;
    puStack_1b0 = &uStack_118;
    uVar7 = FUN_1400d4470(param_1,uStack_a0,&uStack_98,8,ppdVar16);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar7);
  }
  func_0x0001416a8c00(1);
code_r0x000140c47f05:
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
  iVar3 = FUN_1416d9df0(uVar5,pdVar6,uRam00000001420f6b08,0);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
    uStack_80 = (double)((ulonglong)uStack_80 & 0xffffffff);
    dStack_88 = -4.0;
    iVar3 = FUN_1416d9df0(uVar7,&dStack_88,uRam00000001420f6b08,0);
    if (iVar3 != 0) {
      uStack_d8 = 0x10;
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_98);
      }
      uVar4 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
      uStack_98 = 0;
      uStack_90 = 0x500000000;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
      FUN_1400019a0(&dStack_1a8,puVar8);
      pdStack_1f8 = &dStack_1a8;
      FUN_140002730(&uStack_198,0x1420be958);
      puStack_1f0 = &uStack_198;
      FUN_140002730(&dStack_188,0x1421813b8);
      ppdVar17 = &pdStack_1f8;
      uVar7 = CONCAT44(uVar4,uRam00000001420da6b0);
      pdStack_1e8 = &dStack_188;
      FUN_1416ab210(param_1,uStack_a0,&uStack_98,3,uVar7,ppdVar17);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_98);
      }
      uStack_98 = 0;
      uStack_90 = 0x500000000;
      FUN_1400019a0(&dStack_1a8,puVar8);
      pdStack_1f8 = &dStack_1a8;
      FUN_140002730(&uStack_198,0x1421813b8);
      puStack_1f0 = &uStack_198;
      FUN_140002730(&dStack_188,0x1420be988);
      ppdVar16 = (double **)CONCAT44(uVar4,uRam00000001420da6b0);
      pdStack_1e8 = &dStack_188;
      FUN_1416ab210(param_1,uStack_a0,&uStack_98,3,ppdVar16,ppdVar17);
      if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0xc010000000000000/*-4*/;
    }
  }
  uStack_d8 = 0x12;
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  uStack_98 = 0;
  uStack_90 = 0x500000000;
  uVar14 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
  uVar18 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d59f8,0x80000000,&dStack_d0,uVar18,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5a08,0x80000000,&dStack_c0,uVar18 & 0xffffffffffffff00,
                uVar14);
  FUN_140017bd0(&dStack_88,&dStack_d0,9);
  FUN_1400019a0(&dStack_1a8,&dStack_88);
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  pdStack_1f8 = &dStack_1a8;
  FUN_140017bd0(&dStack_88,&dStack_c0,0x29);
  FUN_1400019a0(&uStack_198,&dStack_88);
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  uStack_80._4_4_ = uStack_c4;
  puStack_1f0 = &uStack_198;
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
    dStack_88 = dStack_d0;
  }
  else {
    FUN_140c4a1b0(&dStack_88,&dStack_d0);
  }
  FUN_140001c50(&dStack_88,9);
  FUN_1400019a0(&dStack_188,&dStack_88);
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  uStack_80._4_4_ = uStack_b4;
  pdStack_1e8 = &dStack_188;
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) == 0) {
    dStack_88 = dStack_c0;
  }
  else {
    FUN_140c4a1b0(&dStack_88,&dStack_c0);
  }
  FUN_140001c50(&dStack_88,0x82);
  FUN_1400019a0(&dStack_178,&dStack_88);
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  ppdVar17 = &pdStack_1f8;
  pdStack_1e0 = &dStack_178;
  FUN_1401028c0(param_1,uStack_a0,&uStack_98,4,ppdVar17);
  uStack_d8 = 0x13;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5ad8,0x80000000,&dStack_108,uVar18,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d59f8,0x80000000,&dStack_d0,uVar18,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5a08,0x80000000,&dStack_c0,uVar18,uVar14);
  uVar4 = (undefined4)(uVar18 >> 0x20);
  dVar11 = dStack_c0;
  if ((uStack_b4 & 0xffffff) != 0) {
    dVar11 = (double)FUN_1416940c0(&dStack_c0);
  }
  if ((uStack_c4 & 0xffffff) == 0) {
    dVar12 = dStack_d0;
  }
  else {
    dVar12 = (double)FUN_1416940c0(&dStack_d0);
  }
  if ((uStack_fc & 0xffffff) == 0) {
    dVar13 = dStack_108;
  }
  else {
    dVar13 = (double)FUN_1416940c0(&dStack_108);
  }
  FUN_1416b8480(param_1,(longlong)dVar13,0,(float)dVar12,CONCAT44(uVar4,(float)dVar11));
  uStack_d8 = 0x14;
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  uStack_98 = 0;
  uStack_90 = 0x500000000;
  uVar18 = 0;
  FUN_140103090(param_1,uStack_a0,&uStack_98,0,0);
  uStack_d8 = 0x15;
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  uStack_98 = 0;
  uStack_90 = 0x500000000;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,0x18742/*var:anim6*/);
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5ad8,0x80000000,&dStack_108,uVar18,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d59f8,0x80000000,&dStack_d0,uVar18,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5a08,0x80000000,&dStack_c0,uVar18,uVar14);
  uVar4 = (undefined4)(uVar18 >> 0x20);
  FUN_1400019a0(&dStack_1a8,uVar7);
  pdStack_1f8 = &dStack_1a8;
  FUN_1400019a0(&uStack_198,uVar5);
  puStack_1f0 = &uStack_198;
  uVar5 = FUN_1416cd900(&uStack_98,2,&pdStack_1f8);
  FUN_140009980(&lStack_f8,uVar5,_UNK_14198c688);
  uStack_80 = (double)CONCAT44(uStack_b4,uStack_b8);
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) == 0) {
    dStack_88 = dStack_c0;
  }
  else {
    FUN_140c4a1b0(&dStack_88,&dStack_c0);
  }
  FUN_140003ca0(&dStack_88,&lStack_f8);
  dVar11 = dStack_88;
  if (((ulonglong)uStack_80 & 0xffffff00000000) != 0) {
    dVar11 = (double)FUN_1416940c0(&dStack_88);
  }
  if ((uStack_c4 & 0xffffff) == 0) {
    dVar12 = dStack_d0;
  }
  else {
    dVar12 = (double)FUN_1416940c0(&dStack_d0);
  }
  if ((uStack_fc & 0xffffff) == 0) {
    dVar13 = dStack_108;
  }
  else {
    dVar13 = (double)FUN_1416940c0(&dStack_108);
  }
  FUN_1416b8480(param_1,(longlong)dVar13,0,(float)dVar12,CONCAT44(uVar4,(float)dVar11));
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  if ((0x46U >> (uStack_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&lStack_f8);
  }
  uStack_d8 = 0x16;
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  uStack_98 = 0;
  uStack_90 = 0x500000000;
  uVar18 = 0;
  FUN_1401036b0(param_1,uStack_a0,&uStack_98,0,0);
  uStack_d8 = 0x1a;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d59f8,0x80000000,&dStack_d0,uVar18,uVar14);
  FUN_1400019a0(&uStack_218,&dStack_d0);
  FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&uStack_218);
  uStack_d8 = 0x1b;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,uRam00000001420d5a08,0x80000000,&dStack_c0,uVar18,uVar14);
  FUN_1400019a0(&uStack_208,&dStack_c0);
  FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&uStack_208);
  lStack_f8 = 0;
  uStack_f0 = 0;
  plVar9 = &lStack_f8;
  FUN_1416d0010(0x4f,0x18963/*var:GAME_CHAPTER*/,0x80000000,plVar9,uVar18 & 0xffffffffffffff00,
                uVar14 & 0xffffffffffffff00);
  if (((uStack_f0._4_4_ & 0xffffff) == 2) && (lStack_f8 != 0)) {
    func_0x0001416ba910();
    iVar3 = func_0x0001416ba8f0(lStack_f8);
    if (iVar3 < 2) {
      uVar4 = func_0x0001416ba8f0(lStack_f8);
      FUN_1416ab080(&UNK_141981ee8,1,uVar4);
      plVar9 = (longlong *)0x0;
      uVar1 = uRam000000000000000c;
    }
    else {
      plVar9 = (longlong *)func_0x0001416ba8e0(lStack_f8,1);
      uVar1 = *(uint *)((longlong)plVar9 + 0xc);
    }
  }
  else {
    FUN_1416ab080(&UNK_141981f1a);
    uVar1 = uStack_f0._4_4_;
  }
  if (((uVar1 & 0xffffff) == 2) && (*plVar9 != 0)) {
    func_0x0001416ba910();
    iVar3 = func_0x0001416ba8f0(*plVar9);
    if (iVar3 < 4) {
      uVar4 = func_0x0001416ba8f0(*plVar9);
      FUN_1416ab080(&UNK_141981ee8,3,uVar4);
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)func_0x0001416ba8e0(*plVar9,3);
    }
  }
  else {
    FUN_1416ab080(&UNK_141981f1a);
  }
  FUN_1400019a0(&lStack_f8,plVar9);
  uStack_80 = (double)((ulonglong)uStack_80 & 0xffffffff);
  dStack_88 = 6.0;
  iVar3 = FUN_1416d9df0(&lStack_f8,&dStack_88,uRam00000001420f6b08,0);
  if (iVar3 != 0) {
    uStack_d8 = 0x1e;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    uStack_98 = 0;
    uStack_90 = 0x500000000;
    (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18742/*var:anim6*/);
    FUN_1400019a0(&dStack_1a8,uVar5);
    pdStack_1f8 = &dStack_1a8;
    FUN_140002730(&uStack_198,0x1420be948);
    puStack_1f0 = &uStack_198;
    FUN_140002730(&dStack_188,0x1420be998);
    pdStack_1e8 = &dStack_188;
    uVar7 = FUN_1400b9c80(param_1,uStack_a0,&uStack_98,3,&pdStack_1f8);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar7);
    func_0x0001416a8c00(1);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18742/*var:anim6*/);
    uStack_80 = (double)((ulonglong)uStack_80 & 0xffffffff);
    dStack_88 = 0.99;
    iVar3 = FUN_1416d9df0(uVar5,&dStack_88,uRam00000001420f6b08,1);
    if (-1 < iVar3) {
      uStack_d8 = 0x1f;
      FUN_1416f8210(param_1,uStack_a0,0,0);
    }
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
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
  if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_108);
  }
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_c0);
  }
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_d0);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1a8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_e8;
  return;
}


