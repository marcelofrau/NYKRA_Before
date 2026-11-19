// Function: gml_Object_oCamera_Point_Draw_0 @ 0x14075a110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCamera_Point_Draw_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  uint in_stack_fffffffffffffdb8;
  uint uVar4;
  ulonglong in_stack_fffffffffffffdc0;
  undefined8 **ppuVar5;
  ulonglong uVar6;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
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
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = "gml_Object_oCamera_Point_Draw_0";
  local_80 = 0;
  local_90 = DAT_142182d78;
  DAT_142182d78 = &local_90;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  DAT_142182d90 = param_1;
  pdVar2 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187be);
  local_50._4_4_ = 0xffffff;
  local_58 = 0;
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
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_228 = 0;
  uStack_220 = 0;
  in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
  in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffff00;
  FUN_1416d0010(0x4f,0x18ad9,0x80000000,&local_228,in_stack_fffffffffffffdb8,
                in_stack_fffffffffffffdc0);
  local_22c = 0;
  local_238 = 0x4008000000000000;
  iVar1 = FUN_1416d9df0(&local_228,&local_238,DAT_1420f6b08,0);
  if (iVar1 != 0) {
    local_80 = 2;
    FUN_1416f15a0(0xff);
    local_80 = 3;
    FUN_1416f1550(_DAT_141981f80);
    local_80 = 4;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
    in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_78,in_stack_fffffffffffffdb8,
                  in_stack_fffffffffffffdc0);
    FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_68,in_stack_fffffffffffffdb8 & 0xffffff00,
                  in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
    FUN_1400019a0(&local_d8,&local_78);
    local_f8 = &local_d8;
    FUN_1400019a0(&local_c8,&local_68);
    local_f0 = &local_c8;
    FUN_140002730(&local_b8,&DAT_1420b9ca8);
    local_e8 = &local_b8;
    FUN_140002730(&local_a8,&DAT_1420b9cb8);
    uVar4 = DAT_1420dadc0;
    ppuVar5 = &local_f8;
    local_e0 = &local_a8;
    FUN_1416ab210(param_1,param_2,&local_58,4,DAT_1420dadc0,&local_f8);
    local_80 = 5;
    if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
      dVar3 = *pdVar2;
    }
    else {
      dVar3 = (double)FUN_1416940c0(pdVar2);
    }
    FUN_1416f15a0((longlong)dVar3);
    local_80 = 6;
    FUN_1416f1550(_DAT_141981f80);
    local_80 = 7;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_78,uVar4,uVar6);
    FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_68,uVar4 & 0xffffff00,
                  uVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_d8,&local_78);
    local_f8 = &local_d8;
    FUN_1400019a0(&local_c8,&local_68);
    local_f0 = &local_c8;
    FUN_140002730(&local_b8,&DAT_1420b9cc8);
    local_e8 = &local_b8;
    FUN_140002730(&local_a8,&DAT_1420b9cb8);
    uVar4 = DAT_1420dadc0;
    ppuVar5 = &local_f8;
    local_e0 = &local_a8;
    FUN_1416ab210(param_1,param_2,&local_58,4,DAT_1420dadc0,&local_f8);
    local_80 = 8;
    FUN_1416f15a0(0xff);
    local_80 = 9;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 5;
    uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_78,uVar4,uVar6);
    FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_68,uVar4 & 0xffffff00,
                  uVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_d8,&local_78);
    local_f8 = &local_d8;
    FUN_1400019a0(&local_c8,&local_68);
    local_f0 = &local_c8;
    FUN_140002730(&local_b8,&DAT_1420b9cd8);
    local_e8 = &local_b8;
    FUN_140002730(&local_a8,&DAT_1420b9cb8);
    local_e0 = &local_a8;
    FUN_1416ab210(param_1,param_2,&local_58,4,DAT_1420dadc0,&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
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
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  DAT_142182d78 = (undefined8 *)local_90;
  return;
}


