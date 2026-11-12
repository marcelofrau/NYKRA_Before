// Function: gml_Script_reset_files @ 0x14003dd50

undefined8 * gml_Script_reset_files(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_168 [12];
  uint local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = "gml_Script_reset_files";
  local_a0 = 0;
  local_b0 = DAT_142182d78;
  DAT_142182d78 = &local_b0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc810/*gml_Script_reset_files*/);
  local_a0 = 2;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922/*var:file*/);
  FUN_1400019a0(&local_118,uVar2);
  local_158 = &local_118;
  FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da010/*ds_list_clear*/,&local_158);
  local_a0 = 3;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_1416ce870(param_1,DAT_1420d59d8/*working_directory*/,0x80000000,&local_98);
  FUN_1416ac010(local_168,s_level_data___rmlvl_1420b2110);
  local_5c = local_8c;
  local_60 = local_90;
  if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
    local_68 = local_98;
  }
  else {
    FUN_14003ede0(&local_68,&local_98);
  }
  FUN_140003ca0(&local_68,local_168);
  FUN_1400019a0(&local_118,&local_68);
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_168);
  }
  local_158 = &local_118;
  FUN_140002730(&local_108,&DAT_14217e838);
  local_150 = &local_108;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da1c0/*file_find_first*/,&local_158);
  FUN_1400019a0(&local_128,uVar2);
  FUN_1416ac010(&local_68,&DAT_14217e830);
  iVar1 = FUN_1416d9df0(&local_128,&local_68,DAT_1420f6b08,0);
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if (iVar1 != 0) {
    local_a0 = 5;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922/*var:file*/);
    local_158 = &local_128;
    local_150 = &local_128;
    uVar3 = FUN_1416ab210(param_1,param_2,&local_78,1,DAT_1420da1f0/*string_length*/,&local_158);
    FUN_140017bd0(&local_68,uVar3,5);
    FUN_1400019a0(&local_f8,&local_68);
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_148 = &local_f8;
    FUN_140002730(&local_e8,&DAT_1420b2128);
    local_140 = &local_e8;
    FUN_1400019a0(&local_d8,uVar2);
    local_138 = &local_d8;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_88,3,DAT_1420da1e0/*string_delete*/,&local_150);
    FUN_1400019a0(&local_c8,uVar2);
    local_130 = &local_c8;
    FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da1d0/*ds_list_add*/,&local_138);
    local_a0 = 6;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,0,DAT_1420da200/*file_find_next*/,0);
    FUN_1400019a0(&local_128,uVar2);
    do {
      FUN_1416ac010(&local_68,&DAT_14217e830);
      iVar1 = FUN_1416d9df0(&local_128,&local_68,DAT_1420f6b08,0);
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      if (iVar1 == 0) break;
      local_a0 = 8;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922/*var:file*/);
      local_158 = &local_128;
      local_150 = &local_128;
      uVar3 = FUN_1416ab210(param_1,param_2,&local_78,1,DAT_1420da1f0/*string_length*/,&local_158);
      FUN_140017bd0(&local_68,uVar3,5);
      FUN_1400019a0(&local_f8,&local_68);
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_148 = &local_f8;
      FUN_140002730(&local_e8,&DAT_1420b2128);
      local_140 = &local_e8;
      FUN_1400019a0(&local_d8,uVar2);
      local_138 = &local_d8;
      uVar2 = FUN_1416ab210(param_1,param_2,&local_88,3,DAT_1420da1e0/*string_delete*/,&local_150);
      FUN_1400019a0(&local_c8,uVar2);
      local_130 = &local_c8;
      FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da1d0/*ds_list_add*/,&local_138);
      local_a0 = 9;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      uVar2 = FUN_1416ab210(param_1,param_2,&local_58,0,DAT_1420da200/*file_find_next*/,0);
      FUN_1400019a0(&local_128,uVar2);
      FUN_1416ac010(&local_68,&DAT_14217e830);
      iVar1 = FUN_1416d9df0(&local_128,&local_68,DAT_1420f6b08,0);
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
    } while (iVar1 != 0);
  }
  local_a0 = 0xd;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_1416ab210(param_1,param_2,&local_58,0,DAT_1420da210/*file_find_close*/,0);
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
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
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  DAT_142182d78 = (undefined8 *)local_b0;
  return param_3;
}


