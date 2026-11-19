// Function: gml_Object_parLeaves_Step_1 @ 0x140363dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parLeaves_Step_1(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
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
  double local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  double local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  double local_80;
  undefined4 local_78;
  uint local_74;
  double local_70;
  undefined4 local_68;
  uint local_64;
  double local_60;
  undefined4 local_58;
  uint local_54;
  double local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_b0 = "gml_Object_parLeaves_Step_1";
  local_a8 = 0;
  local_b8 = DAT_142182d78;
  DAT_142182d78 = &local_b8;
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  local_11c = 0xffffff;
  local_128 = 0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
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
  local_a8 = 1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18c0b/*var:r*/);
  FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_128,0,0);
  FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_a0,0,0);
  FUN_140001a50(&local_138,uVar2,4);
  local_64 = local_12c;
  local_68 = local_130;
  if ((0x46U >> (local_12c & 0x1f) & 1) == 0) {
    local_70 = local_138;
  }
  else {
    FUN_140365f20(&local_70,&local_138);
  }
  FUN_140003ca0(&local_70,uVar3);
  local_74 = local_64;
  local_78 = local_68;
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_80 = local_70;
  }
  else {
    FUN_140365f20(&local_80,&local_70);
  }
  FUN_140003ca0(&local_80,&local_128);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_140365f20(&local_60,&local_80);
  }
  FUN_140003ca0(&local_60,&local_a0);
  FUN_140009980(&local_50,&local_60,DAT_1419843c8);
  FUN_1400019a0(&local_90,&local_50);
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
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
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  local_a8 = 3;
  FUN_140001a50(&local_50,&local_90,0xb);
  dVar6 = local_50;
  if ((local_44 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_50);
  }
  fVar5 = (float)FUN_1416cd800(DAT_141986b5c,(float)dVar6);
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  local_118 = (double)fVar5 * _DAT_141981ea8;
  local_10c = 0;
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416cfae0(param_1,DAT_1420d5cf8/*image_angle*/,0x80000000,&local_118);
  local_a8 = 4;
  FUN_140001a50(&local_50,&local_90,8);
  dVar6 = local_50;
  if ((local_44 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_50);
  }
  fVar5 = (float)FUN_1416cd800(DAT_141986b60,(float)dVar6);
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_108 = (double)fVar5 * _DAT_141981ea8 + _DAT_141981e30;
  local_fc = 0;
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416cfae0(param_1,DAT_1420d5d08/*image_xscale*/,0x80000000,&local_108);
  local_a8 = 5;
  FUN_140001a50(&local_50,&local_90,8);
  dVar6 = local_50;
  if ((local_44 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_50);
  }
  fVar5 = (float)FUN_1416cd880(DAT_141986b64,(float)dVar6);
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = (double)fVar5 * _DAT_141981ea8 + _DAT_141981e30;
  local_ec = 0;
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416cfae0(param_1,DAT_1420d5d18/*image_yscale*/,0x80000000,&local_f8);
  local_a8 = 6;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18e45/*var:xx*/);
  FUN_140001a50(&local_50,&local_90,10);
  dVar6 = local_50;
  if ((local_44 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_50);
  }
  fVar5 = (float)FUN_1416cd800(_DAT_141981f80,(float)dVar6);
  FUN_1416a8cb0(param_1);
  if ((0x46U >> (*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar4);
  }
  dVar6 = (double)fVar5 * _DAT_141986418;
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = dVar6;
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  local_a8 = 7;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18e54/*var:yy*/);
  FUN_140001a50(&local_50,&local_90,9);
  dVar6 = local_50;
  if ((local_44 & 0xffffff) != 0) {
    dVar6 = (double)FUN_1416940c0(&local_50);
  }
  fVar5 = (float)FUN_1416cd880(_DAT_1419835ec,(float)dVar6);
  FUN_1416a8cb0(param_1);
  if ((0x46U >> (*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar4);
  }
  dVar6 = (double)fVar5 * _DAT_141986418;
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = dVar6;
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  FUN_1416a8c00(1);
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar4;
  }
  else {
    dVar6 = (double)FUN_1416940c0(pdVar4);
  }
  cVar1 = FUN_1416f8280(param_1,param_2,(longlong)dVar6);
  if (cVar1 != '\0') {
    local_a8 = 10;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
    FUN_140001a50(&local_60,&local_90,0xb);
    local_44 = local_54;
    local_48 = local_58;
    if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
      local_50 = local_60;
    }
    else {
      FUN_140365f20(&local_50,&local_60);
    }
    FUN_140001c50(&local_50,0x5a);
    dVar6 = local_50;
    if ((local_44 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_50);
    }
    fVar5 = (float)FUN_1416cd800(DAT_1419866e8,(float)dVar6);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_e8 = (double)fVar5 * _DAT_141985bd8;
    local_dc = 0;
    if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_60);
    }
    FUN_1416cf7b0(uVar2,DAT_1420d5cf8/*image_angle*/,0x80000000,&local_e8);
    local_a8 = 0xb;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
    FUN_140001a50(&local_60,&local_90,8);
    local_44 = local_54;
    local_48 = local_58;
    if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
      local_50 = local_60;
    }
    else {
      FUN_140365f20(&local_50,&local_60);
    }
    FUN_140001c50(&local_50,0x5a);
    dVar6 = local_50;
    if ((local_44 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_50);
    }
    fVar5 = (float)FUN_1416cd800(DAT_141986b68,(float)dVar6);
    if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d8);
    }
    local_d8 = (double)fVar5 / DAT_141985620 + _DAT_141981e30;
    local_cc = 0;
    if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_60);
    }
    FUN_1416cf7b0(uVar2,DAT_1420d5d08/*image_xscale*/,0x80000000,&local_d8);
    local_a8 = 0xc;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
    FUN_140001a50(&local_60,&local_90,7);
    local_44 = local_54;
    local_48 = local_58;
    if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
      local_50 = local_60;
    }
    else {
      FUN_140365f20(&local_50,&local_60);
    }
    FUN_140001c50(&local_50,0x5a);
    dVar6 = local_50;
    if ((local_44 & 0xffffff) != 0) {
      dVar6 = (double)FUN_1416940c0(&local_50);
    }
    fVar5 = (float)FUN_1416cd880(_DAT_141986b6c,(float)dVar6);
    if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = (double)fVar5 / DAT_141985620 + _DAT_141981e30;
    local_bc = 0;
    if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_60);
    }
    FUN_1416cf7b0(uVar2,DAT_1420d5d18/*image_yscale*/,0x80000000,&local_c8);
    local_a8 = 0xd;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
    FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_128,0,0);
    FUN_1400019a0(&local_158,&local_128);
    FUN_1416cf7b0(uVar2,DAT_1420d58e8/*x*/,0x80000000,&local_158);
    local_a8 = 0xe;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b4e/*var:otbl*/);
    FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_a0,0,0);
    local_44 = local_94;
    local_48 = local_98;
    if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
      local_50 = local_a0;
    }
    else {
      FUN_140365f20(&local_50,&local_a0);
    }
    FUN_140001c50(&local_50,2);
    FUN_1400019a0(&local_148,&local_50);
    if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_50);
    }
    FUN_1416cf7b0(uVar2,DAT_1420d58f8/*y*/,0x80000000,&local_148);
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
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
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
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  DAT_142182d78 = (undefined8 *)local_b8;
  return;
}


