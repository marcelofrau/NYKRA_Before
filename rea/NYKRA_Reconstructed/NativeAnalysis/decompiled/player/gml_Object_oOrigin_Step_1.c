// Function: gml_Object_oOrigin_Step_1 @ 0x140a01ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOrigin_Step_1(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
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
  undefined8 local_220;
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  uint local_1f4;
  undefined8 local_1f0;
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
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_e8 = "gml_Object_oOrigin_Step_1";
  local_e0 = 0;
  local_f0 = DAT_142182d78;
  DAT_142182d78 = &local_f0;
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
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c9);
  local_17c = 0xffffff;
  local_188 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1f0 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187d0);
  local_a0._4_4_ = 0xffffff;
  local_a8 = 0;
  local_d0 = CONCAT44(0xffffff,(undefined4)local_d0);
  local_d8 = 0;
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
  local_e0 = 1;
  local_98 = 0;
  local_90 = 0x500000000;
  FUN_1400019a0(&local_1e8,uVar2);
  local_148 = &local_1e8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_98,1,DAT_1420da4a0,&local_148);
  FUN_1400019a0(&local_188,uVar3);
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0x500000000;
  FUN_1400019a0(&local_1d8,uVar2);
  local_140 = &local_1d8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da560,&local_140);
  FUN_1400019a0(&local_220,uVar3);
  local_e0 = 2;
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  local_98 = 0;
  local_90 = 0x500000000;
  FUN_1400019a0(&local_1e8,uVar2);
  local_148 = &local_1e8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_98,1,DAT_1420da3b0,&local_148);
  FUN_1400019a0(&local_200,uVar3);
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0x500000000;
  FUN_1400019a0(&local_1d8,uVar2);
  ppuVar9 = &local_140;
  uVar8 = DAT_1420da3c0;
  local_140 = &local_1d8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da3c0,ppuVar9);
  FUN_1400019a0(&local_210,uVar3);
  local_e0 = 4;
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  local_98 = 0;
  local_90 = 0x500000000;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x186d1);
  FUN_1416cea80(param_1,DAT_1420d59f8,0x80000000,&local_118,uVar8 & 0xffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  FUN_1400019a0(&local_1e8,&local_118);
  local_148 = &local_1e8;
  FUN_140004520(&local_108,&local_200,_DAT_141982c40);
  local_64 = local_17c;
  local_68 = local_180;
  if ((0x46U >> (local_17c & 0x1f) & 1) == 0) {
    local_70 = local_188;
  }
  else {
    FUN_140a04c50(&local_70,&local_188);
  }
  FUN_140003ca0(&local_70,&local_108);
  FUN_1400019a0(&local_1d8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  ppuVar9 = &local_148;
  uVar8 = DAT_1420da0c0;
  local_140 = &local_1d8;
  puVar4 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_98,2,DAT_1420da0c0,ppuVar9);
  uStack_80 = puVar4[1];
  if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) == 0) {
    local_88 = *puVar4;
  }
  else {
    FUN_140a04c50(&local_88,puVar4);
  }
  FUN_140003e00(&local_88,&local_118);
  FUN_140004520(&local_108,&local_88,DAT_141987d40);
  local_64 = local_10c;
  local_68 = local_110;
  if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
    local_70 = local_118;
  }
  else {
    FUN_140a04c50(&local_70,&local_118);
  }
  FUN_140003ca0(&local_70,&local_108);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  FUN_1416a8c00(1);
  local_108 = 0;
  uStack_100 = 0;
  ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar8 = uVar8 & 0xffffff00;
  FUN_1416d0010(0x4f,0x18966,0x80000000,&local_108,uVar8,ppuVar9);
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(&local_108,&local_70,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18d16);
    local_64 = 0;
    local_70 = 0;
    iVar1 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,0);
    if (iVar1 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffff00;
      FUN_1416d0010(0x4f,0x18ad9,0x80000000,&local_88,uVar8,ppuVar9);
      local_64 = 0;
      local_70 = 0x4008000000000000;
      iVar1 = FUN_1416d9df0(&local_88,&local_70,DAT_1420f6b08,0);
      if (iVar1 == 0) {
        local_e0 = 8;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d16);
        if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0x3ff0000000000000;
        local_e0 = 9;
        uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_168,uVar8,uVar10);
        FUN_1400019a0(&local_c8,&local_168);
        FUN_1416cf840(0x4e,DAT_1420d58e8,0x80000000,&local_c8);
        local_e0 = 10;
        FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_158,uVar8 & 0xffffff00,
                      uVar10 & 0xffffffffffffff00);
        FUN_140017bd0(&local_70,&local_158,200);
        FUN_1400019a0(&local_b8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        FUN_1416cf840(0x4e,DAT_1420d58f8,0x80000000,&local_b8);
        local_e0 = 0xb;
        if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_98);
        }
        local_98 = 0;
        local_90 = 0x500000000;
        if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a8);
        }
        local_a8 = 0;
        local_a0 = 0x500000000;
        if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0x500000000;
        FUN_1416ab670(0x4e,DAT_1420d58e8,0x80000000,&local_c8);
        FUN_1400019a0(&local_1e8,uVar2);
        local_148 = &local_1e8;
        FUN_1416ab670(0x4e,DAT_1420d58f8,0x80000000,&local_b8);
        FUN_1400019a0(&local_1d8,uVar2);
        local_140 = &local_1d8;
        FUN_1400019a0(&local_1c8,uVar2);
        local_138 = &local_1c8;
        uVar3 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da3b0,&local_148);
        FUN_140004520(&local_88,uVar3,_DAT_141982c40);
        local_64 = local_bc;
        local_68 = local_c0;
        if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
          local_70 = local_c8;
        }
        else {
          FUN_140a04c50(&local_70,&local_c8);
        }
        FUN_140003e00(&local_70,&local_88);
        FUN_1400019a0(&local_1b8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_130 = &local_1b8;
        uVar3 = FUN_1416ab210(param_1,param_2,&local_d8,1,DAT_1420da3c0,&local_140);
        FUN_140004520(&local_88,uVar3,_DAT_141982c40);
        local_64 = local_ac;
        local_68 = local_b0;
        if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
          local_70 = local_b8;
        }
        else {
          FUN_140a04c50(&local_70,&local_b8);
        }
        FUN_140003e00(&local_70,&local_88);
        FUN_1400019a0(&local_1a8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        ppuVar9 = &local_138;
        uVar8 = DAT_1420da3a0;
        local_128 = &local_1a8;
        FUN_1416ab210(param_1,param_2,&local_98,3,DAT_1420da3a0,ppuVar9);
        local_e0 = 0xc;
        DAT_142182d90 = (longlong *)0x109fa;
        if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_178);
        }
        local_16c = 0;
        local_178 = 0x4072c00000000000;
        FUN_1416cfae0(param_1,DAT_1420d5a48,0,&local_178);
      }
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18d16);
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x188f1);
    local_64 = 0;
    local_70 = 0x3ff0000000000000;
    iVar1 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
    if ((iVar1 != -2) && (iVar1 < 1)) {
      local_e0 = 0x10;
      uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_168,uVar8,uVar10);
      FUN_1400019a0(&local_c8,&local_168);
      FUN_1416cf840(0x4e,DAT_1420d58e8,0x80000000,&local_c8);
      local_e0 = 0x11;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_158,uVar8,uVar10);
      FUN_140001a50(&local_88,uVar3,0xf0);
      FUN_140017bd0(&local_198,&local_158,0x3c);
      local_64 = local_18c;
      local_68 = local_190;
      if ((0x46U >> (local_18c & 0x1f) & 1) == 0) {
        local_70 = local_198;
      }
      else {
        FUN_140a04c50(&local_70,&local_198);
      }
      FUN_140003e00(&local_70,&local_88);
      FUN_1400019a0(&local_b8,&local_70);
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_198);
      }
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      FUN_1416cf840(0x4e,DAT_1420d58f8,0x80000000,&local_b8);
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
      local_64 = 0;
      local_70 = 0;
      uVar6 = (undefined4)DAT_1420f6b08;
      uVar7 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
      iVar1 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
      if (0 < iVar1) {
        uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
        local_64 = 0;
        local_70 = 0x4014000000000000;
        uVar6 = (undefined4)DAT_1420f6b08;
        uVar7 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
        iVar1 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
        if ((iVar1 != -2) && (iVar1 < 0)) {
          local_e0 = 0x13;
          if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_98);
          }
          local_98 = 0;
          local_90 = 0x500000000;
          FUN_1400019a0(&local_1e8,local_1f0);
          local_148 = &local_1e8;
          FUN_140002730(&local_1d8,&DAT_1420bbf20);
          local_140 = &local_1d8;
          uVar5 = FUN_1416cd900(&local_98,2,&local_148);
          FUN_1416a8cb0(DAT_14218ecf8);
          FUN_1400019a0(local_1f0,uVar5);
          FUN_1416a8c00(1);
          uVar6 = (undefined4)DAT_1420f6b08;
          uVar7 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
        }
      }
      local_64 = 0;
      local_70 = 0x4018000000000000;
      iVar1 = FUN_1416d9df0(uVar3,&local_70,CONCAT44(uVar7,uVar6),0);
      if (iVar1 == 0) {
        local_e0 = 0x15;
        (**(code **)(*param_1 + 8))(param_1,0x1871e);
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_168,uVar8,uVar10);
        FUN_1400019a0(&local_c8,&local_168);
        FUN_1416cf840(0x4e,DAT_1420d58e8,0x80000000,&local_c8);
        local_e0 = 0x16;
        FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_158,uVar8 & 0xffffff00,
                      uVar10 & 0xffffffffffffff00);
        FUN_140017bd0(&local_70,&local_158,0x3c);
        FUN_1400019a0(&local_b8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        FUN_1416cf840(0x4e,DAT_1420d58f8,0x80000000,&local_b8);
        local_e0 = 0x17;
        if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_98);
        }
        local_98 = 0;
        local_90 = 0x500000000;
        if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a8);
        }
        local_a8 = 0;
        local_a0 = 0x500000000;
        if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0x500000000;
        FUN_1416ab670(0x4e,DAT_1420d58e8,0x80000000,&local_c8);
        FUN_1400019a0(&local_1e8,uVar2);
        local_148 = &local_1e8;
        FUN_1416ab670(0x4e,DAT_1420d58f8,0x80000000,&local_b8);
        FUN_1400019a0(&local_1d8,uVar2);
        local_140 = &local_1d8;
        FUN_1400019a0(&local_1c8,uVar2);
        local_138 = &local_1c8;
        uVar2 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da3b0,&local_148);
        FUN_140004520(&local_88,uVar2,_DAT_141982c40);
        local_64 = local_bc;
        local_68 = local_c0;
        if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
          local_70 = local_c8;
        }
        else {
          FUN_140a04c50(&local_70,&local_c8);
        }
        FUN_140003e00(&local_70,&local_88);
        FUN_1400019a0(&local_1b8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_130 = &local_1b8;
        uVar2 = FUN_1416ab210(param_1,param_2,&local_d8,1,DAT_1420da3c0,&local_140);
        FUN_140004520(&local_88,uVar2,_DAT_141982c40);
        local_64 = local_ac;
        local_68 = local_b0;
        if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
          local_70 = local_b8;
        }
        else {
          FUN_140a04c50(&local_70,&local_b8);
        }
        FUN_140003e00(&local_70,&local_88);
        FUN_1400019a0(&local_1a8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_128 = &local_1a8;
        FUN_1416ab210(param_1,param_2,&local_98,3,DAT_1420da3a0,&local_138);
      }
    }
  }
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
  local_64 = 0;
  local_70 = 0x4010000000000000;
  iVar1 = FUN_1416d9df0(uVar2,&local_70,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_98);
    }
    local_98 = 0;
    local_90 = 0x500000000;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18cbf);
    FUN_1400019a0(&local_1e8,uVar2);
    local_148 = &local_1e8;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_98,1,DAT_1420dacd0,&local_148);
    local_64 = 0;
    local_70 = 0x401c90624dd2f1aa;
    iVar1 = FUN_1416d9df0(uVar2,&local_70,DAT_1420f6b08,1);
    if (-1 < iVar1) {
      local_e0 = 0x1c;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18912);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
      local_e0 = 0x1d;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4014000000000000;
      local_e0 = 0x1e;
      FUN_140001c50(local_1f0,4);
    }
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
  if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
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
  DAT_142182d78 = (undefined8 *)local_f0;
  return;
}


