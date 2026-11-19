// Function: gml_Object_parGrass_Create_0 @ 0x140a67ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parGrass_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
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
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_60 = "gml_Object_parGrass_Create_0";
  local_58 = 0;
  local_68 = DAT_142182d78;
  DAT_142182d78 = &local_68;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  DAT_142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18859/*var:CURRENT_PLANET*/);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
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
  local_bc = 0xffffff;
  local_c8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18dd5/*var:tshake*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c81/*var:shake*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 3;
  uVar5 = FUN_1416cdc30(DAT_141986fb0);
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_ac = 0;
  local_b8 = uVar5;
  FUN_1416cfae0(param_1,DAT_1420d5ae8/*image_index*/,0x80000000,&local_b8);
  local_58 = 4;
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_1416cfae0(param_1,DAT_1420d5af8/*image_speed*/,0x80000000,&local_a8);
  local_58 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e30/*var:wave*/);
  iVar1 = FUN_1416f82f0(param_1,param_2,0x60);
  FUN_1416a8cb0(param_1);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  uVar5 = _DAT_141981e30;
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  *puVar3 = uVar5;
  FUN_1416a8c00(1);
  local_58 = 6;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_88,0,0);
  FUN_140017bd0(&local_50,&local_88,8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_50);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  local_58 = 7;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_88,0,0);
  local_44 = local_7c;
  local_48 = local_80;
  if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
    local_50 = local_88;
  }
  else {
    FUN_140a692e0(&local_50,&local_88);
  }
  FUN_140001c50(&local_50,8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_50);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  local_58 = 8;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_78,0,0);
  FUN_140017bd0(&local_50,&local_78,0x10);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_50);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  local_58 = 9;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_78,0,0);
  local_44 = local_6c;
  local_48 = local_70;
  if ((0x46U >> (local_6c & 0x1f) & 1) == 0) {
    local_50 = local_78;
  }
  else {
    FUN_140a692e0(&local_50,&local_78);
  }
  FUN_140003f30(&local_50,_DAT_141981ea8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_50);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  local_58 = 10;
  DAT_142182d90 = (longlong *)0x109fa;
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  FUN_1416cfae0(param_1,DAT_1420d5a48/*alarm*/,2,&local_98);
  local_58 = 0xb;
  local_44 = *(uint *)((longlong)puVar2 + 0xc);
  local_48 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (local_44 & 0x1f) & 1) == 0) {
    local_50 = *puVar2;
  }
  else {
    FUN_140a692e0(&local_50,puVar2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_142180ffc) && (_Init_thread_header(&DAT_142180ffc), DAT_142180ffc == -1)) {
    _DAT_142180fcc = 0;
    _DAT_142180fc0 = 0;
    _DAT_142180fe0 = 0x100000000;
    _DAT_142180fd4 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    _DAT_142180ff4 = 0x200000000;
    _DAT_142180fe8 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
    atexit(FUN_140a69230);
    _Init_thread_footer(&DAT_142180ffc);
  }
  uVar6 = (undefined4)DAT_1420f6b08;
  lVar4 = 0;
  iVar1 = FUN_1416d9df0(&DAT_142180fc0,&local_50,uVar6,0);
  if (iVar1 == 0) {
LAB_140a682a8:
    iVar1 = (&DAT_142180fd0)[lVar4 * 5];
  }
  else {
    iVar1 = FUN_1416d9df0(&DAT_142180fd4,&local_50,uVar6,0);
    if (iVar1 != 0) {
      iVar1 = FUN_1416d9df0(&DAT_142180fe8,&local_50,uVar6,0);
      if (iVar1 != 0) goto joined_r0x000140a68728;
      lVar4 = 2;
      goto LAB_140a682a8;
    }
    iVar1 = DAT_142180fe4;
  }
  if (iVar1 == 2) {
    local_58 = 0x17;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18820/*var:col1*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x416e1aa5c0000000/*1.57832e+07*/;
    local_58 = 0x18;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18821/*var:col2*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x4165ccc100000000/*1.14294e+07*/;
    local_58 = 0x19;
  }
  else if (iVar1 == 1) {
    local_58 = 0x12;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18820/*var:col1*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x4164cf1d80000000/*1.09099e+07*/;
    local_58 = 0x13;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18821/*var:col2*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x416065d1c0000000/*8.59713e+06*/;
    local_58 = 0x14;
  }
  else if (iVar1 == 0) {
    local_58 = 0xd;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18820/*var:col1*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x4155f41540000000/*5.75496e+06*/;
    local_58 = 0xe;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18821/*var:col2*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x4151654900000000/*4.56016e+06*/;
    local_58 = 0xf;
  }
joined_r0x000140a68728:
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
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
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
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
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  DAT_142182d78 = (undefined8 *)local_68;
  return;
}


