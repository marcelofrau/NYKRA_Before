// Function: gml_Object_oFx_Step_2 @ 0x141300af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFx_Step_2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar11;
  undefined4 uVar15;
  undefined8 **in_stack_fffffffffffffca8;
  ulonglong uVar16;
  double **in_stack_fffffffffffffcb0;
  ulonglong uVar17;
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
  double *local_268;
  double *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  double *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  double local_1e8;
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
  undefined8 local_188;
  uint local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  double local_f0;
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_100 = "gml_Object_oFx_Step_2";
  local_f8 = 0;
  local_108 = DAT_142182d78;
  DAT_142182d78 = &local_108;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
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
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  DAT_142182d90 = param_1;
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18998/*var:GRV_SPD*/);
  local_84 = 0xffffff;
  local_90 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885e/*var:CX*/);
  local_d8 = CONCAT44(0xffffff,(undefined4)local_d8);
  local_e0 = 0;
  local_c8 = CONCAT44(0xffffff,(undefined4)local_c8);
  local_d0 = 0;
  local_b8 = CONCAT44(0xffffff,(undefined4)local_b8);
  local_c0 = 0;
  local_a8 = CONCAT44(0xffffff,(undefined4)local_a8);
  local_b0 = 0;
  local_120 = CONCAT44(0xffffff,(undefined4)local_120);
  local_128 = 0;
  local_110 = CONCAT44(0xffffff,(undefined4)local_110);
  local_118 = 0;
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
  local_27c = 0xffffff;
  local_288 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18997/*var:grv*/);
  local_74 = 0;
  local_80 = 0;
  iVar2 = FUN_1416d9df0(uVar5,&local_80,DAT_1420f6b08,0);
  if (iVar2 != 0) {
    local_f8 = 7;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18997/*var:grv*/);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x186e2/*var:add_grv*/);
    local_74 = *(uint *)((longlong)puVar6 + 0xc);
    local_78 = *(undefined4 *)(puVar6 + 1);
    if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
      local_80 = *puVar6;
    }
    else {
      FUN_141303bd0(&local_80,puVar6);
    }
    FUN_140001fe0(&local_80,uVar3);
    FUN_140003ca0(uVar5,&local_80);
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_f8 = 8;
    in_stack_fffffffffffffcb0 =
         (double **)((ulonglong)in_stack_fffffffffffffcb0 & 0xffffffffffffff00);
    in_stack_fffffffffffffca8 =
         (undefined8 **)((ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_90,in_stack_fffffffffffffca8,
                  in_stack_fffffffffffffcb0);
    FUN_140003ca0(&local_90,uVar5);
    FUN_1416cfae0(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_90);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18b8b/*var:phys*/);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 != '\0') {
      local_f8 = 9;
      if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e0);
      }
      local_e0 = 0;
      local_d8 = 0x500000000;
      if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d0);
      }
      local_d0 = 0;
      local_c8 = 0x500000000;
      if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      local_c0 = 0;
      local_b8 = 0x500000000;
      (**(code **)(*param_1 + 0x10))(param_1,0x186e2/*var:add_grv*/);
      uVar17 = (ulonglong)in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
      uVar16 = (ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f0,uVar16,uVar17);
      FUN_140004520(&local_80,&local_f0,_DAT_141982ef8);
      FUN_1400019a0(&local_1e8,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      uVar16 = uVar16 & 0xffffffffffffff00;
      local_268 = &local_1e8;
      FUN_1416cea80(param_1,DAT_1420d5ca8/*yprevious*/,0x80000000,&local_228,uVar16,uVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar16 >> 0x20);
      FUN_140004520(&local_80,&local_228,_DAT_141982ef8);
      FUN_1400019a0(&local_1d8,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      uVar5 = CONCAT44(uVar15,DAT_1420da4b0/*floor*/);
      local_260 = &local_1d8;
      uVar3 = FUN_1416ab210(param_1,param_2,&local_d0,1,uVar5,&local_268);
      uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_1400019a0(&local_1c8,uVar3);
      in_stack_fffffffffffffcb0 = &local_260;
      local_258 = &local_1c8;
      uVar3 = FUN_1416ab210(param_1,param_2,&local_c0,1,CONCAT44(uVar15,DAT_1420da4b0/*floor*/),
                            in_stack_fffffffffffffcb0);
      FUN_1400019a0(&local_1b8,uVar3);
      in_stack_fffffffffffffca8 = &local_258;
      local_250 = &local_1b8;
      uVar3 = FUN_14012cc90(param_1,param_2,&local_e0,2,in_stack_fffffffffffffca8);
      local_74 = 0;
      local_80 = 0;
      iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,1);
      if ((iVar2 != -2) && (iVar2 < 1)) {
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        if ((0x46U >> (local_120._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_128);
        }
        local_128 = 0;
        local_120 = 0x500000000;
        if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
        local_118 = 0;
        local_110 = 0x500000000;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x186e2/*var:add_grv*/);
        uVar17 = (ulonglong)in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
        uVar16 = (ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f0,uVar16,uVar17);
        FUN_140004520(&local_80,&local_f0,_DAT_141982ef8);
        FUN_1400019a0(&local_1a8,&local_80);
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        uVar16 = uVar16 & 0xffffffffffffff00;
        local_248 = &local_1a8;
        FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_90,uVar16,uVar17 & 0xffffffffffffff00)
        ;
        uVar15 = (undefined4)(uVar16 >> 0x20);
        local_94 = local_84;
        local_98 = local_88;
        if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
          local_a0 = local_90;
        }
        else {
          FUN_141303bd0(&local_a0,&local_90);
        }
        FUN_140003ca0(&local_a0,uVar3);
        FUN_140004520(&local_80,&local_a0,_DAT_141982ef8);
        FUN_1400019a0(&local_198,&local_80);
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        uVar5 = CONCAT44(uVar15,DAT_1420da4b0/*floor*/);
        local_240 = &local_198;
        uVar3 = FUN_1416ab210(param_1,param_2,&local_128,1,uVar5,&local_248);
        uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
        FUN_1400019a0(&local_188,uVar3);
        in_stack_fffffffffffffcb0 = &local_240;
        local_238 = &local_188;
        uVar3 = FUN_1416ab210(param_1,param_2,&local_118,1,CONCAT44(uVar15,DAT_1420da4b0/*floor*/),
                              in_stack_fffffffffffffcb0);
        FUN_1400019a0(&local_178,uVar3);
        in_stack_fffffffffffffca8 = &local_238;
        local_230 = &local_178;
        uVar3 = FUN_14012cc90(param_1,param_2,&local_b0,2,in_stack_fffffffffffffca8);
        local_74 = 0;
        local_80 = 0;
        iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,0);
        if (iVar2 != 0) {
          local_f8 = 0xb;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x186e2/*var:add_grv*/);
          if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = 0;
          local_f8 = 0xc;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18997/*var:grv*/);
          if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = 0;
          local_f8 = 0xd;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18747/*var:animate*/);
          if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = 0;
        }
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18ba7/*var:player*/);
  local_74 = 0;
  local_80 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  uVar3 = DAT_1420f6b08;
  iVar2 = FUN_1416d9df0(uVar5,&local_80,DAT_1420f6b08,0);
  uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (iVar2 != 0) goto LAB_141301b62;
  local_f8 = 0x13;
  if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  local_e0 = 0;
  local_d8 = 0x500000000;
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  local_d0 = 0;
  local_c8 = 0x500000000;
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_c0 = 0;
  local_b8 = 0x500000000;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  uVar17 = (ulonglong)in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
  uVar16 = (ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5aa8/*direction*/,0x80000000,&local_168,uVar16,uVar17);
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f0,uVar16,uVar17);
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_90,uVar16,uVar17);
  FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_158);
  FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_148);
  FUN_1400019a0(&local_1e8,&local_168);
  local_268 = &local_1e8;
  if ((local_13c & 0xffffff) == 0) {
    uVar7 = (undefined4)local_148;
    uVar12 = (undefined4)((ulonglong)local_148 >> 0x20);
    if ((local_14c & 0xffffff) == 0) goto LAB_141301833;
LAB_1413017da:
    uVar3 = FUN_1416940c0(&local_158);
    uVar8 = (undefined4)uVar3;
    uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((local_84 & 0xffffff) != 0) goto LAB_1413017f5;
LAB_141301847:
    uVar9 = (undefined4)local_90;
    uVar14 = (undefined4)((ulonglong)local_90 >> 0x20);
    dVar11 = local_f0;
  }
  else {
    uVar3 = FUN_1416940c0(&local_148);
    uVar7 = (undefined4)uVar3;
    uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((local_14c & 0xffffff) != 0) goto LAB_1413017da;
LAB_141301833:
    uVar8 = (undefined4)local_158;
    uVar13 = (undefined4)((ulonglong)local_158 >> 0x20);
    if ((local_84 & 0xffffff) == 0) goto LAB_141301847;
LAB_1413017f5:
    uVar3 = FUN_1416940c0(&local_90);
    uVar9 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
    dVar11 = local_f0;
  }
  local_f0 = dVar11;
  if ((local_e4 & 0xffffff) != 0) {
    dVar11 = (double)FUN_1416940c0(&local_f0);
  }
  fVar10 = (float)FUN_1416cdb80((float)dVar11,(float)(double)CONCAT44(uVar14,uVar9),
                                CONCAT44(uVar15,(float)(double)CONCAT44(uVar13,uVar8)),
                                (float)(double)CONCAT44(uVar12,uVar7));
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = (double)fVar10;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_260 = &local_1d8;
  FUN_1416cea80(param_1,DAT_1420d5a98/*speed*/,0x80000000,&local_138,uVar16,uVar17 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar16 >> 0x20);
  local_74 = 0;
  local_80 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  FUN_140001fe0(&local_80,&local_138);
  FUN_1400019a0(&local_1c8,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  uVar5 = CONCAT44(uVar15,DAT_1420d9ff0/*sqr*/);
  local_258 = &local_1c8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_b0,1,uVar5,&local_258);
  uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_74 = 0;
  local_80 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
  FUN_140003ca0(&local_80,uVar3);
  FUN_1400019a0(&local_1b8,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  uVar5 = CONCAT44(uVar15,DAT_1420d9ff0/*sqr*/);
  local_250 = &local_1b8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_c0,1,uVar5,&local_250);
  uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  FUN_140004520(&local_80,uVar3,DAT_141982e78);
  FUN_1400019a0(&local_1a8,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_248 = &local_1a8;
  FUN_140002730(&local_198,&DAT_1420c9538);
  uVar5 = CONCAT44(uVar15,DAT_1420da0c0/*mean*/);
  local_240 = &local_198;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_d0,2,uVar5,&local_248);
  in_stack_fffffffffffffcb0 = &local_268;
  in_stack_fffffffffffffca8 = (undefined8 **)CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_1420dadf0/*angle_difference*/)
  ;
  puVar6 = (undefined8 *)
           FUN_1416ab210(param_1,param_2,&local_e0,2,in_stack_fffffffffffffca8,
                         in_stack_fffffffffffffcb0);
  local_74 = *(uint *)((longlong)puVar6 + 0xc);
  local_78 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_80 = *puVar6;
  }
  else {
    FUN_141303bd0(&local_80,puVar6);
  }
  FUN_140004620(&local_80,uVar3);
  FUN_140003e00(&local_168,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  FUN_1416cfae0(param_1,DAT_1420d5aa8/*direction*/,0x80000000,&local_168);
LAB_141301b62:
  local_f8 = 0x16;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18953/*var:fric*/);
  uVar17 = (ulonglong)in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
  uVar16 = (ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5a98/*speed*/,0x80000000,&local_138,uVar16,uVar17);
  FUN_140001fe0(&local_138,uVar3);
  FUN_1416cfae0(param_1,DAT_1420d5a98/*speed*/,0x80000000,&local_138);
  local_f8 = 0x18;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18706/*var:alph*/);
  FUN_1400019a0(&local_218,uVar5);
  FUN_1416cfae0(param_1,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_218);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a/*var:fade*/);
  local_74 = 0;
  local_80 = 0;
  iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,1);
  if (0 < iVar2) {
    local_f8 = 0x1a;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18706/*var:alph*/);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a/*var:fade*/);
    local_74 = 0;
    local_80 = 0x3fefae147ae147ae/*0.99*/;
    FUN_140001fe0(&local_80,uVar3);
    FUN_140001fe0(uVar5,&local_80);
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18912/*var:fade_out*/);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 != '\0') {
    local_f8 = 0x1f;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18706/*var:alph*/);
    local_74 = 0;
    local_80 = 0x3feccccccccccccd/*0.9*/;
    FUN_140001fe0(uVar5,&local_80);
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
  }
  FUN_140003ba0(&local_a0,uVar5,_DAT_141985af0);
  local_74 = 0;
  local_80 = 0;
  iVar2 = FUN_1416d9df0(&local_a0,&local_80,DAT_1420f6b08,1);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_f8 = 0x20;
    (**(code **)(*param_1 + 0x10))(param_1,0x18706/*var:alph*/);
    FUN_1416f8210(param_1,param_2,0,0);
  }
  local_f8 = 0x21;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18747/*var:animate*/);
  FUN_1400019a0(&local_208,uVar3);
  FUN_1416cfae0(param_1,DAT_1420d5af8/*image_speed*/,0x80000000,&local_208);
  uVar17 = uVar17 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_1f8,uVar16,uVar17);
  local_74 = 0;
  local_80 = 0x4078800000000000/*392 (obj:oDlg_Aenox)*/;
  iVar2 = FUN_1416d9df0(&local_1f8,&local_80,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_f8 = 0x23;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f0,uVar16 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    FUN_140017bd0(&local_80,uVar4,0x28);
    iVar2 = FUN_1416d9df0(&local_f0,&local_80,DAT_1420f6b08,1);
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      local_f8 = 0x24;
      FUN_1416f8210(param_1,param_2,0,0);
    }
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
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
  if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_120._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
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
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
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
  DAT_142182d78 = (undefined8 *)local_108;
  return;
}


