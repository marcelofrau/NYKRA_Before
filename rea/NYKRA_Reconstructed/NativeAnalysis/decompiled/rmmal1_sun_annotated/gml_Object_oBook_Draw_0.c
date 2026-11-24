// Function: gml_Object_oBook_Draw_0 @ 0x1414c9420

void gml_Object_oBook_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 **in_stack_fffffffffffffc28;
  ulonglong uVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined8 **in_stack_fffffffffffffc30;
  ulonglong uVar20;
  undefined8 **ppuVar21;
  double **ppdVar22;
  undefined4 uVar23;
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
  uint local_26c;
  double local_268;
  undefined4 local_260;
  uint local_25c;
  undefined8 *local_258;
  undefined8 *local_250;
  double *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  double local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
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
  undefined8 local_178;
  uint local_16c;
  double local_160;
  uint local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_118 = "gml_Object_oBook_Draw_0";
  local_110 = 0;
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
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
  local_16c = 0xffffff;
  local_178 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  DAT_142182d90 = param_1;
  pdVar3 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c2/*var:c_ink*/);
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  local_27c = 0xffffff;
  local_288 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_a8._4_4_ = 0xffffff;
  local_b0 = 0;
  local_138 = CONCAT44(0xffffff,(undefined4)local_138);
  local_140 = 0;
  local_148 = CONCAT44(0xffffff,(undefined4)local_148);
  local_150 = 0;
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
  local_110 = 1;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18b39/*var:on*/);
  local_b4 = 0;
  local_c0 = 0.0;
  iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_110 = 2;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    uVar20 = (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00;
    uVar17 = (ulonglong)in_stack_fffffffffffffc28 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_108,uVar17,uVar20);
    in_stack_fffffffffffffc30 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_f8,uVar17 & 0xffffffffffffff00,
                  in_stack_fffffffffffffc30);
    FUN_1400019a0(&local_208,&local_108);
    local_258 = &local_208;
    FUN_1400019a0(&local_1f8,&local_f8);
    local_250 = &local_1f8;
    FUN_140002730(&local_1e8,&DAT_1420cba90);
    local_248 = &local_1e8;
    FUN_140002730(&local_1d8,&DAT_142182c08);
    local_240 = &local_1d8;
    FUN_140002730(&local_1c8,&DAT_142182c08);
    in_stack_fffffffffffffc28 = &local_258;
    local_238 = &local_1c8;
    uVar5 = FUN_1400d7df0(param_1,param_2,&local_b0,5,in_stack_fffffffffffffc28);
    cVar1 = FUN_1416927d0(uVar5);
    if (cVar1 == '\0') {
      local_110 = 0x12;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
    }
    else {
      local_110 = 2;
      if ((0x46U >> (local_138._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_140);
      }
      local_140 = 0;
      local_138 = 0x500000000;
      uVar20 = (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00;
      uVar17 = (ulonglong)in_stack_fffffffffffffc28 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_108,uVar17,uVar20);
      in_stack_fffffffffffffc30 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_f8,uVar17 & 0xffffffffffffff00,
                    in_stack_fffffffffffffc30);
      FUN_1400019a0(&local_1b8,&local_108);
      local_230 = &local_1b8;
      FUN_1400019a0(&local_1a8,&local_f8);
      local_228 = &local_1a8;
      FUN_140002730(&local_198,&DAT_1420cba90);
      local_220 = &local_198;
      FUN_140002730(&local_188,&DAT_1420cbaa0);
      local_218 = &local_188;
      FUN_140002730(&local_178,&DAT_1420cbaa0);
      local_210 = &local_178;
      uVar5 = FUN_1400d7df0(param_1,param_2,&local_140,5,&local_230);
      cVar1 = FUN_1416927d0(uVar5);
      if (cVar1 != '\0') {
        local_110 = 4;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
        local_110 = 5;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1873b/*var:anim2*/);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      }
      local_110 = 0xb;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
      FUN_1400019a0(&local_208,uVar5);
      local_258 = &local_208;
      FUN_140002730(&local_1f8,&DAT_1420cbaa0);
      local_250 = &local_1f8;
      FUN_140002730(&local_1e8,&DAT_1420cbab0);
      in_stack_fffffffffffffc28 = &local_258;
      local_248 = &local_1e8;
      uVar6 = FUN_1400b9c80(param_1,param_2,&local_b0,3,in_stack_fffffffffffffc28);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar5,uVar6);
      FUN_1416a8c00(1);
    }
    local_110 = 0x15;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 5;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
    FUN_140009980(&local_d8,uVar5,0x3fe0000000000000/*0.5*/);
    FUN_140003ba0(&local_c0,&local_d8,0x3f50624dd2f1a9fc/*0.001*/);
    FUN_1400019a0(&local_208,&local_c0);
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d8);
    }
    local_258 = &local_208;
    FUN_140002730(&local_1f8,&DAT_142182c08);
    local_250 = &local_1f8;
    uVar6 = FUN_1416cd900(&local_b0,2,&local_258);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar5,uVar6);
    FUN_1416a8c00(1);
  }
  else {
    local_110 = 0x18;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
    local_b4 = 0;
    local_c0 = 1.0;
    iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,0);
    if (iVar2 == 0) {
      local_110 = 0x19;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      local_d8 = 0.0;
      uStack_d0 = 0;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,0x1879f/*var:book_text*/);
      uVar17 = (ulonglong)in_stack_fffffffffffffc28 & 0xffffffffffffff00;
      FUN_1416d0010(0x40,0x187a0/*var:books*/,0x80000000,&local_d8,uVar17,
                    (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00);
      uVar19 = (undefined4)(uVar17 >> 0x20);
      FUN_1400019a0(&local_208,&local_d8);
      local_258 = &local_208;
      FUN_140002730(&local_1f8,&DAT_142182c08);
      local_250 = &local_1f8;
      FUN_1400019a0(&local_1e8,uVar5);
      in_stack_fffffffffffffc30 = &local_258;
      local_248 = &local_1e8;
      FUN_1416ab210(param_1,param_2,&local_b0,3,CONCAT44(uVar19,DAT_1420da300/*ds_list_insert*/),
                    in_stack_fffffffffffffc30);
      local_110 = 0x1a;
      FUN_1416f8210(param_1,param_2,0,0);
      local_110 = 0x1b;
      local_e8 = 0.0;
      uStack_e0 = 0;
      FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&local_e8);
      local_110 = 0x1c;
      local_128 = 0;
      local_130 = 1.0;
      FUN_1416d0790(0x40,0x18df5/*var:UI_OPEN*/,0x80000000,&local_130);
      local_110 = 0x1d;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 5;
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
      FUN_1400019a0(&local_208,uVar5);
      local_258 = &local_208;
      FUN_140002730(&local_1f8,&DAT_1420cbac0);
      local_250 = &local_1f8;
      FUN_140002730(&local_1e8,&DAT_1420cbad0);
      in_stack_fffffffffffffc28 = &local_258;
      local_248 = &local_1e8;
      uVar6 = FUN_1400b9c80(param_1,param_2,&local_b0,3,in_stack_fffffffffffffc28);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar5,uVar6);
      FUN_1416a8c00(1);
      local_b4 = 0;
      local_c0 = 1.9;
      iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,1);
      if (0 < iVar2) {
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 5;
        (**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
        uVar20 = (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00;
        uVar17 = (ulonglong)in_stack_fffffffffffffc28 & 0xffffffffffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_108,uVar17,uVar20);
        in_stack_fffffffffffffc30 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
        FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_f8,uVar17 & 0xffffffffffffff00,
                      in_stack_fffffffffffffc30);
        FUN_1400019a0(&local_208,&local_108);
        local_258 = &local_208;
        FUN_1400019a0(&local_1f8,&local_f8);
        local_250 = &local_1f8;
        FUN_140002730(&local_1e8,&DAT_1420cbae0);
        local_248 = &local_1e8;
        FUN_140002730(&local_1d8,&DAT_1420cbaa0);
        local_240 = &local_1d8;
        FUN_140002730(&local_1c8,&DAT_142182c08);
        in_stack_fffffffffffffc28 = &local_258;
        local_238 = &local_1c8;
        uVar5 = FUN_1400d7df0(param_1,param_2,&local_b0,5,in_stack_fffffffffffffc28);
        cVar1 = FUN_1416927d0(uVar5);
        if (cVar1 != '\0') {
          local_110 = 0x1e;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar7);
          }
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *puVar7 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
        }
      }
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
      local_b4 = 0;
      local_c0 = 2.0;
      iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,0);
      if (iVar2 == 0) {
        local_110 = 0x22;
        local_d8 = 0.0;
        uStack_d0 = 0;
        FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&local_d8);
        local_110 = 0x23;
        uStack_e0 = 0;
        local_e8 = 1.0;
        FUN_1416d0790(0x40,0x18df5/*var:UI_OPEN*/,0x80000000,&local_e8);
        local_110 = 0x24;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 5;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
        FUN_1400019a0(&local_208,uVar5);
        local_258 = &local_208;
        FUN_140002730(&local_1f8,&DAT_142182c08);
        local_250 = &local_1f8;
        FUN_140002730(&local_1e8,&DAT_1420cbaf0);
        in_stack_fffffffffffffc28 = &local_258;
        local_248 = &local_1e8;
        uVar6 = FUN_1400b9c80(param_1,param_2,&local_b0,3,in_stack_fffffffffffffc28);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar5,uVar6);
        FUN_1416a8c00(1);
        local_b4 = 0;
        local_c0 = 0.1;
        iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,1);
        if ((iVar2 != -2) && (iVar2 < 0)) {
          local_110 = 0x25;
          (**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar7);
          }
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *puVar7 = 0;
        }
      }
    }
  }
  local_110 = 0x27;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1879b/*var:book*/);
  uVar20 = (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00;
  uVar17 = (ulonglong)in_stack_fffffffffffffc28 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_108,uVar17,uVar20);
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_f8,uVar17,uVar20 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar17 >> 0x20);
  if ((local_ec & 0xffffff) == 0) {
    dVar11 = local_f8;
    if ((local_fc & 0xffffff) != 0) goto LAB_1414ca484;
LAB_1414ca4bb:
    dVar12 = local_108;
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1414ca49d;
LAB_1414ca4cc:
    dVar13 = *pdVar8;
  }
  else {
    dVar11 = (double)FUN_1416940c0(&local_f8);
    if ((local_fc & 0xffffff) == 0) goto LAB_1414ca4bb;
LAB_1414ca484:
    dVar12 = (double)FUN_1416940c0(&local_108);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) goto LAB_1414ca4cc;
LAB_1414ca49d:
    dVar13 = (double)FUN_1416940c0(pdVar8);
  }
  uVar5 = CONCAT44(uVar19,(float)dVar11);
  FUN_1416b8480(param_1,0x193,(longlong)dVar13,(float)dVar12,uVar5);
  uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1873b/*var:anim2*/);
  local_b4 = 0;
  local_c0 = 0.0;
  iVar2 = FUN_1416d9df0(uVar5,&local_c0,DAT_1420f6b08,0);
  if (iVar2 != 0) goto LAB_1414cac25;
  local_110 = 0x2a;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  FUN_140002730(&local_208,&DAT_1420cbaa0);
  uVar17 = CONCAT44(uVar19,DAT_1420da090/*gpu_set_blendmode*/);
  ppuVar21 = &local_258;
  local_258 = &local_208;
  FUN_1416ab210(param_1,param_2,&local_b0,1,uVar17,&local_258);
  local_110 = 0x2b;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  if ((0x46U >> (local_138._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  local_140 = 0;
  local_138 = 0x500000000;
  if ((0x46U >> (local_148._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  local_150 = 0;
  local_148 = 0x500000000;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1879b/*var:book*/);
  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_160,uVar17,uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_108,uVar17,uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_f8,uVar17,uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_288,uVar17,uVar20);
  FUN_1400019a0(&local_208,&local_288);
  uVar17 = uVar17 & 0xffffffffffffff00;
  local_258 = &local_208;
  FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_278,uVar17,uVar20 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar17 >> 0x20);
  FUN_1400019a0(&local_1f8,&local_278);
  uVar6 = CONCAT44(uVar19,DAT_1420d9ff0/*sqr*/);
  local_250 = &local_1f8;
  uVar5 = FUN_1416ab210(param_1,param_2,&local_150,1,uVar6,&local_250);
  uVar18 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),DAT_1420d9ff0/*sqr*/);
  uVar6 = FUN_1416ab210(param_1,param_2,&local_140,1,uVar18,&local_258);
  uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_140001a50(&local_268,uVar4,300);
  local_128 = CONCAT44(local_25c,local_260);
  if ((0x46U >> (local_25c & 0x1f) & 1) == 0) {
    local_130 = local_268;
  }
  else {
    FUN_1414cc540(&local_130,&local_268);
  }
  FUN_140003ca0(&local_130,uVar6);
  uStack_e0 = local_128;
  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) == 0) {
    local_e8 = local_130;
  }
  else {
    FUN_1414cc540(&local_e8,&local_130);
  }
  FUN_140003ca0(&local_e8,uVar5);
  uStack_d0 = uStack_e0;
  if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) == 0) {
    local_d8 = local_e8;
  }
  else {
    FUN_1414cc540(&local_d8,&local_e8);
  }
  FUN_140003ca0(&local_d8,&local_108);
  local_b4 = uStack_d0._4_4_;
  local_b8 = (undefined4)uStack_d0;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) == 0) {
    local_c0 = local_d8;
  }
  else {
    FUN_1414cc540(&local_c0,&local_d8);
  }
  FUN_140003ca0(&local_c0,&local_f8);
  dVar11 = local_c0;
  if ((local_b4 & 0xffffff) != 0) {
    dVar11 = (double)FUN_1416940c0(&local_c0);
  }
  fVar10 = (float)FUN_1416cd800(0x3f000000,(float)dVar11);
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  local_1e8 = (double)fVar10 + 0.5;
  local_1dc = 0;
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  ppdVar22 = &local_248;
  uVar4 = CONCAT44(uVar19,DAT_1420d9ff0/*sqr*/);
  local_248 = &local_1e8;
  pdVar9 = (double *)FUN_1416ab210(param_1,param_2,&local_b0,1,uVar4,ppdVar22);
  uVar23 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
  uVar19 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar9;
    if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) != 0) goto LAB_1414caa72;
LAB_1414cab03:
    dVar12 = *pdVar3;
    if ((local_ec & 0xffffff) != 0) goto LAB_1414caa8c;
LAB_1414cab18:
    dVar13 = local_f8;
    if ((local_fc & 0xffffff) != 0) goto LAB_1414caaad;
LAB_1414cab2d:
    dVar14 = local_108;
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1414caac7;
LAB_1414cab3f:
    dVar15 = *pdVar8;
    if ((local_154 & 0xffffff) != 0) goto LAB_1414caadf;
LAB_1414cab51:
    dVar16 = local_160;
  }
  else {
    dVar11 = (double)FUN_1416940c0(pdVar9);
    if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) goto LAB_1414cab03;
LAB_1414caa72:
    dVar12 = (double)FUN_1416940c0();
    if ((local_ec & 0xffffff) == 0) goto LAB_1414cab18;
LAB_1414caa8c:
    dVar13 = (double)FUN_1416940c0(&local_f8);
    if ((local_fc & 0xffffff) == 0) goto LAB_1414cab2d;
LAB_1414caaad:
    dVar14 = (double)FUN_1416940c0(&local_108);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) goto LAB_1414cab3f;
LAB_1414caac7:
    dVar15 = (double)FUN_1416940c0(pdVar8);
    if ((local_154 & 0xffffff) == 0) goto LAB_1414cab51;
LAB_1414caadf:
    dVar16 = (double)FUN_1416940c0(&local_160);
  }
  uVar4 = CONCAT44(uVar19,(float)dVar13);
  FUN_1416b84f0(param_1,(longlong)dVar16,(longlong)dVar15,(float)dVar14,uVar4,
                CONCAT44(uVar23,0x3f800000),0x3f800000,0,(int)(longlong)dVar12,(float)dVar11);
  uVar19 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_110 = 0x2c;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 5;
  FUN_140002730(&local_208,&DAT_142182c08);
  local_258 = &local_208;
  FUN_1416ab210(param_1,param_2,&local_b0,1,CONCAT44(uVar19,DAT_1420da090/*gpu_set_blendmode*/),&local_258);
LAB_1414cac25:
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
  if ((0x46U >> (local_148._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_138._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
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
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  DAT_142182d78 = (undefined8 *)local_120;
  return;
}


