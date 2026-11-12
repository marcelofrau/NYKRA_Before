// Function: gml_Script_map_save @ 0x14003fa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_map_save(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double **ppdVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_480;
  undefined8 *local_478;
  double local_470;
  uint local_464;
  undefined8 local_460;
  uint local_454;
  int local_44c;
  double local_448;
  uint local_43c;
  undefined8 local_438;
  uint local_42c;
  undefined8 local_428;
  uint local_41c;
  undefined8 local_418;
  uint local_40c;
  undefined8 local_408;
  uint local_3fc;
  undefined8 local_3f8;
  uint local_3ec;
  undefined8 local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  uint local_3cc;
  undefined8 local_3c8;
  uint local_3bc;
  undefined8 local_3b8;
  uint local_3ac;
  undefined8 local_3a8;
  uint local_39c;
  undefined8 local_398;
  uint local_38c;
  undefined8 local_388;
  uint local_37c;
  undefined8 local_378;
  uint local_36c;
  undefined8 local_368;
  uint local_35c;
  undefined8 local_358;
  uint local_34c;
  undefined8 local_348;
  uint local_33c;
  undefined8 local_338;
  uint local_32c;
  undefined8 local_328;
  uint local_31c;
  undefined8 local_318;
  uint local_30c;
  undefined8 local_308;
  uint local_2fc;
  undefined8 local_2f8;
  uint local_2ec;
  undefined8 local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
  undefined8 local_278;
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  uint local_23c;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f0;
  uint local_1e4;
  undefined8 local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  longlong local_1a8;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_100;
  char *local_f8;
  undefined4 local_f0;
  double local_e8;
  uint local_dc;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  double local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  uint local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_f8 = "gml_Script_map_save";
  local_f0 = 0;
  local_100 = DAT_142182d78;
  DAT_142182d78 = &local_100;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_74 = 0xffffff;
  local_80 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  DAT_142182d90 = param_1;
  local_478 = param_3;
  local_44c = param_4;
  local_70 = param_2;
  local_68 = param_1;
  local_480 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_43c = 0xffffff;
  local_448 = 0.0;
  local_464 = 0xffffff;
  local_470 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_1d0 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18b2b);
  local_22c = 0xffffff;
  local_238 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_454 = 0xffffff;
  local_460 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_3fc = 0xffffff;
  local_408 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_88 = (ulonglong)(uint)local_88;
  local_90 = 0;
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_180 = (ulonglong)(uint)local_180;
  local_188 = 0;
  *(undefined4 *)((longlong)local_478 + 0xc) = 5;
  *local_478 = 0;
  FUN_1416ab750(DAT_1420dc850);
  iVar2 = FUN_1416f82f0(local_68,local_70,0x43);
  if (0 < iVar2) {
    uStack_200 = uStack_200 & 0xffffffff;
    local_208 = 0x4050c00000000000;
    iVar2 = FUN_1416ab810(&local_1b8,&local_68,&local_70,&local_208);
    if ((0x46U >> (uStack_200._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_208);
    }
    if (0 < iVar2) {
      do {
        local_f0 = 7;
        FUN_1416f8210(local_68,local_70,0,0);
        cVar1 = FUN_1416abe60(&local_1b8,&local_68);
      } while (cVar1 != '\0');
    }
    FUN_1416ab620(&local_1b8,&local_68,&local_70);
    if (local_1a8 != 0) {
      thunk_FUN_1416c46f0();
      local_1a8 = 0;
    }
  }
  FUN_1416f82f0(local_68,local_70,0x40);
  local_f0 = 0x23;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  FUN_140002730(&local_158,&DAT_1420b2188);
  local_d8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b2198);
  local_d0 = &local_148;
  FUN_140002730(&local_138,&DAT_1420b2198);
  local_c8 = &local_138;
  uVar4 = FUN_1416ab210(local_68,local_70,&local_90,3,DAT_1420da220,&local_d8);
  FUN_1400019a0(&local_80,uVar4);
  local_f0 = 0x25;
  uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18aa2);
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,uVar4);
  local_f0 = 0x26;
  uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18b09);
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,uVar4);
  local_f0 = 0x27;
  uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18abd);
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,uVar4);
  local_f0 = 0x28;
  uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18b9c);
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,uVar4);
  local_f0 = 0x29;
  uVar4 = (**(code **)(*local_68 + 8))(local_68,0x189c9);
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,uVar4);
  local_f0 = 0x2a;
  local_1ac = 0;
  local_1b8 = 0;
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,&local_1b8);
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  local_f0 = 0x2a;
  local_1ac = 0;
  local_1b8 = 0;
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,&local_1b8);
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  local_f0 = 0x2a;
  local_1ac = 0;
  local_1b8 = 0;
  dVar5 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar5 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar5,1,&local_1b8);
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  local_f0 = 0x2c;
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  dVar5 = _DAT_141981e30;
  local_15c = 0;
  local_168 = 0.0;
  while( true ) {
    uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18b09);
    iVar2 = FUN_1416d9df0(&local_168,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_f0 = 0x2d;
    if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_178);
    }
    local_16c = 0;
    local_178 = 0.0;
    while( true ) {
      uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18abd);
      iVar2 = FUN_1416d9df0(&local_178,uVar4,DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      local_f0 = 0x2e;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      FUN_1400019a0(&local_158,local_480);
      local_d8 = &local_158;
      local_d0 = &local_168;
      local_c8 = &local_178;
      uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,3,DAT_1420da240,&local_d8);
      FUN_1400019a0(&local_128,uVar4);
      local_c0 = &local_128;
      uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da230,&local_c0);
      dVar6 = local_80;
      if ((local_74 & 0xffffff) != 0) {
        dVar6 = (double)FUN_1416940c0(&local_80);
      }
      FUN_1416fbbe0((longlong)dVar6,3,uVar4);
      switch(local_16c & 0xffffff) {
      case 1:
        local_178 = (double)FUN_1416940c0(&local_178);
        local_178 = local_178 + dVar5;
        local_16c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_178,&local_178);
        break;
      case 7:
        local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
        break;
      case 10:
        local_178 = (double)((longlong)local_178 + 1);
        break;
      case 0xd:
        local_16c = 0;
      case 0:
        local_178 = local_178 + dVar5;
      }
    }
    switch(local_15c & 0xffffff) {
    case 1:
      local_168 = (double)FUN_1416940c0(&local_168);
      local_168 = local_168 + dVar5;
      local_15c = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_168,&local_168);
      break;
    case 7:
      local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
      break;
    case 10:
      local_168 = (double)((longlong)local_168 + 1);
      break;
    case 0xd:
      local_15c = 0;
    case 0:
      local_168 = local_168 + dVar5;
    }
  }
  local_f0 = 0x32;
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  while( true ) {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    uVar4 = (**(code **)(*local_68 + 8))(local_68,0x186b9);
    FUN_1400019a0(&local_158,uVar4);
    local_d8 = &local_158;
    ppdVar8 = &local_d8;
    uVar7 = DAT_1420da250;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da250,ppdVar8);
    iVar2 = FUN_1416d9df0(&local_e8,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_f0 = 0x33;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    uVar4 = (**(code **)(*local_68 + 8))(local_68,0x186b9);
    uVar3 = FUN_141693b30(&local_e8);
    uVar4 = FUN_14002e450(uVar4,uVar3);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da260,&local_d0);
    FUN_1400019a0(&local_448,uVar4);
    local_f0 = 0x34;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    local_d8 = &local_448;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da270,&local_d8);
    FUN_1400019a0(&local_470,uVar4);
    local_f0 = 0x35;
    if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    local_15c = 0;
    local_168 = 0.0;
    while( true ) {
      uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18b09);
      iVar2 = FUN_1416d9df0(&local_168,uVar4,DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      local_f0 = 0x36;
      if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      local_16c = 0;
      local_178 = 0.0;
      while( true ) {
        uVar4 = (**(code **)(*local_68 + 8))(local_68,0x18abd);
        iVar2 = FUN_1416d9df0(&local_178,uVar4,DAT_1420f6b08,1);
        if ((iVar2 == -2) || (-1 < iVar2)) break;
        local_f0 = 0x37;
        if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_90);
        }
        local_90 = 0;
        local_88 = 0x500000000;
        local_d8 = &local_470;
        local_d0 = &local_168;
        local_c8 = &local_178;
        uVar4 = FUN_1416ab210(local_68,local_70,&local_90,3,DAT_1420da280,&local_d8);
        dVar6 = local_80;
        if ((local_74 & 0xffffff) != 0) {
          dVar6 = (double)FUN_1416940c0(&local_80);
        }
        FUN_1416fbbe0((longlong)dVar6,3,uVar4);
        switch(local_16c & 0xffffff) {
        case 1:
          local_178 = (double)FUN_1416940c0(&local_178);
          local_178 = local_178 + dVar5;
          local_16c = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_178,&local_178);
          break;
        case 7:
          local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
          break;
        case 10:
          local_178 = (double)((longlong)local_178 + 1);
          break;
        case 0xd:
          local_16c = 0;
        case 0:
          local_178 = local_178 + dVar5;
        }
      }
      switch(local_15c & 0xffffff) {
      case 1:
        local_168 = (double)FUN_1416940c0(&local_168);
        local_168 = local_168 + dVar5;
        local_15c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_168,&local_168);
        break;
      case 7:
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
        break;
      case 10:
        local_168 = (double)((longlong)local_168 + 1);
        break;
      case 0xd:
        local_15c = 0;
      case 0:
        local_168 = local_168 + dVar5;
      }
    }
    switch(local_dc & 0xffffff) {
    case 1:
      local_e8 = (double)FUN_1416940c0(&local_e8);
      local_e8 = local_e8 + dVar5;
      local_dc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_e8,&local_e8);
      break;
    case 7:
      local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      break;
    case 10:
      local_e8 = (double)((longlong)local_e8 + 1);
      break;
    case 0xd:
      local_dc = 0;
    case 0:
      local_e8 = local_e8 + dVar5;
    }
  }
  local_f0 = 0x3c;
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0.0;
  local_208 = 0;
  uStack_200 = 0;
  FUN_1416d0010(0x4f,0x18763,0,&local_208,uVar7 & 0xffffff00,(ulonglong)ppdVar8 & 0xffffffffffffff00
               );
  FUN_1400019a0(&local_1f0,&local_208);
  local_f0 = 0x3d;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  local_d8 = &local_1f0;
  uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,&local_d8);
  dVar6 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar6,3,uVar4);
  local_f0 = 0x3e;
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  while( true ) {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    local_d8 = &local_1f0;
    ppdVar8 = &local_d8;
    uVar7 = DAT_1420d9ec0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,ppdVar8);
    iVar2 = FUN_1416d9df0(&local_e8,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_f0 = 0x3f;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_d0 = &local_1f0;
    local_c8 = &local_e8;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420d9ee0,&local_d0);
    FUN_1400019a0(&local_b0,uVar4);
    local_f0 = 0x40;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da290,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da230,&local_d0);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,3,uVar4);
    local_f0 = 0x41;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da2a0,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da230,&local_d0);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,3,uVar4);
    local_f0 = 0x42;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    if ((0x46U >> (local_180._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_188);
    }
    local_188 = 0;
    local_180 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_188,1,DAT_1420da2d0,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da2c0,&local_d0);
    FUN_1400019a0(&local_138,uVar4);
    local_c8 = &local_138;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da2b0,&local_c8);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,0xb,uVar4);
    switch(local_dc & 0xffffff) {
    case 1:
      local_e8 = (double)FUN_1416940c0(&local_e8);
      local_e8 = local_e8 + dVar5;
      local_dc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_e8,&local_e8);
      break;
    case 7:
      local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      break;
    case 10:
      local_e8 = (double)((longlong)local_e8 + 1);
      break;
    case 0xd:
      local_dc = 0;
    case 0:
      local_e8 = local_e8 + dVar5;
    }
  }
  local_f0 = 0x45;
  local_498 = 0;
  uStack_490 = 0;
  FUN_1416d0010(0x4f,0x18763,1,&local_498,uVar7 & 0xffffff00,(ulonglong)ppdVar8 & 0xffffffffffffff00
               );
  FUN_1400019a0(&local_1f0,&local_498);
  local_f0 = 0x46;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  local_d8 = &local_1f0;
  uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,&local_d8);
  dVar6 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar6,3,uVar4);
  local_f0 = 0x47;
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  while( true ) {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    local_d8 = &local_1f0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,&local_d8);
    iVar2 = FUN_1416d9df0(&local_e8,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_f0 = 0x48;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_c8 = &local_e8;
    local_d0 = &local_1f0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420d9ee0,&local_d0);
    FUN_1400019a0(&local_b0,uVar4);
    local_f0 = 0x49;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da290,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da230,&local_d0);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,3,uVar4);
    local_f0 = 0x4a;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da2a0,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da230,&local_d0);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,3,uVar4);
    local_f0 = 0x4b;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    if ((0x46U >> (local_180._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_188);
    }
    local_188 = 0;
    local_180 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_188,1,DAT_1420da2d0,&local_d8);
    FUN_1400019a0(&local_148,uVar4);
    local_d0 = &local_148;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da2c0,&local_d0);
    FUN_1400019a0(&local_138,uVar4);
    local_c8 = &local_138;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da2b0,&local_c8);
    dVar6 = local_80;
    if ((local_74 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_80);
    }
    FUN_1416fbbe0((longlong)dVar6,0xb,uVar4);
    switch(local_dc & 0xffffff) {
    case 1:
      local_e8 = (double)FUN_1416940c0(&local_e8);
      local_e8 = local_e8 + dVar5;
      local_dc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_e8,&local_e8);
      break;
    case 7:
      local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      break;
    case 10:
      local_e8 = (double)((longlong)local_e8 + 1);
      break;
    case 0xd:
      local_dc = 0;
    case 0:
      local_e8 = local_e8 + dVar5;
    }
  }
  iVar2 = FUN_1416f82f0(local_68,local_70,0x99);
  if (0 < iVar2) {
    local_f0 = 0x50;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    FUN_1416ab670(0x99,DAT_1420d59e8,0x80000000,&local_238);
    FUN_1400019a0(&local_158,local_1d0);
    local_d8 = &local_158;
    FUN_1400019a0(&local_148,&local_238);
    local_d0 = &local_148;
    FUN_1400019a0(&local_138,local_1d0);
    local_c8 = &local_138;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420da2f0,&local_d8);
    FUN_1400019a0(&local_128,uVar4);
    local_c0 = &local_128;
    FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da2e0,&local_c8);
    local_f0 = 0x51;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    FUN_1416ab670(0x99,DAT_1420d59e8,0x80000000,&local_238);
    FUN_1400019a0(&local_158,local_1d0);
    local_d8 = &local_158;
    FUN_140002730(&local_148,&DAT_1420b2198);
    local_d0 = &local_148;
    FUN_1400019a0(&local_138,&local_238);
    local_c8 = &local_138;
    FUN_1416ab210(local_68,local_70,&local_90,3,DAT_1420da300,&local_d8);
  }
  local_f0 = 0x54;
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0.0;
  local_f0 = 0x55;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  FUN_1400019a0(&local_158,local_1d0);
  local_d8 = &local_158;
  uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,&local_d8);
  dVar6 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_80);
  }
  FUN_1416fbbe0((longlong)dVar6,3,uVar4);
  local_f0 = 0x56;
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  do {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    FUN_1400019a0(&local_158,local_1d0);
    local_d8 = &local_158;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,&local_d8);
    iVar2 = FUN_1416d9df0(&local_e8,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      local_f0 = 0xb0;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      local_d8 = &local_80;
      if (local_44c < 1) {
        param_5 = &DAT_1420b1000;
      }
      else {
        param_5 = (undefined8 *)*param_5;
      }
      FUN_1400019a0(&local_148,param_5);
      local_d0 = &local_148;
      FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da360,&local_d8);
      local_f0 = 0xb1;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      local_d8 = &local_80;
      FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da370,&local_d8);
      if ((0x46U >> (local_180._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_188);
      }
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_248);
      }
      if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_258);
      }
      if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_268);
      }
      if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_278);
      }
      if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_288);
      }
      if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_298);
      }
      if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2a8);
      }
      if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2b8);
      }
      if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2c8);
      }
      if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2d8);
      }
      if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2e8);
      }
      if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2f8);
      }
      if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_308);
      }
      if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_318);
      }
      if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_328);
      }
      if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_338);
      }
      if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_348);
      }
      if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_358);
      }
      if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_368);
      }
      if ((0x46U >> (local_36c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_378);
      }
      if ((0x46U >> (local_37c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_388);
      }
      if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_398);
      }
      if ((0x46U >> (local_39c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3a8);
      }
      if ((0x46U >> (local_3ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3b8);
      }
      if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3c8);
      }
      if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3d8);
      }
      if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3e8);
      }
      if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3f8);
      }
      if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_408);
      }
      if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1c8);
      }
      if ((0x46U >> (local_454 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_460);
      }
      if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1e0);
      }
      if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_218);
      }
      if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_228);
      }
      if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_198);
      }
      if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_418);
      }
      if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_428);
      }
      if ((0x46U >> (local_42c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_438);
      }
      if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_238);
      }
      if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1f0);
      }
      if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      if ((0x46U >> (local_464 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_470);
      }
      if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_448);
      }
      if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_168);
      }
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
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
      DAT_142182d78 = (undefined8 *)local_100;
      return local_478;
    }
    local_f0 = 0x58;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    FUN_1400019a0(&local_148,local_1d0);
    local_d0 = &local_148;
    local_c8 = &local_e8;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420d9ee0,&local_d0);
    FUN_1400019a0(&local_b0,uVar4);
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    local_d8 = &local_b0;
    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da310,&local_d8);
    local_1ac = 0;
    local_1b8 = 0;
    iVar2 = FUN_1416d9df0(uVar4,&local_1b8,DAT_1420f6b08,0);
    if (iVar2 == 0) {
      local_f0 = 0x5a;
      dVar6 = local_b0;
      if ((local_a4 & 0xffffff) != 0) {
        dVar6 = (double)FUN_1416940c0(&local_b0);
      }
      cVar1 = FUN_1416f8280(local_68,local_70,(longlong)dVar6);
      if (cVar1 != '\0') {
        local_f0 = 0x5c;
        FUN_1416cfc30(&local_b0,DAT_1420d59f8,0x80000000,&local_438);
        dVar6 = local_80;
        if ((local_74 & 0xffffff) != 0) {
          dVar6 = (double)FUN_1416940c0(&local_80);
        }
        FUN_1416fbbe0((longlong)dVar6,4,&local_438);
        local_f0 = 0x5d;
        FUN_1416cfc30(&local_b0,DAT_1420d5a08,0x80000000,&local_428);
        dVar6 = local_80;
        if ((local_74 & 0xffffff) != 0) {
          dVar6 = (double)FUN_1416940c0(&local_80);
        }
        FUN_1416fbbe0((longlong)dVar6,4,&local_428);
        local_f0 = 0x5e;
        FUN_1416cfc30(&local_b0,DAT_1420d5a18,0x80000000,&local_418);
        dVar6 = local_80;
        if ((local_74 & 0xffffff) != 0) {
          dVar6 = (double)FUN_1416940c0(&local_80);
        }
        FUN_1416fbbe0((longlong)dVar6,4,&local_418);
        local_f0 = 0x5f;
        if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_90);
        }
        local_90 = 0;
        local_88 = 0x500000000;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
        FUN_1400019a0(&local_158,&local_198);
        local_d8 = &local_158;
        uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da320,&local_d8);
        FUN_1400019a0(&local_148,uVar4);
        local_d0 = &local_148;
        ppdVar8 = &local_d0;
        uVar7 = DAT_1420da2b0;
        uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da2b0,ppdVar8);
        dVar6 = local_80;
        if ((local_74 & 0xffffff) != 0) {
          dVar6 = (double)FUN_1416940c0(&local_80);
        }
        FUN_1416fbbe0((longlong)dVar6,0xb,uVar4);
        local_f0 = 0x61;
        FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
        local_1ac = 0;
        local_1b8 = 0x4054400000000000;
        iVar2 = FUN_1416d9df0(&local_198,&local_1b8,DAT_1420f6b08,0);
        if (iVar2 == 0) {
          local_f0 = 0x62;
          uVar9 = (ulonglong)ppdVar8 & 0xffffffffffffff00;
          uVar7 = uVar7 & 0xffffff00;
          FUN_1416cfeb0(&local_b0,0x18b0e,0x80000000,&local_228,uVar7,uVar9);
          dVar6 = local_80;
          if ((local_74 & 0xffffff) != 0) {
            dVar6 = (double)FUN_1416940c0(&local_80);
          }
          FUN_1416fbbe0((longlong)dVar6,1,&local_228);
          local_f0 = 99;
          FUN_1416cfeb0(&local_b0,0x18c30,0x80000000,&local_218,uVar7 & 0xffffff00,
                        uVar9 & 0xffffffffffffff00);
          dVar6 = local_80;
          if ((local_74 & 0xffffff) != 0) {
            dVar6 = (double)FUN_1416940c0(&local_80);
          }
          FUN_1416fbbe0((longlong)dVar6,0xb,&local_218);
        }
        else {
          local_f0 = 0x66;
          if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_90 = 0;
          local_88 = 0x500000000;
          FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
          FUN_1400019a0(&local_158,&local_198);
          local_d8 = &local_158;
          FUN_140002730(&local_148,&DAT_1420b21a8);
          local_d0 = &local_148;
          ppdVar8 = &local_d8;
          uVar7 = DAT_1420da330;
          uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,ppdVar8);
          cVar1 = FUN_1416927d0(uVar4);
          if (cVar1 == '\0') {
            local_f0 = 0x6f;
            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_90);
            }
            local_90 = 0;
            local_88 = 0x500000000;
            FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
            FUN_1400019a0(&local_158,&local_198);
            local_d8 = &local_158;
            FUN_140002730(&local_148,&DAT_1420b21b8);
            local_d0 = &local_148;
            ppdVar8 = &local_d8;
            uVar7 = DAT_1420da330;
            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,ppdVar8);
            cVar1 = FUN_1416927d0(uVar4);
            if (cVar1 == '\0') {
              local_f0 = 0x73;
              if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_90);
              }
              local_90 = 0;
              local_88 = 0x500000000;
              FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
              FUN_1400019a0(&local_158,&local_198);
              local_d8 = &local_158;
              FUN_140002730(&local_148,&DAT_1420b21c8);
              local_d0 = &local_148;
              ppdVar8 = &local_d8;
              uVar7 = DAT_1420da330;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,ppdVar8);
              cVar1 = FUN_1416927d0(uVar4);
              if (cVar1 == '\0') {
                local_f0 = 0x79;
                FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
                local_1ac = 0;
                local_1b8 = 0x4066600000000000;
                iVar2 = FUN_1416d9df0(&local_198,&local_1b8,DAT_1420f6b08,0);
                if (iVar2 == 0) {
                  local_f0 = 0x7a;
                  uVar9 = (ulonglong)ppdVar8 & 0xffffffffffffff00;
                  uVar7 = uVar7 & 0xffffff00;
                  FUN_1416cfeb0(&local_b0,0x18e33,0x80000000,&local_3f8,uVar7,uVar9);
                  dVar6 = local_80;
                  if ((local_74 & 0xffffff) != 0) {
                    dVar6 = (double)FUN_1416940c0(&local_80);
                  }
                  FUN_1416fbbe0((longlong)dVar6,3,&local_3f8);
                  local_f0 = 0x7b;
                  uVar9 = uVar9 & 0xffffffffffffff00;
                  uVar7 = uVar7 & 0xffffff00;
                  FUN_1416cfeb0(&local_b0,0x18c27,0x80000000,&local_3e8,uVar7,uVar9);
                  dVar6 = local_80;
                  if ((local_74 & 0xffffff) != 0) {
                    dVar6 = (double)FUN_1416940c0(&local_80);
                  }
                  FUN_1416fbbe0((longlong)dVar6,3,&local_3e8);
                  local_f0 = 0x7c;
                  uVar9 = uVar9 & 0xffffffffffffff00;
                  uVar7 = uVar7 & 0xffffff00;
                  FUN_1416cfeb0(&local_b0,0x18aa8,0x80000000,&local_3d8,uVar7,uVar9);
                  dVar6 = local_80;
                  if ((local_74 & 0xffffff) != 0) {
                    dVar6 = (double)FUN_1416940c0(&local_80);
                  }
                  FUN_1416fbbe0((longlong)dVar6,1,&local_3d8);
                  local_f0 = 0x7d;
                  FUN_1416cfeb0(&local_b0,0x18890,0x80000000,&local_3c8,uVar7 & 0xffffff00,
                                uVar9 & 0xffffffffffffff00);
                  dVar6 = local_80;
                  if ((local_74 & 0xffffff) != 0) {
                    dVar6 = (double)FUN_1416940c0(&local_80);
                  }
                  FUN_1416fbbe0((longlong)dVar6,4,&local_3c8);
                }
                else {
                  local_f0 = 0x80;
                  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_90);
                  }
                  local_90 = 0;
                  local_88 = 0x500000000;
                  FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
                  FUN_1400019a0(&local_158,&local_198);
                  local_d8 = &local_158;
                  FUN_140002730(&local_148,&DAT_1420b21d8);
                  local_d0 = &local_148;
                  ppdVar8 = &local_d8;
                  uVar7 = DAT_1420da330;
                  uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,ppdVar8);
                  cVar1 = FUN_1416927d0(uVar4);
                  if (cVar1 == '\0') {
                    local_f0 = 0x85;
                    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_90);
                    }
                    local_90 = 0;
                    local_88 = 0x500000000;
                    FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
                    FUN_1400019a0(&local_158,&local_198);
                    local_d8 = &local_158;
                    FUN_140002730(&local_148,&DAT_1420b21e8);
                    local_d0 = &local_148;
                    ppdVar8 = &local_d8;
                    uVar7 = DAT_1420da330;
                    uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,ppdVar8);
                    cVar1 = FUN_1416927d0(uVar4);
                    if (cVar1 == '\0') {
                      FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
                      local_1ac = 0;
                      local_1b8 = 0x4084d00000000000;
                      iVar2 = FUN_1416d9df0(&local_198,&local_1b8,DAT_1420f6b08,0);
                      if (iVar2 != 0) {
                        iVar2 = FUN_1416f82f0(local_68,local_70,0x99);
                        if (0 < iVar2) {
                          local_f0 = 0x8a;
                          if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_90);
                          }
                          local_90 = 0;
                          local_88 = 0x500000000;
                          FUN_1416cfc30(&local_b0,DAT_1420d5a28,0x80000000,&local_198);
                          FUN_1400019a0(&local_158,&local_198);
                          local_d8 = &local_158;
                          FUN_140002730(&local_148,&DAT_1420b21f8);
                          local_d0 = &local_148;
                          uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da330,
                                                &local_d8);
                          cVar1 = FUN_1416927d0(uVar4);
                          if (cVar1 != '\0') {
                            local_f0 = 0x8b;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_c8 = &local_b0;
                            if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_128);
                            }
                            FUN_1416ab000(&local_128,s_anim1_1420b2138);
                            local_c0 = &local_128;
                            ppdVar8 = &local_c8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x8c;
                              if ((0x46U >> (local_180._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_188);
                              }
                              local_188 = 0;
                              local_180 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18730,0x80000000,&local_378,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_118,&local_378);
                              local_b8 = &local_118;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_188,1,DAT_1420da230,
                                                    &local_b8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim2_1420b213e);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x8d;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1873b,0x80000000,&local_368,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_368);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim3_1420b2144);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x8e;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1873e,0x80000000,&local_358,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_358);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim4_1420b214a);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x8f;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18740,0x80000000,&local_348,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_348);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim5_1420b2150);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x90;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18741,0x80000000,&local_338,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_338);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim6_1420b2156);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x91;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18742,0x80000000,&local_328,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_328);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim7_1420b215c);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x92;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18743,0x80000000,&local_318,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_318);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim8_1420b2162);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x93;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18744,0x80000000,&local_308,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_308);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_anim9_1420b2168);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x94;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18746,0x80000000,&local_2f8,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2f8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b216e);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x96;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18860,0,&local_2e8,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2e8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b216e);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x97;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18860,1,&local_2d8,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2d8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b216e);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x98;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18860,2,&local_2c8,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2c8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b216e);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x99;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18860,3,&local_2b8,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2b8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2170);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x9b;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1870b,0,&local_2a8,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_2a8);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2170);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x9c;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1870b,1,&local_298,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_298);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2170);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x9d;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1870b,2,&local_288,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_288);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2170);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0x9e;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1870b,3,&local_278,uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_278);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2173);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0xa0;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x1871e,0x80000000,&local_268,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_268);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,&DAT_1420b2178);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0xa1;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18b39,0x80000000,&local_258,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_258);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_90);
                            }
                            local_90 = 0;
                            local_88 = 0x500000000;
                            local_d8 = &local_b0;
                            if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            FUN_1416ab000(&local_148,s_power_on_1420b217b);
                            local_d0 = &local_148;
                            ppdVar8 = &local_d8;
                            uVar7 = DAT_1420da350;
                            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,2,DAT_1420da350,
                                                  ppdVar8);
                            cVar1 = FUN_1416927d0(uVar4);
                            if (cVar1 != '\0') {
                              local_f0 = 0xa2;
                              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_a0);
                              }
                              local_a0 = 0;
                              local_98 = 0x500000000;
                              FUN_1416cfeb0(&local_b0,0x18bd2,0x80000000,&local_248,
                                            uVar7 & 0xffffff00,
                                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
                              FUN_1400019a0(&local_138,&local_248);
                              local_c8 = &local_138;
                              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da230,
                                                    &local_c8);
                              dVar6 = local_80;
                              if ((local_74 & 0xffffff) != 0) {
                                dVar6 = (double)FUN_1416940c0(&local_80);
                              }
                              FUN_1416fbbe0((longlong)dVar6,4,uVar4);
                            }
                          }
                        }
                        goto LAB_1400421c0;
                      }
                    }
                    local_f0 = 0x86;
                    uVar9 = (ulonglong)ppdVar8 & 0xffffffffffffff00;
                    uVar7 = uVar7 & 0xffffff00;
                    FUN_1416cfeb0(&local_b0,0x1879b,0x80000000,&local_398,uVar7,uVar9);
                    dVar6 = local_80;
                    if ((local_74 & 0xffffff) != 0) {
                      dVar6 = (double)FUN_1416940c0(&local_80);
                    }
                    FUN_1416fbbe0((longlong)dVar6,1,&local_398);
                    local_f0 = 0x87;
                    FUN_1416cfeb0(&local_b0,0x1879f,0x80000000,&local_388,uVar7 & 0xffffff00,
                                  uVar9 & 0xffffffffffffff00);
                    dVar6 = local_80;
                    if ((local_74 & 0xffffff) != 0) {
                      dVar6 = (double)FUN_1416940c0(&local_80);
                    }
                    FUN_1416fbbe0((longlong)dVar6,1,&local_388);
                  }
                  else {
                    local_f0 = 0x81;
                    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_a0);
                    }
                    local_a0 = 0;
                    local_98 = 0x500000000;
                    FUN_1416cfeb0(&local_b0,0x18d8b,0x80000000,&local_3b8,uVar7 & 0xffffff00,
                                  (ulonglong)ppdVar8 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_138,&local_3b8);
                    local_c8 = &local_138;
                    ppdVar8 = &local_c8;
                    uVar7 = DAT_1420da2b0;
                    uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da2b0,ppdVar8);
                    dVar6 = local_80;
                    if ((local_74 & 0xffffff) != 0) {
                      dVar6 = (double)FUN_1416940c0(&local_80);
                    }
                    FUN_1416fbbe0((longlong)dVar6,0xb,uVar4);
                    local_f0 = 0x82;
                    FUN_1416cfeb0(&local_b0,0x18b63,0x80000000,&local_3a8,uVar7 & 0xffffff00,
                                  (ulonglong)ppdVar8 & 0xffffffffffffff00);
                    dVar6 = local_80;
                    if ((local_74 & 0xffffff) != 0) {
                      dVar6 = (double)FUN_1416940c0(&local_80);
                    }
                    FUN_1416fbbe0((longlong)dVar6,1,&local_3a8);
                  }
                }
              }
              else {
                local_f0 = 0x74;
                uVar9 = (ulonglong)ppdVar8 & 0xffffffffffffff00;
                uVar7 = uVar7 & 0xffffff00;
                FUN_1416cfeb0(&local_b0,0x18a8f,0x80000000,&local_1e0,uVar7,uVar9);
                dVar6 = local_80;
                if ((local_74 & 0xffffff) != 0) {
                  dVar6 = (double)FUN_1416940c0(&local_80);
                }
                FUN_1416fbbe0((longlong)dVar6,1,&local_1e0);
                local_f0 = 0x75;
                uVar9 = uVar9 & 0xffffffffffffff00;
                uVar7 = uVar7 & 0xffffff00;
                FUN_1416cfeb0(&local_b0,0x18b0e,0x80000000,&local_228,uVar7,uVar9);
                dVar6 = local_80;
                if ((local_74 & 0xffffff) != 0) {
                  dVar6 = (double)FUN_1416940c0(&local_80);
                }
                FUN_1416fbbe0((longlong)dVar6,1,&local_228);
                local_f0 = 0x76;
                FUN_1416cfeb0(&local_b0,0x18c30,0x80000000,&local_218,uVar7 & 0xffffff00,
                              uVar9 & 0xffffffffffffff00);
                dVar6 = local_80;
                if ((local_74 & 0xffffff) != 0) {
                  dVar6 = (double)FUN_1416940c0(&local_80);
                }
                FUN_1416fbbe0((longlong)dVar6,0xb,&local_218);
              }
            }
            else {
              local_f0 = 0x70;
              FUN_1416cfeb0(&local_b0,0x18a8f,0x80000000,&local_1e0,uVar7 & 0xffffff00,
                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
              dVar6 = local_80;
              if ((local_74 & 0xffffff) != 0) {
                dVar6 = (double)FUN_1416940c0(&local_80);
              }
              FUN_1416fbbe0((longlong)dVar6,1,&local_1e0);
            }
          }
          else {
            local_f0 = 0x67;
            uVar9 = (ulonglong)ppdVar8 & 0xffffffffffffff00;
            uVar7 = uVar7 & 0xffffff00;
            FUN_1416cfeb0(&local_b0,0x18a8f,0x80000000,&local_1e0,uVar7,uVar9);
            dVar6 = local_80;
            if ((local_74 & 0xffffff) != 0) {
              dVar6 = (double)FUN_1416940c0(&local_80);
            }
            FUN_1416fbbe0((longlong)dVar6,3,&local_1e0);
            local_f0 = 0x68;
            if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_90);
            }
            local_90 = 0;
            local_88 = 0x500000000;
            FUN_1416cfeb0(&local_b0,0x18a1a,0x80000000,&local_460,uVar7 & 0xffffff00,
                          uVar9 & 0xffffffffffffff00);
            FUN_1400019a0(&local_158,&local_460);
            ppdVar8 = &local_d8;
            uVar7 = DAT_1420d9ec0;
            local_d8 = &local_158;
            uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,ppdVar8);
            dVar6 = local_80;
            if ((local_74 & 0xffffff) != 0) {
              dVar6 = (double)FUN_1416940c0(&local_80);
            }
            FUN_1416fbbe0((longlong)dVar6,3,uVar4);
            local_f0 = 0x69;
            if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_1c8);
            }
            local_1bc = 0;
            local_1c8 = 0.0;
            while( true ) {
              if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_90);
              }
              local_90 = 0;
              local_88 = 0x500000000;
              FUN_1416cfeb0(&local_b0,0x18a1a,0x80000000,&local_460,uVar7 & 0xffffff00,
                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
              FUN_1400019a0(&local_158,&local_460);
              ppdVar8 = &local_d8;
              uVar7 = DAT_1420d9ec0;
              local_d8 = &local_158;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420d9ec0,ppdVar8);
              iVar2 = FUN_1416d9df0(&local_1c8,uVar4,DAT_1420f6b08,1);
              if ((iVar2 == -2) || (-1 < iVar2)) break;
              local_f0 = 0x6a;
              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_a0);
              }
              local_a0 = 0;
              local_98 = 0x500000000;
              if ((0x46U >> (local_180._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_188);
              }
              local_188 = 0;
              local_180 = 0x500000000;
              FUN_1416cfeb0(&local_b0,0x18a1a,0x80000000,&local_460,uVar7 & 0xffffff00,
                            (ulonglong)ppdVar8 & 0xffffffffffffff00);
              FUN_1400019a0(&local_148,&local_460);
              local_d0 = &local_148;
              local_c8 = &local_1c8;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_188,2,DAT_1420d9ee0,&local_d0);
              FUN_1400019a0(&local_128,uVar4);
              local_c0 = &local_128;
              ppuVar10 = &local_c0;
              uVar7 = DAT_1420da340;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,1,DAT_1420da340,ppuVar10);
              dVar6 = local_80;
              if ((local_74 & 0xffffff) != 0) {
                dVar6 = (double)FUN_1416940c0(&local_80);
              }
              FUN_1416fbbe0((longlong)dVar6,3,uVar4);
              local_f0 = 0x6b;
              if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_90);
              }
              local_90 = 0;
              local_88 = 0x500000000;
              if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_a0);
              }
              local_a0 = 0;
              local_98 = 0x500000000;
              FUN_1416cfeb0(&local_b0,0x18a23,0x80000000,&local_408,uVar7 & 0xffffff00,
                            (ulonglong)ppuVar10 & 0xffffffffffffff00);
              FUN_1400019a0(&local_158,&local_408);
              local_d8 = &local_158;
              local_d0 = &local_1c8;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_a0,2,DAT_1420d9ee0,&local_d8);
              FUN_1400019a0(&local_138,uVar4);
              local_c8 = &local_138;
              ppdVar8 = &local_c8;
              uVar7 = DAT_1420da340;
              uVar4 = FUN_1416ab210(local_68,local_70,&local_90,1,DAT_1420da340,ppdVar8);
              dVar6 = local_80;
              if ((local_74 & 0xffffff) != 0) {
                dVar6 = (double)FUN_1416940c0(&local_80);
              }
              FUN_1416fbbe0((longlong)dVar6,3,uVar4);
              switch(local_1bc & 0xffffff) {
              case 1:
                local_1c8 = (double)FUN_1416940c0(&local_1c8);
                local_1c8 = local_1c8 + dVar5;
                local_1bc = 0;
                break;
              default:
                FUN_140001d70(&DAT_141981e6a,&local_1c8,&local_1c8);
                break;
              case 7:
                local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
                break;
              case 10:
                local_1c8 = (double)((longlong)local_1c8 + 1);
                break;
              case 0xd:
                local_1bc = 0;
              case 0:
                local_1c8 = local_1c8 + dVar5;
              }
            }
          }
        }
      }
    }
LAB_1400421c0:
    switch(local_dc & 0xffffff) {
    case 1:
      local_e8 = (double)FUN_1416940c0(&local_e8);
      local_e8 = local_e8 + dVar5;
      local_dc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_e8,&local_e8);
      break;
    case 7:
      local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      break;
    case 10:
      local_e8 = (double)((longlong)local_e8 + 1);
      break;
    case 0xd:
      local_dc = 0;
    case 0:
      local_e8 = local_e8 + dVar5;
    }
  } while( true );
}


