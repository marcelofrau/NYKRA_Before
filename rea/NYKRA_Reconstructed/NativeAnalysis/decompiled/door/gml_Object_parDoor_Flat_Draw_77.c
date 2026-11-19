// Function: gml_Object_parDoor_Flat_Draw_77 @ 0x14035d7f0

void gml_Object_parDoor_Flat_Draw_77(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [12];
  uint local_1cc;
  undefined1 local_1c8 [12];
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
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  uint local_bc;
  longlong local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8 = "gml_Object_parDoor_Flat_Draw_77";
  local_d0 = 0;
  local_e0 = DAT_142182d78;
  DAT_142182d78 = &local_e0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_68 = CONCAT44(0xffffff,(undefined4)local_68);
  local_70 = 0;
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
  DAT_142182d90 = param_1;
  local_78 = param_2;
  local_50 = param_1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x189f7);
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(uVar3,&local_c8,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_d0 = 3;
    local_218 = 0;
    uStack_210 = 0;
    FUN_1416d0790(0x40,0x18836,0x80000000,&local_218);
    local_d0 = 4;
    local_1e0 = 0;
    local_1e8 = 0x3ff0000000000000;
    FUN_1416d0790(0x40,0x18df5,0x80000000,&local_1e8);
    local_d0 = 5;
    uVar3 = (**(code **)(*local_50 + 0x10))(local_50,0x1890a);
    local_bc = 0;
    local_c8 = 0x3fe999999999999a;
    FUN_140001fe0(uVar3,&local_c8);
    if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0x3f847ae147ae147b;
    iVar2 = FUN_1416d9df0(uVar3,&local_c8,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      local_d0 = 8;
      (**(code **)(*local_50 + 0x10))(local_50,0x1890a);
      uVar3 = (**(code **)(*local_50 + 8))(local_50,0x18b0e);
      local_1f8 = 0;
      uStack_1f0 = 0;
      uVar4 = FUN_1416cfcc0(0x40);
      FUN_1416a8cb0(uVar4);
      FUN_1400019a0(&local_1f8,uVar3);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x40,0x188ae,0x80000000,&local_1f8);
      local_d0 = 9;
      puVar5 = (undefined8 *)(**(code **)(*local_50 + 0x10))(local_50,0x189f7);
      if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_d0 = 10;
      if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
      local_70 = 0;
      local_68 = 0x500000000;
      FUN_1400be4a0(local_50,local_78,&local_70,0,0);
      local_54 = 0;
      local_60 = 0x4053c00000000000;
      iVar2 = FUN_1416ab810(&local_c8,&local_50,&local_78,&local_60);
      if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_60);
      }
      if (0 < iVar2) {
        do {
          local_d0 = 0xc;
          if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          local_70 = 0;
          local_68 = 0x500000000;
          uVar3 = (**(code **)(*local_78 + 8))(local_78,0x18c30);
          FUN_1416ce870(local_50,DAT_1420d59d8,0x80000000,&local_a8);
          FUN_1416ac010(local_1d8,s__rmlvl_1420b5654);
          FUN_1416ac010(local_1c8,s_level_data__1420b5648);
          local_7c = local_9c;
          local_80 = local_a0;
          if ((0x46U >> (local_9c & 0x1f) & 1) == 0) {
            local_88 = local_a8;
          }
          else {
            FUN_14035ea30(&local_88,&local_a8);
          }
          FUN_140003ca0(&local_88,local_1c8);
          local_8c = local_7c;
          local_90 = local_80;
          if ((0x46U >> (local_7c & 0x1f) & 1) == 0) {
            local_98 = local_88;
          }
          else {
            FUN_14035ea30(&local_98,&local_88);
          }
          FUN_140003ca0(&local_98,uVar3);
          local_54 = local_8c;
          local_58 = local_90;
          if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
            local_60 = local_98;
          }
          else {
            FUN_14035ea30(&local_60,&local_98);
          }
          FUN_140003ca0(&local_60,local_1d8);
          FUN_1400019a0(&local_108,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_98);
          }
          if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
            FUN_140001b50(local_1c8);
          }
          if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
            FUN_140001b50(local_1d8);
          }
          local_208 = &local_108;
          FUN_1400019a0(&local_f8,uVar3);
          local_200 = &local_f8;
          FUN_14004bac0(local_50,local_78,&local_70,2,&local_208);
          cVar1 = FUN_1416abe60(&local_c8,&local_50,&local_78);
        } while (cVar1 != '\0');
      }
      FUN_1416ab620(&local_c8,&local_50,&local_78);
      local_d0 = 0xe;
      puVar5 = (undefined8 *)(**(code **)(*local_50 + 0x10))(local_50,0x1890a);
      if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x3ff0000000000000;
      bVar6 = local_b8 != 0;
      local_b8 = 0;
      if (bVar6) {
        thunk_FUN_1416c46f0();
        local_b8 = 0;
      }
    }
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
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  DAT_142182d78 = (undefined8 *)local_e0;
  return;
}


