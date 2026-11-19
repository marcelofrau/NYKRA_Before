// Function: gml_Script_string_n_glitch @ 0x141686700

undefined8 *
gml_Script_string_n_glitch
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 local_170;
  uint local_164;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148 [2];
  double local_138;
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
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_c0 = "gml_Script_string_n_glitch";
  local_b8 = 0;
  local_c8 = DAT_142182d78;
  DAT_142182d78 = &local_c8;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_68 = (ulonglong)(uint)local_68;
  local_70 = 0;
  local_e0 = (ulonglong)(uint)local_e0;
  local_e8 = 0;
  local_d0 = (ulonglong)(uint)local_d0;
  local_d8 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_160 = param_3;
  local_90 = param_1;
  local_88 = param_2;
  FUN_1416ab750(DAT_1420dcbe0);
  local_b8 = 4;
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_74 = 0;
  local_80 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(puVar4,&local_80,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_b8 = 0x18;
    if (param_4 < 1) {
      param_5 = &DAT_1420b1000;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_1400019a0(local_160,param_5);
  }
  else {
    local_b8 = 5;
    if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_70 = 0;
    local_68 = 0x500000000;
    if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1400019a0(&local_128,puVar4);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_158 = &local_128;
    puVar2 = (undefined8 *)FUN_1416ab210(local_90,local_88,&local_e8,1,DAT_1420da1f0,&local_158);
    local_74 = *(uint *)((longlong)puVar2 + 0xc);
    local_78 = *(undefined4 *)(puVar2 + 1);
    if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
      local_80 = *puVar2;
    }
    else {
      FUN_141670fe0(&local_80,puVar2);
    }
    FUN_140001fe0(&local_80,puVar4);
    FUN_1400019a0(&local_118,&local_80);
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_150 = &local_118;
    uVar3 = FUN_1416ab210(local_90,local_88,&local_70,1,DAT_1420da4b0,&local_150);
    FUN_1400019a0(&local_170,uVar3);
    if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1400019a0(&local_108,puVar4);
    local_148[0] = &local_108;
    uVar3 = FUN_1416ab210(local_90,local_88,&local_d8,1,DAT_1420da1f0,local_148);
    FUN_1400019a0(&local_138,uVar3);
    local_b8 = 6;
    if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    FUN_1416ab000(&local_b0,&DAT_14217f118);
    if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_ec = 0;
    local_f8 = 0x3ff0000000000000;
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_94 = 0;
    local_a0 = 0;
    dVar6 = local_138;
    if ((local_12c & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_138);
    }
    for (uVar5 = (ulonglong)dVar6; 0 < (int)uVar5; uVar5 = (ulonglong)((int)uVar5 - 1)) {
      local_b8 = 8;
      iVar1 = FUN_1416d9df0(&local_f8,&local_170,DAT_1420f6b08,1);
      if ((iVar1 == -2) || (0 < iVar1)) {
        local_b8 = 0xe;
        if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_70 = 0;
        local_68 = 0x500000000;
        puVar4 = &DAT_1420b1000;
        if (0 < param_4) {
          puVar4 = (undefined8 *)*param_5;
        }
        FUN_1400019a0(&local_128,puVar4);
        local_158 = &local_128;
        local_150 = &local_f8;
        FUN_1416ac010(&local_80,&DAT_1420b29a8);
        uVar3 = FUN_1416ab210(local_90,local_88,&local_70,2,DAT_1420da520,&local_158);
        iVar1 = FUN_1416d9df0(uVar3,&local_80,DAT_1420f6b08,0);
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        if (iVar1 == 0) {
          local_b8 = 0xf;
          FUN_14011fa70(&local_b0,&DAT_1420b29a8);
          local_b8 = 0x10;
          FUN_140001c50(&local_f8,1);
        }
        else {
          local_b8 = 0x13;
          if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          local_70 = 0;
          local_68 = 0x500000000;
          uVar3 = FUN_1416cd7b0(0x21,0x80);
          if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_128);
          }
          local_11c = 0;
          local_158 = &local_128;
          local_128 = uVar3;
          uVar3 = FUN_1416ab210(local_90,local_88,&local_70,1,DAT_1420da5c0,&local_158);
          FUN_140003ca0(&local_b0,uVar3);
        }
      }
      else {
        local_b8 = 9;
        if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_70 = 0;
        local_68 = 0x500000000;
        puVar4 = &DAT_1420b1000;
        if (0 < param_4) {
          puVar4 = (undefined8 *)*param_5;
        }
        FUN_1400019a0(&local_128,puVar4);
        local_158 = &local_128;
        local_150 = &local_f8;
        uVar3 = FUN_1416ab210(local_90,local_88,&local_70,2,DAT_1420da520,&local_158);
        FUN_140003ca0(&local_b0,uVar3);
        local_b8 = 10;
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_94 = 0;
        local_a0 = 0;
      }
      local_b8 = 0x15;
      FUN_140001c50(&local_f8,1);
    }
    local_b8 = 0x17;
    FUN_1400019a0(local_160,&local_b0);
  }
  if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
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
  DAT_142182d78 = (undefined8 *)local_c8;
  return local_160;
}


