// Function: gml_Script_inv_delete @ 0x140089400

undefined8 *
gml_Script_inv_delete
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint in_stack_fffffffffffffe78;
  uint uVar5;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar6;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 local_138;
  uint local_12c;
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
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = "gml_Script_inv_delete";
  local_b0 = 0;
  local_c0 = DAT_142182d78;
  DAT_142182d78 = &local_c0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
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
  local_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcaa0/*gml_Script_inv_delete*/);
  local_b0 = 4;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_1416cfeb0(puVar4,0x18a23/*var:INV_N*/,0x80000000,&local_68,in_stack_fffffffffffffe78 & 0xffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  FUN_1400019a0(&local_108,&local_68);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_160 = &local_108;
  FUN_1400019a0(&local_f8,puVar4);
  ppuVar6 = &local_160;
  uVar5 = DAT_1420d9ee0/*ds_list_find_value*/;
  local_158 = &local_f8;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420d9ee0/*ds_list_find_value*/,ppuVar6);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  iVar1 = FUN_1416d9df0(puVar4,uVar2,DAT_1420f6b08,1);
  local_170 = &local_128;
  if (iVar1 < 0) {
    local_b0 = 10;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1416cfeb0(puVar4,0x18a23/*var:INV_N*/,0x80000000,&local_68,uVar5 & 0xffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_138,&local_68);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_178 = &local_138;
    FUN_1400019a0(&local_128,puVar4);
    if (param_4 < 3) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
    }
    ppuVar6 = &local_178;
    uVar5 = DAT_1420d9ee0/*ds_list_find_value*/;
    puVar3 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420d9ee0/*ds_list_find_value*/,ppuVar6);
    local_6c = *(uint *)((longlong)puVar3 + 0xc);
    local_70 = *(undefined4 *)(puVar3 + 1);
    if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
      local_78 = *puVar3;
    }
    else {
      FUN_14008a000(&local_78,puVar3);
    }
    FUN_140003e00(&local_78,puVar4);
    FUN_1400019a0(&local_98,&local_78);
    if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_b0 = 0xb;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1416cfeb0(puVar4,0x18a23/*var:INV_N*/,0x80000000,&local_68,uVar5 & 0xffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_138,&local_68);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_178 = &local_138;
    FUN_1400019a0(&local_128,puVar4);
    local_168 = &local_98;
    local_170 = &local_128;
    FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da530/*ds_list_replace*/,&local_178);
  }
  else {
    local_b0 = 5;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1416cfeb0(puVar4,0x18a1a/*var:INV*/,0x80000000,&local_a8,uVar5 & 0xffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_e8,&local_a8);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_150 = &local_e8;
    FUN_1400019a0(&local_d8,puVar4);
    ppuVar6 = &local_150;
    uVar5 = DAT_1420da2e0/*ds_list_delete*/;
    local_148 = &local_d8;
    FUN_1416ab210(param_1,param_2,&local_88,2,DAT_1420da2e0/*ds_list_delete*/,ppuVar6);
    local_b0 = 6;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1416cfeb0(puVar4,0x18a23/*var:INV_N*/,0x80000000,&local_68,uVar5 & 0xffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    FUN_1400019a0(&local_138,&local_68);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_178 = &local_138;
    FUN_1400019a0(&local_128,puVar4);
    FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da2e0/*ds_list_delete*/,&local_178);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
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
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  DAT_142182d78 = (undefined8 *)local_c0;
  return param_3;
}


