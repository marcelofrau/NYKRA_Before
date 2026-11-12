// Function: gml_Script__save_ds_list @ 0x1401a02a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__save_ds_list
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  undefined8 *local_138;
  undefined8 *local_130;
  double *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_108 = "gml_Script__save_ds_list";
  local_100 = 0;
  local_110 = DAT_142182d78;
  DAT_142182d78 = &local_110;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = 0.0;
  local_68 = (ulonglong)(uint)local_68;
  local_70 = 0;
  local_88 = (ulonglong)(uint)local_88;
  local_90 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd810);
  local_100 = 2;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_d8,puVar5);
  local_128 = &local_d8;
  FUN_140002730(&local_c8,&DAT_1420b3810);
  local_120 = &local_c8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,2,DAT_1420da430,&local_128);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 == '\0') {
    local_100 = 9;
    local_94 = 0;
    local_a0 = 0;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1401a0538;
LAB_1401a04c7:
      dVar6 = (double)FUN_1416940c0();
    }
    else {
      pdVar4 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a04c7;
LAB_1401a0538:
      dVar6 = *pdVar4;
    }
    FUN_1416fbbe0((longlong)dVar6,3,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    goto LAB_1401a08e1;
  }
  local_100 = 3;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_b8,puVar5);
  local_118 = &local_b8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_90,1,DAT_1420d9ec0,&local_118);
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1401a057e;
LAB_1401a0521:
    dVar6 = (double)FUN_1416940c0();
  }
  else {
    pdVar4 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a0521;
LAB_1401a057e:
    dVar6 = *pdVar4;
  }
  FUN_1416fbbe0((longlong)dVar6,3,uVar3);
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_f8,puVar5);
  local_138 = &local_f8;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420d9ec0,&local_138);
  local_94 = 0;
  local_a0 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(uVar3,&local_a0,DAT_1420f6b08,1);
  if (-1 < iVar2) {
    local_100 = 5;
    if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    dVar6 = _DAT_141981e30;
    local_74 = 0;
    local_80 = 0.0;
    while( true ) {
      if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_70 = 0;
      local_68 = 0x500000000;
      puVar5 = &DAT_1420b1000;
      if (1 < param_4) {
        puVar5 = (undefined8 *)param_5[1];
      }
      FUN_1400019a0(&local_f8,puVar5);
      local_138 = &local_f8;
      uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420d9ec0,&local_138);
      iVar2 = FUN_1416d9df0(&local_80,uVar3,DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      local_100 = 6;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      puVar5 = &DAT_1420b1000;
      if (1 < param_4) {
        puVar5 = (undefined8 *)param_5[1];
      }
      FUN_1400019a0(&local_e8,puVar5);
      local_130 = &local_e8;
      local_128 = &local_80;
      uVar3 = FUN_1416ab210(param_1,param_2,&local_90,2,DAT_1420d9ee0,&local_130);
      if (param_4 < 1) {
        pdVar4 = (double *)&DAT_1420b1000;
        if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1401a087c;
LAB_1401a0867:
        dVar7 = (double)FUN_1416940c0();
      }
      else {
        pdVar4 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a0867;
LAB_1401a087c:
        dVar7 = *pdVar4;
      }
      FUN_1416fbbe0((longlong)dVar7,8,uVar3);
      switch(local_74 & 0xffffff) {
      case 1:
        local_80 = (double)FUN_1416940c0(&local_80);
        local_80 = local_80 + dVar6;
        local_74 = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_80,&local_80);
        break;
      case 7:
        local_80 = (double)CONCAT44(local_80._4_4_,local_80._0_4_ + 1);
        break;
      case 10:
        local_80 = (double)((longlong)local_80 + 1);
        break;
      case 0xd:
        local_74 = 0;
      case 0:
        local_80 = local_80 + dVar6;
      }
    }
  }
LAB_1401a08e1:
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
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
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  DAT_142182d78 = (undefined8 *)local_110;
  return param_3;
}


