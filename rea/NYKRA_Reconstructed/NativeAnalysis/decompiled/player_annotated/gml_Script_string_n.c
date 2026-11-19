// Function: gml_Script_string_n @ 0x140086660

undefined8 *
gml_Script_string_n(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130 [2];
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_118 = "gml_Script_string_n";
  local_110 = 0;
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_58 = (ulonglong)(uint)local_58;
  local_60 = 0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_78 = param_3;
  local_4c = param_4;
  FUN_1416ab750(DAT_1420dca00/*gml_Script_string_n*/);
  local_110 = 3;
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_60 = 0;
  local_58 = 0x500000000;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  if (local_4c < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_e8,puVar4);
  if (local_4c < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_138 = &local_e8;
  puVar2 = (undefined8 *)FUN_1416ab210(local_c0,local_c8,&local_88,1,DAT_1420da1f0/*string_length*/,&local_138);
  local_64 = *(uint *)((longlong)puVar2 + 0xc);
  local_68 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_70 = *puVar2;
  }
  else {
    FUN_140087000(&local_70,puVar2);
  }
  FUN_140001fe0(&local_70,puVar4);
  FUN_1400019a0(&local_d8,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_130[0] = &local_d8;
  uVar3 = FUN_1416ab210(local_c0,local_c8,&local_60,1,DAT_1420da4b0/*floor*/,local_130);
  FUN_1400019a0(&local_b8,uVar3);
  local_110 = 4;
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  FUN_1416ab000(&local_a8,&DAT_14217f0ac);
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  if (local_4c < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_64 = 0;
  local_70 = 0;
  iVar1 = FUN_1416d9df0(puVar4,&local_70,DAT_1420f6b08,1);
  if (iVar1 < 1) {
    if ((0x46U >> (*(uint *)((longlong)local_78 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_78);
    }
    FUN_1416ab000(local_78,&DAT_14217f0ac);
  }
  else {
    dVar6 = local_b8;
    if ((local_ac & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_b8);
    }
    for (uVar5 = (ulonglong)dVar6; 0 < (int)uVar5; uVar5 = (ulonglong)((int)uVar5 - 1)) {
      local_110 = 5;
      if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_60);
      }
      local_60 = 0;
      local_58 = 0x500000000;
      puVar4 = &DAT_1420b1000;
      if (0 < local_4c) {
        puVar4 = (undefined8 *)*param_5;
      }
      FUN_1400019a0(&local_108,puVar4);
      local_148 = &local_108;
      local_140 = &local_98;
      uVar3 = FUN_1416ab210(local_c0,local_c8,&local_60,2,DAT_1420da520/*string_char_at*/,&local_148);
      FUN_140003ca0(&local_a8,uVar3);
      FUN_140001c50(&local_98,1);
    }
    local_110 = 6;
    FUN_1400019a0(local_78,&local_a8);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
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
  DAT_142182d78 = (undefined8 *)local_120;
  return local_78;
}


