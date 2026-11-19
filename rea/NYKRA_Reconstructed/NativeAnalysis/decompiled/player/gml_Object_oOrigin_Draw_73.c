// Function: gml_Object_oOrigin_Draw_73 @ 0x140a35bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOrigin_Draw_73(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a0 = "gml_Object_oOrigin_Draw_73";
  local_a8 = DAT_142182d78;
  DAT_142182d78 = &local_a8;
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
  local_60._4_4_ = 0xffffff;
  local_68 = 0;
  local_70 = CONCAT44(0xffffff,(undefined4)local_70);
  local_78 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
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
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_98 = 1;
  DAT_142182d90 = param_1;
  local_80 = param_2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18912);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    local_4c = 0;
    local_58 = 0x3ff0000000000000;
    iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18912);
      local_4c = 0;
      local_58 = 0;
      iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,0);
      if (iVar2 == 0) {
        local_98 = 0xc;
        if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_68);
        }
        local_68 = 0;
        local_60 = 0x500000000;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
        FUN_1400019a0(&local_138,uVar3);
        local_d8 = &local_138;
        FUN_140002730(&local_128,&DAT_1420bc120);
        local_84 = 0;
        local_90 = 0x3ff0000000000000;
        local_d0 = &local_128;
        FUN_140003e00(&local_90,uVar3);
        FUN_140004520(&local_58,&local_90,DAT_141987d40);
        FUN_1400019a0(&local_118,&local_58);
        if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_58);
        }
        if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_90);
        }
        local_c8 = &local_118;
        uVar5 = FUN_14003b450(param_1,local_80,&local_68,3,&local_d8);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar5);
        FUN_1416a8c00(1);
        local_98 = 0xd;
        if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_68);
        }
        local_68 = 0;
        local_60._0_4_ = 0;
        local_60._4_4_ = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
        FUN_140002730(&local_138,&DAT_1420bc110);
        local_4c = 0;
        local_58 = 0x3ff0000000000000;
        local_d8 = &local_138;
        FUN_140003e00(&local_58,uVar3);
        FUN_1400019a0(&local_128,&local_58);
        if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_58);
        }
        local_d0 = &local_128;
        FUN_14003ee60(param_1,local_80,&local_68,2,&local_d8);
      }
    }
  }
  else {
    local_98 = 1;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1872d);
    local_4c = 0;
    local_58 = 0x3fb999999999999a;
    iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      local_98 = 2;
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      local_4c = 0;
      local_58 = 0x3feeb851eb851eb8;
      FUN_140001fe0(uVar3,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
    }
    local_98 = 3;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 5;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    FUN_140002730(&local_138,&DAT_1420bc110);
    local_4c = 0;
    local_58 = 0x3ff0000000000000;
    local_d8 = &local_138;
    FUN_140003e00(&local_58,uVar3);
    FUN_1400019a0(&local_128,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_d0 = &local_128;
    FUN_14003ee60(param_1,local_80,&local_68,2,&local_d8);
    FUN_140003ba0(&local_90,uVar3,_DAT_141985af0);
    local_4c = 0;
    local_58 = 0;
    iVar2 = FUN_1416d9df0(&local_90,&local_58,DAT_1420f6b08,1);
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      local_98 = 5;
      (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18912);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
      local_98 = 6;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4018000000000000;
      local_98 = 7;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d16);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
    }
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
  local_4c = 0;
  local_58 = 0;
  iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
  if (0 < iVar2) {
    local_98 = 0x11;
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
    FUN_1400019a0(&local_138,uVar3);
    local_d8 = &local_138;
    FUN_140002730(&local_128,&DAT_1420bc120);
    local_d0 = &local_128;
    FUN_140002730(&local_118,&DAT_1420bc110);
    local_c8 = &local_118;
    uVar3 = FUN_1416cda40(&local_78,2,&local_d8);
    FUN_1400019a0(&local_108,uVar3);
    local_c0 = &local_108;
    FUN_14003ee60(param_1,local_80,&local_68,2,&local_c8);
    local_98 = 0x12;
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
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
    FUN_140004520(&local_58,uVar3,DAT_141986e28);
    FUN_1400019a0(&local_138,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_d8 = &local_138;
    FUN_140002730(&local_128,&DAT_1420bc120);
    local_d0 = &local_128;
    FUN_140002730(&local_118,&DAT_1420bc110);
    local_c8 = &local_118;
    uVar3 = FUN_1416cda40(&local_78,2,&local_d8);
    FUN_1400019a0(&local_108,uVar3);
    local_c0 = &local_108;
    FUN_14003ee60(param_1,local_80,&local_68,2,&local_c8);
    local_98 = 0x13;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x189fc);
    local_4c = 0;
    local_58 = 0x3fef9add3c0e56b8;
    FUN_140001fe0(uVar3,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x189fc);
    local_4c = 0;
    local_58 = 0x3feff7ced916872b;
    iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18cd2);
      local_4c = 0;
      local_58 = 0;
      iVar2 = FUN_1416d9df0(uVar3,&local_58,DAT_1420f6b08,0);
      if (iVar2 == 0) {
        local_98 = 0x15;
        if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_68);
        }
        local_68 = 0;
        local_60._0_4_ = 0;
        local_60._4_4_ = 5;
        FUN_140002730(&local_138,&DAT_1420bc130);
        local_d8 = &local_138;
        FUN_140002730(&local_128,&DAT_1420bc140);
        local_d0 = &local_128;
        FUN_140002730(&local_118,&DAT_142180f48);
        local_c8 = &local_118;
        FUN_140002730(&local_108,&DAT_1420bc120);
        local_c0 = &local_108;
        FUN_140002730(&local_f8,&DAT_1420bc120);
        local_b8 = &local_f8;
        FUN_140002730(&local_e8,&DAT_1420bc120);
        local_b0 = &local_e8;
        FUN_1400d2410(param_1,local_80,&local_68,6,&local_d8);
        local_98 = 0x16;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18cd2);
        if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0x3ff0000000000000;
      }
    }
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
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
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
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
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
  DAT_142182d78 = (undefined8 *)local_a8;
  return;
}


