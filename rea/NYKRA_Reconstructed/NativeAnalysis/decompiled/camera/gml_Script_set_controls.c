// Function: gml_Script_set_controls @ 0x14017ba40

undefined8 * gml_Script_set_controls(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  double *local_a8;
  double *local_a0;
  double *local_98;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = "gml_Script_set_controls";
  local_80 = 0;
  local_90 = DAT_142182d78;
  DAT_142182d78 = &local_90;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  DAT_142182d90 = param_1;
  local_e0 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1883b);
  pdVar4 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a50);
  local_a8 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a51);
  local_a0 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a53);
  puVar5 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a4f);
  local_98 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a4e);
  puVar6 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a48);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a4b);
  puVar8 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a49);
  puVar9 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a4a);
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  *(undefined4 *)((longlong)local_e0 + 0xc) = 5;
  *local_e0 = 0;
  FUN_1416ab750(DAT_1420dd630);
  local_80 = 2;
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(uVar3,&local_f0,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_80 = 3;
    if ((0x46U >> (*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar4);
    }
    *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
    *pdVar4 = 65.0;
    local_80 = 4;
    if ((0x46U >> (*(uint *)((longlong)local_a8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_a8);
    }
    *(undefined4 *)((longlong)local_a8 + 0xc) = 0;
    *local_a8 = 68.0;
    local_80 = 5;
    if ((0x46U >> (*(uint *)((longlong)local_a0 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_a0);
    }
    *(undefined4 *)((longlong)local_a0 + 0xc) = 0;
    *local_a0 = 87.0;
    local_80 = 6;
    if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4040000000000000;
    local_80 = 7;
    if ((0x46U >> (*(uint *)((longlong)local_98 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_98);
    }
    *(undefined4 *)((longlong)local_98 + 0xc) = 0;
    *local_98 = 83.0;
    local_80 = 8;
    if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4052800000000000;
    local_80 = 9;
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x4052c00000000000;
    local_80 = 10;
    if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0x4052000000000000;
    local_80 = 0xb;
    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x4052400000000000;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    FUN_1400019a0(&local_d8,pdVar4);
    local_b8 = &local_d8;
    uVar3 = FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa10,&local_b8);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 != '\0') {
      local_80 = 0xd;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_140002730(&local_c8,&DAT_1420b3720);
      local_b0 = &local_c8;
      FUN_1416ab210(local_60,local_68,&local_78,1,DAT_1420daa20,&local_b0);
    }
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    FUN_1400019a0(&local_d8,local_a8);
    local_b8 = &local_d8;
    uVar3 = FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa10,&local_b8);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 != '\0') {
      local_80 = 0xe;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_140002730(&local_c8,&DAT_1420b3730);
      local_b0 = &local_c8;
      FUN_1416ab210(local_60,local_68,&local_78,1,DAT_1420daa20,&local_b0);
    }
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    FUN_1400019a0(&local_d8,local_a0);
    local_b8 = &local_d8;
    uVar3 = FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa10,&local_b8);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 != '\0') {
      local_80 = 0xf;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_140002730(&local_c8,&DAT_1420b3740);
      local_b0 = &local_c8;
      FUN_1416ab210(local_60,local_68,&local_78,1,DAT_1420daa20,&local_b0);
    }
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    FUN_1400019a0(&local_d8,local_98);
    local_b8 = &local_d8;
    uVar3 = FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa10,&local_b8);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 != '\0') {
      local_80 = 0x10;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_140002730(&local_c8,&DAT_1420b3750);
      local_b0 = &local_c8;
      FUN_1416ab210(local_60,local_68,&local_78,1,DAT_1420daa20,&local_b0);
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar4;
    }
    else {
      dVar10 = (double)FUN_1416940c0(pdVar4);
    }
    cVar1 = FUN_1417099d0((longlong)dVar10);
    if (cVar1 != '\0') {
      local_80 = 0x12;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      FUN_140002730(&local_d8,&DAT_1420b3720);
      local_b8 = &local_d8;
      FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa30,&local_b8);
    }
    if ((*(uint *)((longlong)local_a8 + 0xc) & 0xffffff) == 0) {
      dVar10 = *local_a8;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    cVar1 = FUN_1417099d0((longlong)dVar10);
    if (cVar1 != '\0') {
      local_80 = 0x13;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      FUN_140002730(&local_d8,&DAT_1420b3730);
      local_b8 = &local_d8;
      FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa30,&local_b8);
    }
    if ((*(uint *)((longlong)local_a0 + 0xc) & 0xffffff) == 0) {
      dVar10 = *local_a0;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    cVar1 = FUN_1417099d0((longlong)dVar10);
    if (cVar1 != '\0') {
      local_80 = 0x14;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      FUN_140002730(&local_d8,&DAT_1420b3740);
      local_b8 = &local_d8;
      FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa30,&local_b8);
    }
    if ((*(uint *)((longlong)local_98 + 0xc) & 0xffffff) == 0) {
      dVar10 = *local_98;
    }
    else {
      dVar10 = (double)FUN_1416940c0();
    }
    cVar1 = FUN_1417099d0((longlong)dVar10);
    if (cVar1 != '\0') {
      local_80 = 0x15;
      if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_58 = 0;
      local_50 = 0x500000000;
      FUN_140002730(&local_d8,&DAT_1420b3750);
      local_b8 = &local_d8;
      FUN_1416ab210(local_60,local_68,&local_58,1,DAT_1420daa30,&local_b8);
    }
  }
  else {
    local_80 = 0x18;
    if ((0x46U >> (*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(pdVar4);
    }
    *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
    *pdVar4 = 37.0;
    local_80 = 0x19;
    if ((0x46U >> (*(uint *)((longlong)local_a8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_a8);
    }
    *(undefined4 *)((longlong)local_a8 + 0xc) = 0;
    *local_a8 = 39.0;
    local_80 = 0x1a;
    if ((0x46U >> (*(uint *)((longlong)local_a0 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_a0);
    }
    *(undefined4 *)((longlong)local_a0 + 0xc) = 0;
    *local_a0 = 38.0;
    local_80 = 0x1b;
    if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4040000000000000;
    local_80 = 0x1c;
    if ((0x46U >> (*(uint *)((longlong)local_98 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_98);
    }
    *(undefined4 *)((longlong)local_98 + 0xc) = 0;
    *local_98 = 40.0;
    local_80 = 0x1d;
    if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4050400000000000;
    local_80 = 0x1e;
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x4054c00000000000;
    local_80 = 0x1f;
    if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0x4051800000000000;
    local_80 = 0x20;
    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x4051400000000000;
  }
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  DAT_142182d78 = (undefined8 *)local_90;
  return local_e0;
}


