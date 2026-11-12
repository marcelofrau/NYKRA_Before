// Function: gml_Script__save_type @ 0x1400bca20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__save_type
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  undefined8 in_stack_fffffffffffffe48;
  undefined8 uVar11;
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
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  uint local_c4;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_e0 = "gml_Script__save_type";
  local_d8 = 0;
  local_e8 = DAT_142182d78;
  DAT_142182d78 = &local_e8;
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
  local_114 = 0xffffff;
  local_120 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_78 = (ulonglong)(uint)local_78;
  local_80 = 0;
  local_90 = (ulonglong)(uint)local_90;
  local_98 = 0;
  local_b0 = (ulonglong)(uint)local_b0;
  local_b8 = 0;
  local_108 = (ulonglong)(uint)local_108;
  local_110 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = param_2;
  FUN_1416ab750(DAT_1420dcd00);
  local_d8 = 0x43;
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  local_114 = 0;
  local_120 = 0;
  local_d8 = 0x44;
  if (param_4 < 2) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_d0,puVar6);
  local_d8 = 0x48;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  uVar7 = CONCAT44(uVar5,DAT_1420da610);
  local_148 = &local_d0;
  puVar6 = (undefined8 *)FUN_1416ab210(param_1,local_88,&local_80,1,uVar7,&local_148);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_ec = *(uint *)((longlong)puVar6 + 0xc);
  local_f0 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (local_ec & 0x1f) & 1) == 0) {
    local_f8 = *puVar6;
  }
  else {
    FUN_1400c5d80(&local_f8,puVar6);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14217f2c8) && (_Init_thread_header(&DAT_14217f2c8), DAT_14217f2c8 == -1)) {
    local_100 = &DAT_14217f250;
    FUN_1416ac010(&DAT_14217f250,s_number_1420b2a40);
    DAT_14217f260 = 0;
    local_100 = &DAT_14217f264;
    FUN_1416ac010(&DAT_14217f264,s_int32_1420b2a47);
    DAT_14217f274 = 0;
    local_100 = &DAT_14217f278;
    FUN_1416ac010(&DAT_14217f278,s_int64_1420b2a4d);
    DAT_14217f288 = 0;
    local_100 = &DAT_14217f28c;
    FUN_1416ac010(&DAT_14217f28c,s_string_1420b2a53);
    DAT_14217f29c = 1;
    local_100 = &DAT_14217f2a0;
    FUN_1416ac010(&DAT_14217f2a0,s_array_1420b2a5f);
    DAT_14217f2b0 = 2;
    local_100 = &DAT_14217f2b4;
    FUN_1416ac010(&DAT_14217f2b4,&DAT_1420b2a5a);
    DAT_14217f2c4 = 3;
    atexit(FUN_1400be3a0);
    _Init_thread_footer(&DAT_14217f2c8);
  }
  uVar7 = DAT_1420f6b08;
  lVar9 = 0;
  iVar3 = FUN_1416d9df0(&DAT_14217f250,&local_f8,DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_1400bcd8b:
    uVar11 = local_78;
    uVar1 = (&DAT_14217f260)[lVar9 * 5];
  }
  else {
    iVar3 = FUN_1416d9df0(&DAT_14217f264,&local_f8,uVar7,0);
    if (iVar3 == 0) {
      lVar9 = 1;
      goto LAB_1400bcd8b;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f278,&local_f8,uVar7,0);
    uVar11 = local_78;
    uVar1 = DAT_14217f288;
    if (((iVar3 != 0) &&
        (iVar3 = FUN_1416d9df0(&DAT_14217f28c,&local_f8,uVar7,0), uVar11 = local_78,
        uVar1 = DAT_14217f29c, iVar3 != 0)) &&
       (iVar3 = FUN_1416d9df0(&DAT_14217f2a0,&local_f8,uVar7,0), uVar11 = local_78,
       uVar1 = DAT_14217f2b0, iVar3 != 0)) {
      iVar3 = FUN_1416d9df0(&DAT_14217f2b4,&local_f8,uVar7,0);
      uVar4 = 0x82;
      uVar11 = local_78;
      uVar1 = DAT_14217f2c4;
      if (iVar3 != 0) goto LAB_1400bd992;
    }
  }
  local_78 = uVar11;
  if (3 < (ulonglong)uVar1) {
    uVar4 = 0x82;
    goto LAB_1400bd992;
  }
  switch((longlong)&switchD_1400bcdab::switchdataD_1400be350 +
         (longlong)(int)(&switchD_1400bcdab::switchdataD_1400be350)[uVar1]) {
  case 0x1400bcdfb:
    local_78._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
    local_bc = param_4;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    uVar11 = CONCAT44(uVar5,DAT_1420da250);
    local_148 = &local_d0;
    uVar7 = FUN_1416ab210(param_1,local_88,&local_80,1,uVar11,&local_148);
    uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_64 = 0;
    local_70 = 0x3ff0000000000000;
    iVar3 = FUN_1416d9df0(uVar7,&local_70,DAT_1420f6b08,1);
    if (-1 < iVar3) {
      local_d8 = 0x72;
      if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_98);
      }
      local_98 = 0;
      local_90 = 0x500000000;
      if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0x500000000;
      local_64 = 0;
      local_70 = 0;
      uVar4 = FUN_141693b30(&local_70);
      uVar7 = FUN_1416cd460(&local_b8,&local_d0,uVar4,0);
      FUN_1400019a0(&local_188,uVar7);
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      uVar11 = CONCAT44(uVar5,DAT_1420da630);
      local_140 = &local_188;
      uVar7 = FUN_1416ab210(param_1,local_88,&local_98,1,uVar11,&local_140);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      cVar2 = FUN_1416927d0(uVar7);
      uVar4 = 0x73;
      if (cVar2 != '\0') goto LAB_1400bd992;
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_80 = 0;
      local_78 = 0x500000000;
      if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_98);
      }
      local_98 = 0;
      local_90 = 0x500000000;
      local_64 = 0;
      local_70 = 0;
      uVar4 = FUN_141693b30(&local_70);
      uVar7 = FUN_1416cd460(&local_98,&local_d0,uVar4,0);
      FUN_1400019a0(&local_198,uVar7);
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_148 = &local_198;
      uVar11 = CONCAT44(uVar5,DAT_1420da640);
      uVar7 = FUN_1416ab210(param_1,local_88,&local_80,1,uVar11,&local_148);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      cVar2 = FUN_1416927d0(uVar7);
      if (cVar2 != '\0') {
        if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b8);
        }
        local_b8 = 0;
        local_b0 = 0x500000000;
        if ((0x46U >> (local_108._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_110);
        }
        local_110 = 0;
        local_108 = 0x500000000;
        local_140 = &local_d0;
        FUN_140002730(&local_178,&DAT_14217f150);
        local_138 = &local_178;
        FUN_140002730(&local_168,&DAT_14217f150);
        uVar11 = CONCAT44(uVar5,DAT_1420da240);
        local_130 = &local_168;
        uVar7 = FUN_1416ab210(param_1,local_88,&local_110,3,uVar11,&local_140);
        uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
        FUN_1400019a0(&local_158,uVar7);
        uVar11 = CONCAT44(uVar5,DAT_1420da630);
        local_128 = &local_158;
        uVar7 = FUN_1416ab210(param_1,local_88,&local_b8,1,uVar11,&local_128);
        uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
        cVar2 = FUN_1416927d0(uVar7);
        uVar4 = local_d8;
        if (cVar2 != '\0') goto LAB_1400bd992;
      }
      local_d8 = 0x74;
      local_64 = 0;
      local_70 = 0x4008000000000000;
      if (local_bc < 1) {
        pdVar8 = (double *)&DAT_1420b1000;
        uVar1 = DAT_1420b100c;
      }
      else {
        pdVar8 = (double *)*param_5;
        uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
      }
      if ((uVar1 & 0xffffff) == 0) {
        dVar10 = *pdVar8;
      }
      else {
        dVar10 = (double)FUN_1416940c0();
      }
      FUN_1416fbbe0((longlong)dVar10,1,&local_70);
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_d8 = 0x75;
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_80 = 0;
      local_78 = 0x500000000;
      local_148 = &local_d0;
      uVar7 = FUN_1416ab210(param_1,local_88,&local_80,1,CONCAT44(uVar5,DAT_1420da250),&local_148);
      if (local_bc < 1) {
        pdVar8 = (double *)&DAT_1420b1000;
        uVar1 = DAT_1420b100c;
      }
      else {
        pdVar8 = (double *)*param_5;
        uVar1 = *(uint *)((longlong)pdVar8 + 0xc);
      }
      if ((uVar1 & 0xffffff) == 0) {
        dVar10 = *pdVar8;
      }
      else {
        dVar10 = (double)FUN_1416940c0();
      }
      FUN_1416fbbe0((longlong)dVar10,3,uVar7);
      local_d8 = 0x76;
      if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a8);
      }
      dVar10 = _DAT_141981e30;
      local_9c = 0;
      local_a8 = 0.0;
      while( true ) {
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        local_148 = &local_d0;
        uVar7 = FUN_1416ab210(param_1,local_88,&local_80,1,DAT_1420da250,&local_148);
        iVar3 = FUN_1416d9df0(&local_a8,uVar7,DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_d8 = 0x77;
        if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_98);
        }
        local_98 = 0;
        local_90 = 0x500000000;
        uVar5 = FUN_141693b30(&local_a8);
        uVar7 = FUN_1416cd460(&local_98,&local_d0,uVar5,0);
        FUN_1400019a0(&local_120,uVar7);
        local_d8 = 0x78;
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        puVar6 = &DAT_1420b1000;
        if (0 < local_bc) {
          puVar6 = (undefined8 *)*param_5;
        }
        FUN_1400019a0(&local_198,puVar6);
        local_148 = &local_198;
        local_140 = &local_120;
        gml_Script__save_type_rec(param_1,local_88,&local_80,2,&local_148);
        switch(local_9c & 0xffffff) {
        case 1:
          local_a8 = (double)FUN_1416940c0(&local_a8);
          local_a8 = local_a8 + dVar10;
          local_9c = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_a8,&local_a8);
          break;
        case 7:
          local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
          break;
        case 10:
          local_a8 = (double)((longlong)local_a8 + 1);
          break;
        case 0xd:
          local_9c = 0;
        case 0:
          local_a8 = local_a8 + dVar10;
        }
      }
    }
    uVar4 = 0x7b;
    goto LAB_1400bd992;
  case 0x1400bd244:
    local_d8 = 0x7e;
    local_64 = 0;
    local_70 = 0x4010000000000000;
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd32e;
LAB_1400bd288:
      dVar10 = (double)FUN_1416940c0();
    }
    else {
      pdVar8 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bd288;
LAB_1400bd32e:
      dVar10 = *pdVar8;
    }
    FUN_1416fbbe0((longlong)dVar10,1,&local_70);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_d8 = 0x7f;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_148 = &local_d0;
    uVar7 = FUN_1416ab210(param_1,local_88,&local_80,1,CONCAT44(uVar5,DAT_1420da620),&local_148);
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd571;
LAB_1400bd3f8:
      dVar10 = (double)FUN_1416940c0();
    }
    else {
      pdVar8 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bd3f8;
LAB_1400bd571:
      dVar10 = *pdVar8;
    }
    FUN_1416fbbe0((longlong)dVar10,10,uVar7);
    uVar4 = 0x80;
    goto LAB_1400bd992;
  case 0x1400bd292:
    local_d8 = 0x6d;
    local_64 = 0;
    local_70 = 0x4000000000000000;
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd49a;
LAB_1400bd2d6:
      dVar10 = (double)FUN_1416940c0();
    }
    else {
      pdVar8 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bd2d6;
LAB_1400bd49a:
      dVar10 = *pdVar8;
    }
    FUN_1416fbbe0((longlong)dVar10,1,&local_70);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_d8 = 0x6e;
    if (param_4 < 1) {
      pdVar8 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd539;
LAB_1400bd4ea:
      dVar10 = (double)FUN_1416940c0();
    }
    else {
      pdVar8 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bd4ea;
LAB_1400bd539:
      dVar10 = *pdVar8;
    }
    FUN_1416fbbe0((longlong)dVar10,0xb,&local_d0);
    uVar4 = 0x6f;
    goto LAB_1400bd992;
  }
  local_d8 = 0x68;
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  if (param_4 < 1) {
    pdVar8 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd41d;
LAB_1400bcdf1:
    dVar10 = (double)FUN_1416940c0();
  }
  else {
    pdVar8 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bcdf1;
LAB_1400bd41d:
    dVar10 = *pdVar8;
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_d8 = 0x69;
  if (param_4 < 1) {
    pdVar8 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_1400bd505;
LAB_1400bd475:
    dVar10 = (double)FUN_1416940c0();
  }
  else {
    pdVar8 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) != 0) goto LAB_1400bd475;
LAB_1400bd505:
    dVar10 = *pdVar8;
  }
  FUN_1416fbbe0((longlong)dVar10,8,&local_d0);
  uVar4 = 0x6a;
LAB_1400bd992:
  local_d8 = uVar4;
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_108._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
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
  DAT_142182d78 = (undefined8 *)local_e8;
  return param_3;
}


