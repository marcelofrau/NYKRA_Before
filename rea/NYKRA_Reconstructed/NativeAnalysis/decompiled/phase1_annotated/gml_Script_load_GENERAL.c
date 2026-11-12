// Function: gml_Script_load_GENERAL @ 0x1401c3a90

undefined8 * gml_Script_load_GENERAL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint in_stack_fffffffffffffe38;
  uint uVar8;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 **ppuVar9;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_180;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  uint local_fc;
  undefined1 local_f8 [12];
  uint local_ec;
  undefined1 local_e8 [12];
  uint local_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined1 *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_118 = "gml_Script_load_GENERAL";
  local_110 = 0;
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  DAT_142182d90 = param_1;
  local_180 = param_3;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  local_16c = 0xffffff;
  local_178 = 0;
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18859/*var:CURRENT_PLANET*/);
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a/*var:CURRENTROOM*/);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18862/*var:D_NUMBER*/);
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  local_a0 = (ulonglong)(uint)local_a0;
  local_a8 = 0;
  *(undefined4 *)((longlong)local_180 + 0xc) = 5;
  *local_180 = 0;
  FUN_1416ab750(DAT_1420dd8c0/*gml_Script_load_GENERAL*/);
  local_110 = 3;
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  FUN_1416ab000(&local_108,&DAT_14217f930);
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  FUN_1416ab000(&local_130,s_GENERAL_1420b3aa0);
  local_110 = 5;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  local_198 = 0;
  uStack_190 = 0;
  FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_198,in_stack_fffffffffffffe38 & 0xffffff00,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  FUN_1400019a0(&local_168,&local_198);
  uVar8 = DAT_1420da4b0/*floor*/;
  ppuVar9 = &local_d8;
  local_d8 = &local_168;
  uVar6 = FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da4b0/*floor*/,&local_d8);
  local_5c = 0;
  local_68 = &DAT_bff0000000000000;
  iVar1 = FUN_1416d9df0(uVar6,&local_68,DAT_1420f6b08,1);
  if ((iVar1 == -2) || (0 < iVar1)) {
    local_110 = 8;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0x500000000;
    FUN_1416ce870(param_1,DAT_1420d59d8/*working_directory*/,0x80000000,&local_b8);
    FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_198,uVar8 & 0xffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_1400019a0(&local_168,&local_198);
    local_d8 = &local_168;
    puVar7 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da4b0/*floor*/,&local_d8);
    local_5c = *(uint *)((longlong)puVar7 + 0xc);
    local_60 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
      local_68 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1401c55b0(&local_68,puVar7);
    }
    FUN_140001c50(&local_68,1);
    FUN_1400019a0(&local_158,&local_68);
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_d0 = &local_158;
    FUN_1416ac010(local_f8,&DAT_1420b3ac5);
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da2b0/*string*/,&local_d0);
    FUN_1416ac010(local_e8,s_DATA_CHAPTER_TEMPLATES_chapter__1420b3ad0);
    local_6c = local_ac;
    local_70 = local_b0;
    if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
      local_78 = local_b8;
    }
    else {
      FUN_1401c55b0(&local_78,&local_b8);
    }
    FUN_140003ca0(&local_78,local_e8);
    local_7c = local_6c;
    local_80 = local_70;
    if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
      local_88 = local_78;
    }
    else {
      FUN_1401c55b0(&local_88,&local_78);
    }
    FUN_140003ca0(&local_88,uVar2);
    local_8c = local_7c;
    local_90 = local_80;
    if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
      local_98 = local_88;
    }
    else {
      FUN_1401c55b0(&local_98,&local_88);
    }
    FUN_140003ca0(&local_98,local_f8);
    local_5c = local_8c;
    local_60 = local_90;
    if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
      local_68 = local_98;
    }
    else {
      FUN_1401c55b0(&local_68,&local_98);
    }
    FUN_140003ca0(&local_68,&local_130);
    FUN_1400019a0(&local_108,&local_68);
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_98);
    }
    if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_e8);
    }
    if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
      FUN_140001b50(local_f8);
    }
  }
  else {
    local_110 = 6;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0x500000000;
    FUN_1416ce870(param_1,DAT_1420d59d8/*working_directory*/,0x80000000,&local_b8);
    FUN_1400019a0(&local_158,uVar2);
    local_d0 = &local_158;
    FUN_1416ac010(local_f8,&DAT_1420b3ac5);
    uVar2 = FUN_1416ab210(param_1,param_2,&local_a8,1,DAT_1420da2b0/*string*/,&local_d0);
    FUN_1416ac010(local_e8,s_PROFILES_HEPTAVERSE__1420b3ab0);
    local_6c = local_ac;
    local_70 = local_b0;
    if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
      local_78 = local_b8;
    }
    else {
      FUN_1401c55b0(&local_78,&local_b8);
    }
    FUN_140003ca0(&local_78,local_e8);
    local_7c = local_6c;
    local_80 = local_70;
    if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
      local_88 = local_78;
    }
    else {
      FUN_1401c55b0(&local_88,&local_78);
    }
    FUN_140003ca0(&local_88,uVar2);
    local_8c = local_7c;
    local_90 = local_80;
    if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
      local_98 = local_88;
    }
    else {
      FUN_1401c55b0(&local_98,&local_88);
    }
    FUN_140003ca0(&local_98,local_f8);
    local_5c = local_8c;
    local_60 = local_90;
    if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
      local_68 = local_98;
    }
    else {
      FUN_1401c55b0(&local_68,&local_98);
    }
    FUN_140003ca0(&local_68,&local_130);
    FUN_1400019a0(&local_108,&local_68);
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_98);
    }
    if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_e8);
    }
    if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
      FUN_140001b50(local_f8);
    }
  }
  local_110 = 0xb;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  local_d8 = &local_108;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da3d0/*buffer_load*/,&local_d8);
  FUN_1400019a0(&local_178,uVar2);
  local_5c = 0;
  local_68 = &DAT_bff0000000000000;
  iVar1 = FUN_1416d9df0(&local_178,&local_68,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_110 = 0xc;
  }
  else {
    local_110 = 0xd;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_d8 = &local_178;
    FUN_140002730(&local_158,&DAT_14217f938);
    local_d0 = &local_158;
    FUN_140002730(&local_148,&DAT_14217f938);
    local_c8 = &local_148;
    FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da650/*buffer_seek*/,&local_d8);
    local_110 = 0xf;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_d8 = &local_178;
    FUN_140002730(&local_158,&DAT_1420b3af0);
    local_d0 = &local_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da3e0/*buffer_read*/,&local_d8);
    FUN_1416a8cb0(DAT_14218ecf8);
    FUN_1400019a0(uVar3,uVar2);
    FUN_1416a8c00(1);
    local_110 = 0x10;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_d8 = &local_178;
    FUN_140002730(&local_158,&DAT_1420b3af0);
    local_d0 = &local_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da3e0/*buffer_read*/,&local_d8);
    FUN_1416a8cb0(DAT_14218ecf8);
    FUN_1400019a0(uVar4,uVar2);
    FUN_1416a8c00(1);
    local_110 = 0x11;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_d8 = &local_178;
    FUN_140002730(&local_158,&DAT_1420b3b00);
    local_d0 = &local_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da3e0/*buffer_read*/,&local_d8);
    FUN_1416a8cb0(DAT_14218ecf8);
    FUN_1400019a0(uVar5,uVar2);
    FUN_1416a8c00(1);
    local_110 = 0x13;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_d8 = &local_178;
    FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da370/*buffer_delete*/,&local_d8);
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
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
  DAT_142182d78 = (undefined8 *)local_120;
  return local_180;
}


