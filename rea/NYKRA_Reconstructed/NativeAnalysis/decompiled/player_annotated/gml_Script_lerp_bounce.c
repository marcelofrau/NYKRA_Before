// Function: gml_Script_lerp_bounce @ 0x1400851e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_lerp_bounce
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_a0 = "gml_Script_lerp_bounce";
  local_98 = 0;
  local_a8 = DAT_142182d78;
  DAT_142182d78 = &local_a8;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc9e0/*gml_Script_lerp_bounce*/);
  local_98 = 6;
  if (param_4 < 1) {
    param_5 = &DAT_1420b1000;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_90,param_5);
  uVar1 = DAT_1420f6b08;
  local_98 = 7;
  local_44 = 0;
  local_50 = 0x3fd745d1745d1746/*0.363636*/;
  iVar2 = FUN_1416d9df0(&local_90,&local_50,DAT_1420f6b08,1);
  if ((iVar2 == -2) || (-1 < iVar2)) {
    local_98 = 0xb;
    local_44 = 0;
    local_50 = 0x3fe745d1745d1746/*0.727273*/;
    iVar2 = FUN_1416d9df0(&local_90,&local_50,uVar1,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      local_98 = 0xf;
      local_44 = 0;
      local_50 = 0x3feccccccccccccd/*0.9*/;
      iVar2 = FUN_1416d9df0(&local_90,&local_50,uVar1,1);
      if ((iVar2 == -2) || (-1 < iVar2)) {
        local_98 = 0x15;
        local_64 = 0;
        local_70 = 0x4034851eb851eb85/*20.52*/;
        FUN_140001fe0(&local_70,&local_90);
        local_74 = 0;
        local_80 = 0x402599999999999a/*10.8*/;
        FUN_140001fe0(&local_80,&local_90);
        local_54 = local_74;
        local_58 = local_78;
        if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
          local_60 = local_80;
        }
        else {
          FUN_1400865e0(&local_60,&local_80);
        }
        FUN_140001fe0(&local_60,&local_90);
        local_34 = local_54;
        local_38 = local_58;
        if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
          local_40 = local_60;
        }
        else {
          FUN_1400865e0(&local_40,&local_60);
        }
        FUN_140003e00(&local_40,&local_70);
        local_44 = local_34;
        local_48 = local_38;
        if ((0x46U >> (local_34 & 0x1f) & 1) == 0) {
          local_50 = local_40;
        }
        else {
          FUN_1400865e0(&local_50,&local_40);
        }
        FUN_140003f30(&local_50,DAT_141982ee0);
        FUN_1400019a0(param_3,&local_50);
        if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_50);
        }
        if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_40);
        }
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
      }
      else {
        local_98 = 0x11;
        local_64 = 0;
        local_70 = 0x4033a2ad506aa7a4/*19.6355*/;
        FUN_140001fe0(&local_70,&local_90);
        local_74 = 0;
        local_80 = 0x40282209ed8ff4a7/*12.0665*/;
        FUN_140001fe0(&local_80,&local_90);
        local_54 = local_74;
        local_58 = local_78;
        if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
          local_60 = local_80;
        }
        else {
          FUN_1400865e0(&local_60,&local_80);
        }
        FUN_140001fe0(&local_60,&local_90);
        local_34 = local_54;
        local_38 = local_58;
        if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
          local_40 = local_60;
        }
        else {
          FUN_1400865e0(&local_40,&local_60);
        }
        FUN_140003e00(&local_40,&local_70);
        local_44 = local_34;
        local_48 = local_38;
        if ((0x46U >> (local_34 & 0x1f) & 1) == 0) {
          local_50 = local_40;
        }
        else {
          FUN_1400865e0(&local_50,&local_40);
        }
        FUN_140003f30(&local_50,DAT_141982ee8);
        FUN_1400019a0(param_3,&local_50);
        if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_50);
        }
        if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_40);
        }
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
      }
    }
    else {
      local_98 = 0xd;
      local_64 = 0;
      local_70 = 0x4023cccccccccccd/*9.9*/;
      FUN_140001fe0(&local_70,&local_90);
      local_74 = 0;
      local_80 = 0x4022266666666666/*9.075*/;
      FUN_140001fe0(&local_80,&local_90);
      local_54 = local_74;
      local_58 = local_78;
      if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
        local_60 = local_80;
      }
      else {
        FUN_1400865e0(&local_60,&local_80);
      }
      FUN_140001fe0(&local_60,&local_90);
      local_34 = local_54;
      local_38 = local_58;
      if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
        local_40 = local_60;
      }
      else {
        FUN_1400865e0(&local_40,&local_60);
      }
      FUN_140003e00(&local_40,&local_70);
      local_44 = local_34;
      local_48 = local_38;
      if ((0x46U >> (local_34 & 0x1f) & 1) == 0) {
        local_50 = local_40;
      }
      else {
        FUN_1400865e0(&local_50,&local_40);
      }
      FUN_140003f30(&local_50,DAT_141982ef0);
      FUN_1400019a0(param_3,&local_50);
      if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_50);
      }
      if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_40);
      }
      if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_60);
      }
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_70);
      }
    }
  }
  else {
    local_98 = 9;
    local_64 = 0;
    local_70 = 0x405e400000000000/*121 (obj:oGlw_yellow_m)*/;
    FUN_140001fe0(&local_70,&local_90);
    local_34 = local_64;
    local_38 = local_68;
    if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
      local_40 = local_70;
    }
    else {
      FUN_1400865e0(&local_40,&local_70);
    }
    FUN_140001fe0(&local_40,&local_90);
    FUN_140004520(&local_50,&local_40,_DAT_141982ef8);
    FUN_1400019a0(param_3,&local_50);
    if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_40);
    }
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  DAT_142182d78 = (undefined8 *)local_a8;
  return param_3;
}


