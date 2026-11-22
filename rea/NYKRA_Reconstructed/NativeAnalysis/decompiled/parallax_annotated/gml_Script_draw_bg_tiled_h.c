// Function: gml_Script_draw_bg_tiled_h @ 0x14005cba0

undefined8 *
gml_Script_draw_bg_tiled_h
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar12;
  undefined4 uVar20;
  double **ppdVar19;
  double *pdStack_2a8;
  undefined8 *apuStack_2a0 [6];
  undefined8 *puStack_270;
  double dStack_268;
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
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  uint uStack_144;
  undefined8 uStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  puStack_160 = &UNK_141982cce;
  uStack_158 = 0;
  uStack_168 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_168;
  uStack_25c = 0xffffff;
  dStack_268 = 0.0;
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
  uStack_19c = 0xffffff;
  dStack_1a8 = 0.0;
  uStack_124 = 0xffffff;
  uStack_130 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_144 = 0xffffff;
  uStack_150 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uRam0000000142182d90 = param_1;
  uStack_100 = param_1;
  iStack_e4 = param_4;
  uVar3 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9/*var:cam*/);
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_134 = 0xffffff;
  uStack_140 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_108 = (ulonglong)(uint)uStack_108;
  uStack_110 = 0;
  uStack_1b0 = (ulonglong)(uint)uStack_1b0;
  uStack_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_270 = param_3;
  FUN_1416ab750(uRam00000001420dc8c0);
  uStack_158 = 0xd;
  if (iStack_e4 < 1) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)*param_5;
  }
  FUN_1400019a0(&dStack_1a8,puVar5);
  uStack_158 = 0xe;
  if (iStack_e4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_130,puVar5);
  uStack_158 = 0xf;
  if (iStack_e4 < 3) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[2];
  }
  FUN_1400019a0(&uStack_198,puVar5);
  uStack_158 = 0x10;
  if (iStack_e4 < 4) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[3];
  }
  FUN_1400019a0(&uStack_150,puVar5);
  uStack_158 = 0x11;
  if (iStack_e4 < 5) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[4];
  }
  FUN_1400019a0(&uStack_188,puVar5);
  uStack_158 = 0x12;
  if ((0x46U >> (uStack_108._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  uStack_110 = 0;
  uStack_108 = 0x500000000;
  ppdVar19 = &pdStack_2a8;
  pdStack_2a8 = &dStack_1a8;
  puVar4 = (undefined8 *)
           FUN_1416ab210(uStack_100,param_2,&uStack_110,1,uRam00000001420da490,ppdVar19);
  uStack_b4 = *(uint *)((longlong)puVar4 + 0xc);
  uStack_b8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) == 0) {
    uStack_c0 = *puVar4;
  }
  else {
    FUN_14005ff20(&uStack_c0,puVar4);
  }
  FUN_140001fe0(&uStack_c0,&uStack_150);
  FUN_1400019a0(&uStack_f8,&uStack_c0);
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_158 = 0x13;
  if (iStack_e4 < 6) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[5];
  }
  FUN_1400019a0(&uStack_178,puVar5);
  uStack_158 = 0x14;
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  uStack_1dc = 0;
  uStack_1e8 = 0xc000000000000000/*-2*/;
  uStack_158 = 0x15;
  if ((0x46U >> (uStack_108._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  uStack_110 = 0;
  uStack_108 = 0x500000000;
  if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  uStack_1b8 = 0;
  uStack_1b0 = 0x500000000;
  FUN_1400019a0(&dStack_268,uVar3);
  pdStack_2a8 = &dStack_268;
  FUN_1400019a0(&uStack_258,uVar3);
  apuStack_2a0[0] = &uStack_258;
  puVar4 = (undefined8 *)
           FUN_1416ab210(uStack_100,param_2,&uStack_1b8,1,uRam00000001420da3b0,apuStack_2a0);
  uStack_d4 = *(uint *)((longlong)puVar4 + 0xc);
  uStack_d8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
    uStack_e0 = *puVar4;
  }
  else {
    FUN_14005ff20(&uStack_e0,puVar4);
  }
  FUN_140004620(&uStack_e0,&uStack_f8);
  puVar4 = (undefined8 *)
           FUN_1416ab210(uStack_100,param_2,&uStack_110,1,uRam00000001420da4a0,ppdVar19);
  uStack_114 = *(uint *)((longlong)puVar4 + 0xc);
  uStack_118 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_114 & 0x1f) & 1) == 0) {
    uStack_120 = *puVar4;
  }
  else {
    FUN_14005ff20(&uStack_120,puVar4);
  }
  FUN_140004620(&uStack_120,&uStack_f8);
  uStack_c4 = uStack_114;
  uStack_c8 = uStack_118;
  if ((0x46U >> (uStack_114 & 0x1f) & 1) == 0) {
    uStack_d0 = uStack_120;
  }
  else {
    FUN_14005ff20(&uStack_d0,&uStack_120);
  }
  FUN_140003ca0(&uStack_d0,&uStack_e0);
  uStack_b4 = uStack_c4;
  uStack_b8 = uStack_c8;
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
    uStack_c0 = uStack_d0;
  }
  else {
    FUN_14005ff20(&uStack_c0,&uStack_d0);
  }
  FUN_140001c50(&uStack_c0,1);
  FUN_1400019a0(&uStack_1d8,&uStack_c0);
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e0);
  }
  uStack_158 = 0x16;
  func_0x0001416ce870(uStack_100,uRam00000001420d5a78,0x80000000,&uStack_1f8);
  cVar1 = FUN_1416927d0(&uStack_1f8);
  if (cVar1 == '\0') {
    uStack_158 = 0x1f;
    if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_140);
    }
    uStack_134 = 0;
    uStack_140 = 0xbff0000000000000/*-1*/;
    while( true ) {
      uVar20 = (undefined4)((ulonglong)ppdVar19 >> 0x20);
      func_0x0001416ce870(uStack_100,uRam00000001420d5a88,0x80000000,&uStack_1c8);
      uStack_c4 = uStack_1bc;
      uStack_c8 = uStack_1c0;
      if ((0x46U >> (uStack_1bc & 0x1f) & 1) == 0) {
        uStack_d0 = uStack_1c8;
      }
      else {
        FUN_14005ff20(&uStack_d0,&uStack_1c8);
      }
      FUN_140004620(&uStack_d0,&uStack_f8);
      uStack_b4 = uStack_c4;
      uStack_b8 = uStack_c8;
      if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
        uStack_c0 = uStack_d0;
      }
      else {
        FUN_14005ff20(&uStack_c0,&uStack_d0);
      }
      FUN_140001c50(&uStack_c0,1);
      iVar2 = FUN_1416d9df0(&uStack_140,&uStack_c0,uRam00000001420f6b08,1);
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c0);
      }
      if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d0);
      }
      if (iVar2 == -2 || -1 < iVar2) break;
      uStack_158 = 0x21;
      puVar4 = (undefined8 *)&DAT_1420b1000;
      if (6 < iStack_e4) {
        puVar4 = (undefined8 *)param_5[6];
      }
      if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
        uVar6 = (undefined4)*puVar4;
        uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
        if ((uStack_16c & 0xffffff) == 0) goto code_r0x00014005d96a;
code_r0x00014005d8dc:
        uVar3 = FUN_1416940c0(&uStack_178);
        uVar7 = (undefined4)uVar3;
        uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_17c & 0xffffff) != 0) goto code_r0x00014005d8fc;
code_r0x00014005d983:
        uVar8 = (undefined4)uStack_188;
        uVar15 = (undefined4)((ulonglong)uStack_188 >> 0x20);
        if ((uStack_144 & 0xffffff) == 0) goto code_r0x00014005d998;
code_r0x00014005d91c:
        uVar3 = FUN_1416940c0(&uStack_150);
        uVar9 = (undefined4)uVar3;
        uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_18c & 0xffffff) != 0) goto code_r0x00014005d938;
code_r0x00014005d9ad:
        uVar10 = (undefined4)uStack_198;
        uVar17 = (undefined4)((ulonglong)uStack_198 >> 0x20);
      }
      else {
        uVar3 = FUN_1416940c0();
        uVar6 = (undefined4)uVar3;
        uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_16c & 0xffffff) != 0) goto code_r0x00014005d8dc;
code_r0x00014005d96a:
        uVar7 = (undefined4)uStack_178;
        uVar14 = (undefined4)((ulonglong)uStack_178 >> 0x20);
        if ((uStack_17c & 0xffffff) == 0) goto code_r0x00014005d983;
code_r0x00014005d8fc:
        uVar3 = FUN_1416940c0(&uStack_188);
        uVar8 = (undefined4)uVar3;
        uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_144 & 0xffffff) != 0) goto code_r0x00014005d91c;
code_r0x00014005d998:
        uVar9 = (undefined4)uStack_150;
        uVar16 = (undefined4)((ulonglong)uStack_150 >> 0x20);
        if ((uStack_18c & 0xffffff) == 0) goto code_r0x00014005d9ad;
code_r0x00014005d938:
        uVar3 = FUN_1416940c0(&uStack_198);
        uVar10 = (undefined4)uVar3;
        uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      uStack_c4 = uStack_ec;
      uStack_c8 = uStack_f0;
      if ((0x46U >> (uStack_ec & 0x1f) & 1) == 0) {
        uStack_d0 = uStack_f8;
      }
      else {
        FUN_14005ff20(&uStack_d0,&uStack_f8);
      }
      FUN_140001fe0(&uStack_d0,&uStack_140);
      uStack_d4 = uStack_124;
      uStack_d8 = uStack_128;
      if ((0x46U >> (uStack_124 & 0x1f) & 1) == 0) {
        uStack_e0 = uStack_130;
      }
      else {
        FUN_14005ff20(&uStack_e0,&uStack_130);
      }
      FUN_140005380(&uStack_e0,&uStack_f8);
      uStack_b4 = uStack_d4;
      uStack_b8 = uStack_d8;
      if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
        uStack_c0 = uStack_e0;
      }
      else {
        FUN_14005ff20(&uStack_c0,&uStack_e0);
      }
      FUN_140003ca0(&uStack_c0,&uStack_d0);
      if ((uStack_b4 & 0xffffff) == 0) {
        uVar11 = (undefined4)uStack_c0;
        uVar18 = (undefined4)((ulonglong)uStack_c0 >> 0x20);
        if ((uStack_19c & 0xffffff) == 0) goto code_r0x00014005dae4;
code_r0x00014005dabc:
        dVar12 = (double)FUN_1416940c0(&dStack_1a8);
      }
      else {
        uVar3 = FUN_1416940c0(&uStack_c0);
        uVar11 = (undefined4)uVar3;
        uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_19c & 0xffffff) != 0) goto code_r0x00014005dabc;
code_r0x00014005dae4:
        dVar12 = dStack_1a8;
      }
      ppdVar19 = (double **)CONCAT44(uVar20,(float)(double)CONCAT44(uVar16,uVar9));
      FUN_1416b84f0(uStack_100,(longlong)dVar12,0,(float)(double)CONCAT44(uVar18,uVar11),
                    (float)(double)CONCAT44(uVar17,uVar10),ppdVar19,
                    (float)(double)CONCAT44(uVar15,uVar8),0,
                    (int)(longlong)(double)CONCAT44(uVar14,uVar7),
                    (float)(double)CONCAT44(uVar13,uVar6));
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c0);
      }
      if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e0);
      }
      if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d0);
      }
      FUN_140001c50(&uStack_140,1);
    }
  }
  else {
    uStack_158 = 0x18;
    FUN_1400019a0(&uStack_140,&uStack_1e8);
    while( true ) {
      uVar20 = (undefined4)((ulonglong)ppdVar19 >> 0x20);
      uStack_b4 = uStack_1cc;
      uStack_b8 = uStack_1d0;
      if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
        uStack_c0 = uStack_1d8;
      }
      else {
        FUN_14005ff20(&uStack_c0,&uStack_1d8);
      }
      FUN_140001c50(&uStack_c0,1);
      iVar2 = FUN_1416d9df0(&uStack_140,&uStack_c0,uRam00000001420f6b08,1);
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c0);
      }
      if (iVar2 == -2 || 0 < iVar2) break;
      uStack_158 = 0x1a;
      puVar4 = (undefined8 *)&DAT_1420b1000;
      if (6 < iStack_e4) {
        puVar4 = (undefined8 *)param_5[6];
      }
      if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
        uVar6 = (undefined4)*puVar4;
        uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
        if ((uStack_16c & 0xffffff) == 0) goto code_r0x00014005d4d5;
code_r0x00014005d455:
        uVar3 = FUN_1416940c0(&uStack_178);
        uVar7 = (undefined4)uVar3;
        uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_17c & 0xffffff) != 0) goto code_r0x00014005d471;
code_r0x00014005d4ea:
        uVar8 = (undefined4)uStack_188;
        uVar15 = (undefined4)((ulonglong)uStack_188 >> 0x20);
        if ((uStack_144 & 0xffffff) == 0) goto code_r0x00014005d4ff;
code_r0x00014005d48d:
        uVar3 = FUN_1416940c0(&uStack_150);
        uVar9 = (undefined4)uVar3;
        uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_18c & 0xffffff) != 0) goto code_r0x00014005d4a9;
code_r0x00014005d514:
        uVar10 = (undefined4)uStack_198;
        uVar17 = (undefined4)((ulonglong)uStack_198 >> 0x20);
      }
      else {
        uVar3 = FUN_1416940c0();
        uVar6 = (undefined4)uVar3;
        uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_16c & 0xffffff) != 0) goto code_r0x00014005d455;
code_r0x00014005d4d5:
        uVar7 = (undefined4)uStack_178;
        uVar14 = (undefined4)((ulonglong)uStack_178 >> 0x20);
        if ((uStack_17c & 0xffffff) == 0) goto code_r0x00014005d4ea;
code_r0x00014005d471:
        uVar3 = FUN_1416940c0(&uStack_188);
        uVar8 = (undefined4)uVar3;
        uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_144 & 0xffffff) != 0) goto code_r0x00014005d48d;
code_r0x00014005d4ff:
        uVar9 = (undefined4)uStack_150;
        uVar16 = (undefined4)((ulonglong)uStack_150 >> 0x20);
        if ((uStack_18c & 0xffffff) == 0) goto code_r0x00014005d514;
code_r0x00014005d4a9:
        uVar3 = FUN_1416940c0(&uStack_198);
        uVar10 = (undefined4)uVar3;
        uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      uStack_c4 = uStack_ec;
      uStack_c8 = uStack_f0;
      if ((0x46U >> (uStack_ec & 0x1f) & 1) == 0) {
        uStack_d0 = uStack_f8;
      }
      else {
        FUN_14005ff20(&uStack_d0,&uStack_f8);
      }
      FUN_140001fe0(&uStack_d0,&uStack_140);
      uStack_d4 = uStack_124;
      uStack_d8 = uStack_128;
      if ((0x46U >> (uStack_124 & 0x1f) & 1) == 0) {
        uStack_e0 = uStack_130;
      }
      else {
        FUN_14005ff20(&uStack_e0,&uStack_130);
      }
      FUN_140005380(&uStack_e0,&uStack_f8);
      uStack_b4 = uStack_d4;
      uStack_b8 = uStack_d8;
      if ((0x46U >> (uStack_d4 & 0x1f) & 1) == 0) {
        uStack_c0 = uStack_e0;
      }
      else {
        FUN_14005ff20(&uStack_c0,&uStack_e0);
      }
      FUN_140003ca0(&uStack_c0,&uStack_d0);
      if ((uStack_b4 & 0xffffff) == 0) {
        uVar11 = (undefined4)uStack_c0;
        uVar18 = (undefined4)((ulonglong)uStack_c0 >> 0x20);
        if ((uStack_19c & 0xffffff) == 0) goto code_r0x00014005d654;
code_r0x00014005d62c:
        dVar12 = (double)FUN_1416940c0(&dStack_1a8);
      }
      else {
        uVar3 = FUN_1416940c0(&uStack_c0);
        uVar11 = (undefined4)uVar3;
        uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((uStack_19c & 0xffffff) != 0) goto code_r0x00014005d62c;
code_r0x00014005d654:
        dVar12 = dStack_1a8;
      }
      ppdVar19 = (double **)CONCAT44(uVar20,(float)(double)CONCAT44(uVar16,uVar9));
      FUN_1416b84f0(uStack_100,(longlong)dVar12,0,(float)(double)CONCAT44(uVar18,uVar11),
                    (float)(double)CONCAT44(uVar17,uVar10),ppdVar19,
                    (float)(double)CONCAT44(uVar15,uVar8),0,
                    (int)(longlong)(double)CONCAT44(uVar14,uVar7),
                    (float)(double)CONCAT44(uVar13,uVar6));
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c0);
      }
      if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e0);
      }
      if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d0);
      }
      FUN_140001c50(&uStack_140,1);
    }
  }
  if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  puVar4 = puStack_270;
  if ((0x46U >> (uStack_108._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_140);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_150);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1a8);
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
    FUN_140001b50(&dStack_268);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_168;
  return puVar4;
}


