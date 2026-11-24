// Function: gml_Object_parSun_Glow_Draw_0 @ 0x140ee4590

/* WARNING: Removing unreachable block (ram,0x000140ee4de3) */

void gml_Object_parSun_Glow_Draw_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 in_stack_fffffffffffffc08;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined8 uStack_3e8;
  uint uStack_3dc;
  undefined8 uStack_3d8;
  uint uStack_3cc;
  undefined8 uStack_3c8;
  uint uStack_3bc;
  undefined8 uStack_3b8;
  uint uStack_3ac;
  undefined8 uStack_3a8;
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
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
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
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  double dStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
  uStack_90 = 0xfffffffffffffffe;
  puStack_118 = &UNK_14198fb60;
  uStack_110 = 0;
  uStack_120 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_120;
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
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  plRam0000000142182d90 = param_1;
  uStack_d8 = param_2;
  plStack_d0 = param_1;
  uStack_198 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885d/*var:CW*/);
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  puVar6 = (undefined8 *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885e/*var:CX*/);
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  puStack_100 = (undefined8 *)
                (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885f/*var:CY*/);
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_ec = 0xffffff;
  dStack_f8 = 0.0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_2cc = 0xffffff;
  uStack_2d8 = 0;
  puStack_108 = puVar6;
  uStack_190 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187f1/*var:CH*/);
  uStack_c0 = CONCAT44(0xffffff,(undefined4)uStack_c0);
  uStack_c8 = 0;
  uStack_e0 = CONCAT44(0xffffff,(undefined4)uStack_e0);
  uStack_e8 = 0;
  uStack_2b0 = CONCAT44(0xffffff,(undefined4)uStack_2b0);
  uStack_2b8 = 0;
  uStack_2a0 = CONCAT44(0xffffff,(undefined4)uStack_2a0);
  uStack_2a8 = 0;
  uStack_3dc = 0xffffff;
  uStack_3e8 = 0;
  uStack_3cc = 0xffffff;
  uStack_3d8 = 0;
  uStack_3bc = 0xffffff;
  uStack_3c8 = 0;
  uStack_3ac = 0xffffff;
  uStack_3b8 = 0;
  uStack_39c = 0xffffff;
  uStack_3a8 = 0;
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
  uStack_110 = 1;
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c8);
  }
  uStack_2bc = 0;
  uStack_2c8 = 0xc05bc00000000000/*-111*/;
  FUN_1416cfae0(plStack_d0,uRam00000001420d5a18,0x80000000,&uStack_2c8);
  uStack_110 = 3;
  puVar6 = (undefined8 *)(**(code **)(*plStack_d0 + 0x10))(plStack_d0,0x18a5a/*var:l*/);
  if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  uStack_110 = 4;
  FUN_140004520(&uStack_b8,uStack_198,0x401c000000000000/*7 (obj:oKS_Praedim_Enter_Iiem)*/);
  uStack_94 = uStack_b0._4_4_;
  uStack_98 = (uint)uStack_b0;
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
    uStack_a0 = uStack_b8;
  }
  else {
    FUN_140eeb6c0(&uStack_a0,&uStack_b8);
  }
  FUN_140001c50(&uStack_a0,8);
  FUN_1400019a0(&uStack_1d8,&uStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_110 = 5;
  if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  uStack_c8 = 0;
  uStack_c0 = 0x500000000;
  uStack_b0 = puStack_108[1];
  if ((0x46U >> (*(uint *)((longlong)puStack_108 + 0xc) & 0x1f) & 1) == 0) {
    uStack_b8 = *puStack_108;
  }
  else {
    FUN_140eeb6c0(&uStack_b8);
  }
  FUN_140003ca0(&uStack_b8,&uStack_1d8);
  FUN_140004520(&uStack_a0,&uStack_b8,0x4030000000000000/*16 (obj:oDlg_BM_Julaak)*/);
  FUN_1400019a0(&uStack_298,&uStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  puStack_188 = &uStack_298;
  uVar8 = CONCAT44(uVar2,uRam00000001420da4b0);
  uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,uVar8,&puStack_188);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&uStack_1b8,uVar7);
  if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  uStack_e8 = 0;
  uStack_e0 = 0x500000000;
  uStack_b0 = puStack_100[1];
  if ((0x46U >> (*(uint *)((longlong)puStack_100 + 0xc) & 0x1f) & 1) == 0) {
    uStack_b8 = *puStack_100;
  }
  else {
    FUN_140eeb6c0(&uStack_b8);
  }
  FUN_140001c50(&uStack_b8,8);
  FUN_140004520(&uStack_a0,&uStack_b8,0x4030000000000000/*16 (obj:oDlg_BM_Julaak)*/);
  FUN_1400019a0(&uStack_288,&uStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  ppuVar13 = &puStack_180;
  puStack_180 = &uStack_288;
  uVar12 = CONCAT44(uVar2,uRam00000001420da4b0);
  uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,1,uVar12,ppuVar13);
  FUN_140017bd0(&uStack_a0,uVar7,1);
  FUN_1400019a0(&uStack_1a8,&uStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_110 = 6;
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f8);
  }
  uStack_ec = 0;
  dStack_f8 = 0.0;
code_r0x000140ee4e60:
  do {
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    uStack_c8 = 0;
    uStack_c0 = 0x500000000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x186b9/*var:_layer*/,0x80000000,&uStack_b8,uVar12,(ulonglong)ppuVar13 & 0xffffffffffffff00
                 );
    uVar2 = (undefined4)(uVar12 >> 0x20);
    FUN_1400019a0(&uStack_298,&uStack_b8);
    puStack_188 = &uStack_298;
    ppuVar13 = &puStack_188;
    uVar12 = CONCAT44(uVar2,uRam00000001420da4d0);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,uVar12,ppuVar13);
    iVar1 = FUN_1416d9df0(&dStack_f8,uVar7,uRam00000001420f6b08,1);
    if ((iVar1 == -2) || (-1 < iVar1)) {
      uStack_110 = 0x16;
      uStack_94 = 0;
      uStack_a0 = 0x4038000000000000/*24 (obj:oDlg_Mex_VenAenox)*/;
      FUN_140004620(puVar6,&uStack_a0);
      uVar2 = (undefined4)(uVar12 >> 0x20);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_110 = 0x18;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      uVar7 = (**(code **)(*plStack_d0 + 0x10))(plStack_d0,0x18a5b/*var:l_an*/);
      FUN_1400019a0(&uStack_298,puVar6);
      puStack_188 = &uStack_298;
      FUN_140002730(&uStack_288,0x1420c2078);
      puStack_180 = &uStack_288;
      FUN_1400019a0(&uStack_278,uVar7);
      puStack_178 = &uStack_278;
      uVar8 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,2,CONCAT44(uVar2,uRam00000001420da500),
                            &puStack_188);
      FUN_1400019a0(&uStack_268,uVar8);
      puStack_170 = &uStack_268;
      FUN_140002730(&uStack_258,0x1420c2088);
      puStack_168 = &uStack_258;
      uVar8 = FUN_1400b9c80(plStack_d0,uStack_d8,&uStack_c8,3,&puStack_178);
      FUN_1416a8cb0(plStack_d0);
      FUN_1400019a0(uVar7,uVar8);
      func_0x0001416a8c00(1);
      uStack_110 = 0x19;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      uVar8 = (**(code **)(*plStack_d0 + 0x10))(plStack_d0,0x18a5c/*var:l_ann*/);
      FUN_1400019a0(&uStack_298,uVar8);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      FUN_140002730(&uStack_278,0x1420c2088);
      ppuVar13 = &puStack_188;
      puStack_178 = &uStack_278;
      uVar7 = FUN_1400b9c80(plStack_d0,uStack_d8,&uStack_c8,3,ppuVar13);
      uVar2 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      FUN_1416a8cb0(plStack_d0);
      FUN_1400019a0(uVar8,uVar7);
      func_0x0001416a8c00(1);
      uStack_110 = 0x1b;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      FUN_140002730(&uStack_298,0x1420c2098);
      uVar7 = CONCAT44(uVar2,uRam00000001420da090);
      puStack_188 = &uStack_298;
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,uVar7,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_110 = 0x1c;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      uVar7 = (**(code **)(*plStack_d0 + 8))(plStack_d0,0x18818/*var:col*/);
      FUN_140002730(&uStack_298,0x142181cd0);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      FUN_140004520(&uStack_a0,uVar8,0x4010000000000000/*4 (obj:oKS_Iiedakama)*/);
      FUN_1400019a0(&uStack_278,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_178 = &uStack_278;
      FUN_140004520(&uStack_1c8,uStack_198,0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/);
      uStack_b0._4_4_ = *(uint *)((longlong)puStack_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puStack_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puStack_108;
      }
      else {
        FUN_140eeb6c0(&uStack_b8);
      }
      FUN_140003e00(&uStack_b8,&uStack_1c8);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      FUN_1400019a0(&uStack_268,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1c8);
      }
      puStack_170 = &uStack_268;
      FUN_140004520(&uStack_b8,uStack_190,0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/);
      uStack_94 = *(uint *)((longlong)puStack_100 + 0xc);
      uStack_98 = *(uint *)(puStack_100 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puStack_100;
      }
      else {
        FUN_140eeb6c0(&uStack_a0);
      }
      FUN_140003e00(&uStack_a0,&uStack_b8);
      FUN_1400019a0(&uStack_258,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      puStack_168 = &uStack_258;
      FUN_140004520(&uStack_1c8,uStack_198,0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/);
      uStack_b0._4_4_ = *(uint *)((longlong)puStack_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puStack_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puStack_108;
      }
      else {
        FUN_140eeb6c0(&uStack_b8);
      }
      FUN_140003ca0(&uStack_b8,&uStack_1c8);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      FUN_1400019a0(&uStack_248,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1c8);
      }
      puStack_160 = &uStack_248;
      FUN_140004520(&uStack_b8,uStack_190,0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/);
      uStack_94 = *(uint *)((longlong)puStack_100 + 0xc);
      uStack_98 = *(uint *)(puStack_100 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puStack_100;
      }
      else {
        FUN_140eeb6c0(&uStack_a0);
      }
      FUN_140003ca0(&uStack_a0,&uStack_b8);
      FUN_1400019a0(&uStack_238,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      puStack_158 = &uStack_238;
      uVar14 = CONCAT44(uVar2,uRam00000001420da0e0);
      uVar9 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,uVar14,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&uStack_228,uVar9);
      puStack_150 = &uStack_228;
      FUN_140002730(&uStack_218,0x142181cd0);
      puStack_148 = &uStack_218;
      FUN_140002730(&uStack_208,0x142181cd0);
      puStack_140 = &uStack_208;
      uVar9 = CONCAT44(uVar2,uRam00000001420db2e0);
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,7,uVar9,&puStack_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_110 = 0x1d;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      FUN_140002730(&uStack_298,0x142181cd0);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      FUN_1400019a0(&uStack_278,uVar8);
      uStack_b0._4_4_ = *(uint *)((longlong)puStack_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puStack_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puStack_108;
        puStack_178 = &uStack_278;
      }
      else {
        puStack_178 = &uStack_278;
        FUN_140eeb6c0(&uStack_b8);
      }
      FUN_140003e00(&uStack_b8,uStack_198);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      puVar6 = puStack_100;
      FUN_1400019a0(&uStack_268,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_170 = &uStack_268;
      }
      else {
        puStack_170 = &uStack_268;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140003e00(&uStack_a0,uStack_190);
      FUN_1400019a0(&uStack_258,&uStack_a0);
      puVar6 = puStack_108;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_168 = &uStack_258;
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puVar6;
      }
      else {
        FUN_140eeb6c0(&uStack_b8,puVar6);
      }
      FUN_140003ca0(&uStack_b8,uStack_198);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      puVar6 = puStack_100;
      FUN_1400019a0(&uStack_248,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_160 = &uStack_248;
      }
      else {
        puStack_160 = &uStack_248;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140003ca0(&uStack_a0,uStack_190);
      FUN_1400019a0(&uStack_238,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_158 = &uStack_238;
      uVar14 = CONCAT44(uVar2,uRam00000001420da0e0);
      uVar9 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,uVar14,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&uStack_228,uVar9);
      puStack_150 = &uStack_228;
      FUN_140002730(&uStack_218,0x142181cd0);
      puStack_148 = &uStack_218;
      FUN_140002730(&uStack_208,0x142181cd0);
      puStack_140 = &uStack_208;
      uVar9 = CONCAT44(uVar2,uRam00000001420db2e0);
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,7,uVar9,&puStack_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_110 = 0x1e;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      FUN_140002730(&uStack_298,0x1420c20a8);
      puStack_188 = &uStack_298;
      FUN_140002730(&uStack_288,0x1420c2098);
      puStack_180 = &uStack_288;
      uVar9 = CONCAT44(uVar2,uRam00000001420da7a0);
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,2,uVar9,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_110 = 0x20;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      FUN_140002730(&uStack_298,0x1420c20b8);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      uStack_b0 = (ulonglong)(uint)uStack_b0;
      uStack_b8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_140003e00(&uStack_b8,uVar8);
      FUN_140004520(&uStack_a0,&uStack_b8,0x4008000000000000/*3 (obj:oKS_Reality)*/);
      FUN_1400019a0(&uStack_278,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      puStack_178 = &uStack_278;
      uVar9 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,CONCAT44(uVar2,uRam00000001420da0e0),
                            &puStack_188);
      FUN_1400019a0(&uStack_268,uVar9);
      puStack_170 = &uStack_268;
      FUN_140002730(&uStack_258,0x1420c2098);
      puStack_168 = &uStack_258;
      ppuVar13 = &puStack_170;
      FUN_14003ee60(plStack_d0,uStack_d8,&uStack_c8,2,ppuVar13);
      uVar2 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      uStack_110 = 0x21;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      FUN_140002730(&uStack_298,0x1420c2098);
      uVar9 = CONCAT44(uVar2,uRam00000001420da090);
      puStack_188 = &uStack_298;
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,uVar9,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_110 = 0x22;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      FUN_140002730(&uStack_298,0x142181cd0);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      FUN_140004520(&uStack_a0,uVar8,0x4010000000000000/*4 (obj:oKS_Iiedakama)*/);
      FUN_1400019a0(&uStack_278,&uStack_a0);
      puVar6 = puStack_108;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_178 = &uStack_278;
      }
      else {
        puStack_178 = &uStack_278;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      FUN_1400019a0(&uStack_268,&uStack_a0);
      puVar6 = puStack_100;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_170 = &uStack_268;
      }
      else {
        puStack_170 = &uStack_268;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140001c50(&uStack_a0,1);
      FUN_1400019a0(&uStack_258,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_168 = &uStack_258;
      FUN_140017bd0(&uStack_a0,uStack_190,2);
      FUN_1400019a0(&uStack_248,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uVar14 = CONCAT44(uVar2,uRam00000001420da0e0);
      puStack_160 = &uStack_248;
      uVar9 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,uVar14,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&uStack_238,uVar9);
      puStack_158 = &uStack_238;
      FUN_140002730(&uStack_228,0x142181cd0);
      puStack_150 = &uStack_228;
      FUN_140002730(&uStack_218,0x142181cd0);
      puStack_148 = &uStack_218;
      uVar9 = CONCAT44(uVar2,uRam00000001420dac90);
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,6,uVar9,&puStack_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_110 = 0x23;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x500000000;
      FUN_140002730(&uStack_298,0x142181cd0);
      puStack_188 = &uStack_298;
      FUN_1400019a0(&uStack_288,uVar7);
      puStack_180 = &uStack_288;
      FUN_140004520(&uStack_a0,uVar8,0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/);
      FUN_1400019a0(&uStack_278,&uStack_a0);
      puVar6 = puStack_108;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puVar6;
        puStack_178 = &uStack_278;
      }
      else {
        puStack_178 = &uStack_278;
        FUN_140eeb6c0(&uStack_b8,puVar6);
      }
      FUN_140003e00(&uStack_b8,uStack_198);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      puVar6 = puStack_100;
      FUN_1400019a0(&uStack_268,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_170 = &uStack_268;
      }
      else {
        puStack_170 = &uStack_268;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140003e00(&uStack_a0,uStack_190);
      FUN_1400019a0(&uStack_258,&uStack_a0);
      puVar6 = puStack_108;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_168 = &uStack_258;
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_b8 = *puVar6;
      }
      else {
        FUN_140eeb6c0(&uStack_b8,puVar6);
      }
      FUN_140003ca0(&uStack_b8,uStack_198);
      uStack_94 = uStack_b0._4_4_;
      uStack_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        uStack_a0 = uStack_b8;
      }
      else {
        FUN_140eeb6c0(&uStack_a0,&uStack_b8);
      }
      FUN_140003ca0(&uStack_a0,&uStack_1d8);
      puVar6 = puStack_100;
      FUN_1400019a0(&uStack_248,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_94 = *(uint *)((longlong)puVar6 + 0xc);
      uStack_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        uStack_a0 = *puVar6;
        puStack_160 = &uStack_248;
      }
      else {
        puStack_160 = &uStack_248;
        FUN_140eeb6c0(&uStack_a0,puVar6);
      }
      FUN_140003ca0(&uStack_a0,uStack_190);
      FUN_1400019a0(&uStack_238,&uStack_a0);
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      puStack_158 = &uStack_238;
      uVar8 = CONCAT44(uVar2,uRam00000001420da0e0);
      uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,uVar8,&puStack_188);
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&uStack_228,uVar7);
      puStack_150 = &uStack_228;
      FUN_140002730(&uStack_218,0x142181cd0);
      puStack_148 = &uStack_218;
      FUN_140002730(&uStack_208,0x142181cd0);
      puStack_140 = &uStack_208;
      uVar7 = CONCAT44(uVar2,uRam00000001420db2e0);
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,7,uVar7,&puStack_170);
      uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_110 = 0x24;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      FUN_140002730(&uStack_298,0x142181cd0);
      puStack_188 = &uStack_298;
      FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,CONCAT44(uVar2,uRam00000001420da090),
                    &puStack_188);
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
        FUN_140001b50(&uStack_3a8);
      }
      if ((0x46U >> (uStack_3ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_3b8);
      }
      if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_3c8);
      }
      if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_3d8);
      }
      if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_3e8);
      }
      if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_2a8);
      }
      if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_2b8);
      }
      if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e8);
      }
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_2d8);
      }
      if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_2e8);
      }
      if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_f8);
      }
      if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1a8);
      }
      if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1b8);
      }
      if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1d8);
      }
      if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_2c8);
      }
      if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1e8);
      }
      if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1f8);
      }
      if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_208);
      }
      if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_218);
      }
      if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_228);
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
      puRam0000000142182d78 = (undefined8 *)uStack_120;
      return;
    }
    uStack_110 = 7;
    if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e8);
    }
    uStack_e8 = 0;
    uStack_e0 = 0x500000000;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar2 = FUN_141693b30(&dStack_f8);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x186b9/*var:_layer*/,uVar2,&uStack_1c8,uVar12,(ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar2 = (undefined4)(uVar12 >> 0x20);
    FUN_1400019a0(&uStack_288,&uStack_1c8);
    puStack_180 = &uStack_288;
    uVar8 = CONCAT44(uVar2,uRam00000001420da260);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,1,uVar8,&puStack_180);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&uStack_2e8,uVar7);
    uStack_110 = 8;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    uStack_c8 = 0;
    uStack_c0 = 0x500000000;
    puStack_188 = &uStack_2e8;
    uVar8 = CONCAT44(uVar2,uRam00000001420da270);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,1,uVar8,&puStack_188);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&uStack_2d8,uVar7);
    uStack_110 = 10;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    uStack_c8 = 0;
    uStack_c0 = 0x500000000;
    if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e8);
    }
    uStack_e8 = 0;
    uStack_e0 = 0x500000000;
    if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2b8);
    }
    uStack_2b8 = 0;
    uStack_2b0 = 0x500000000;
    if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2a8);
    }
    uStack_2a8 = 0;
    uStack_2a0 = 0x500000000;
    puVar6 = (undefined8 *)(**(code **)(*plStack_d0 + 0x10))(plStack_d0,0x18a5a/*var:l*/);
    puStack_188 = &uStack_2d8;
    puStack_180 = &uStack_1b8;
    puStack_178 = &uStack_1a8;
    uStack_94 = uStack_1ac;
    uStack_98 = uStack_1b0;
    puStack_170 = puStack_188;
    if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
      uStack_a0 = uStack_1b8;
    }
    else {
      FUN_140eeb6c0(&uStack_a0);
    }
    FUN_140001c50(&uStack_a0,1);
    FUN_1400019a0(&uStack_258,&uStack_a0);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    puStack_168 = &uStack_258;
    puStack_158 = &uStack_2d8;
    uStack_94 = uStack_19c;
    uStack_98 = uStack_1a0;
    puStack_160 = &uStack_1a8;
    puStack_150 = &uStack_1b8;
    if ((0x46U >> (uStack_19c & 0x1f) & 1) == 0) {
      uStack_a0 = uStack_1a8;
    }
    else {
      FUN_140eeb6c0(&uStack_a0,&uStack_1a8);
    }
    FUN_140001c50(&uStack_a0,1);
    FUN_1400019a0(&uStack_218,&uStack_a0);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    puStack_148 = &uStack_218;
    puStack_140 = &uStack_2d8;
    uStack_94 = uStack_1ac;
    uStack_98 = uStack_1b0;
    if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
      uStack_a0 = uStack_1b8;
    }
    else {
      FUN_140eeb6c0(&uStack_a0,&uStack_1b8);
    }
    FUN_140001c50(&uStack_a0,1);
    FUN_1400019a0(&uStack_1f8,&uStack_a0);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    puStack_138 = &uStack_1f8;
    uStack_94 = uStack_19c;
    uStack_98 = uStack_1a0;
    if ((0x46U >> (uStack_19c & 0x1f) & 1) == 0) {
      uStack_a0 = uStack_1a8;
    }
    else {
      FUN_140eeb6c0(&uStack_a0,&uStack_1a8);
    }
    FUN_140001c50(&uStack_a0,1);
    FUN_1400019a0(&uStack_1e8,&uStack_a0);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    puStack_130 = &uStack_1e8;
    uVar8 = CONCAT44(uVar2,uRam00000001420da280);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_c8,3,uVar8,&puStack_188);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_94 = 0;
    uStack_a0 = 0;
    iVar1 = FUN_1416d9df0(uVar7,&uStack_a0,uRam00000001420f6b08,1);
    uVar8 = CONCAT44(uVar2,uRam00000001420da280);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_e8,3,uVar8,&puStack_170);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_94 = 0;
    uStack_a0 = 0;
    iVar3 = FUN_1416d9df0(uVar7,&uStack_a0,uRam00000001420f6b08,1);
    uVar8 = CONCAT44(uVar2,uRam00000001420da280);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_2b8,3,uVar8,&puStack_158);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_94 = 0;
    uStack_a0 = 0;
    iVar4 = FUN_1416d9df0(uVar7,&uStack_a0,uRam00000001420f6b08,1);
    ppuVar13 = &puStack_140;
    uVar12 = CONCAT44(uVar2,uRam00000001420da280);
    uVar7 = FUN_1416ab210(plStack_d0,uStack_d8,&uStack_2a8,3,uVar12,ppuVar13);
    uStack_94 = 0;
    uStack_a0 = 0;
    iVar5 = FUN_1416d9df0(uVar7,&uStack_a0,uRam00000001420f6b08,1);
    auVar11._0_4_ = -(uint)(iVar3 < 1);
    auVar11._4_4_ = -(uint)(iVar1 < 1);
    auVar11._8_4_ = -(uint)(iVar4 < 1);
    auVar11._12_4_ = -(uint)(iVar5 < 1);
    auVar10._0_4_ = -(uint)(iVar3 == -2);
    auVar10._4_4_ = -(uint)(iVar1 == -2);
    auVar10._8_4_ = -(uint)(iVar4 == -2);
    auVar10._12_4_ = -(uint)(iVar5 == -2);
    auVar11 = ~auVar10 & auVar11;
    FUN_140001c50(puVar6,(-auVar11._4_4_ - (auVar11._12_4_ >> 0x1f)) +
                         (-auVar11._0_4_ - (auVar11._8_4_ >> 0x1f)));
    switch(uStack_ec & 0xffffff) {
    case 1:
      dStack_f8 = (double)FUN_1416940c0(&dStack_f8);
      dStack_f8 = dStack_f8 + 1.0;
      uStack_ec = 0;
      break;
    default:
      goto code_r0x000140ee4e47;
    case 7:
      dStack_f8 = (double)CONCAT44(dStack_f8._4_4_,dStack_f8._0_4_ + 1);
      break;
    case 10:
      dStack_f8 = (double)((longlong)dStack_f8 + 1);
      break;
    case 0xd:
      uStack_ec = 0;
    case 0:
      dStack_f8 = dStack_f8 + 1.0;
    }
  } while( true );
code_r0x000140ee4e47:
  FUN_140001d70(&UNK_141981e6a,&dStack_f8,&dStack_f8);
  goto code_r0x000140ee4e60;
}


