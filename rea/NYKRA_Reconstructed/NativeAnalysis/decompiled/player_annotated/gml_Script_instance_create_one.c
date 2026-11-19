// Function: gml_Script_instance_create_one @ 0x140101340

undefined8 *
gml_Script_instance_create_one
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
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
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_e8 = "gml_Script_instance_create_one";
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
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = (ulonglong)(uint)local_48;
  local_50 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd090/*gml_Script_instance_create_one*/);
  pdVar3 = (double *)&DAT_1420b1000;
  if (3 < param_4) {
    pdVar3 = (double *)param_5[3];
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar5 = *pdVar3;
  }
  else {
    dVar5 = (double)FUN_1416940c0();
  }
  iVar1 = FUN_1416f82f0(param_1,param_2,(longlong)dVar5);
  if (iVar1 < 1) {
    local_e0 = 2;
    if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    local_50 = 0;
    local_48 = 0x500000000;
    if (param_4 < 1) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_1400019a0(&local_98,puVar4);
    if (param_4 < 2) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_118 = &local_98;
    FUN_1400019a0(&local_88,puVar4);
    if (param_4 < 3) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
    }
    local_110 = &local_88;
    FUN_1400019a0(&local_78,puVar4);
    if (param_4 < 4) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[3];
    }
    local_108 = &local_78;
    FUN_1400019a0(&local_68,puVar4);
    local_100 = &local_68;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_50,4,DAT_1420da400/*instance_create_depth*/,&local_118);
    FUN_1400019a0(param_3,uVar2);
  }
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
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


