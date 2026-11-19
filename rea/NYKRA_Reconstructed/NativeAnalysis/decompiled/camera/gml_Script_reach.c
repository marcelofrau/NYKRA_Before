// Function: gml_Script_reach @ 0x14003b450

undefined8 *
gml_Script_reach(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                undefined8 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_80 = "gml_Script_reach";
  local_78 = 0;
  local_88 = DAT_142182d78;
  DAT_142182d78 = &local_88;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_68 = (ulonglong)(uint)local_68;
  local_70 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc7b0);
  local_78 = 3;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
    if (param_4 != 1) {
      bVar1 = false;
      puVar4 = &DAT_1420b1000;
      goto LAB_14003b54e;
    }
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  puVar4 = (undefined8 *)*param_5;
  bVar1 = true;
LAB_14003b54e:
  uVar6 = (undefined4)DAT_1420f6b08;
  iVar2 = FUN_1416d9df0(puVar4,puVar5,uVar6,0);
  if (iVar2 == 0) {
    local_78 = 7;
    if (param_4 < 2) {
      puVar5 = &DAT_1420b1000;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    FUN_1400019a0(param_3,puVar5);
  }
  else {
    local_78 = 4;
    puVar4 = &DAT_1420b1000;
    puVar5 = &DAT_1420b1000;
    if (1 < param_4) {
      puVar5 = (undefined8 *)param_5[1];
    }
    if (bVar1) {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_1416d9df0(puVar4,puVar5,uVar6,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      local_78 = 7;
      if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_70 = 0;
      local_68 = 0x500000000;
      puVar4 = &DAT_1420b1000;
      puVar5 = &DAT_1420b1000;
      if (2 < param_4) {
        puVar5 = (undefined8 *)param_5[2];
      }
      if (bVar1) {
        puVar4 = (undefined8 *)*param_5;
      }
      local_54 = *(uint *)((longlong)puVar4 + 0xc);
      local_58 = *(undefined4 *)(puVar4 + 1);
      if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
        local_60 = *puVar4;
      }
      else {
        FUN_14003bc60(&local_60);
      }
      FUN_140003e00(&local_60,puVar5);
      FUN_1400019a0(&local_d8,&local_60);
      if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_60);
      }
      if (param_4 < 2) {
        puVar5 = &DAT_1420b1000;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      local_108 = &local_d8;
      FUN_1400019a0(&local_c8,puVar5);
      local_100 = &local_c8;
      uVar3 = FUN_1416cd900(&local_70,2,&local_108);
      FUN_1400019a0(param_3,uVar3);
    }
    else {
      local_78 = 5;
      if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_70 = 0;
      local_68 = 0x500000000;
      puVar4 = &DAT_1420b1000;
      puVar5 = &DAT_1420b1000;
      if (2 < param_4) {
        puVar5 = (undefined8 *)param_5[2];
      }
      if (bVar1) {
        puVar4 = (undefined8 *)*param_5;
      }
      local_54 = *(uint *)((longlong)puVar4 + 0xc);
      local_58 = *(undefined4 *)(puVar4 + 1);
      if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
        local_60 = *puVar4;
      }
      else {
        FUN_14003bc60(&local_60);
      }
      FUN_140003ca0(&local_60,puVar5);
      FUN_1400019a0(&local_a8,&local_60);
      if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_60);
      }
      if (param_4 < 2) {
        puVar5 = &DAT_1420b1000;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      local_f0 = &local_a8;
      FUN_1400019a0(&local_98,puVar5);
      local_e8 = &local_98;
      uVar3 = FUN_1416cda40(&local_70,2,&local_f0);
      FUN_1400019a0(param_3,uVar3);
    }
  }
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
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
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  DAT_142182d78 = (undefined8 *)local_88;
  return param_3;
}


