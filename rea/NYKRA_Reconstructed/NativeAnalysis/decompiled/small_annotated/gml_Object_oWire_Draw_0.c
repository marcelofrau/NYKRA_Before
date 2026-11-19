// Function: gml_Object_oWire_Draw_0 @ 0x1411221e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oWire_Draw_0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  ulonglong in_stack_fffffffffffffb58;
  ulonglong uVar24;
  undefined8 **ppuVar25;
  ulonglong in_stack_fffffffffffffb60;
  ulonglong uVar26;
  double **ppdVar27;
  undefined8 **ppuVar28;
  undefined8 local_478;
  uint local_46c;
  undefined8 local_468;
  uint local_45c;
  undefined8 local_458;
  uint local_44c;
  undefined8 local_448;
  uint local_43c;
  undefined8 local_438;
  uint local_42c;
  undefined8 local_428;
  uint local_41c;
  undefined8 local_418;
  uint local_40c;
  undefined8 local_408;
  uint local_3fc;
  undefined8 local_3f8;
  uint local_3ec;
  undefined8 local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  uint local_3cc;
  undefined8 local_3c8;
  uint local_3bc;
  undefined8 local_3b8;
  uint local_3ac;
  undefined8 local_3a8;
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
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  double local_198;
  uint local_18c;
  undefined8 *local_188;
  undefined8 *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  double *local_f0;
  double local_e8;
  undefined4 local_e0;
  uint local_dc;
  double local_d8;
  undefined4 local_d0;
  uint local_cc;
  double local_c8;
  undefined4 local_c0;
  uint local_bc;
  double local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_128 = "gml_Object_oWire_Draw_0";
  local_120 = 0;
  local_130 = DAT_142182d78;
  DAT_142182d78 = &local_130;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  DAT_142182d90 = param_1;
  local_a8 = param_2;
  local_f0 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  uVar6 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187be/*var:c_edgb*/);
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
  local_36c = 0xffffff;
  local_378 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_98 = CONCAT44(0xffffff,(undefined4)local_98);
  local_a0 = 0;
  local_110 = CONCAT44(0xffffff,(undefined4)local_110);
  local_118 = 0;
  local_240 = CONCAT44(0xffffff,(undefined4)local_240);
  local_248 = 0;
  local_230 = CONCAT44(0xffffff,(undefined4)local_230);
  local_238 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_3fc = 0xffffff;
  local_408 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_120 = 1;
  in_stack_fffffffffffffb60 = in_stack_fffffffffffffb60 & 0xffffffffffffff00;
  in_stack_fffffffffffffb58 = in_stack_fffffffffffffb58 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_198,in_stack_fffffffffffffb58,
                in_stack_fffffffffffffb60);
  in_stack_fffffffffffffb60 = in_stack_fffffffffffffb60 & 0xffffffffffffff00;
  in_stack_fffffffffffffb58 = in_stack_fffffffffffffb58 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,in_stack_fffffffffffffb58,
                in_stack_fffffffffffffb60);
  in_stack_fffffffffffffb60 = in_stack_fffffffffffffb60 & 0xffffffffffffff00;
  in_stack_fffffffffffffb58 = in_stack_fffffffffffffb58 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,in_stack_fffffffffffffb58,
                in_stack_fffffffffffffb60);
  uVar5 = (undefined4)(in_stack_fffffffffffffb58 >> 0x20);
  if ((local_cc & 0xffffff) == 0) {
    uVar4 = SUB84(local_d8,0);
    uVar19 = (undefined4)((ulonglong)local_d8 >> 0x20);
    if ((local_dc & 0xffffff) == 0) goto LAB_14112275e;
LAB_141122720:
    uVar16 = FUN_1416940c0(&local_e8);
    uVar21 = (undefined4)uVar16;
    uVar22 = (undefined4)((ulonglong)uVar16 >> 0x20);
    dVar17 = local_198;
  }
  else {
    uVar16 = FUN_1416940c0(&local_d8);
    uVar4 = (undefined4)uVar16;
    uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((local_dc & 0xffffff) != 0) goto LAB_141122720;
LAB_14112275e:
    uVar21 = SUB84(local_e8,0);
    uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
    dVar17 = local_198;
  }
  local_198 = dVar17;
  if ((local_18c & 0xffffff) != 0) {
    dVar17 = (double)FUN_1416940c0(&local_198);
  }
  uVar24 = CONCAT44(uVar5,(float)(double)CONCAT44(uVar19,uVar4));
  FUN_1416b8480(param_1,(longlong)dVar17,0,(float)(double)CONCAT44(uVar22,uVar21),uVar24);
  local_120 = 2;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  local_138 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
  in_stack_fffffffffffffb60 = in_stack_fffffffffffffb60 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_198,uVar24,in_stack_fffffffffffffb60);
  in_stack_fffffffffffffb60 = in_stack_fffffffffffffb60 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,in_stack_fffffffffffffb60);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,
                in_stack_fffffffffffffb60 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  FUN_1400019a0(&local_228,local_138);
  ppuVar25 = &local_188;
  uVar16 = CONCAT44(uVar5,DAT_1420d9ff0/*sqr*/);
  local_188 = &local_228;
  puVar7 = (undefined8 *)FUN_1416ab210(param_1,local_a8,&local_a0,1,uVar16,ppuVar25);
  uVar4 = (undefined4)((ulonglong)ppuVar25 >> 0x20);
  uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar19 = (undefined4)*puVar7;
    uVar21 = (undefined4)((ulonglong)*puVar7 >> 0x20);
    if ((local_cc & 0xffffff) == 0) goto LAB_141122926;
LAB_1411228cf:
    uVar16 = FUN_1416940c0(&local_d8);
    uVar22 = (undefined4)uVar16;
    uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((local_dc & 0xffffff) != 0) goto LAB_1411228eb;
LAB_14112293a:
    uVar18 = SUB84(local_e8,0);
    uVar20 = (undefined4)((ulonglong)local_e8 >> 0x20);
    dVar17 = local_198;
  }
  else {
    uVar16 = FUN_1416940c0(puVar7);
    uVar19 = (undefined4)uVar16;
    uVar21 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((local_cc & 0xffffff) != 0) goto LAB_1411228cf;
LAB_141122926:
    uVar22 = SUB84(local_d8,0);
    uVar23 = (undefined4)((ulonglong)local_d8 >> 0x20);
    if ((local_dc & 0xffffff) == 0) goto LAB_14112293a;
LAB_1411228eb:
    uVar16 = FUN_1416940c0(&local_e8);
    uVar18 = (undefined4)uVar16;
    uVar20 = (undefined4)((ulonglong)uVar16 >> 0x20);
    dVar17 = local_198;
  }
  local_198 = dVar17;
  if ((local_18c & 0xffffff) != 0) {
    dVar17 = (double)FUN_1416940c0(&local_198);
  }
  uVar24 = CONCAT44(uVar5,(float)(double)CONCAT44(uVar23,uVar22));
  uVar26 = CONCAT44(uVar4,0x3f800000);
  FUN_1416b84f0(param_1,(longlong)dVar17,1,(float)(double)CONCAT44(uVar20,uVar18),uVar24,uVar26,
                0x3f800000,0,0xffff00,(float)(double)CONCAT44(uVar21,uVar19));
  local_120 = 3;
  uVar26 = uVar26 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_198,uVar24,uVar26);
  uVar26 = uVar26 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar26 = uVar26 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26);
  uVar4 = (undefined4)(uVar26 >> 0x20);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  if ((*(uint *)((longlong)local_138 + 0xc) & 0xffffff) == 0) {
    uVar19 = (undefined4)*local_138;
    uVar21 = (undefined4)((ulonglong)*local_138 >> 0x20);
    if ((local_cc & 0xffffff) == 0) goto LAB_141122a98;
LAB_141122a41:
    uVar16 = FUN_1416940c0(&local_d8);
    uVar22 = (undefined4)uVar16;
    uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((local_dc & 0xffffff) != 0) goto LAB_141122a5d;
LAB_141122aac:
    uVar18 = SUB84(local_e8,0);
    uVar20 = (undefined4)((ulonglong)local_e8 >> 0x20);
    dVar17 = local_198;
  }
  else {
    uVar16 = FUN_1416940c0();
    uVar19 = (undefined4)uVar16;
    uVar21 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((local_cc & 0xffffff) != 0) goto LAB_141122a41;
LAB_141122a98:
    uVar22 = SUB84(local_d8,0);
    uVar23 = (undefined4)((ulonglong)local_d8 >> 0x20);
    if ((local_dc & 0xffffff) == 0) goto LAB_141122aac;
LAB_141122a5d:
    uVar16 = FUN_1416940c0(&local_e8);
    uVar18 = (undefined4)uVar16;
    uVar20 = (undefined4)((ulonglong)uVar16 >> 0x20);
    dVar17 = local_198;
  }
  local_198 = dVar17;
  if ((local_18c & 0xffffff) != 0) {
    dVar17 = (double)FUN_1416940c0(&local_198);
  }
  uVar16 = CONCAT44(uVar5,(float)(double)CONCAT44(uVar23,uVar22));
  FUN_1416b84f0(param_1,(longlong)dVar17,1,(float)(double)CONCAT44(uVar20,uVar18),uVar16,
                CONCAT44(uVar4,0x3f800000),0x3f800000,0,0xffffff,
                (float)(double)CONCAT44(uVar21,uVar19));
  uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_84 = 0;
  local_90 = 0.0;
  iVar3 = FUN_1416d9df0(local_138,&local_90,DAT_1420f6b08,1);
  if (0 < iVar3) {
    local_120 = 7;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    (**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
    FUN_140002730(&local_228,&DAT_1420c73e0);
    uVar16 = CONCAT44(uVar5,DAT_1420da090/*gpu_set_blendmode*/);
    local_188 = &local_228;
    FUN_1416ab210(param_1,local_a8,&local_a0,1,uVar16,&local_188);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_120 = 8;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_138 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
    FUN_1400019a0(&local_228,local_138);
    ppuVar25 = &local_188;
    uVar24 = CONCAT44(uVar5,DAT_1420d9ff0/*sqr*/);
    local_188 = &local_228;
    uVar16 = FUN_1416ab210(param_1,local_a8,&local_a0,1,uVar24,ppuVar25);
    FUN_140004520(&local_90,uVar16,_DAT_141982c40);
    dVar17 = local_90;
    if ((local_84 & 0xffffff) != 0) {
      dVar17 = (double)FUN_1416940c0(&local_90);
    }
    FUN_1416f1550((float)dVar17);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_120 = 9;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar24 >> 0x20);
    FUN_140017bd0(&local_90,&local_e8,1);
    FUN_1400019a0(&local_228,&local_90);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_188 = &local_228;
    FUN_140017bd0(&local_90,&local_d8,1);
    FUN_1400019a0(&local_218,&local_90);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_180 = &local_218;
    FUN_140001a50(&local_90,local_f0,0x1e);
    dVar17 = local_90;
    if ((local_84 & 0xffffff) != 0) {
      dVar17 = (double)FUN_1416940c0(&local_90);
    }
    fVar15 = (float)FUN_1416cd880(_DAT_141981f80,(float)dVar17);
    if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_208);
    }
    local_208 = ((double)fVar15 + _DAT_1419940b0) / _DAT_141985238;
    local_1fc = 0;
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_178 = &local_208;
    FUN_140002730(&local_1f8,&DAT_1420c73f0);
    local_170 = &local_1f8;
    FUN_140002730(&local_1e8,&DAT_142182188);
    local_168 = &local_1e8;
    FUN_140002730(&local_1d8,&DAT_142182188);
    local_160 = &local_1d8;
    ppuVar25 = &local_188;
    uVar24 = CONCAT44(uVar5,DAT_1420dac90/*draw_circle_colour*/);
    FUN_1416ab210(param_1,local_a8,&local_a0,6,uVar24,ppuVar25);
    local_120 = 10;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    local_118 = 0;
    local_110 = 0x500000000;
    uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar24 >> 0x20);
    FUN_1400019a0(&local_228,uVar6);
    local_188 = &local_228;
    FUN_140002730(&local_218,&DAT_142182188);
    local_180 = &local_218;
    FUN_140002730(&local_208,&DAT_1420c7400);
    local_178 = &local_208;
    FUN_140017bd0(&local_90,&local_e8,1);
    FUN_1400019a0(&local_1f8,&local_90);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_170 = &local_1f8;
    FUN_140017bd0(&local_90,&local_d8,1);
    FUN_1400019a0(&local_1e8,&local_90);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_168 = &local_1e8;
    FUN_140001a50(&local_90,local_f0,0x4d);
    dVar17 = local_90;
    if ((local_84 & 0xffffff) != 0) {
      dVar17 = (double)FUN_1416940c0(&local_90);
    }
    fVar15 = (float)FUN_1416cd800(_DAT_141981f80,(float)dVar17);
    if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1d8);
    }
    local_1d8 = ((double)fVar15 + _DAT_1419940b8) / _DAT_141985238;
    local_1cc = 0;
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_160 = &local_1d8;
    uVar16 = CONCAT44(uVar5,DAT_1420dac40/*merge_colour*/);
    uVar6 = FUN_1416ab210(param_1,local_a8,&local_118,3,uVar16,&local_188);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_1400019a0(&local_1c8,uVar6);
    local_158 = &local_1c8;
    FUN_140002730(&local_1b8,&DAT_142182188);
    local_150 = &local_1b8;
    FUN_140002730(&local_1a8,&DAT_142182188);
    uVar6 = CONCAT44(uVar5,DAT_1420dac90/*draw_circle_colour*/);
    local_148 = &local_1a8;
    FUN_1416ab210(param_1,local_a8,&local_a0,6,uVar6,&local_170);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_120 = 0xb;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    FUN_140002730(&local_228,&DAT_142182188);
    local_188 = &local_228;
    FUN_1416ab210(param_1,local_a8,&local_a0,1,CONCAT44(uVar5,DAT_1420da090/*gpu_set_blendmode*/),&local_188);
    local_120 = 0xc;
    FUN_1416f1550(_DAT_141981f80);
  }
  local_120 = 0xf;
  DAT_142182d90 = (longlong *)0x28784;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
  local_f0 = (double *)(**(code **)(*param_1 + 8))(param_1,0x18860/*var:d*/);
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (*pdVar8 != 0.0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*pdVar8);
    if (iVar3 < 1) {
      uVar5 = FUN_1416ba8f0(*pdVar8);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar5);
      pdVar9 = (double *)0x0;
    }
    else {
      pdVar9 = (double *)FUN_1416ba8e0(*pdVar8,0);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    pdVar9 = pdVar8;
  }
  FUN_1400019a0(&local_228,pdVar9);
  pdVar9 = local_f0;
  local_188 = &local_228;
  if (((*(uint *)((longlong)local_f0 + 0xc) & 0xffffff) == 2) && (*local_f0 != 0.0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_f0);
    if (iVar3 < 1) {
      uVar5 = FUN_1416ba8f0(*local_f0);
      pdVar9 = (double *)0x0;
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar5);
    }
    else {
      pdVar9 = (double *)FUN_1416ba8e0(*local_f0,0);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  FUN_1400019a0(&local_218,pdVar9);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7410);
  local_178 = &local_208;
  uVar6 = FUN_14003b450(param_1,local_a8,&local_a0,3,&local_188);
  FUN_1416a8cb0(param_1);
  uVar16 = FUN_1416924a0(pdVar8,0);
  FUN_1416a8cb0(*pdVar8);
  FUN_1400019a0(uVar16,uVar6);
  FUN_1416a8c00(2);
  local_120 = 0x10;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
  local_108 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18860/*var:d*/);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar10);
    if (iVar3 < 2) {
      uVar5 = FUN_1416ba8f0(*plVar10);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar5);
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)FUN_1416ba8e0(*plVar10,1);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    plVar11 = plVar10;
  }
  FUN_1400019a0(&local_228,plVar11);
  plVar11 = local_108;
  local_188 = &local_228;
  if (((*(uint *)((longlong)local_108 + 0xc) & 0xffffff) == 2) && (*local_108 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_108);
    if (iVar3 < 2) {
      uVar5 = FUN_1416ba8f0(*local_108);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar5);
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)FUN_1416ba8e0(*local_108,1);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  FUN_1400019a0(&local_218,plVar11);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7410);
  local_178 = &local_208;
  uVar6 = FUN_14003b450(param_1,local_a8,&local_a0,3,&local_188);
  FUN_1416a8cb0(param_1);
  uVar16 = FUN_1416924a0(plVar10,1);
  FUN_1416a8cb0(*plVar10);
  FUN_1400019a0(uVar16,uVar6);
  FUN_1416a8c00(2);
  local_120 = 0x11;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
  local_100 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18860/*var:d*/);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (*plVar11 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar11);
    if (iVar3 < 3) {
      uVar5 = FUN_1416ba8f0(*plVar11);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar5);
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)FUN_1416ba8e0(*plVar11,2);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    plVar12 = plVar11;
  }
  FUN_1400019a0(&local_228,plVar12);
  plVar12 = local_100;
  local_188 = &local_228;
  if (((*(uint *)((longlong)local_100 + 0xc) & 0xffffff) == 2) && (*local_100 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_100);
    if (iVar3 < 3) {
      uVar5 = FUN_1416ba8f0(*local_100);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar5);
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)FUN_1416ba8e0(*local_100,2);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  FUN_1400019a0(&local_218,plVar12);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7410);
  local_178 = &local_208;
  uVar6 = FUN_14003b450(param_1,local_a8,&local_a0,3,&local_188);
  FUN_1416a8cb0(param_1);
  uVar16 = FUN_1416924a0(plVar11,2);
  FUN_1416a8cb0(*plVar11);
  FUN_1400019a0(uVar16,uVar6);
  FUN_1416a8c00(2);
  local_120 = 0x12;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
  local_f8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18860/*var:d*/);
  if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (*plVar12 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar12);
    if (iVar3 < 4) {
      uVar5 = FUN_1416ba8f0(*plVar12);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar5);
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)FUN_1416ba8e0(*plVar12,3);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    plVar13 = plVar12;
  }
  FUN_1400019a0(&local_228,plVar13);
  plVar13 = local_f8;
  local_188 = &local_228;
  if (((*(uint *)((longlong)local_f8 + 0xc) & 0xffffff) == 2) && (*local_f8 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_f8);
    if (iVar3 < 4) {
      uVar5 = FUN_1416ba8f0(*local_f8);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar5);
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)FUN_1416ba8e0(*local_f8,3);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  FUN_1400019a0(&local_218,plVar13);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7410);
  local_178 = &local_208;
  ppuVar25 = &local_188;
  uVar6 = FUN_14003b450(param_1,local_a8,&local_a0,3,ppuVar25);
  uVar5 = (undefined4)((ulonglong)ppuVar25 >> 0x20);
  FUN_1416a8cb0(param_1);
  uVar16 = FUN_1416924a0(plVar12,3);
  FUN_1416a8cb0(*plVar12);
  FUN_1400019a0(uVar16,uVar6);
  FUN_1416a8c00(2);
  local_120 = 0x13;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (*plVar12 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar12);
    if (iVar3 < 4) {
      uVar4 = FUN_1416ba8f0(*plVar12);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar4);
      plVar12 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)plVar11 + 0xc);
      goto joined_r0x000141123aed;
    }
    plVar12 = (longlong *)FUN_1416ba8e0(*plVar12,3);
    if ((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) goto LAB_141123af3;
LAB_141123c2d:
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)plVar10 + 0xc);
joined_r0x000141123c45:
    if ((uVar1 & 0xffffff) != 2) goto LAB_141123cb5;
LAB_141123c47:
    if (*plVar10 == 0) goto LAB_141123cb5;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar10);
    if (iVar3 < 2) {
      uVar4 = FUN_1416ba8f0(*plVar10);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar4);
      plVar10 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
      goto joined_r0x000141123ccd;
    }
    plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,1);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) goto LAB_141123ccf;
LAB_141123d25:
    FUN_1416ab080("trying to index variable that is not an array");
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)plVar11 + 0xc);
joined_r0x000141123aed:
    if ((uVar1 & 0xffffff) != 2) goto LAB_141123c2d;
LAB_141123af3:
    if (*plVar11 == 0) goto LAB_141123c2d;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar11);
    if (iVar3 < 3) {
      uVar4 = FUN_1416ba8f0(*plVar11);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar4);
      plVar11 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)plVar10 + 0xc);
      goto joined_r0x000141123c45;
    }
    plVar11 = (longlong *)FUN_1416ba8e0(*plVar11,2);
    if ((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) goto LAB_141123c47;
LAB_141123cb5:
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
joined_r0x000141123ccd:
    if ((uVar1 & 0xffffff) != 2) goto LAB_141123d25;
LAB_141123ccf:
    if (*pdVar8 == 0.0) goto LAB_141123d25;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*pdVar8);
    if (iVar3 < 1) {
      uVar4 = FUN_1416ba8f0(*pdVar8);
      pdVar8 = (double *)0x0;
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar4);
    }
    else {
      pdVar8 = (double *)FUN_1416ba8e0(*pdVar8,0);
    }
  }
  local_ac = *(uint *)((longlong)pdVar8 + 0xc);
  local_b0 = *(undefined4 *)(pdVar8 + 1);
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_b8 = *pdVar8;
  }
  else {
    FUN_141128d50(&local_b8,pdVar8);
  }
  FUN_140003ca0(&local_b8,plVar10);
  local_bc = local_ac;
  local_c0 = local_b0;
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_141128d50(&local_c8,&local_b8);
  }
  FUN_140003ca0(&local_c8,plVar11);
  local_84 = local_bc;
  local_88 = local_c0;
  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
    local_90 = local_c8;
  }
  else {
    FUN_141128d50(&local_90,&local_c8);
  }
  FUN_140003ca0(&local_90,plVar12);
  FUN_1400019a0(&local_228,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_188 = &local_228;
  FUN_140002730(&local_218,&DAT_142182188);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c73e0);
  local_178 = &local_208;
  uVar16 = CONCAT44(uVar5,DAT_1420da130/*clamp*/);
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar16,&local_188);
  uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_138,uVar6);
  FUN_1416a8c00(1);
  local_84 = 0;
  local_90 = 0.0;
  iVar3 = FUN_1416d9df0(local_138,&local_90,DAT_1420f6b08,1);
  if ((iVar3 != -2) && (iVar3 < 1)) {
    local_120 = 0x15;
    local_138 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x1870b/*var:an*/);
    DAT_142182d90 = (longlong *)0x28783;
    local_f0 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    FUN_1416a8cb0(param_1);
    puVar7 = (undefined8 *)FUN_1416924a0(local_f0,0);
    FUN_1416a8cb0(*local_f0);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    FUN_1416a8c00(2);
    local_120 = 0x16;
    local_108 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    FUN_1416a8cb0(param_1);
    puVar7 = (undefined8 *)FUN_1416924a0(local_108,1);
    FUN_1416a8cb0(*local_108);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    FUN_1416a8c00(2);
    local_120 = 0x17;
    local_100 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    FUN_1416a8cb0(param_1);
    puVar7 = (undefined8 *)FUN_1416924a0(local_100,2);
    FUN_1416a8cb0(*local_100);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    FUN_1416a8c00(2);
    local_120 = 0x18;
    local_f8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    FUN_1416a8cb0(param_1);
    puVar7 = (undefined8 *)FUN_1416924a0(local_f8,3);
    FUN_1416a8cb0(*local_f8);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    FUN_1416a8c00(2);
  }
  local_120 = 0x1b;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  local_118 = 0;
  local_110 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
  if (((*(uint *)((longlong)local_f8 + 0xc) & 0xffffff) == 2) && (*local_f8 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_f8);
    if (iVar3 < 4) {
      uVar4 = FUN_1416ba8f0(*local_f8);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar4);
      local_f8 = (longlong *)0x0;
    }
    else {
      local_f8 = (longlong *)FUN_1416ba8e0(*local_f8,3);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  if (((*(uint *)((longlong)local_100 + 0xc) & 0xffffff) == 2) && (*local_100 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_100);
    if (iVar3 < 3) {
      uVar4 = FUN_1416ba8f0(*local_100);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar4);
      local_100 = (longlong *)0x0;
    }
    else {
      local_100 = (longlong *)FUN_1416ba8e0(*local_100,2);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  if (((*(uint *)((longlong)local_108 + 0xc) & 0xffffff) == 2) && (*local_108 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_108);
    if (iVar3 < 2) {
      uVar4 = FUN_1416ba8f0(*local_108);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar4);
      local_108 = (longlong *)0x0;
    }
    else {
      local_108 = (longlong *)FUN_1416ba8e0(*local_108,1);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  if (((*(uint *)((longlong)local_f0 + 0xc) & 0xffffff) == 2) && (*local_f0 != 0.0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*local_f0);
    if (iVar3 < 1) {
      uVar4 = FUN_1416ba8f0();
      local_f0 = (double *)0x0;
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar4);
    }
    else {
      local_f0 = (double *)FUN_1416ba8e0(*local_f0,0);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  local_ac = *(uint *)((longlong)local_f0 + 0xc);
  local_b0 = *(undefined4 *)(local_f0 + 1);
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_b8 = *local_f0;
  }
  else {
    FUN_141128d50(&local_b8);
  }
  FUN_140003ca0(&local_b8,local_108);
  plVar11 = local_f8;
  plVar10 = local_100;
  local_bc = local_ac;
  local_c0 = local_b0;
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_141128d50(&local_c8,&local_b8);
  }
  FUN_140003ca0(&local_c8,plVar10);
  local_84 = local_bc;
  local_88 = local_c0;
  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
    local_90 = local_c8;
  }
  else {
    FUN_141128d50(&local_90,&local_c8);
  }
  FUN_140003ca0(&local_90,plVar11);
  FUN_1400019a0(&local_228,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_188 = &local_228;
  FUN_140002730(&local_218,&DAT_1420c73e0);
  local_180 = &local_218;
  ppuVar25 = &local_188;
  uVar16 = FUN_1416cda40(&local_118,2,ppuVar25);
  FUN_1400019a0(&local_208,uVar16);
  ppdVar27 = &local_178;
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420da230/*round*/);
  uVar16 = FUN_1416ab210(param_1,local_a8,&local_a0,1,uVar24,ppdVar27);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,uVar16);
  FUN_1416a8c00(1);
  local_84 = 0;
  local_90 = 1.0;
  iVar3 = FUN_1416d9df0(local_138,&local_90,DAT_1420f6b08,1);
  if (iVar3 < 0) goto LAB_1411262af;
  local_120 = 0x1e;
  (**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  local_120 = 0x1f;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  uVar26 = (ulonglong)ppdVar27 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  FUN_140017bd0(&local_90,&local_e8,0x10);
  FUN_1400019a0(&local_228,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_188 = &local_228;
  FUN_1400019a0(&local_218,&local_d8);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7420);
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
  ppuVar28 = ppuVar25;
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar24,ppuVar25);
  FUN_1400019a0(&local_2d8,uVar6);
  local_120 = 0x20;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  uVar26 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  local_84 = local_dc;
  local_88 = local_e0;
  if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
    local_90 = local_e8;
  }
  else {
    FUN_141128d50(&local_90,&local_e8);
  }
  FUN_140001c50(&local_90,0x10);
  FUN_1400019a0(&local_228,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_188 = &local_228;
  FUN_1400019a0(&local_218,&local_d8);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7420);
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
  ppuVar28 = ppuVar25;
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar24,ppuVar25);
  FUN_1400019a0(&local_2c8,uVar6);
  local_120 = 0x21;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  uVar26 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  FUN_1400019a0(&local_228,&local_e8);
  local_188 = &local_228;
  FUN_140017bd0(&local_90,&local_d8,0x10);
  FUN_1400019a0(&local_218,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7420);
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
  ppuVar28 = ppuVar25;
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar24,ppuVar25);
  FUN_1400019a0(&local_2b8,uVar6);
  local_120 = 0x22;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  uVar26 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  FUN_1400019a0(&local_228,&local_e8);
  local_84 = local_cc;
  local_88 = local_d0;
  local_188 = &local_228;
  if ((0x46U >> (local_cc & 0x1f) & 1) == 0) {
    local_90 = local_d8;
  }
  else {
    FUN_141128d50(&local_90,&local_d8);
  }
  FUN_140001c50(&local_90,0x10);
  FUN_1400019a0(&local_218,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7420);
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar24,ppuVar25);
  FUN_1400019a0(&local_2a8,uVar6);
  local_84 = 0;
  local_90 = -4.0;
  iVar3 = FUN_1416d9df0(&local_2d8,&local_90,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
      FUN_1416ba910();
      iVar3 = FUN_1416ba8f0(*plVar10);
      if (iVar3 < 1) {
        uVar5 = FUN_1416ba8f0(*plVar10);
        plVar10 = (longlong *)0x0;
        FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar5);
      }
      else {
        plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,0);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    local_84 = 0;
    local_90 = 1.0;
    iVar3 = FUN_1416d9df0(plVar10,&local_90,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_1416cfeb0(&local_2d8,0x18860/*var:d*/,0,&local_378,uVar24,ppuVar25);
      local_84 = 0;
      local_90 = 0.0;
      iVar3 = FUN_1416d9df0(&local_378,&local_90,DAT_1420f6b08,1);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
        uVar24 = uVar24 & 0xffffffffffffff00;
        FUN_1416cfeb0(&local_2d8,0x1871e/*var:anim*/,0x80000000,&local_368,uVar24,ppuVar25);
        local_84 = 0;
        local_90 = 0.0;
        iVar3 = FUN_1416d9df0(&local_368,&local_90,DAT_1420f6b08,1);
        if ((iVar3 != -2) && (iVar3 < 1)) {
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
          FUN_1416a8cb0(param_1);
          puVar14 = (undefined8 *)FUN_1416924a0(puVar7,0);
          FUN_1416a8cb0(*puVar7);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          FUN_1416a8c00(2);
        }
      }
    }
    else {
      local_120 = 0x25;
      DAT_142182d90 = (longlong *)0x38783;
      if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_298);
      }
      local_28c = 0;
      local_298 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416d0720(&local_2d8,0x18860/*var:d*/,1,&local_298);
    }
  }
  local_84 = 0;
  local_90 = -4.0;
  iVar3 = FUN_1416d9df0(&local_2c8,&local_90,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
      FUN_1416ba910();
      iVar3 = FUN_1416ba8f0(*plVar10);
      if (iVar3 < 2) {
        uVar5 = FUN_1416ba8f0(*plVar10);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar5);
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,1);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    local_84 = 0;
    local_90 = 1.0;
    iVar3 = FUN_1416d9df0(plVar10,&local_90,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_1416cfeb0(&local_2c8,0x18860/*var:d*/,1,&local_358,uVar24,ppuVar25);
      local_84 = 0;
      local_90 = 0.0;
      iVar3 = FUN_1416d9df0(&local_358,&local_90,DAT_1420f6b08,1);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
        uVar24 = uVar24 & 0xffffffffffffff00;
        FUN_1416cfeb0(&local_2c8,0x1871e/*var:anim*/,0x80000000,&local_348,uVar24,ppuVar25);
        local_84 = 0;
        local_90 = 0.0;
        iVar3 = FUN_1416d9df0(&local_348,&local_90,DAT_1420f6b08,1);
        if ((iVar3 != -2) && (iVar3 < 1)) {
          DAT_142182d90 = (longlong *)0x28783;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
          FUN_1416a8cb0(param_1);
          puVar14 = (undefined8 *)FUN_1416924a0(puVar7,1);
          FUN_1416a8cb0(*puVar7);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          FUN_1416a8c00(2);
        }
      }
    }
    else {
      local_120 = 0x26;
      DAT_142182d90 = (longlong *)0x38783;
      if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_288);
      }
      local_27c = 0;
      local_288 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416d0720(&local_2c8,0x18860/*var:d*/,0,&local_288);
    }
  }
  local_84 = 0;
  local_90 = -4.0;
  iVar3 = FUN_1416d9df0(&local_2b8,&local_90,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
      FUN_1416ba910();
      iVar3 = FUN_1416ba8f0(*plVar10);
      if (iVar3 < 3) {
        uVar5 = FUN_1416ba8f0(*plVar10);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar5);
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,2);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    local_84 = 0;
    local_90 = 1.0;
    iVar3 = FUN_1416d9df0(plVar10,&local_90,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_1416cfeb0(&local_2b8,0x18860/*var:d*/,2,&local_338,uVar24,ppuVar25);
      local_84 = 0;
      local_90 = 0.0;
      iVar3 = FUN_1416d9df0(&local_338,&local_90,DAT_1420f6b08,1);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
        uVar24 = uVar24 & 0xffffffffffffff00;
        FUN_1416cfeb0(&local_2b8,0x1871e/*var:anim*/,0x80000000,&local_328,uVar24,ppuVar25);
        local_84 = 0;
        local_90 = 0.0;
        iVar3 = FUN_1416d9df0(&local_328,&local_90,DAT_1420f6b08,1);
        if ((iVar3 != -2) && (iVar3 < 1)) {
          DAT_142182d90 = (longlong *)0x28783;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
          FUN_1416a8cb0(param_1);
          puVar14 = (undefined8 *)FUN_1416924a0(puVar7,2);
          FUN_1416a8cb0(*puVar7);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          FUN_1416a8c00(2);
        }
      }
    }
    else {
      local_120 = 0x27;
      DAT_142182d90 = (longlong *)0x38783;
      if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_278);
      }
      local_26c = 0;
      local_278 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416d0720(&local_2b8,0x18860/*var:d*/,3,&local_278);
    }
  }
  local_84 = 0;
  local_90 = -4.0;
  iVar3 = FUN_1416d9df0(&local_2a8,&local_90,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
      FUN_1416ba910();
      iVar3 = FUN_1416ba8f0(*plVar10);
      if (iVar3 < 4) {
        uVar5 = FUN_1416ba8f0(*plVar10);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar5);
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,3);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    local_84 = 0;
    local_90 = 1.0;
    iVar3 = FUN_1416d9df0(plVar10,&local_90,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_1416cfeb0(&local_2a8,0x18860/*var:d*/,3,&local_318,uVar24,ppuVar25);
      local_84 = 0;
      local_90 = 0.0;
      iVar3 = FUN_1416d9df0(&local_318,&local_90,DAT_1420f6b08,1);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        ppuVar25 = (undefined8 **)((ulonglong)ppuVar25 & 0xffffffffffffff00);
        uVar24 = uVar24 & 0xffffffffffffff00;
        FUN_1416cfeb0(&local_2a8,0x1871e/*var:anim*/,0x80000000,&local_308,uVar24,ppuVar25);
        local_84 = 0;
        local_90 = 0.0;
        iVar3 = FUN_1416d9df0(&local_308,&local_90,DAT_1420f6b08,1);
        if ((iVar3 != -2) && (iVar3 < 1)) {
          DAT_142182d90 = (longlong *)0x28783;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
          FUN_1416a8cb0(param_1);
          puVar14 = (undefined8 *)FUN_1416924a0(puVar7,3);
          FUN_1416a8cb0(*puVar7);
          if ((0x46U >> (*(uint *)((longlong)puVar14 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar14);
          }
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
          *puVar14 = 0;
          FUN_1416a8c00(2);
        }
      }
    }
    else {
      local_120 = 0x28;
      DAT_142182d90 = (longlong *)0x38783;
      if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_268);
      }
      local_25c = 0;
      local_268 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416d0720(&local_2a8,0x18860/*var:d*/,2,&local_268);
    }
  }
  local_120 = 0x29;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0x18860/*var:d*/);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (*plVar10 != 0)) {
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar10);
    if (iVar3 < 4) {
      uVar5 = FUN_1416ba8f0(*plVar10);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",3,uVar5);
      plVar10 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)plVar11 + 0xc);
      goto joined_r0x0001411251c5;
    }
    plVar10 = (longlong *)FUN_1416ba8e0(*plVar10,3);
    if ((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) goto LAB_1411251cb;
LAB_14112583d:
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)plVar12 + 0xc);
joined_r0x0001411258bd:
    if ((uVar1 & 0xffffff) != 2) goto LAB_1411258bf;
LAB_141125856:
    if (*plVar12 == 0) goto LAB_1411258bf;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar12);
    if (iVar3 < 2) {
      uVar5 = FUN_1416ba8f0(*plVar12);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar5);
      plVar12 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
      goto joined_r0x0001411258d6;
    }
    plVar12 = (longlong *)FUN_1416ba8e0(*plVar12,1);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) goto LAB_1411258d8;
LAB_14112592c:
    FUN_1416ab080("trying to index variable that is not an array");
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)plVar11 + 0xc);
joined_r0x0001411251c5:
    if ((uVar1 & 0xffffff) != 2) goto LAB_14112583d;
LAB_1411251cb:
    if (*plVar11 == 0) goto LAB_14112583d;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*plVar11);
    if (iVar3 < 3) {
      uVar5 = FUN_1416ba8f0(*plVar11);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",2,uVar5);
      plVar11 = (longlong *)0x0;
      uVar1 = *(uint *)((longlong)plVar12 + 0xc);
      goto joined_r0x0001411258bd;
    }
    plVar11 = (longlong *)FUN_1416ba8e0(*plVar11,2);
    if ((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) goto LAB_141125856;
LAB_1411258bf:
    FUN_1416ab080("trying to index variable that is not an array");
    uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
joined_r0x0001411258d6:
    if ((uVar1 & 0xffffff) != 2) goto LAB_14112592c;
LAB_1411258d8:
    if (*pdVar8 == 0.0) goto LAB_14112592c;
    FUN_1416ba910();
    iVar3 = FUN_1416ba8f0(*pdVar8);
    if (iVar3 < 1) {
      uVar5 = FUN_1416ba8f0(*pdVar8);
      pdVar8 = (double *)0x0;
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar5);
    }
    else {
      pdVar8 = (double *)FUN_1416ba8e0(*pdVar8,0);
    }
  }
  local_ac = *(uint *)((longlong)pdVar8 + 0xc);
  local_b0 = *(undefined4 *)(pdVar8 + 1);
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_b8 = *pdVar8;
  }
  else {
    FUN_141128d50(&local_b8,pdVar8);
  }
  FUN_140003ca0(&local_b8,plVar12);
  local_bc = local_ac;
  local_c0 = local_b0;
  if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_141128d50(&local_c8,&local_b8);
  }
  FUN_140003ca0(&local_c8,plVar11);
  local_84 = local_bc;
  local_88 = local_c0;
  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
    local_90 = local_c8;
  }
  else {
    FUN_141128d50(&local_90,&local_c8);
  }
  FUN_140003ca0(&local_90,plVar10);
  FUN_1400019a0(&local_228,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_188 = &local_228;
  FUN_140002730(&local_218,&DAT_1420c73e0);
  local_180 = &local_218;
  uVar16 = FUN_1416cda40(&local_a0,2,&local_188);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,uVar16);
  FUN_1416a8c00(1);
  local_120 = 0x2a;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
  uVar24 = uVar24 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar24 >> 0x20);
  FUN_1400019a0(&local_228,&local_e8);
  local_188 = &local_228;
  FUN_1400019a0(&local_218,&local_d8);
  local_180 = &local_218;
  FUN_140002730(&local_208,&DAT_1420c7430);
  local_178 = &local_208;
  uVar24 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
  ppuVar25 = &local_188;
  uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar24,&local_188);
  FUN_1400019a0(&local_258,uVar6);
  local_84 = 0;
  local_90 = -4.0;
  iVar3 = FUN_1416d9df0(&local_258,&local_90,DAT_1420f6b08,0);
  if (iVar3 == 0) {
    local_120 = 0x2c;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_e8,uVar24,uVar26);
    uVar24 = uVar24 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_d8,uVar24,uVar26 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar24 >> 0x20);
    FUN_1400019a0(&local_228,&local_e8);
    local_188 = &local_228;
    FUN_1400019a0(&local_218,&local_d8);
    local_180 = &local_218;
    FUN_140002730(&local_208,&DAT_1420c7440);
    local_178 = &local_208;
    uVar16 = CONCAT44(uVar5,DAT_1420db3d0/*instance_place*/);
    uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,3,uVar16,&local_188);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_1400019a0(&local_258,uVar6);
    local_84 = 0;
    local_90 = -4.0;
    iVar3 = FUN_1416d9df0(&local_258,&local_90,DAT_1420f6b08,0);
    if (iVar3 != 0) {
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      local_188 = &local_258;
      if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_218);
      }
      FUN_1416ab000(&local_218,s_power_on_1420c73d0);
      local_180 = &local_218;
      uVar16 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
      uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,2,uVar16,&local_188);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      cVar2 = FUN_1416927d0(uVar6);
      if (cVar2 != '\0') {
        local_120 = 0x2d;
        if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
        local_118 = 0;
        local_110 = 0x500000000;
        if ((0x46U >> (local_240._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_248);
        }
        local_248 = 0;
        local_240 = 0x500000000;
        if ((0x46U >> (local_230._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_238);
        }
        local_238 = 0;
        local_230 = 0x500000000;
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
        FUN_1400019a0(&local_208,uVar6);
        local_178 = &local_208;
        uVar16 = CONCAT44(uVar5,DAT_1420da340/*real*/);
        uVar6 = FUN_1416ab210(param_1,local_a8,&local_238,1,uVar16,&local_178);
        uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_1400019a0(&local_1f8,uVar6);
        uVar16 = CONCAT44(uVar5,DAT_1420da4b0/*floor*/);
        local_170 = &local_1f8;
        uVar6 = FUN_1416ab210(param_1,local_a8,&local_248,1,uVar16,&local_170);
        uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_1400019a0(&local_1e8,uVar6);
        local_168 = &local_1e8;
        uVar6 = FUN_1416ab210(param_1,local_a8,&local_118,1,CONCAT44(uVar5,DAT_1420da620/*bool*/),&local_168
                             );
        FUN_1400019a0(&local_2e8,uVar6);
        FUN_1416d0720(&local_258,0x18bd2/*var:power_on*/,0x80000000,&local_2e8);
      }
    }
  }
  else {
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    uVar5 = (undefined4)(uVar24 >> 0x20);
    local_a0 = 0;
    local_98 = 0x500000000;
    local_188 = &local_258;
    if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_218);
    }
    FUN_1416ab000(&local_218,s_power_on_1420c73d0);
    local_180 = &local_218;
    uVar16 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
    uVar6 = FUN_1416ab210(param_1,local_a8,&local_a0,2,uVar16,&local_188);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    cVar2 = FUN_1416927d0(uVar6);
    if (cVar2 != '\0') {
      local_120 = 0x2b;
      if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_118);
      }
      local_118 = 0;
      local_110 = 0x500000000;
      if ((0x46U >> (local_240._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_248);
      }
      local_248 = 0;
      local_240 = 0x500000000;
      if ((0x46U >> (local_230._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_238);
      }
      local_238 = 0;
      local_230 = 0x500000000;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b39/*var:on*/);
      FUN_1400019a0(&local_208,uVar6);
      local_178 = &local_208;
      uVar16 = CONCAT44(uVar5,DAT_1420da340/*real*/);
      uVar6 = FUN_1416ab210(param_1,local_a8,&local_238,1,uVar16,&local_178);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      FUN_1400019a0(&local_1f8,uVar6);
      uVar16 = CONCAT44(uVar5,DAT_1420da4b0/*floor*/);
      local_170 = &local_1f8;
      uVar6 = FUN_1416ab210(param_1,local_a8,&local_248,1,uVar16,&local_170);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      FUN_1400019a0(&local_1e8,uVar6);
      local_168 = &local_1e8;
      uVar6 = FUN_1416ab210(param_1,local_a8,&local_118,1,CONCAT44(uVar5,DAT_1420da620/*bool*/),&local_168);
      FUN_1400019a0(&local_2f8,uVar6);
      FUN_1416d0720(&local_258,0x18bd2/*var:power_on*/,0x80000000,&local_2f8);
    }
  }
LAB_1411262af:
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
  if ((0x46U >> (local_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_478);
  }
  if ((0x46U >> (local_230._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_240._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
  }
  if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_318);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_328);
  }
  if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_338);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_348);
  }
  if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_358);
  }
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_368);
  }
  if ((0x46U >> (local_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_378);
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
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
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
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  DAT_142182d78 = (undefined8 *)local_130;
  return;
}


