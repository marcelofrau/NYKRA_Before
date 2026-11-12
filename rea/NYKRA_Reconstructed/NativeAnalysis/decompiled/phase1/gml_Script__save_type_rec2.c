// Function: gml_Script__save_type_rec2 @ 0x1400ba350

undefined8 *
gml_Script__save_type_rec2
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 *local_108 [2];
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_a8 = "gml_Script__save_type_rec2";
  local_a0 = 0;
  local_b0 = DAT_142182d78;
  DAT_142182d78 = &local_b0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_78 = (ulonglong)(uint)local_78;
  local_80 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcce0);
  local_a0 = 3;
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  local_a0 = 4;
  if (param_4 < 2) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_c0,puVar3);
  local_a0 = 6;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  local_108[0] = &local_c0;
  puVar3 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_80,1,DAT_1420da610,local_108);
  local_84 = *(uint *)((longlong)puVar3 + 0xc);
  local_88 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_90 = *puVar3;
  }
  else {
    FUN_1400c5d80(&local_90,puVar3);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14217f1c4) && (_Init_thread_header(&DAT_14217f1c4), DAT_14217f1c4 == -1)) {
    local_98 = &DAT_14217f160;
    FUN_1416ac010(&DAT_14217f160,s_number_1420b2a40);
    DAT_14217f170 = 0;
    local_98 = &DAT_14217f174;
    FUN_1416ac010(&DAT_14217f174,s_int32_1420b2a47);
    DAT_14217f184 = 0;
    local_98 = &DAT_14217f188;
    FUN_1416ac010(&DAT_14217f188,s_int64_1420b2a4d);
    DAT_14217f198 = 0;
    local_98 = &DAT_14217f19c;
    FUN_1416ac010(&DAT_14217f19c,s_string_1420b2a53);
    DAT_14217f1ac = 1;
    local_98 = &DAT_14217f1b0;
    FUN_1416ac010(&DAT_14217f1b0,&DAT_1420b2a5a);
    DAT_14217f1c0 = 2;
    atexit(FUN_1400baec0);
    _Init_thread_footer(&DAT_14217f1c4);
  }
  uVar8 = (undefined4)DAT_1420f6b08;
  lVar6 = 0;
  iVar1 = FUN_1416d9df0(&DAT_14217f160,&local_90,uVar8,0);
  if (iVar1 == 0) {
LAB_1400ba5e1:
    iVar1 = (&DAT_14217f170)[lVar6 * 5];
  }
  else {
    iVar1 = FUN_1416d9df0(&DAT_14217f174,&local_90,uVar8,0);
    if (iVar1 == 0) {
      lVar6 = 1;
      goto LAB_1400ba5e1;
    }
    iVar2 = FUN_1416d9df0(&DAT_14217f188,&local_90,uVar8,0);
    iVar1 = DAT_14217f198;
    if ((iVar2 != 0) &&
       (iVar2 = FUN_1416d9df0(&DAT_14217f19c,&local_90,uVar8,0), iVar1 = DAT_14217f1ac, iVar2 != 0))
    {
      iVar2 = FUN_1416d9df0(&DAT_14217f1b0,&local_90,uVar8,0);
      uVar8 = 0x18;
      iVar1 = DAT_14217f1c0;
      if (iVar2 != 0) goto LAB_1400ba915;
    }
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      local_a0 = 0xf;
      local_64 = 0;
      local_70 = 0x4000000000000000;
      if (param_4 < 1) {
        pdVar5 = (double *)&DAT_1420b1000;
        if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba679;
LAB_1400ba704:
        dVar7 = *pdVar5;
      }
      else {
        pdVar5 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba704;
LAB_1400ba679:
        dVar7 = (double)FUN_1416940c0();
      }
      FUN_1416fbbe0((longlong)dVar7,1,&local_70);
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_a0 = 0x10;
      if (param_4 < 1) {
        pdVar5 = (double *)&DAT_1420b1000;
        if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba751;
LAB_1400ba897:
        dVar7 = *pdVar5;
      }
      else {
        pdVar5 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba897;
LAB_1400ba751:
        dVar7 = (double)FUN_1416940c0();
      }
      uVar8 = 0x11;
      FUN_1416fbbe0((longlong)dVar7,0xb,&local_c0);
      goto LAB_1400ba915;
    }
    uVar8 = 0x18;
    if (iVar1 != 0) goto LAB_1400ba915;
    local_a0 = 10;
    local_64 = 0;
    local_70 = 0x3ff0000000000000;
    if (param_4 < 1) {
      pdVar5 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba63a;
LAB_1400ba837:
      dVar7 = *pdVar5;
    }
    else {
      pdVar5 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba837;
LAB_1400ba63a:
      dVar7 = (double)FUN_1416940c0();
    }
    FUN_1416fbbe0((longlong)dVar7,1,&local_70);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_a0 = 0xb;
    if (param_4 < 1) {
      pdVar5 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba87c;
LAB_1400ba8c6:
      dVar7 = *pdVar5;
    }
    else {
      pdVar5 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba8c6;
LAB_1400ba87c:
      dVar7 = (double)FUN_1416940c0();
    }
    uVar8 = 0xc;
    FUN_1416fbbe0((longlong)dVar7,8,&local_c0);
    goto LAB_1400ba915;
  }
  local_a0 = 0x14;
  local_64 = 0;
  local_70 = 0x4010000000000000;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba6ce;
LAB_1400ba76f:
    dVar7 = *pdVar5;
  }
  else {
    pdVar5 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba76f;
LAB_1400ba6ce:
    dVar7 = (double)FUN_1416940c0();
  }
  FUN_1416fbbe0((longlong)dVar7,1,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_a0 = 0x15;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  local_108[0] = &local_c0;
  uVar4 = FUN_1416ab210(param_1,param_2,&local_80,1,DAT_1420da620,local_108);
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400ba819;
LAB_1400ba8f9:
    dVar7 = *pdVar5;
  }
  else {
    pdVar5 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) goto LAB_1400ba8f9;
LAB_1400ba819:
    dVar7 = (double)FUN_1416940c0();
  }
  uVar8 = 0x16;
  FUN_1416fbbe0((longlong)dVar7,10,uVar4);
LAB_1400ba915:
  local_a0 = uVar8;
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  DAT_142182d78 = (undefined8 *)local_b0;
  return param_3;
}


