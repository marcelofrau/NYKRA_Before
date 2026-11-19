// Function: gml_Object_oVIEW_CONSTRICT_Step_2 @ 0x14074f9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oVIEW_CONSTRICT_Step_2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint in_stack_fffffffffffffc48;
  uint uVar5;
  uint3 uVar6;
  ulonglong in_stack_fffffffffffffc50;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  uint7 uVar9;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
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
  uint local_1fc;
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
  undefined8 local_150;
  uint local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [12];
  uint local_e4;
  undefined8 local_e0;
  uint local_d4;
  undefined8 local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c8 = "gml_Object_oVIEW_CONSTRICT_Step_2";
  local_c0 = 0;
  local_d0 = DAT_142182d78;
  DAT_142182d78 = &local_d0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
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
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c9/*var:cam*/);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_60._4_4_ = 0xffffff;
  local_68 = 0;
  local_70 = CONCAT44(0xffffff,(undefined4)local_70);
  local_78 = 0;
  local_f8 = CONCAT44(0xffffff,(undefined4)local_f8);
  local_100 = 0;
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
  local_22c = 0xffffff;
  local_238 = 0;
  local_c0 = 1;
  local_3a8 = 0;
  uStack_3a0 = 0;
  FUN_1416d0010(0x4f,0x18ad9/*var:mode*/,0x80000000,&local_3a8,in_stack_fffffffffffffc48 & 0xffffff00,
                in_stack_fffffffffffffc50 & 0xffffffffffffff00);
  local_4c = 0;
  local_58 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
  iVar1 = FUN_1416d9df0(&local_3a8,&local_58,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_c0 = 1;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18973/*var:go*/);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar1 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
    if (iVar1 == 0) {
      local_c0 = 3;
      if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_68 = 0;
      local_60 = 0x500000000;
      FUN_1400019a0(&local_228,uVar2);
      local_398 = &local_228;
      uVar4 = FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da4a0/*camera_get_view_x*/,&local_398);
      FUN_1400019a0(&local_b8,uVar4);
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_1400019a0(&local_218,uVar2);
      ppuVar7 = &local_390;
      local_390 = &local_218;
      uVar4 = FUN_1416ab210(param_1,param_2,&local_78,1,DAT_1420da560/*camera_get_view_y*/,ppuVar7);
      FUN_1400019a0(&local_a8,uVar4);
      local_c0 = 4;
      if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_68 = 0;
      local_60 = 0x500000000;
      FUN_1400019a0(&local_228,uVar2);
      local_398 = &local_228;
      uVar4 = FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da3b0/*camera_get_view_width*/,&local_398);
      FUN_1400019a0(&local_120,uVar4);
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      FUN_1400019a0(&local_218,uVar2);
      uVar5 = DAT_1420da3c0/*camera_get_view_height*/;
      local_390 = &local_218;
      uVar4 = FUN_1416ab210(param_1,param_2,&local_78,1,DAT_1420da3c0/*camera_get_view_height*/,ppuVar7);
      FUN_1400019a0(&local_150,uVar4);
      local_c0 = 5;
      FUN_1400019a0(&local_140,&local_b8);
      FUN_1400019a0(&local_130,&local_a8);
      local_c0 = 7;
      uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
      FUN_140004520(local_f0,&local_120,_DAT_141982c40);
      local_4c = local_ac;
      local_50 = local_b0;
      if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
        local_58 = local_b8;
      }
      else {
        FUN_140751f20(&local_58,&local_b8);
      }
      FUN_140003ca0(&local_58,local_f0);
      iVar1 = FUN_1416d9df0(&local_58,&local_98,DAT_1420f6b08,1);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
        FUN_140001b50(local_f0);
      }
      uVar9 = (uint7)(uVar8 >> 8);
      uVar6 = (uint3)(uVar5 >> 8);
      if (iVar1 < 1) {
        local_c0 = 0xd;
        uVar8 = (ulonglong)uVar9 << 8;
        uVar5 = (uint)uVar6 << 8;
        FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
        iVar1 = FUN_1416d9df0(&local_b8,&local_98,DAT_1420f6b08,1);
        if ((iVar1 != -2) && (iVar1 < 0)) {
          uVar8 = uVar8 & 0xffffffffffffff00;
          uVar5 = uVar5 & 0xffffff00;
          FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
          local_4c = local_ac;
          local_50 = local_b0;
          if ((0x46U >> (local_ac & 0x1f) & 1) == 0) {
            local_58 = local_b8;
          }
          else {
            FUN_140751f20(&local_58,&local_b8);
          }
          FUN_140003ca0(&local_58,&local_120);
          iVar1 = FUN_1416d9df0(&local_58,&local_98,DAT_1420f6b08,1);
          if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_58);
          }
          if (-1 < iVar1) {
            local_c0 = 0xf;
            if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_68);
            }
            local_68 = 0;
            local_60 = 0x500000000;
            uVar8 = uVar8 & 0xffffffffffffff00;
            uVar5 = uVar5 & 0xffffff00;
            FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
            local_4c = local_8c;
            local_50 = local_90;
            if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
              local_58 = local_98;
            }
            else {
              FUN_140751f20(&local_58,&local_98);
            }
            FUN_140003e00(&local_58,&local_120);
            FUN_1400019a0(&local_228,&local_58);
            if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_58);
            }
            local_398 = &local_228;
            local_390 = &local_b8;
            uVar4 = FUN_1416cda40(&local_68,2,&local_398);
            FUN_1400019a0(&local_140,uVar4);
          }
        }
      }
      else {
        local_c0 = 7;
        uVar8 = (ulonglong)uVar9 << 8;
        uVar5 = (uint)uVar6 << 8;
        FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
        iVar1 = FUN_1416d9df0(&local_b8,&local_98,DAT_1420f6b08,1);
        if ((iVar1 != -2) && (iVar1 < 1)) {
          local_c0 = 9;
          if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_68);
          }
          local_68 = 0;
          local_60 = 0x500000000;
          uVar8 = uVar8 & 0xffffffffffffff00;
          uVar5 = uVar5 & 0xffffff00;
          FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_98,uVar5,uVar8);
          FUN_1400019a0(&local_228,&local_98);
          local_398 = &local_228;
          local_390 = &local_b8;
          uVar4 = FUN_1416cd900(&local_68,2,&local_398);
          FUN_1400019a0(&local_140,uVar4);
        }
      }
      local_c0 = 0x13;
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5,uVar8);
      FUN_140004520(local_f0,&local_150,_DAT_141982c40);
      local_4c = local_9c;
      local_50 = local_a0;
      if ((0x46U >> (local_9c & 0x1f) & 1) == 0) {
        local_58 = local_a8;
      }
      else {
        FUN_140751f20(&local_58,&local_a8);
      }
      FUN_140003ca0(&local_58,local_f0);
      iVar1 = FUN_1416d9df0(&local_58,&local_88,DAT_1420f6b08,1);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
        FUN_140001b50(local_f0);
      }
      uVar9 = (uint7)(uVar8 >> 8);
      uVar6 = (uint3)(uVar5 >> 8);
      if (iVar1 < 1) {
        local_c0 = 0x19;
        uVar8 = (ulonglong)uVar9 << 8;
        uVar5 = (uint)uVar6 << 8;
        FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5,uVar8);
        iVar1 = FUN_1416d9df0(&local_a8,&local_88,DAT_1420f6b08,1);
        if ((iVar1 != -2) && (iVar1 < 0)) {
          uVar8 = uVar8 & 0xffffffffffffff00;
          uVar5 = uVar5 & 0xffffff00;
          FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5,uVar8);
          local_4c = local_9c;
          local_50 = local_a0;
          if ((0x46U >> (local_9c & 0x1f) & 1) == 0) {
            local_58 = local_a8;
          }
          else {
            FUN_140751f20(&local_58,&local_a8);
          }
          FUN_140003ca0(&local_58,&local_120);
          iVar1 = FUN_1416d9df0(&local_58,&local_88,DAT_1420f6b08,1);
          if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_58);
          }
          if (-1 < iVar1) {
            local_c0 = 0x1b;
            if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_68);
            }
            local_68 = 0;
            local_60 = 0x500000000;
            FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5 & 0xffffff00,
                          uVar8 & 0xffffffffffffff00);
            local_4c = local_7c;
            local_50 = local_80;
            if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
              local_58 = local_88;
            }
            else {
              FUN_140751f20(&local_58,&local_88);
            }
            FUN_140003e00(&local_58,&local_150);
            FUN_1400019a0(&local_228,&local_58);
            if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_58);
            }
            local_398 = &local_228;
            local_390 = &local_a8;
            uVar4 = FUN_1416cda40(&local_68,2,&local_398);
            FUN_1400019a0(&local_130,uVar4);
          }
        }
      }
      else {
        local_c0 = 0x13;
        uVar8 = (ulonglong)uVar9 << 8;
        uVar5 = (uint)uVar6 << 8;
        FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5,uVar8);
        iVar1 = FUN_1416d9df0(&local_a8,&local_88,DAT_1420f6b08,1);
        if ((iVar1 != -2) && (iVar1 < 1)) {
          local_c0 = 0x15;
          if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_68);
          }
          local_68 = 0;
          local_60 = 0x500000000;
          FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_88,uVar5 & 0xffffff00,
                        uVar8 & 0xffffffffffffff00);
          FUN_1400019a0(&local_228,&local_88);
          local_398 = &local_228;
          local_390 = &local_a8;
          uVar4 = FUN_1416cd900(&local_68,2,&local_398);
          FUN_1400019a0(&local_130,uVar4);
        }
      }
      local_c0 = 0x1f;
      if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_68 = 0;
      local_60._0_4_ = 0;
      local_60._4_4_ = 5;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      if ((0x46U >> (local_f8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_100);
      }
      local_100 = 0;
      local_f8 = 0x500000000;
      local_398 = &local_140;
      local_378 = &local_b8;
      local_370 = &local_130;
      local_350 = &local_a8;
      local_390 = local_398;
      local_388 = local_398;
      local_380 = local_398;
      local_368 = local_370;
      local_360 = local_370;
      local_358 = local_370;
      FUN_1400019a0(&local_188,uVar2);
      local_348 = &local_188;
      uVar2 = FUN_1416ab210(param_1,param_2,&local_78,5,DAT_1420da0c0/*mean*/,&local_398);
      FUN_1400019a0(&local_178,uVar2);
      local_340 = &local_178;
      uVar2 = FUN_1416ab210(param_1,param_2,&local_100,5,DAT_1420da0c0/*mean*/,&local_370);
      FUN_1400019a0(&local_168,uVar2);
      local_338 = &local_168;
      FUN_1416ab210(param_1,param_2,&local_68,3,DAT_1420da3a0/*camera_set_view_pos*/,&local_348);
    }
    local_c0 = 0x21;
    if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e0);
    }
    local_d4 = 0;
    local_e0 = 0;
    FUN_1416cfae0(param_1,DAT_1420d5b28/*visible*/,0x80000000,&local_e0);
  }
  else {
    local_c0 = 0x25;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18973/*var:go*/);
    if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
    local_c0 = 0x26;
    DAT_142182d90 = (longlong *)0x109fa;
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    local_104 = 0;
    local_110 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
    FUN_1416cfae0(param_1,DAT_1420d5a48/*alarm*/,0,&local_110);
    local_c0 = 0x27;
    if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e0);
    }
    local_d4 = 0;
    local_e0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    FUN_1416cfae0(param_1,DAT_1420d5b28/*visible*/,0x80000000,&local_e0);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
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
  if ((0x46U >> (local_f8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
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
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  DAT_142182d78 = (undefined8 *)local_d0;
  return;
}


