// Function: gml_Script_goto_map @ 0x1401019b0

undefined8 *
gml_Script_goto_map(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 **in_stack_fffffffffffffe58;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_164;
  longlong local_160;
  undefined8 local_150;
  char *local_148;
  undefined4 local_140;
  undefined1 local_138 [12];
  uint local_12c;
  undefined1 local_128 [12];
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  int local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_148 = "gml_Script_goto_map";
  local_140 = 0;
  local_150 = DAT_142182d78;
  DAT_142182d78 = &local_150;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_68 = (ulonglong)(uint)local_68;
  local_70 = 0;
  local_b0 = (ulonglong)(uint)local_b0;
  local_b8 = 0;
  local_a0 = (ulonglong)(uint)local_a0;
  local_a8 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = param_3;
  local_78 = param_2;
  local_60 = param_1;
  FUN_1416ab750(DAT_1420dd0b0);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_164 = 0;
  local_170 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(puVar4,&local_170,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_140 = 3;
    if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
      param_2 = local_78;
      param_1 = local_60;
    }
    local_70 = 0;
    local_68 = 0x500000000;
    in_stack_fffffffffffffe58 = (undefined8 **)0x0;
    gml_Script_save_game(param_1,param_2,&local_70,0,0);
  }
  local_4c = 0;
  local_58 = 0x4053c00000000000;
  iVar2 = FUN_1416ab810(&local_170,&local_60,&local_78,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if (0 < iVar2) {
    local_cc = param_4;
    do {
      uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
      local_140 = 5;
      if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_70 = 0;
      local_68 = 0x500000000;
      if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0x500000000;
      if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0x500000000;
      FUN_1416ce870(local_60,DAT_1420d59d8,0x80000000,&local_c8);
      puVar4 = &DAT_1420b1000;
      if (0 < param_4) {
        puVar4 = (undefined8 *)*param_5;
      }
      FUN_1400019a0(&local_118,puVar4);
      puVar4 = &DAT_1420b1000;
      if (0 < param_4) {
        puVar4 = (undefined8 *)*param_5;
      }
      local_198 = &local_118;
      FUN_1400019a0(&local_108,puVar4);
      local_190 = &local_108;
      FUN_1416ac010(local_138,s__rmlvl_1420b31c4);
      uVar5 = CONCAT44(uVar6,DAT_1420da2b0);
      uVar3 = FUN_1416ab210(local_60,local_78,&local_b8,1,uVar5,&local_198);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_1416ac010(local_128,s_level_data__1420b31b8);
      local_8c = local_bc;
      local_90 = local_c0;
      if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
        local_98 = local_c8;
      }
      else {
        FUN_140102840(&local_98,&local_c8);
      }
      FUN_140003ca0(&local_98,local_128);
      local_7c = local_8c;
      local_80 = local_90;
      if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
        local_88 = local_98;
      }
      else {
        FUN_140102840(&local_88,&local_98);
      }
      FUN_140003ca0(&local_88,uVar3);
      local_4c = local_7c;
      local_50 = local_80;
      if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
        local_58 = local_88;
      }
      else {
        FUN_140102840(&local_58,&local_88);
      }
      FUN_140003ca0(&local_58,local_138);
      FUN_1400019a0(&local_f8,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_98);
      }
      if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
        FUN_140001b50(local_128);
      }
      if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
        FUN_140001b50(local_138);
      }
      local_188 = &local_f8;
      uVar3 = FUN_1416ab210(local_60,local_78,&local_a8,1,CONCAT44(uVar6,DAT_1420da2b0),&local_190);
      param_4 = local_cc;
      FUN_1400019a0(&local_e8,uVar3);
      in_stack_fffffffffffffe58 = &local_188;
      local_180 = &local_e8;
      gml_Script_map_load(local_60,local_78,&local_70,2,in_stack_fffffffffffffe58);
      cVar1 = FUN_1416abe60(&local_170,&local_60,&local_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&local_170,&local_60,&local_78);
  if (local_160 != 0) {
    thunk_FUN_1416c46f0();
    local_160 = 0;
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  DAT_142182d78 = (undefined8 *)local_150;
  return local_178;
}


