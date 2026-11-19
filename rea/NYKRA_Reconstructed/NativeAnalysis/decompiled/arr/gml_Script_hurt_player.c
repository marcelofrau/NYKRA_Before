// Function: gml_Script_hurt_player @ 0x1400e28e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_hurt_player
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

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
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffd68;
  undefined4 uVar20;
  ulonglong uVar18;
  undefined8 **ppuVar19;
  ulonglong in_stack_fffffffffffffd70;
  undefined1 local_288 [16];
  longlong local_278;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 local_210;
  undefined8 local_208;
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
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 *local_158;
  double local_150;
  uint local_144;
  double local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 *local_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  char *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a4;
  undefined1 *local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_f8 = "gml_Script_hurt_player";
  local_f0 = 0;
  local_100 = DAT_142182d78;
  DAT_142182d78 = &local_100;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
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
  local_15c = 0xffffff;
  local_168 = 0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0;
  DAT_142182d90 = param_1;
  local_120 = param_3;
  local_c8 = in_RDX;
  local_b0 = param_1;
  local_a4 = param_4;
  local_158 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1896f);
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187d0);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187cd);
  uVar6 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187cc);
  local_b8 = (ulonglong)(uint)local_b8;
  local_c0 = 0;
  local_e0 = (ulonglong)(uint)local_e0;
  local_e8 = 0;
  *(undefined4 *)((longlong)local_120 + 0xc) = 5;
  *local_120 = 0;
  FUN_1416ab750(DAT_1420dcfd0);
  local_94 = 0;
  local_a0 = (undefined1 *)0x4050000000000000;
  iVar3 = FUN_1416ab810(local_288,&local_b0,&local_c8,&local_a0);
  local_210 = uVar4;
  local_208 = uVar5;
  local_200 = uVar6;
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  fVar11 = DAT_141983924;
  if (0 < iVar3) {
    do {
      uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
      local_f0 = 4;
      in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
      in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
      FUN_1416cea80(local_b0,DAT_1420d58e8,0x80000000,&local_150,in_stack_fffffffffffffd68,
                    in_stack_fffffffffffffd70);
      in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
      in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
      FUN_1416cea80(local_b0,DAT_1420d58f8,0x80000000,&local_140,in_stack_fffffffffffffd68,
                    in_stack_fffffffffffffd70);
      pdVar9 = (double *)&DAT_1420b1000;
      if (2 < local_a4) {
        pdVar9 = (double *)param_5[2];
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar9;
      }
      else {
        dVar12 = (double)FUN_1416940c0();
      }
      pdVar9 = (double *)&DAT_1420b1000;
      if (1 < local_a4) {
        pdVar9 = (double *)param_5[1];
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar9;
      }
      else {
        dVar13 = (double)FUN_1416940c0();
      }
      dVar14 = local_140;
      if ((local_134 & 0xffffff) != 0) {
        dVar14 = (double)FUN_1416940c0(&local_140);
      }
      dVar15 = local_150;
      if ((local_144 & 0xffffff) != 0) {
        dVar15 = (double)FUN_1416940c0(&local_150);
      }
      param_2 = CONCAT44(uVar17,(float)dVar14);
      fVar10 = (float)FUN_1416cdb80((float)dVar15,param_2,(float)dVar13,(float)dVar12);
      if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_cc = 0;
      local_d8 = (double)(fVar10 + fVar11);
      uVar4 = (**(code **)(*local_b0 + 8))(local_b0,0x18864);
      local_94 = 0;
      local_a0 = (undefined1 *)0x0;
      iVar3 = FUN_1416d9df0(uVar4,&local_a0,DAT_1420f6b08,1);
      uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        local_f0 = 6;
        if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c0);
        }
        uVar20 = (undefined4)(in_stack_fffffffffffffd68 >> 0x20);
        local_c0 = 0;
        local_b8 = 0x500000000;
        FUN_140002730(&local_1f8,&DAT_1420b2f70);
        if (local_a4 < 1) {
          puVar7 = &DAT_1420b1000;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        local_268 = &local_1f8;
        FUN_1400019a0(&local_1e8,puVar7);
        local_260 = &local_1e8;
        uVar4 = FUN_1416cd900(&local_c0,2,&local_268);
        FUN_1400019a0(&local_130,uVar4);
        local_f0 = 7;
        if ((0x46U >> (*(uint *)((longlong)local_158 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(local_158);
        }
        *(undefined4 *)((longlong)local_158 + 0xc) = 0;
        *local_158 = 0;
        local_f0 = 8;
        puVar7 = (undefined8 *)(**(code **)(*local_b0 + 0x10))(local_b0,0x189cf);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        local_f0 = 9;
        puVar8 = (undefined8 *)(**(code **)(*local_b0 + 0x10))(local_b0,0x18e26);
        if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        local_f0 = 10;
        dVar12 = local_d8;
        if ((local_cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_1416940c0(&local_d8);
        }
        FUN_140001a50(&local_a0,&local_130,2);
        puVar16 = local_a0;
        if ((local_94 & 0xffffff) != 0) {
          puVar16 = (undefined1 *)FUN_1416940c0(&local_a0);
        }
        fVar11 = (float)FUN_1416cd800((float)(double)puVar16,CONCAT44(uVar17,(float)dVar12));
        FUN_140003f30(puVar7,(double)fVar11 * _DAT_141981ea8);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_f0 = 0xb;
        dVar12 = local_d8;
        if ((local_cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_1416940c0(&local_d8);
        }
        FUN_140001a50(&local_118,&local_130,2);
        if ((uStack_110 & 0xffffff00000000) != 0) {
          local_118 = (double)FUN_1416940c0(&local_118);
        }
        fVar11 = (float)FUN_1416cd880((float)local_118,(float)dVar12);
        local_a0 = (undefined1 *)((double)fVar11 * _DAT_141981ea8);
        local_94 = 0;
        FUN_140003e00(puVar8,&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
        local_f0 = 0xc;
        if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c0);
        }
        local_c0 = 0;
        local_b8 = 0x500000000;
        if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0x500000000;
        uVar4 = (**(code **)(*local_b0 + 0x10))(local_b0,0x18864);
        FUN_140001a50(&local_a0,&local_130,0x11);
        FUN_1400019a0(&local_1f8,&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_268 = &local_1f8;
        FUN_140002730(&local_1e8,&DAT_1420b2f80);
        uVar6 = CONCAT44(uVar20,DAT_1420da0c0);
        local_260 = &local_1e8;
        uVar5 = FUN_1416ab210(local_b0,local_c8,&local_e8,2,uVar6,&local_268);
        uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
        FUN_1400019a0(&local_1d8,uVar5);
        uVar18 = CONCAT44(uVar17,DAT_1420da140);
        ppuVar19 = &local_258;
        local_258 = &local_1d8;
        pdVar9 = (double *)FUN_1416ab210(local_b0,local_c8,&local_c0,1,uVar18,&local_258);
        local_94 = *(uint *)((longlong)pdVar9 + 0xc);
        local_98 = *(undefined4 *)(pdVar9 + 1);
        if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
          local_a0 = (undefined1 *)*pdVar9;
        }
        else {
          FUN_1400e4820(&local_a0,pdVar9);
        }
        FUN_140001c50(&local_a0,1);
        FUN_1416a8cb0(local_b0);
        FUN_1400019a0(uVar4,&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        FUN_1416a8c00(1);
        local_f0 = 0xd;
        local_118 = 0.0;
        uStack_110 = 0;
        FUN_1416d0010(0x40,0x189cb,0x80000000,&local_118,uVar18 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        if (local_a4 < 1) {
          puVar7 = &DAT_1420b1000;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        uVar4 = FUN_1416cfcc0(0x40);
        FUN_1416a8cb0(uVar4);
        FUN_140003e00(&local_118,puVar7);
        FUN_1416a8c00(1);
        FUN_1416d0790(0x40,0x189cb,0x80000000,&local_118);
        local_f0 = 0xe;
        FUN_1416a8cb0(DAT_14218ecf8);
        FUN_1400019a0(local_210,&local_130);
        FUN_1416a8c00(1);
        local_f0 = 0xf;
        FUN_140001a50(&local_a0,&local_130,2);
        FUN_1416a8cb0(DAT_14218ecf8);
        FUN_1400019a0(local_208,&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        FUN_1416a8c00(1);
        local_f0 = 0x10;
        FUN_140017bd0(&local_a0,&local_d8,0xb4);
        FUN_1416a8cb0(DAT_14218ecf8);
        FUN_1400019a0(local_200,&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        FUN_1416a8c00(1);
        local_f0 = 0x11;
        if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c0);
        }
        local_c0 = 0;
        local_b8 = 0x500000000;
        FUN_140002730(&local_1f8,&DAT_1420b2f90);
        ppuVar19 = &local_268;
        local_268 = &local_1f8;
        FUN_140087080(local_b0,local_c8,&local_c0,1,&local_268);
        uVar17 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
        if (local_a4 < 4) {
          puVar7 = &DAT_1420b1000;
        }
        else {
          puVar7 = (undefined8 *)param_5[3];
        }
        local_94 = 0;
        local_a0 = (undefined1 *)0x0;
        iVar3 = FUN_1416d9df0(puVar7,&local_a0,DAT_1420f6b08,0);
        if (iVar3 != 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0,0x189cf);
          (**(code **)(*local_b0 + 0x10))(local_b0,0x18e26);
          if (local_a4 < 4) {
            puVar7 = &DAT_1420b1000;
          }
          else {
            puVar7 = (undefined8 *)param_5[3];
          }
          local_94 = 0;
          local_a0 = &DAT_bff0000000000000;
          iVar3 = FUN_1416d9df0(puVar7,&local_a0,DAT_1420f6b08,0);
          if (iVar3 != 0) {
            local_f0 = 0x13;
            if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_c0);
            }
            local_c0 = 0;
            local_b8 = 0x500000000;
            if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_e8);
            }
            local_e8 = 0;
            local_e0 = 0x500000000;
            FUN_140002730(&local_1f8,&DAT_1420b2f70);
            local_268 = &local_1f8;
            uVar4 = FUN_1416cdc60((int)DAT_141983968,_DAT_141983970);
            if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_1e8);
            }
            local_1dc = 0;
            if (local_a4 < 4) {
              puVar7 = &DAT_1420b1000;
            }
            else {
              puVar7 = (undefined8 *)param_5[3];
            }
            local_260 = &local_1e8;
            local_1e8 = uVar4;
            FUN_1400019a0(&local_1d8,puVar7);
            local_258 = &local_1d8;
            FUN_140002730(&local_1c8,&DAT_1420b2fa0);
            local_250 = &local_1c8;
            FUN_140002730(&local_1b8,&DAT_14217f428);
            local_248 = &local_1b8;
            uVar4 = FUN_1416ab210(local_b0,local_c8,&local_e8,2,CONCAT44(uVar17,DAT_1420da0c0),
                                  &local_268);
            FUN_1400019a0(&local_1a8,uVar4);
            local_240 = &local_1a8;
            FUN_140002730(&local_198,&DAT_1420b2f70);
            local_238 = &local_198;
            FUN_140002730(&local_188,&DAT_14217f428);
            if (local_a4 < 2) {
              puVar7 = &DAT_1420b1000;
            }
            else {
              puVar7 = (undefined8 *)param_5[1];
            }
            local_230 = &local_188;
            FUN_1400019a0(&local_178,puVar7);
            if (local_a4 < 3) {
              puVar7 = &DAT_1420b1000;
            }
            else {
              puVar7 = (undefined8 *)param_5[2];
            }
            local_228 = &local_178;
            FUN_1400019a0(&local_168,puVar7);
            local_220 = &local_168;
            FUN_1400d4470(local_b0,local_c8,&local_c0,8,&local_258);
          }
        }
        local_f0 = 0x15;
        if ((0x46U >> (*(uint *)((longlong)local_120 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(local_120);
        }
        *(undefined4 *)((longlong)local_120 + 0xc) = 0;
        *local_120 = 0x3ff0000000000000;
        uVar18 = local_e0;
        goto joined_r0x0001400e37dd;
      }
      cVar2 = FUN_1416abe60(local_288,&local_b0,&local_c8);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(local_288,&local_b0,&local_c8);
  uVar18 = local_e0;
joined_r0x0001400e37dd:
  if (local_278 == 0) {
    local_e0._4_4_ = (uint)(uVar18 >> 0x20);
    uVar1 = local_e0._4_4_;
  }
  else {
    local_e0 = uVar18;
    thunk_FUN_1416c46f0();
    uVar18 = local_e0;
    uVar1 = local_e0._4_4_;
  }
  local_e0 = uVar18;
  local_278 = 0;
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    local_278 = 0;
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_b8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
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
  DAT_142182d78 = (undefined8 *)local_100;
  return local_120;
}


