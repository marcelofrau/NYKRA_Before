// Function: gml_Object_parEntity_Step_1 @ 0x1402ec6e0

void gml_Object_parEntity_Step_1(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  uint local_e4;
  undefined8 local_e0;
  uint local_d4;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  undefined1 local_80 [12];
  uint local_74;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = "gml_Object_parEntity_Step_1";
  local_60 = 0;
  local_70 = DAT_142182d78;
  DAT_142182d78 = &local_70;
  DAT_142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18998/*var:GRV_SPD*/);
  local_134 = 0xffffff;
  local_140 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_60 = 1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b5d/*var:p_vsp*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar3);
  FUN_1416a8c00(1);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x188a7/*var:do_grav*/);
  uStack_3c = 0;
  local_48 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar1 = FUN_1416d9df0(uVar4,&local_48,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_60 = 2;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x1898f/*var:grav*/);
    uStack_3c = *(uint *)((longlong)puVar2 + 0xc);
    uStack_40 = *(undefined4 *)(puVar2 + 1);
    if ((0x46U >> (uStack_3c & 0x1f) & 1) == 0) {
      local_48 = *puVar2;
    }
    else {
      FUN_1402edab0(&local_48,puVar2);
    }
    FUN_140001fe0(&local_48,uVar4);
    FUN_140003ca0(uVar3,&local_48);
    if ((0x46U >> (uStack_3c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_48);
    }
  }
  local_60 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18b42/*var:onobject*/);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b58/*var:p_onobject*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,puVar2);
  FUN_1416a8c00(1);
  local_60 = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_60 = 6;
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_60 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881a/*var:col_l*/);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_60 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881d/*var:col_r*/);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_60 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881e/*var:col_t*/);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_60 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18819/*var:col_b*/);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  uStack_3c = 0;
  local_48 = 0;
  iVar1 = FUN_1416d9df0(uVar3,&local_48,DAT_1420f6b08,1);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x18b42/*var:onobject*/);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18e4d/*var:y2*/);
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_48,0,0);
    FUN_140001a50(local_80,&local_48,0x10);
    FUN_140017bd0(&local_58,local_80,1);
    iVar1 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(local_80);
    }
    if (0 < iVar1) {
      local_60 = 0x13;
      local_48 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_48,0,0);
      FUN_140001a50(&local_58,&local_48,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(puVar2,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_60 = 0x14;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
      local_4c = *(uint *)((longlong)puVar2 + 0xc);
      local_50 = *(undefined4 *)(puVar2 + 1);
      if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
        local_58 = *puVar2;
      }
      else {
        FUN_1402edab0(&local_58,puVar2);
      }
      FUN_140003e00(&local_58,uVar3);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar4,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_60 = 0x15;
      puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar2);
      }
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *puVar2 = 0;
    }
  }
  local_60 = 0x17;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189cf/*var:hsp*/);
  uStack_3c = 0;
  local_48 = 0;
  iVar1 = FUN_1416d9df0(uVar3,&local_48,DAT_1420f6b08,1);
  if ((iVar1 == -2) || (-1 < iVar1)) {
LAB_1402ecec7:
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    uStack_3c = 0;
    local_48 = 0;
    iVar1 = FUN_1416d9df0(uVar3,&local_48,DAT_1420f6b08,1);
    if (iVar1 < 1) goto LAB_1402ed1ea;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_48,0,0);
    FUN_140001a50(local_80,&local_48,0x10);
    FUN_140017bd0(&local_58,local_80,1);
    iVar1 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(local_80);
    }
    if (iVar1 < 1) goto LAB_1402ed1ea;
    local_60 = 0x1e;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_48,0,0);
    FUN_140001a50(&local_58,&local_48,0x10);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(puVar2,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    FUN_1416a8c00(1);
    local_60 = 0x1f;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    local_4c = *(uint *)((longlong)puVar2 + 0xc);
    local_50 = *(undefined4 *)(puVar2 + 1);
    if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
      local_58 = *puVar2;
    }
    else {
      FUN_1402edab0(&local_58,puVar2);
    }
    FUN_140003e00(&local_58,uVar3);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    FUN_1416a8c00(1);
    local_60 = 0x20;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18e3b/*var:x1*/);
    uStack_3c = 0;
    local_48 = 0;
    iVar1 = FUN_1416d9df0(uVar3,&local_48,DAT_1420f6b08,1);
    if ((iVar1 == -2) || (-1 < iVar1)) goto LAB_1402ecec7;
    local_60 = 0x18;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
    local_60 = 0x19;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uStack_3c = *(uint *)((longlong)puVar2 + 0xc);
    uStack_40 = *(undefined4 *)(puVar2 + 1);
    if ((0x46U >> (uStack_3c & 0x1f) & 1) == 0) {
      local_48 = *puVar2;
    }
    else {
      FUN_1402edab0(&local_48,puVar2);
    }
    FUN_140003ca0(&local_48,uVar3);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,&local_48);
    if ((0x46U >> (uStack_3c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_48);
    }
    FUN_1416a8c00(1);
    local_60 = 0x1a;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
LAB_1402ed1ea:
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  DAT_142182d78 = (undefined8 *)local_70;
  return;
}


