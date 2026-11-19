// Function: gml_Script_box_inside_bound @ 0x1400dfb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_box_inside_bound
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
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
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_e8 = "gml_Script_box_inside_bound";
  local_e0 = 0;
  local_f0 = DAT_142182d78;
  DAT_142182d78 = &local_f0;
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
  local_74 = 0xffffff;
  local_80 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcf90/*gml_Script_box_inside_bound*/);
  local_e0 = 3;
  if (param_4 < 5) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[4];
  }
  FUN_1416cfeb0(puVar3,0x18e3b/*var:x1*/,0x80000000,&local_80,0,0);
  if (param_4 < 3) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
  }
  iVar2 = FUN_1416d9df0(&local_80,puVar3,DAT_1420f6b08,1);
  if ((iVar2 != -2) && (iVar2 < 0)) {
    if (param_4 < 5) {
      puVar3 = &DAT_1420b1000;
    }
    else {
      puVar3 = (undefined8 *)param_5[4];
    }
    FUN_1416cfeb0(puVar3,0x18e3d/*var:x2*/,0x80000000,&local_70,0,0);
    if (param_4 < 1) {
      puVar3 = &DAT_1420b1000;
    }
    else {
      puVar3 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_1416d9df0(&local_70,puVar3,DAT_1420f6b08,1);
    if (0 < iVar2) {
      if (param_4 < 5) {
        puVar3 = &DAT_1420b1000;
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
      }
      FUN_1416cfeb0(puVar3,0x18e4b/*var:y1*/,0x80000000,&local_60,0,0);
      if (param_4 < 4) {
        puVar3 = &DAT_1420b1000;
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
      }
      iVar2 = FUN_1416d9df0(&local_60,puVar3,DAT_1420f6b08,1);
      if ((iVar2 != -2) && (iVar2 < 0)) {
        if (param_4 < 5) {
          puVar3 = &DAT_1420b1000;
        }
        else {
          puVar3 = (undefined8 *)param_5[4];
        }
        FUN_1416cfeb0(puVar3,0x18e4d/*var:y2*/,0x80000000,&local_50,0,0);
        if (param_4 < 2) {
          puVar3 = &DAT_1420b1000;
        }
        else {
          puVar3 = (undefined8 *)param_5[1];
        }
        iVar2 = FUN_1416d9df0(&local_50,puVar3,DAT_1420f6b08,1);
        if (0 < iVar2) {
          uVar4 = (undefined4)_DAT_141981e30;
          uVar5 = (undefined4)((ulonglong)_DAT_141981e30 >> 0x20);
          uVar1 = *(uint *)((longlong)param_3 + 0xc);
          goto joined_r0x0001400dfdc4;
        }
      }
    }
  }
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = *(uint *)((longlong)param_3 + 0xc);
joined_r0x0001400dfdc4:
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    FUN_140001b50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = CONCAT44(uVar5,uVar4);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
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
  DAT_142182d78 = (undefined8 *)local_f0;
  return param_3;
}


