// Function: gml_Object_oBook_Draw_73 @ 0x1414c6b00

void gml_Object_oBook_Draw_73(longlong *param_1,undefined8 param_2)

{
  double *pdVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  undefined8 **in_stack_fffffffffffffca0;
  ulonglong uVar18;
  undefined4 uVar19;
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
  double *local_220;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
  undefined8 local_170;
  char *local_168;
  undefined4 local_160;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double local_148;
  uint local_13c;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  double local_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined4 local_b8;
  uint local_b4;
  double local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_168 = "gml_Object_oBook_Draw_73";
  local_160 = 0;
  local_170 = DAT_142182d78;
  DAT_142182d78 = &local_170;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  DAT_142182d90 = param_1;
  pdVar4 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c2/*var:c_ink*/);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_e4 = 0xffffff;
  local_f0 = 0;
  local_130 = CONCAT44(0xffffff,(undefined4)local_130);
  local_138 = 0;
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
  local_224 = 0xffffff;
  local_230 = 0;
  local_d0 = 0;
  local_c8 = 0x500000000;
  ppuVar14 = (undefined8 **)0x0;
  uVar6 = FUN_140120860(param_1,param_2,&local_d0,0,0);
  cVar2 = FUN_1416927d0(uVar6);
  if (cVar2 == '\0') goto LAB_1414c75b5;
  local_160 = 1;
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 5;
  uVar18 = (ulonglong)in_stack_fffffffffffffca0 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_128,uVar15,uVar18);
  in_stack_fffffffffffffca0 = (undefined8 **)(uVar18 & 0xffffffffffffff00);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_118,uVar15 & 0xffffffffffffff00,
                in_stack_fffffffffffffca0);
  FUN_1400019a0(&local_1c8,&local_128);
  local_1f8 = &local_1c8;
  FUN_1400019a0(&local_1b8,&local_118);
  local_1f0 = &local_1b8;
  FUN_140002730(&local_1a8,&DAT_1420cba60);
  local_1e8 = &local_1a8;
  FUN_140002730(&local_198,&DAT_1420cba70);
  ppuVar14 = &local_1f8;
  local_1e0 = &local_198;
  FUN_1400d6da0(param_1,param_2,&local_f0,4,ppuVar14);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,0x1873b/*var:anim2*/);
  local_a4 = 0;
  local_b0 = 0.0;
  iVar3 = FUN_1416d9df0(uVar6,&local_b0,DAT_1420f6b08,0);
  if (iVar3 != 0) goto LAB_1414c75b5;
  local_160 = 4;
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  uVar17 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  local_d0 = 0;
  local_c8 = 0x500000000;
  FUN_140002730(&local_1c8,&DAT_1420cba80);
  ppuVar14 = &local_1f8;
  uVar15 = CONCAT44(uVar17,DAT_1420da090/*gpu_set_blendmode*/);
  local_1f8 = &local_1c8;
  FUN_1416ab210(param_1,param_2,&local_d0,1,uVar15,ppuVar14);
  local_160 = 5;
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  local_d0 = 0;
  local_c8 = 0x500000000;
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 5;
  local_220 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1879b/*var:book*/);
  uVar18 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_148,uVar15,uVar18);
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_128,uVar15,uVar18);
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_118,uVar15,uVar18);
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_218,uVar15,uVar18);
  FUN_1400019a0(&local_1c8,&local_218);
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_1f8 = &local_1c8;
  FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_208,uVar15,uVar18 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_1b8,&local_208);
  uVar7 = CONCAT44(uVar17,DAT_1420d9ff0/*sqr*/);
  local_1f0 = &local_1b8;
  uVar6 = FUN_1416ab210(param_1,param_2,&local_f0,1,uVar7,&local_1f0);
  ppuVar14 = &local_1f8;
  uVar16 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1420d9ff0/*sqr*/);
  uVar7 = FUN_1416ab210(param_1,param_2,&local_d0,1,uVar16,ppuVar14);
  uVar19 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_140001a50(&local_158,uVar5,300);
  local_d4 = local_14c;
  local_d8 = local_150;
  if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
    local_e0 = local_158;
  }
  else {
    FUN_1414c93a0(&local_e0,&local_158);
  }
  pdVar1 = local_220;
  FUN_140003ca0(&local_e0,uVar7);
  local_b4 = local_d4;
  local_b8 = local_d8;
  if ((0x46U >> (local_d4 & 0x1f) & 1) == 0) {
    local_c0 = local_e0;
  }
  else {
    FUN_1414c93a0(&local_c0,&local_e0);
  }
  FUN_140003ca0(&local_c0,uVar6);
  uStack_100._0_4_ = local_b8;
  uStack_100._4_4_ = local_b4;
  if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
    local_108 = local_c0;
  }
  else {
    FUN_1414c93a0(&local_108,&local_c0);
  }
  FUN_140003ca0(&local_108,&local_128);
  local_a4 = uStack_100._4_4_;
  local_a8 = (undefined4)uStack_100;
  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) == 0) {
    local_b0 = local_108;
  }
  else {
    FUN_1414c93a0(&local_b0,&local_108);
  }
  FUN_140003ca0(&local_b0,&local_118);
  dVar9 = local_b0;
  if ((local_a4 & 0xffffff) != 0) {
    dVar9 = (double)FUN_1416940c0(&local_b0);
  }
  fVar8 = (float)FUN_1416cd800(0x3f000000,(float)dVar9);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar4;
    if ((local_10c & 0xffffff) != 0) goto LAB_1414c73b1;
LAB_1414c741e:
    dVar10 = local_118;
    if ((local_11c & 0xffffff) != 0) goto LAB_1414c73cd;
LAB_1414c7433:
    dVar11 = local_128;
    if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) != 0) goto LAB_1414c73e8;
LAB_1414c7447:
    dVar12 = *pdVar1;
    if ((local_13c & 0xffffff) != 0) goto LAB_1414c73ff;
LAB_1414c7459:
    dVar13 = local_148;
  }
  else {
    dVar9 = (double)FUN_1416940c0(pdVar4);
    if ((local_10c & 0xffffff) == 0) goto LAB_1414c741e;
LAB_1414c73b1:
    dVar10 = (double)FUN_1416940c0(&local_118);
    if ((local_11c & 0xffffff) == 0) goto LAB_1414c7433;
LAB_1414c73cd:
    dVar11 = (double)FUN_1416940c0(&local_128);
    if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) goto LAB_1414c7447;
LAB_1414c73e8:
    dVar12 = (double)FUN_1416940c0(pdVar1);
    if ((local_13c & 0xffffff) == 0) goto LAB_1414c7459;
LAB_1414c73ff:
    dVar13 = (double)FUN_1416940c0(&local_148);
  }
  uVar5 = CONCAT44(uVar17,(float)dVar10);
  FUN_1416b84f0(param_1,(longlong)dVar13,(longlong)dVar12,(float)dVar11,uVar5,
                CONCAT44(uVar19,0x3f800000),0x3f800000,0,(int)(longlong)dVar9,fVar8 + 0.5);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  local_160 = 6;
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  local_d0 = 0;
  local_c8 = 0x500000000;
  FUN_140002730(&local_1c8,&DAT_142182bf8);
  in_stack_fffffffffffffca0 = &local_1f8;
  ppuVar14 = (undefined8 **)CONCAT44(uVar17,DAT_1420da090/*gpu_set_blendmode*/);
  local_1f8 = &local_1c8;
  FUN_1416ab210(param_1,param_2,&local_d0,1,ppuVar14,in_stack_fffffffffffffca0);
LAB_1414c75b5:
  local_108 = 0.0;
  uStack_100 = 0;
  uVar18 = (ulonglong)in_stack_fffffffffffffca0 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18ad9/*var:mode*/,0x80000000,&local_108,uVar15,uVar18);
  local_a4 = 0;
  local_b0 = 3.0;
  iVar3 = FUN_1416d9df0(&local_108,&local_b0,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    local_160 = 0xb;
    FUN_1416f15a0(0xffff00);
    local_160 = 0xc;
    FUN_1416f1550(0x3f800000);
    local_160 = 0xd;
    if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0x500000000;
    if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    uStack_e4 = 5;
    if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_138);
    }
    local_138 = 0;
    local_130 = 0x500000000;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,0x1879f/*var:book_text*/);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x1879b/*var:book*/);
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_128,uVar15,uVar18);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_118,uVar15,uVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar15 >> 0x20);
    FUN_1400019a0(&local_1c8,uVar5);
    local_1f8 = &local_1c8;
    FUN_1400019a0(&local_1b8,uVar6);
    local_1f0 = &local_1b8;
    FUN_1400019a0(&local_1a8,&local_128);
    local_1e8 = &local_1a8;
    FUN_1400019a0(&local_198,&local_118);
    uVar6 = CONCAT44(uVar17,DAT_1420da2b0/*string*/);
    local_1e0 = &local_198;
    uVar5 = FUN_1416ab210(param_1,param_2,&local_138,1,uVar6,&local_1f0);
    uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_1416ac010(&local_e0,&DAT_1420cba58);
    uVar6 = CONCAT44(uVar17,DAT_1420da2b0/*string*/);
    pdVar4 = (double *)FUN_1416ab210(param_1,param_2,&local_f0,1,uVar6,&local_1f8);
    uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_b4 = *(uint *)((longlong)pdVar4 + 0xc);
    local_b8 = *(undefined4 *)(pdVar4 + 1);
    if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
      local_c0 = *pdVar4;
    }
    else {
      FUN_1414c93a0(&local_c0,pdVar4);
    }
    FUN_140003ca0(&local_c0,&local_e0);
    local_a4 = local_b4;
    local_a8 = local_b8;
    if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
      local_b0 = local_c0;
    }
    else {
      FUN_1414c93a0(&local_b0,&local_c0);
    }
    FUN_140003ca0(&local_b0,uVar5);
    FUN_1400019a0(&local_188,&local_b0);
    if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e0);
    }
    local_1d8 = &local_188;
    FUN_1416ab210(param_1,param_2,&local_d0,3,CONCAT44(uVar17,DAT_1420d9eb0/*draw_text*/),&local_1e8);
  }
  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_230);
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
  if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  DAT_142182d78 = (undefined8 *)local_170;
  return;
}


