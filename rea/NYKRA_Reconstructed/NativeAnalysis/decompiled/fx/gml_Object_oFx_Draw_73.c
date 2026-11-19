// Function: gml_Object_oFx_Draw_73 @ 0x141306060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFx_Draw_73(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint in_stack_fffffffffffffcd8;
  ulonglong in_stack_fffffffffffffce0;
  undefined8 **ppuVar3;
  ulonglong uVar4;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
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
  uint local_23c;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
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
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_108 = "gml_Object_oFx_Draw_73";
  local_100 = 0;
  local_110 = DAT_142182d78;
  DAT_142182d78 = &local_110;
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
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_60 = CONCAT44(0xffffff,(undefined4)local_60);
  local_68 = 0;
  local_90 = CONCAT44(0xffffff,(undefined4)local_90);
  local_98 = 0;
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
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
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
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x188c3);
  local_4c = 0;
  local_58 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
  if (iVar1 != 0) goto LAB_1413063be;
  local_100 = 1;
  ppuVar3 = (undefined8 **)(in_stack_fffffffffffffce0 & 0xffffffffffffff00);
  in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5b18,0x80000000,&local_88,in_stack_fffffffffffffcd8,ppuVar3);
  local_4c = 0;
  local_58 = 0x4160101000000000;
  iVar1 = FUN_1416d9df0(&local_88,&local_58,DAT_1420f6b08,0);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18971);
    local_4c = 0;
    local_58 = 0x3ff0000000000000;
    iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,0x186e0);
      local_4c = 0;
      local_58 = 0x3ff0000000000000;
      iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
      if (iVar1 != 0) goto LAB_141306ce2;
    }
    local_100 = 2;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    FUN_140002730(&local_1a8,&DAT_1420c9558);
    in_stack_fffffffffffffcd8 = DAT_1420da090;
    ppuVar3 = &local_318;
    local_318 = &local_1a8;
    FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da090,&local_318);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18971);
    local_4c = 0;
    local_58 = 0x3ff0000000000000;
    iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
    if (iVar1 == 0) {
      local_100 = 3;
      if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_68 = 0;
      local_60 = 0x500000000;
      if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_98);
      }
      local_98 = 0;
      local_90 = 0x500000000;
      uVar4 = (ulonglong)ppuVar3 & 0xffffffffffffff00;
      in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_f8,in_stack_fffffffffffffcd8,uVar4);
      uVar4 = uVar4 & 0xffffffffffffff00;
      in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_e8,in_stack_fffffffffffffcd8,uVar4);
      uVar4 = uVar4 & 0xffffffffffffff00;
      in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d5c78,0x80000000,&local_d8,in_stack_fffffffffffffcd8,uVar4);
      uVar4 = uVar4 & 0xffffffffffffff00;
      in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d5b18,0x80000000,&local_88,in_stack_fffffffffffffcd8,uVar4);
      uVar4 = uVar4 & 0xffffffffffffff00;
      in_stack_fffffffffffffcd8 = in_stack_fffffffffffffcd8 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d5ae8,0x80000000,&local_a8,in_stack_fffffffffffffcd8,uVar4);
      FUN_1416cea80(param_1,DAT_1420d5d88,0x80000000,&local_c8,
                    in_stack_fffffffffffffcd8 & 0xffffff00,uVar4 & 0xffffffffffffff00);
      FUN_140002730(&local_1a8,&DAT_142182600);
      local_318 = &local_1a8;
      FUN_1400019a0(&local_198,&local_88);
      local_6c = local_9c;
      local_70 = local_a0;
      local_310 = &local_198;
      if ((0x46U >> (local_9c & 0x1f) & 1) == 0) {
        local_78 = local_a8;
      }
      else {
        FUN_141307aa0(&local_78,&local_a8);
      }
      FUN_140004620(&local_78,&local_c8);
      local_ac = 0;
      local_b8 = 0x3ff0000000000000;
      FUN_140003e00(&local_b8,&local_78);
      FUN_140004520(&local_58,&local_b8,_DAT_141984518);
      FUN_1400019a0(&local_188,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_308 = &local_188;
      FUN_140017bd0(&local_58,&local_f8,1);
      FUN_1400019a0(&local_178,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_300 = &local_178;
      FUN_140017bd0(&local_58,&local_e8,1);
      FUN_1400019a0(&local_168,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_2f8 = &local_168;
      FUN_140009980(&local_58,&local_d8,DAT_141983260);
      FUN_1400019a0(&local_158,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_2f0 = &local_158;
      uVar2 = FUN_1416ab210(param_1,param_2,&local_98,3,DAT_1420dac40,&local_318);
      FUN_1400019a0(&local_148,uVar2);
      local_2e8 = &local_148;
      FUN_140002730(&local_138,&DAT_142182600);
      local_2e0 = &local_138;
      FUN_140002730(&local_128,&DAT_142182600);
      ppuVar3 = &local_300;
      in_stack_fffffffffffffcd8 = DAT_1420dac60;
      local_2d8 = &local_128;
      FUN_1416ab210(param_1,param_2,&local_68,6,DAT_1420dac60,ppuVar3);
    }
  }
LAB_141306ce2:
  local_100 = 4;
  FUN_1416b8390(param_1);
  FUN_1416cea80(param_1,DAT_1420d5b18,0x80000000,&local_88,in_stack_fffffffffffffcd8 & 0xffffff00,
                (ulonglong)ppuVar3 & 0xffffffffffffff00);
  local_4c = 0;
  local_58 = 0x4160101000000000;
  iVar1 = FUN_1416d9df0(&local_88,&local_58,DAT_1420f6b08,0);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18971);
    local_4c = 0;
    local_58 = 0x3ff0000000000000;
    iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,0x186e0);
      local_4c = 0;
      local_58 = 0x3ff0000000000000;
      iVar1 = FUN_1416d9df0(uVar2,&local_58,DAT_1420f6b08,0);
      if (iVar1 != 0) goto LAB_1413063be;
    }
    local_100 = 5;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    FUN_140002730(&local_1a8,&DAT_142182600);
    local_318 = &local_1a8;
    FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da090,&local_318);
  }
LAB_1413063be:
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
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
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
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
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
  DAT_142182d78 = (undefined8 *)local_110;
  return;
}


