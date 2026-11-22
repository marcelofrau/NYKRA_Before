// Function: gml_Script_draw_bg_tiled_hwave @ 0x1400b3440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_bg_tiled_hwave
          (undefined8 param_1,double param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 in_RDX;
  undefined *puVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  double dStack_2b8;
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
  double dStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  double *pdStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  double *pdStack_1f8;
  undefined8 *puStack_1f0;
  double dStack_1c8;
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
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  double dStack_138;
  uint uStack_12c;
  double dStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  double dStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  double dStack_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  double dStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  double dStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_110 = &UNK_14198331e;
  uStack_108 = 0;
  uStack_118 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_118;
  uStack_1bc = 0xffffff;
  dStack_1c8 = 0.0;
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
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_2ac = 0xffffff;
  dStack_2b8 = 0.0;
  uStack_23c = 0xffffff;
  dStack_248 = 0.0;
  uStack_e4 = 0xffffff;
  dStack_f0 = 0.0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_11c = 0xffffff;
  dStack_128 = 0.0;
  uStack_12c = 0xffffff;
  dStack_138 = 0.0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uRam0000000142182d90 = param_1;
  uStack_100 = in_RDX;
  uStack_f8 = param_1;
  uVar3 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9/*var:cam*/);
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_d4 = 0xffffff;
  dStack_e0 = 0.0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  pdVar4 = (double *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18d98/*var:tick*/);
  uStack_b8 = (ulonglong)(uint)uStack_b8;
  uStack_c0 = 0;
  uStack_220 = (ulonglong)(uint)uStack_220;
  uStack_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(uRam00000001420dcc60);
  uStack_108 = 0xd;
  if (param_4 < 1) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)*param_5;
  }
  FUN_1400019a0(&dStack_2b8,puVar6);
  uStack_108 = 0xe;
  if (param_4 < 2) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&dStack_248,puVar6);
  uStack_108 = 0xf;
  if (param_4 < 3) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[2];
  }
  FUN_1400019a0(&dStack_f0,puVar6);
  uStack_108 = 0x10;
  if (param_4 < 4) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[3];
  }
  FUN_1400019a0(&uStack_2a8,puVar6);
  uStack_108 = 0x11;
  if (param_4 < 5) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[4];
  }
  FUN_1400019a0(&uStack_298,puVar6);
  uStack_108 = 0x12;
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_c0 = 0;
  uStack_b8 = 0x500000000;
  pdStack_218 = &dStack_2b8;
  pdVar5 = (double *)
           FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,1,uRam00000001420da490,&pdStack_218);
  uStack_84 = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_88 = *(undefined4 *)(pdVar5 + 1);
  if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
    dStack_90 = *pdVar5;
  }
  else {
    FUN_1400b8c40(&dStack_90,pdVar5);
  }
  FUN_140001fe0(&dStack_90,&uStack_2a8);
  FUN_1400019a0(&dStack_128,&dStack_90);
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_90);
  }
  uStack_108 = 0x13;
  if (param_4 < 6) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[5];
  }
  FUN_1400019a0(&dStack_138,puVar6);
  uStack_108 = 0x14;
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  uStack_22c = 0;
  uStack_238 = 0xc000000000000000/*-2*/;
  uStack_108 = 0x15;
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_c0 = 0;
  uStack_b8 = 0x500000000;
  if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  uStack_228 = 0;
  uStack_220 = 0x500000000;
  FUN_1400019a0(&dStack_1c8,uVar3);
  pdStack_218 = &dStack_1c8;
  FUN_1400019a0(&uStack_1b8,uVar3);
  puStack_210 = &uStack_1b8;
  pdVar5 = (double *)
           FUN_1416ab210(uStack_f8,uStack_100,&uStack_228,1,uRam00000001420da3b0,&puStack_210);
  uStack_a4 = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_a8 = *(undefined4 *)(pdVar5 + 1);
  if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
    dStack_b0 = *pdVar5;
  }
  else {
    FUN_1400b8c40(&dStack_b0,pdVar5);
  }
  FUN_140004620(&dStack_b0,&dStack_128);
  pdVar5 = (double *)
           FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,1,uRam00000001420da4a0,&pdStack_218);
  uStack_c4 = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_c8 = *(undefined4 *)(pdVar5 + 1);
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
    dStack_d0 = *pdVar5;
  }
  else {
    FUN_1400b8c40(&dStack_d0,pdVar5);
  }
  FUN_140004620(&dStack_d0,&dStack_128);
  uStack_94 = uStack_c4;
  uStack_98 = uStack_c8;
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
    dStack_a0 = dStack_d0;
  }
  else {
    FUN_1400b8c40(&dStack_a0,&dStack_d0);
  }
  FUN_140003ca0(&dStack_a0,&dStack_b0);
  uStack_84 = uStack_94;
  uStack_88 = uStack_98;
  if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
    dStack_90 = dStack_a0;
  }
  else {
    FUN_1400b8c40(&dStack_90,&dStack_a0);
  }
  FUN_140001c50(&dStack_90,1);
  FUN_1400019a0(&uStack_288,&dStack_90);
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_90);
  }
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a0);
  }
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_d0);
  }
  if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_b0);
  }
  uStack_108 = 0x18;
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_c0 = 0;
  uStack_b8 = 0x500000000;
  pdStack_218 = &dStack_2b8;
  FUN_140002730(&uStack_1b8,0x14217f130);
  puStack_210 = &uStack_1b8;
  uVar3 = FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,2,uRam00000001420da070,&pdStack_218);
  FUN_1400019a0(&uStack_278,uVar3);
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_e0);
  }
  uStack_d4 = 0;
  dStack_e0 = 0.0;
  uStack_108 = 0x19;
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_c0 = 0;
  uStack_b8 = 0x500000000;
  pdStack_218 = &dStack_2b8;
  pdVar5 = (double *)
           FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,1,uRam00000001420da600,&pdStack_218);
  uStack_84 = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_88 = *(undefined4 *)(pdVar5 + 1);
  if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
    dStack_90 = *pdVar5;
  }
  else {
    FUN_1400b8c40(&dStack_90,pdVar5);
  }
  FUN_140001fe0(&dStack_90,&uStack_298);
  FUN_1400019a0(&uStack_268,&dStack_90);
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_90);
  }
  uStack_108 = 0x1a;
  if ((uStack_12c & 0xffffff) == 0) {
    dVar10 = dStack_138;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_138);
  }
  func_0x0001416f15a0((longlong)dVar10);
  uStack_108 = 0x1b;
  pdVar5 = (double *)&DAT_1420b1000;
  if (6 < param_4) {
    pdVar5 = (double *)param_5[6];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_1416940c0();
  }
  FUN_1416f1550((float)dVar10);
  uStack_108 = 0x1c;
  FUN_1400019a0(&uStack_258,&uStack_238);
  uVar1 = _UNK_141983260;
  uVar3 = _UNK_141982c40;
  while( true ) {
    uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
    iVar2 = FUN_1416d9df0(&uStack_258,&uStack_288,uRam00000001420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    uStack_108 = 0x1f;
    uStack_94 = uStack_11c;
    uStack_98 = uStack_120;
    if ((0x46U >> (uStack_11c & 0x1f) & 1) == 0) {
      dStack_a0 = dStack_128;
    }
    else {
      FUN_1400b8c40(&dStack_a0,&dStack_128);
    }
    FUN_140001fe0(&dStack_a0,&uStack_258);
    uStack_a4 = uStack_23c;
    uStack_a8 = uStack_240;
    if ((0x46U >> (uStack_23c & 0x1f) & 1) == 0) {
      dStack_b0 = dStack_248;
    }
    else {
      FUN_1400b8c40(&dStack_b0,&dStack_248);
    }
    FUN_140005380(&dStack_b0,&dStack_128);
    uStack_84 = uStack_a4;
    uStack_88 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_b0);
    }
    FUN_140003ca0(&dStack_90,&dStack_a0);
    FUN_1400019a0(&dStack_e0,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    uStack_108 = 0x20;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    FUN_140002730(&dStack_1c8,0x1420b29e0);
    pdStack_218 = &dStack_1c8;
    puStack_210 = &uStack_278;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,2,uRam00000001420da5e0,&pdStack_218);
    uStack_108 = 0x22;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_a4 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_a8 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_b0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_b0,pdVar4);
    }
    FUN_140001fe0(&dStack_b0,puVar6);
    uStack_94 = uStack_a4;
    uStack_98 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_a0 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_a0,&dStack_b0);
    }
    FUN_140001c50(&dStack_a0,0xb4);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar7 = SUB84(dStack_a0,0);
      uVar12 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar7 = (undefined4)uVar11;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    pdVar5 = (double *)&DAT_1420b1000;
    if (7 < param_4) {
      pdVar5 = (double *)param_5[7];
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar5;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    fVar8 = (float)FUN_1416cd800((float)dVar10,CONCAT44(uVar9,(float)(double)CONCAT44(uVar12,uVar7))
                                );
    uStack_84 = uStack_d4;
    uStack_88 = uStack_d8;
    if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_e0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_e0);
    }
    dVar10 = (double)fVar8;
    FUN_140003f30(&dStack_90,dVar10);
    uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    FUN_1400019a0(&dStack_1c8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    pdStack_218 = &dStack_1c8;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_a4 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_a8 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_b0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_b0,pdVar4);
    }
    FUN_140001fe0(&dStack_b0,puVar6);
    uStack_94 = uStack_a4;
    uStack_98 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_a0 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_a0,&dStack_b0);
    }
    FUN_140001c50(&dStack_a0,0xb4);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar7 = SUB84(dStack_a0,0);
      uVar12 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar7 = (undefined4)uVar11;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    puVar6 = &DAT_1420b1000;
    if (7 < param_4) {
      puVar6 = (undefined *)param_5[7];
    }
    FUN_140009980(&dStack_d0,puVar6,uVar1);
    if ((uStack_c4 & 0xffffff) == 0) {
      dVar10 = dStack_d0;
    }
    else {
      dVar10 = (double)FUN_1416940c0(&dStack_d0);
    }
    fVar8 = (float)FUN_1416cd880((float)dVar10,CONCAT44(uVar9,(float)(double)CONCAT44(uVar12,uVar7))
                                );
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    dVar10 = (double)fVar8;
    FUN_140003f30(&dStack_90,dVar10);
    uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_d0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x14217f130);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x14217f130);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x23;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    pdStack_218 = &dStack_e0;
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    FUN_140003ca0(&dStack_90,&uStack_268);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x14217f130);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x1420b29f0);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x24;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_94 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_98 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      dStack_a0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_a0,pdVar4);
    }
    FUN_140001fe0(&dStack_a0,puVar6);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar7 = SUB84(dStack_a0,0);
      uVar12 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar7 = (undefined4)uVar11;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    pdVar5 = (double *)&DAT_1420b1000;
    if (7 < param_4) {
      pdVar5 = (double *)param_5[7];
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar5;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    fVar8 = (float)FUN_1416cd800((float)dVar10,CONCAT44(uVar9,(float)(double)CONCAT44(uVar12,uVar7))
                                );
    FUN_140004520(&dStack_d0,&dStack_128,uVar3);
    uStack_a4 = uStack_d4;
    uStack_a8 = uStack_d8;
    if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
      dStack_b0 = dStack_e0;
    }
    else {
      FUN_1400b8c40(&dStack_b0,&dStack_e0);
    }
    FUN_140003ca0(&dStack_b0,&dStack_d0);
    uStack_84 = uStack_a4;
    uStack_88 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_b0);
    }
    FUN_140003f30(&dStack_90,(double)fVar8);
    FUN_1400019a0(&dStack_1c8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_d0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    pdStack_218 = &dStack_1c8;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_94 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_98 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      dStack_a0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_a0,pdVar4);
    }
    FUN_140001fe0(&dStack_a0,puVar6);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar9 = SUB84(dStack_a0,0);
      uVar7 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar9 = (undefined4)uVar11;
      uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    puVar6 = &DAT_1420b1000;
    if (7 < param_4) {
      puVar6 = (undefined *)param_5[7];
    }
    FUN_140009980(&dStack_b0,puVar6,uVar1);
    if ((uStack_a4 & 0xffffff) == 0) {
      dVar10 = dStack_b0;
    }
    else {
      dVar10 = (double)FUN_1416940c0(&dStack_b0);
    }
    fVar8 = (float)FUN_1416cd880((float)dVar10,(float)(double)CONCAT44(uVar7,uVar9));
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    dVar10 = (double)fVar8;
    FUN_140003f30(&dStack_90,dVar10);
    uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x1420b2a00);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x14217f130);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x25;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    FUN_140004520(&dStack_a0,&dStack_128,uVar3);
    uStack_84 = uStack_d4;
    uStack_88 = uStack_d8;
    if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_e0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_e0);
    }
    FUN_140003ca0(&dStack_90,&dStack_a0);
    FUN_1400019a0(&dStack_1c8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    pdStack_218 = &dStack_1c8;
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    FUN_140003ca0(&dStack_90,&uStack_268);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x1420b2a00);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x1420b29f0);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x26;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_a4 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_a8 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_b0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_b0,pdVar4);
    }
    FUN_140001fe0(&dStack_b0,puVar6);
    uStack_94 = uStack_a4;
    uStack_98 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_a0 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_a0,&dStack_b0);
    }
    FUN_140001c50(&dStack_a0,0xb4);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar7 = SUB84(dStack_a0,0);
      uVar12 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar7 = (undefined4)uVar11;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    pdVar5 = (double *)&DAT_1420b1000;
    if (7 < param_4) {
      pdVar5 = (double *)param_5[7];
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar5;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    fVar8 = (float)FUN_1416cd800((float)dVar10,CONCAT44(uVar9,(float)(double)CONCAT44(uVar12,uVar7))
                                );
    uStack_c4 = uStack_d4;
    uStack_c8 = uStack_d8;
    if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
      dStack_d0 = dStack_e0;
    }
    else {
      FUN_1400b8c40(&dStack_d0,&dStack_e0);
    }
    FUN_140003ca0(&dStack_d0,&dStack_128);
    uStack_84 = uStack_c4;
    uStack_88 = uStack_c8;
    if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_d0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_d0);
    }
    dVar10 = (double)fVar8;
    FUN_140003f30(&dStack_90,dVar10);
    uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    FUN_1400019a0(&dStack_1c8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_d0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    pdStack_218 = &dStack_1c8;
    puVar6 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar6 = (undefined *)param_5[8];
    }
    uStack_a4 = *(uint *)((longlong)pdVar4 + 0xc);
    uStack_a8 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_b0 = *pdVar4;
    }
    else {
      FUN_1400b8c40(&dStack_b0,pdVar4);
    }
    FUN_140001fe0(&dStack_b0,puVar6);
    uStack_94 = uStack_a4;
    uStack_98 = uStack_a8;
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
      dStack_a0 = dStack_b0;
    }
    else {
      FUN_1400b8c40(&dStack_a0,&dStack_b0);
    }
    FUN_140001c50(&dStack_a0,0xb4);
    if ((uStack_94 & 0xffffff) == 0) {
      uVar7 = SUB84(dStack_a0,0);
      uVar12 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    }
    else {
      uVar11 = FUN_1416940c0(&dStack_a0);
      uVar7 = (undefined4)uVar11;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    puVar6 = &DAT_1420b1000;
    if (7 < param_4) {
      puVar6 = (undefined *)param_5[7];
    }
    FUN_140009980(&dStack_d0,puVar6,uVar1);
    if ((uStack_c4 & 0xffffff) == 0) {
      dVar10 = dStack_d0;
    }
    else {
      dVar10 = (double)FUN_1416940c0(&dStack_d0);
    }
    fVar8 = (float)FUN_1416cd880((float)dVar10,CONCAT44(uVar9,(float)(double)CONCAT44(uVar12,uVar7))
                                );
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    param_2 = (double)fVar8;
    FUN_140003f30(&dStack_90,param_2);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_d0);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_a0);
    }
    if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_b0);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x1420b29f0);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x14217f130);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x27;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    uStack_84 = uStack_d4;
    uStack_88 = uStack_d8;
    if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_e0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_e0);
    }
    FUN_140003ca0(&dStack_90,&dStack_128);
    FUN_1400019a0(&dStack_1c8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    pdStack_218 = &dStack_1c8;
    uStack_84 = uStack_e4;
    uStack_88 = uStack_e8;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) == 0) {
      dStack_90 = dStack_f0;
    }
    else {
      FUN_1400b8c40(&dStack_90,&dStack_f0);
    }
    FUN_140003ca0(&dStack_90,&uStack_268);
    FUN_1400019a0(&uStack_1b8,&dStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_90);
    }
    puStack_210 = &uStack_1b8;
    FUN_140002730(&uStack_1a8,0x1420b29f0);
    puStack_208 = &uStack_1a8;
    FUN_140002730(&uStack_198,0x1420b29f0);
    puStack_200 = &uStack_198;
    pdStack_1f8 = &dStack_138;
    puVar6 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar6 = (undefined *)param_5[6];
    }
    FUN_1400019a0(&uStack_178,puVar6);
    puStack_1f0 = &uStack_178;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,6,uRam00000001420da5f0,&pdStack_218);
    uStack_108 = 0x29;
    if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c0);
    }
    uStack_c0 = 0;
    uStack_b8 = 0x500000000;
    FUN_1416ab210(uStack_f8,uStack_100,&uStack_c0,0,uRam00000001420da5a0,0);
    FUN_140001c50(&uStack_258,1);
  }
  if ((0x46U >> (uStack_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_e0);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_138);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_128);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_298);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f0);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_248);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_2b8);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
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
    FUN_140001b50(&dStack_1c8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_118;
  return param_3;
}


