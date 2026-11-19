// Function: gml_Object_oPlace_Player_Create_0 @ 0x14074aac0

void gml_Object_oPlace_Player_Create_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong in_stack_fffffffffffffdc8;
  undefined8 **ppuVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_fffffffffffffdd0;
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
  undefined8 local_118;
  uint local_10c;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8 = "gml_Object_oPlace_Player_Create_0";
  local_e0 = DAT_142182d78;
  DAT_142182d78 = &local_e0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_60._4_4_ = 0xffffff;
  local_68 = 0;
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
  local_d0 = 1;
  DAT_142182d90 = param_1;
  iVar1 = FUN_1416f82f0(param_1,param_2,0x40);
  if (iVar1 < 1) {
    local_d0 = 9;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
    in_stack_fffffffffffffdc8 = in_stack_fffffffffffffdc8 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_88,in_stack_fffffffffffffdc8,
                  in_stack_fffffffffffffdd0);
    in_stack_fffffffffffffdc8 = in_stack_fffffffffffffdc8 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_78,in_stack_fffffffffffffdc8,
                  in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
    uVar4 = (undefined4)(in_stack_fffffffffffffdc8 >> 0x20);
    local_4c = local_7c;
    local_50 = local_80;
    if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
      local_58 = local_88;
    }
    else {
      FUN_14074c0d0(&local_58,&local_88);
    }
    FUN_140001c50(&local_58,8);
    FUN_1400019a0(&local_c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_4c = local_6c;
    local_50 = local_70;
    local_108 = &local_c8;
    if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
      local_58 = local_78;
    }
    else {
      FUN_14074c0d0(&local_58,&local_78);
    }
    FUN_140001c50(&local_58,8);
    FUN_1400019a0(&local_b8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_100 = &local_b8;
    FUN_140002730(&local_a8,&DAT_142180ad8);
    local_f8 = &local_a8;
    FUN_140002730(&local_98,&DAT_1420b9bc8);
    local_f0 = &local_98;
    FUN_1416ab210(param_1,param_2,&local_68,4,CONCAT44(uVar4,DAT_1420da400/*instance_create_depth*/),&local_108);
  }
  else {
    local_d0 = 2;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
    in_stack_fffffffffffffdc8 = in_stack_fffffffffffffdc8 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_88,in_stack_fffffffffffffdc8,
                  in_stack_fffffffffffffdd0);
    in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_78,
                  in_stack_fffffffffffffdc8 & 0xffffffffffffff00,in_stack_fffffffffffffdd0);
    FUN_140002730(&local_c8,&DAT_1420b9bc8);
    local_4c = local_7c;
    local_50 = local_80;
    local_108 = &local_c8;
    if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
      local_58 = local_88;
    }
    else {
      FUN_14074c0d0(&local_58,&local_88);
    }
    FUN_140001c50(&local_58,8);
    FUN_1400019a0(&local_b8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_4c = local_6c;
    local_50 = local_70;
    local_100 = &local_b8;
    if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
      local_58 = local_78;
    }
    else {
      FUN_14074c0d0(&local_58,&local_78);
    }
    FUN_140001c50(&local_58,9);
    FUN_1400019a0(&local_a8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    ppuVar2 = &local_108;
    local_f8 = &local_a8;
    FUN_140060650(param_1,param_2,&local_68,3,&local_108);
    iVar1 = FUN_1416f82f0(param_1,param_2,0x41);
    if (0 < iVar1) {
      local_d0 = 4;
      if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_68 = 0;
      local_60 = 0x500000000;
      in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
      uVar3 = (ulonglong)ppuVar2 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_88,uVar3,in_stack_fffffffffffffdd0);
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_78,uVar3 & 0xffffffffffffff00,
                    in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
      FUN_140002730(&local_c8,&DAT_1420b9bd8);
      local_4c = local_7c;
      local_50 = local_80;
      local_108 = &local_c8;
      if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
        local_58 = local_88;
      }
      else {
        FUN_14074c0d0(&local_58,&local_88);
      }
      FUN_140001c50(&local_58,8);
      FUN_1400019a0(&local_b8,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_4c = local_6c;
      local_50 = local_70;
      if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
        local_58 = local_78;
        local_100 = &local_b8;
      }
      else {
        local_100 = &local_b8;
        FUN_14074c0d0(&local_58,&local_78);
      }
      FUN_140001c50(&local_58,9);
      FUN_1400019a0(&local_a8,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_f8 = &local_a8;
      FUN_140060650(param_1,param_2,&local_68,3,&local_108);
    }
  }
  local_d0 = 0xd;
  FUN_1416f8210(param_1,param_2,0,0);
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
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
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
  DAT_142182d78 = (undefined8 *)local_e0;
  return;
}


