// Function: gml_Object_parDoor_Flat_Draw_73 @ 0x14035eab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parDoor_Flat_Draw_73(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_RDX;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined8 **in_stack_fffffffffffffd38;
  ulonglong uVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined8 **in_stack_fffffffffffffd40;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined4 uVar18;
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
  undefined8 local_220;
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
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
  undefined1 local_178 [12];
  uint local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  uint local_ec;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 uStack_90;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_70 = 0xfffffffffffffffe;
  local_128 = "gml_Object_parDoor_Flat_Draw_73";
  local_120 = 0;
  local_130 = DAT_142182d78;
  DAT_142182d78 = &local_130;
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
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  DAT_142182d90 = param_1;
  local_b0 = in_RDX;
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  pdVar4 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1893c/*var:fnt4*/);
  local_a0._4_4_ = 0xffffff;
  local_a8 = 0;
  local_c8 = CONCAT44(0xffffff,(undefined4)local_c8);
  local_d0 = 0;
  local_100 = CONCAT44(0xffffff,(undefined4)local_100);
  local_108 = 0;
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
  local_214 = 0xffffff;
  local_220 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  iVar2 = FUN_1416f82f0(param_1,local_b0,0x40);
  if (0 < iVar2) {
    local_e8 = 0.0;
    uStack_e0 = 0;
    in_stack_fffffffffffffd40 =
         (undefined8 **)((ulonglong)in_stack_fffffffffffffd40 & 0xffffffffffffff00);
    in_stack_fffffffffffffd38 =
         (undefined8 **)((ulonglong)in_stack_fffffffffffffd38 & 0xffffffffffffff00);
    FUN_1416d0010(0x40,0x18836/*var:control*/,0x80000000,&local_e8,in_stack_fffffffffffffd38,
                  in_stack_fffffffffffffd40);
    uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
    local_80 = 1.0;
    iVar2 = FUN_1416d9df0(&local_e8,&local_80,DAT_1420f6b08,0);
    if (iVar2 == 0) {
      if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a8);
      }
      local_a8 = 0;
      local_a0._0_4_ = 0;
      local_a0._4_4_ = 5;
      uVar16 = (ulonglong)in_stack_fffffffffffffd40 & 0xffffffffffffff00;
      uVar13 = (ulonglong)in_stack_fffffffffffffd38 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_188,uVar13,uVar16 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar13 >> 0x20);
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_1f8);
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_1e8);
      FUN_1400019a0(&local_1d8,&local_f8);
      local_158 = &local_1d8;
      FUN_1400019a0(&local_1c8,&local_188);
      local_150 = &local_1c8;
      FUN_1400019a0(&local_1b8,&local_1f8);
      local_148 = &local_1b8;
      FUN_1400019a0(&local_1a8,&local_1e8);
      in_stack_fffffffffffffd40 = &local_158;
      in_stack_fffffffffffffd38 = (undefined8 **)CONCAT44(uVar15,DAT_1420da150/*point_distance*/);
      local_140 = &local_1a8;
      uVar6 = FUN_1416ab210(param_1,local_b0,&local_a8,4,in_stack_fffffffffffffd38,
                            in_stack_fffffffffffffd40);
      uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
      local_80 = 15.0;
      iVar2 = FUN_1416d9df0(uVar6,&local_80,DAT_1420f6b08,1);
      if ((iVar2 != -2) && (iVar2 < 0)) {
        uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18b45/*var:open*/);
        uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
        local_80 = 0.0;
        iVar2 = FUN_1416d9df0(uVar6,&local_80,DAT_1420f6b08,0);
        if (iVar2 == 0) {
LAB_14035fef1:
          local_98 = 0.0;
          uStack_90 = 0.0;
          in_stack_fffffffffffffd40 =
               (undefined8 **)((ulonglong)in_stack_fffffffffffffd40 & 0xffffffffffffff00);
          in_stack_fffffffffffffd38 =
               (undefined8 **)((ulonglong)in_stack_fffffffffffffd38 & 0xffffffffffffff00);
          FUN_1416d0010(0x40,0x18df5/*var:UI_OPEN*/,0x80000000,&local_98,in_stack_fffffffffffffd38,
                        in_stack_fffffffffffffd40);
          uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
          local_80 = 0.0;
          iVar2 = FUN_1416d9df0(&local_98,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0) {
            if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_d0);
            }
            local_d0 = 0;
            local_c8 = 0x500000000;
            in_stack_fffffffffffffd38 = (undefined8 **)0x0;
            uVar6 = FUN_140120860(param_1,local_b0,&local_d0,0,0);
            cVar1 = FUN_1416927d0(uVar6);
            if (cVar1 != '\0') {
              local_120 = 3;
              uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18a8f/*var:locked*/);
              uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
              uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
              local_80 = 1.0;
              iVar2 = FUN_1416d9df0(uVar6,&local_80,DAT_1420f6b08,0);
              if (iVar2 == 0) {
                local_120 = 0xb;
                if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a8);
                }
                local_a8 = 0;
                local_a0 = 0x500000000;
                FUN_140002730(&local_1d8,&DAT_1420b5670);
                ppuVar17 = &local_158;
                uVar13 = CONCAT44(uVar15,DAT_1420da090/*gpu_set_blendmode*/);
                local_158 = &local_1d8;
                FUN_1416ab210(param_1,local_b0,&local_a8,1,uVar13,ppuVar17);
                local_120 = 0xc;
                if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
                  dVar9 = *pdVar4;
                }
                else {
                  dVar9 = (double)FUN_1416940c0(pdVar4);
                }
                thunk_FUN_14176d0f0((longlong)dVar9);
                local_120 = 0xd;
                thunk_FUN_14176d130(1);
                local_120 = 0xe;
                thunk_FUN_14176d160(0);
                local_120 = 0xf;
                pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1875e/*var:arrow_colour*/);
                if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
                  dVar9 = *pdVar4;
                }
                else {
                  dVar9 = (double)FUN_1416940c0(pdVar4);
                }
                FUN_1416f15a0((longlong)dVar9);
                local_120 = 0x10;
                FUN_1416f1550(_DAT_141981f80);
                local_120 = 0x11;
                if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a8);
                }
                local_a8 = 0;
                local_a0 = 0x500000000;
                uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d5ce8/*bbox_bottom*/,0x80000000,&local_118,uVar13,
                              uVar16 & 0xffffffffffffff00);
                uVar12 = (undefined4)(uVar13 >> 0x20);
                FUN_1400019a0(&local_1d8,&local_f8);
                uStack_78 = (double)CONCAT44(local_10c,local_110);
                local_158 = &local_1d8;
                if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
                  local_80 = local_118;
                }
                else {
                  FUN_140362380(&local_80,&local_118);
                }
                FUN_140003f30(&local_80,_DAT_141986ad0);
                FUN_1400019a0(&local_1c8,&local_80);
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_150 = &local_1c8;
                if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1b8);
                }
                FUN_1416ab000(&local_1b8,s_LOCKED_1420b5660);
                uVar3 = CONCAT44(uVar12,DAT_1420d9eb0/*draw_text*/);
                local_148 = &local_1b8;
                FUN_1416ab210(param_1,local_b0,&local_a8,3,uVar3,&local_158);
                uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
                local_120 = 0x12;
                if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a8);
                }
                local_a8 = 0;
                local_a0._0_4_ = 0;
                local_a0._4_4_ = 5;
                FUN_140002730(&local_1d8,&DAT_142180168);
                in_stack_fffffffffffffd40 = &local_158;
                in_stack_fffffffffffffd38 = (undefined8 **)CONCAT44(uVar12,DAT_1420da090/*gpu_set_blendmode*/);
                local_158 = &local_1d8;
                FUN_1416ab210(param_1,local_b0,&local_a8,1,in_stack_fffffffffffffd38,
                              in_stack_fffffffffffffd40);
              }
              else {
                local_120 = 4;
                if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_108);
                }
                local_108 = 0;
                local_100 = 0x500000000;
                FUN_140002730(&local_198,&DAT_1420b5670);
                ppuVar17 = &local_138;
                uVar13 = CONCAT44(uVar15,DAT_1420da090/*gpu_set_blendmode*/);
                local_138 = &local_198;
                FUN_1416ab210(param_1,local_b0,&local_108,1,uVar13,ppuVar17);
                local_120 = 5;
                pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1875e/*var:arrow_colour*/);
                uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
                uVar16 = uVar16 & 0xffffffffffffff00;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d5ce8/*bbox_bottom*/,0x80000000,&local_118,uVar13,uVar16);
                uVar18 = (undefined4)(uVar16 >> 0x20);
                uVar15 = (undefined4)(uVar13 >> 0x20);
                if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
                  dVar9 = *pdVar4;
                }
                else {
                  dVar9 = (double)FUN_1416940c0(pdVar4);
                }
                FUN_140001a50(&local_e8,uVar3,700);
                dVar10 = local_e8;
                if ((uStack_e0 & 0xffffff00000000) != 0) {
                  dVar10 = (double)FUN_1416940c0(&local_e8);
                }
                fVar8 = (float)FUN_1416cd880(_DAT_1419835ec,CONCAT44(uVar12,(float)dVar10));
                uStack_90._0_4_ = local_110;
                uStack_90._4_4_ = local_10c;
                if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
                  local_98 = local_118;
                }
                else {
                  FUN_140362380(&local_98,&local_118);
                }
                FUN_140003f30(&local_98,_DAT_141986ad0);
                uStack_78 = (double)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
                  local_80 = local_98;
                }
                else {
                  FUN_140362380(&local_80,&local_98);
                }
                FUN_140003f30(&local_80,(double)fVar8);
                dVar10 = local_80;
                if (((ulonglong)uStack_78 & 0xffffff00000000) != 0) {
                  dVar10 = (double)FUN_1416940c0(&local_80);
                }
                dVar11 = local_f8;
                if ((local_ec & 0xffffff) != 0) {
                  dVar11 = (double)FUN_1416940c0(&local_f8);
                }
                uVar13 = CONCAT44(uVar15,(float)dVar10);
                uVar16 = CONCAT44(uVar18,0x3f800000);
                FUN_1416b84f0(param_1,0xd2,0,(float)dVar11,uVar13,uVar16,0x3f800000,0xc2340000,
                              (int)(longlong)dVar9,0x3f800000);
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_98);
                }
                if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_e8);
                }
                local_120 = 6;
                uVar16 = uVar16 & 0xffffffffffffff00;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
                uVar16 = uVar16 & 0xffffffffffffff00;
                uVar13 = uVar13 & 0xffffffffffffff00;
                FUN_1416cea80(param_1,DAT_1420d5ce8/*bbox_bottom*/,0x80000000,&local_118,uVar13,uVar16);
                uVar15 = (undefined4)(uVar16 >> 0x20);
                uVar12 = (undefined4)(uVar13 >> 0x20);
                if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
                  dVar9 = *pdVar4;
                }
                else {
                  dVar9 = (double)FUN_1416940c0(pdVar4);
                }
                FUN_140001a50(&local_e8,uVar3,700);
                dVar10 = local_e8;
                if ((uStack_e0 & 0xffffff00000000) != 0) {
                  dVar10 = (double)FUN_1416940c0(&local_e8);
                }
                fVar8 = (float)FUN_1416cd880(_DAT_1419835ec,(float)dVar10);
                uStack_90 = (double)CONCAT44(local_10c,local_110);
                if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
                  local_98 = local_118;
                }
                else {
                  FUN_140362380(&local_98,&local_118);
                }
                FUN_140003f30(&local_98,_DAT_141986ad0);
                uStack_78 = uStack_90;
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
                  local_80 = local_98;
                }
                else {
                  FUN_140362380(&local_80,&local_98);
                }
                FUN_140003f30(&local_80,(double)fVar8);
                dVar10 = local_80;
                if (((ulonglong)uStack_78 & 0xffffff00000000) != 0) {
                  dVar10 = (double)FUN_1416940c0(&local_80);
                }
                dVar11 = local_f8;
                if ((local_ec & 0xffffff) != 0) {
                  dVar11 = (double)FUN_1416940c0(&local_f8);
                }
                uVar3 = CONCAT44(uVar12,(float)dVar10);
                FUN_1416b84f0(param_1,0xd2,0,(float)dVar11,uVar3,CONCAT44(uVar15,0x3f800000),
                              0x3f800000,0xc2340000,(int)(longlong)dVar9,0x3f800000);
                uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_98);
                }
                if ((0x46U >> (uStack_e0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_e8);
                }
                local_120 = 7;
                if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a8);
                }
                local_a8 = 0;
                local_a0._0_4_ = 0;
                local_a0._4_4_ = 5;
                FUN_140002730(&local_1d8,&DAT_142180168);
                in_stack_fffffffffffffd40 = &local_158;
                in_stack_fffffffffffffd38 = (undefined8 **)CONCAT44(uVar12,DAT_1420da090/*gpu_set_blendmode*/);
                local_158 = &local_1d8;
                FUN_1416ab210(param_1,local_b0,&local_a8,1,in_stack_fffffffffffffd38,
                              in_stack_fffffffffffffd40);
              }
            }
          }
        }
        else {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18b45/*var:open*/);
          uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
          local_80 = 1.0;
          iVar2 = FUN_1416d9df0(uVar6,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0) {
            pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
            uStack_90 = pdVar5[1];
            if ((0x46U >> (*(uint *)((longlong)pdVar5 + 0xc) & 0x1f) & 1) == 0) {
              local_98 = *pdVar5;
            }
            else {
              FUN_140362380(&local_98,pdVar5);
            }
            uVar6 = _DAT_141983800;
            FUN_140003f30(&local_98,_DAT_141983800);
            uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
            local_80 = 1.0;
            iVar2 = FUN_1416d9df0(&local_98,&local_80,DAT_1420f6b08,1);
            if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_98);
            }
            if (-1 < iVar2) goto LAB_14035fef1;
          }
        }
      }
    }
  }
  local_120 = 0x17;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a/*var:fade*/);
  uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
  local_80 = 1.0;
  iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,1);
  if ((iVar2 != -2) && (iVar2 < 0)) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18910/*var:fade_in*/);
    uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
    local_80 = 0.0;
    iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,0);
    if (iVar2 == 0) {
      local_120 = 0x18;
      if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a8);
      }
      local_a8 = 0;
      local_a0._0_4_ = 0;
      local_a0._4_4_ = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a/*var:fade*/);
      FUN_140002730(&local_1d8,&DAT_142180168);
      uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
      local_80 = 1.0;
      local_158 = &local_1d8;
      FUN_140003e00(&local_80,uVar3);
      FUN_1400019a0(&local_1c8,&local_80);
      if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      in_stack_fffffffffffffd38 = &local_158;
      local_150 = &local_1c8;
      FUN_14003ee60(param_1,local_b0,&local_a8,2,in_stack_fffffffffffffd38);
      local_120 = 0x19;
      local_80 = 0.0;
      uStack_78 = 0.0;
      FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&local_80);
      goto LAB_14035f347;
    }
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18910/*var:fade_in*/);
  uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
  local_80 = 1.0;
  iVar2 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,1);
  if (-1 < iVar2) {
    local_120 = 0x1d;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 5;
    if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a/*var:fade*/);
    FUN_140002730(&local_1d8,&DAT_1420b5670);
    local_158 = &local_1d8;
    FUN_1400019a0(&local_1c8,uVar3);
    local_150 = &local_1c8;
    FUN_140002730(&local_1b8,&DAT_142180168);
    local_148 = &local_1b8;
    uVar3 = FUN_1416cda40(&local_d0,2,&local_158);
    FUN_1400019a0(&local_1a8,uVar3);
    in_stack_fffffffffffffd38 = &local_148;
    local_140 = &local_1a8;
    FUN_14003ee60(param_1,local_b0,&local_a8,2,in_stack_fffffffffffffd38);
    local_120 = 0x1e;
    local_80 = 0.0;
    uStack_78 = 0.0;
    FUN_1416d0790(0x40,0x18836/*var:control*/,0x80000000,&local_80);
  }
LAB_14035f347:
  local_e8 = 0.0;
  uStack_e0 = 0;
  uVar16 = (ulonglong)in_stack_fffffffffffffd40 & 0xffffffffffffff00;
  uVar13 = (ulonglong)in_stack_fffffffffffffd38 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18ad9/*var:mode*/,0x80000000,&local_e8,uVar13,uVar16);
  uStack_78 = (double)((ulonglong)uStack_78 & 0xffffffff);
  local_80 = 3.0;
  iVar2 = FUN_1416d9df0(&local_e8,&local_80,DAT_1420f6b08,0);
  if (iVar2 != 0) {
    local_120 = 0x22;
    FUN_1416f1550(_DAT_141981f80);
    local_120 = 0x23;
    FUN_1416f15a0(0x80);
    local_120 = 0x24;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0x500000000;
    if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0x500000000;
    if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    local_108 = 0;
    local_100 = 0x500000000;
    local_200 = (**(code **)(*param_1 + 8))(param_1,0x18b0e/*var:n*/);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18c30/*var:rm*/);
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_188,uVar13,uVar16 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar13 >> 0x20);
    FUN_1400019a0(&local_1d8,local_200);
    local_158 = &local_1d8;
    FUN_1400019a0(&local_1c8,uVar3);
    local_150 = &local_1c8;
    FUN_1400019a0(&local_1b8,&local_f8);
    local_148 = &local_1b8;
    FUN_1400019a0(&local_1a8,&local_188);
    local_140 = &local_1a8;
    uVar7 = CONCAT44(uVar12,DAT_1420da2b0/*string*/);
    uVar6 = FUN_1416ab210(param_1,local_b0,&local_108,1,uVar7,&local_150);
    uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(local_178,&DAT_1420b566a);
    uVar14 = CONCAT44(uVar12,DAT_1420da2b0/*string*/);
    uVar7 = FUN_1416ab210(param_1,local_b0,&local_d0,1,uVar14,&local_158);
    uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
    FUN_1416ac010(&local_168,&DAT_1420b5667);
    local_b4 = local_15c;
    local_b8 = local_160;
    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
      local_c0 = local_168;
    }
    else {
      FUN_140362380(&local_c0,&local_168);
    }
    FUN_140003ca0(&local_c0,uVar7);
    uStack_90._0_4_ = local_b8;
    uStack_90._4_4_ = local_b4;
    if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
      local_98 = local_c0;
    }
    else {
      FUN_140362380(&local_98,&local_c0);
    }
    FUN_140003ca0(&local_98,local_178);
    uStack_78._0_4_ = (undefined4)uStack_90;
    uStack_78._4_4_ = uStack_90._4_4_;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
      local_80 = local_98;
    }
    else {
      FUN_140362380(&local_80,&local_98);
    }
    FUN_140003ca0(&local_80,uVar6);
    FUN_1400019a0(&local_198,&local_80);
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_98);
    }
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(local_178);
    }
    uVar6 = CONCAT44(uVar12,DAT_1420d9eb0/*draw_text*/);
    local_138 = &local_198;
    FUN_1416ab210(param_1,local_b0,&local_a8,3,uVar6,&local_148);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_120 = 0x25;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0x500000000;
    FUN_140002730(&local_1d8,&DAT_1420b5680);
    local_158 = &local_1d8;
    FUN_140002730(&local_1c8,&DAT_1420b5690);
    local_150 = &local_1c8;
    FUN_140002730(&local_1b8,&DAT_1420b56a0);
    ppuVar17 = &local_158;
    uVar13 = CONCAT44(uVar12,DAT_1420dac40/*merge_colour*/);
    local_148 = &local_1b8;
    pdVar4 = (double *)FUN_1416ab210(param_1,local_b0,&local_a8,3,uVar13,ppuVar17);
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar4;
    }
    else {
      dVar9 = (double)FUN_1416940c0(pdVar4);
    }
    FUN_1416f15a0((int)dVar9);
    local_120 = 0x26;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 5;
    if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0x500000000;
    if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    local_108 = 0;
    local_100 = 0x500000000;
    uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_f8,uVar13,uVar16);
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_188,uVar13,uVar16 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar13 >> 0x20);
    FUN_1400019a0(&local_1d8,local_200);
    local_158 = &local_1d8;
    FUN_1400019a0(&local_1c8,uVar3);
    local_150 = &local_1c8;
    FUN_1400019a0(&local_1b8,&local_f8);
    local_148 = &local_1b8;
    FUN_140017bd0(&local_80,&local_188,1);
    FUN_1400019a0(&local_1a8,&local_80);
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_140 = &local_1a8;
    uVar6 = CONCAT44(uVar12,DAT_1420da2b0/*string*/);
    uVar3 = FUN_1416ab210(param_1,local_b0,&local_108,1,uVar6,&local_150);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_1416ac010(local_178,&DAT_1420b566a);
    uVar7 = CONCAT44(uVar12,DAT_1420da2b0/*string*/);
    uVar6 = FUN_1416ab210(param_1,local_b0,&local_d0,1,uVar7,&local_158);
    uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&local_168,&DAT_1420b5667);
    local_b4 = local_15c;
    local_b8 = local_160;
    if ((0x46U >> (local_15c & 0x1f) & 1) == 0) {
      local_c0 = local_168;
    }
    else {
      FUN_140362380(&local_c0,&local_168);
    }
    FUN_140003ca0(&local_c0,uVar6);
    uStack_90 = (double)CONCAT44(local_b4,local_b8);
    if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
      local_98 = local_c0;
    }
    else {
      FUN_140362380(&local_98,&local_c0);
    }
    FUN_140003ca0(&local_98,local_178);
    uStack_78 = uStack_90;
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) == 0) {
      local_80 = local_98;
    }
    else {
      FUN_140362380(&local_80,&local_98);
    }
    FUN_140003ca0(&local_80,uVar3);
    FUN_1400019a0(&local_198,&local_80);
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_98);
    }
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(local_178);
    }
    local_138 = &local_198;
    FUN_1416ab210(param_1,local_b0,&local_a8,3,CONCAT44(uVar12,DAT_1420d9eb0/*draw_text*/),&local_148);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
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
  if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_c8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
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
  DAT_142182d78 = (undefined8 *)local_130;
  return;
}


