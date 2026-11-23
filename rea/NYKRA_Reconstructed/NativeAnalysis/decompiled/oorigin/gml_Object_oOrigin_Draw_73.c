// Function: gml_Object_oOrigin_Draw_73 @ 0x140a35bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOrigin_Draw_73(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_a0 = &UNK_14198a932;
  uStack_a8 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_a8;
  uStack_12c = 0xffffff;
  uStack_138 = 0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_60._4_4_ = 0xffffff;
  uStack_68 = 0;
  uStack_70 = CONCAT44(0xffffff,(undefined4)uStack_70);
  uStack_78 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_98 = 1;
  plRam0000000142182d90 = param_1;
  uStack_80 = param_2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18912);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000;
    iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18912);
      uStack_4c = 0;
      uStack_58 = 0;
      iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,0);
      if (iVar2 == 0) {
        uStack_98 = 0xc;
        if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_68);
        }
        uStack_68 = 0;
        uStack_60 = 0x500000000;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
        FUN_1400019a0(&uStack_138,uVar3);
        puStack_d8 = &uStack_138;
        FUN_140002730(&uStack_128,0x1420bc120);
        uStack_84 = 0;
        uStack_90 = 0x3ff0000000000000;
        puStack_d0 = &uStack_128;
        FUN_140003e00(&uStack_90,uVar3);
        FUN_140004520(&uStack_58,&uStack_90,_UNK_141987d40);
        FUN_1400019a0(&uStack_118,&uStack_58);
        if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_58);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_90);
        }
        puStack_c8 = &uStack_118;
        uVar5 = FUN_14003b450(param_1,uStack_80,&uStack_68,3,&puStack_d8);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar5);
        func_0x0001416a8c00(1);
        uStack_98 = 0xd;
        if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_68);
        }
        uStack_68 = 0;
        uStack_60._0_4_ = 0;
        uStack_60._4_4_ = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
        FUN_140002730(&uStack_138,0x1420bc110);
        uStack_4c = 0;
        uStack_58 = 0x3ff0000000000000;
        puStack_d8 = &uStack_138;
        FUN_140003e00(&uStack_58,uVar3);
        FUN_1400019a0(&uStack_128,&uStack_58);
        if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_58);
        }
        puStack_d0 = &uStack_128;
        FUN_14003ee60(param_1,uStack_80,&uStack_68,2,&puStack_d8);
      }
    }
  }
  else {
    uStack_98 = 1;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1872d);
    uStack_4c = 0;
    uStack_58 = 0x3fb999999999999a;
    iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uStack_98 = 2;
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      uStack_4c = 0;
      uStack_58 = 0x3feeb851eb851eb8;
      FUN_140001fe0(uVar3,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
    }
    uStack_98 = 3;
    if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    uStack_68 = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 5;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    FUN_140002730(&uStack_138,0x1420bc110);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000;
    puStack_d8 = &uStack_138;
    FUN_140003e00(&uStack_58,uVar3);
    FUN_1400019a0(&uStack_128,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    puStack_d0 = &uStack_128;
    FUN_14003ee60(param_1,uStack_80,&uStack_68,2,&puStack_d8);
    FUN_140003ba0(&uStack_90,uVar3,_UNK_141985af0);
    uStack_4c = 0;
    uStack_58 = 0;
    iVar2 = FUN_1416d9df0(&uStack_90,&uStack_58,uRam00000001420f6b08,1);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      uStack_98 = 5;
      (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18912);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
      uStack_98 = 6;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x4018000000000000;
      uStack_98 = 7;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d16);
      if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0;
    }
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
  uStack_4c = 0;
  uStack_58 = 0;
  iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,1);
  if (0 < iVar2) {
    uStack_98 = 0x11;
    if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    uStack_68 = 0;
    uStack_60 = 0x500000000;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
    FUN_1400019a0(&uStack_138,uVar3);
    puStack_d8 = &uStack_138;
    FUN_140002730(&uStack_128,0x1420bc120);
    puStack_d0 = &uStack_128;
    FUN_140002730(&uStack_118,0x1420bc110);
    puStack_c8 = &uStack_118;
    uVar3 = FUN_1416cda40(&uStack_78,2,&puStack_d8);
    FUN_1400019a0(&uStack_108,uVar3);
    puStack_c0 = &uStack_108;
    FUN_14003ee60(param_1,uStack_80,&uStack_68,2,&puStack_c8);
    uStack_98 = 0x12;
    if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    uStack_68 = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 5;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189fc);
    FUN_140004520(&uStack_58,uVar3,_UNK_141986e28);
    FUN_1400019a0(&uStack_138,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    puStack_d8 = &uStack_138;
    FUN_140002730(&uStack_128,0x1420bc120);
    puStack_d0 = &uStack_128;
    FUN_140002730(&uStack_118,0x1420bc110);
    puStack_c8 = &uStack_118;
    uVar3 = FUN_1416cda40(&uStack_78,2,&puStack_d8);
    FUN_1400019a0(&uStack_108,uVar3);
    puStack_c0 = &uStack_108;
    FUN_14003ee60(param_1,uStack_80,&uStack_68,2,&puStack_c8);
    uStack_98 = 0x13;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x189fc);
    uStack_4c = 0;
    uStack_58 = 0x3fef9add3c0e56b8;
    FUN_140001fe0(uVar3,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x189fc);
    uStack_4c = 0;
    uStack_58 = 0x3feff7ced916872b;
    iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18cd2);
      uStack_4c = 0;
      uStack_58 = 0;
      iVar2 = FUN_1416d9df0(uVar3,&uStack_58,uRam00000001420f6b08,0);
      if (iVar2 == 0) {
        uStack_98 = 0x15;
        if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_68);
        }
        uStack_68 = 0;
        uStack_60._0_4_ = 0;
        uStack_60._4_4_ = 5;
        FUN_140002730(&uStack_138,0x1420bc130);
        puStack_d8 = &uStack_138;
        FUN_140002730(&uStack_128,0x1420bc140);
        puStack_d0 = &uStack_128;
        FUN_140002730(&uStack_118,0x142180f48);
        puStack_c8 = &uStack_118;
        FUN_140002730(&uStack_108,0x1420bc120);
        puStack_c0 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420bc120);
        puStack_b8 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420bc120);
        puStack_b0 = &uStack_e8;
        FUN_1400d2410(param_1,uStack_80,&uStack_68,6,&puStack_d8);
        uStack_98 = 0x16;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18cd2);
        if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0x3ff0000000000000;
      }
    }
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_a8;
  return;
}


