// Function: gml_Script_create_fx @ 0x140106850

undefined8 *
gml_Script_create_fx
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_240;
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
  undefined8 local_d8;
  undefined4 local_cc;
  longlong local_c8;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_80 = "gml_Script_create_fx";
  local_78 = 0;
  local_88 = DAT_142182d78;
  DAT_142182d78 = &local_88;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
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
  local_22c = 0xffffff;
  local_238 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_ac = 0;
  local_b8 = (double)param_4;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_240 = param_3;
  local_a8 = param_2;
  local_90 = param_1;
  FUN_1416ab750(DAT_1420dd1d0);
  local_78 = 4;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  if (param_4 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_228,puVar4);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_268 = &local_228;
  FUN_1400019a0(&local_218,puVar4);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  local_260 = &local_218;
  FUN_1400019a0(&local_208,puVar4);
  local_258 = &local_208;
  FUN_140002730(&local_1f8,&DAT_1420b3250);
  local_250 = &local_1f8;
  uVar3 = FUN_1416ab210(local_90,local_a8,&local_a0,4,DAT_1420da400,&local_268);
  FUN_1400019a0(&local_70,uVar3);
  local_78 = 5;
  if (param_4 < 0xc) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xb];
  }
  FUN_1400019a0(&local_1e8,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5ad8,0x80000000,&local_1e8);
  local_78 = 6;
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  FUN_1400019a0(&local_1d8,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5b18,0x80000000,&local_1d8);
  local_78 = 7;
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  FUN_1400019a0(&local_1c8,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5a98,0x80000000,&local_1c8);
  local_78 = 8;
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  FUN_1400019a0(&local_1b8,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5aa8,0x80000000,&local_1b8);
  local_78 = 9;
  if (param_4 < 0xd) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xc];
  }
  FUN_1400019a0(&local_1a8,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5ae8,0x80000000,&local_1a8);
  local_78 = 10;
  if (param_4 < 7) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[6];
  }
  FUN_1400019a0(&local_198,puVar4);
  FUN_1416d0720(&local_70,0x188c3,0x80000000,&local_198);
  local_78 = 0xb;
  if (param_4 < 8) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[7];
  }
  FUN_1400019a0(&local_188,puVar4);
  FUN_1416d0720(&local_70,0x18971,0x80000000,&local_188);
  local_78 = 0xc;
  if (param_4 < 9) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[8];
  }
  FUN_1400019a0(&local_178,puVar4);
  FUN_1416d0720(&local_70,0x186e0,0x80000000,&local_178);
  local_78 = 0xd;
  if (param_4 < 10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[9];
  }
  FUN_1400019a0(&local_168,puVar4);
  FUN_1416d0720(&local_70,0x18ba7,0x80000000,&local_168);
  local_78 = 0xe;
  if (param_4 < 0xb) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[10];
  }
  FUN_1400019a0(&local_158,puVar4);
  FUN_1416d0720(&local_70,0x18953,0x80000000,&local_158);
  local_78 = 0xf;
  if (param_4 < 0xe) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xd];
  }
  FUN_1400019a0(&local_148,puVar4);
  FUN_1416d0720(&local_70,0x18706,0x80000000,&local_148);
  local_78 = 0x10;
  if (param_4 < 0xe) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xd];
  }
  FUN_1400019a0(&local_138,puVar4);
  FUN_1416cf7b0(&local_70,DAT_1420d5b08,0x80000000,&local_138);
  local_78 = 0x11;
  if (param_4 < 0xf) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xe];
  }
  FUN_1400019a0(&local_128,puVar4);
  FUN_1416d0720(&local_70,0x1890a,0x80000000,&local_128);
  local_78 = 0x12;
  if (param_4 < 0x10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0xf];
  }
  FUN_1400019a0(&local_118,puVar4);
  FUN_1416d0720(&local_70,0x18747,0x80000000,&local_118);
  local_78 = 0x13;
  if (param_4 < 0x11) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[0x10];
  }
  FUN_1400019a0(&local_108,puVar4);
  FUN_1416d0720(&local_70,0x18748,0x80000000,&local_108);
  local_cc = 0;
  local_d8 = 0x4031000000000000;
  uVar5 = (undefined4)DAT_1420f6b08;
  iVar2 = FUN_1416d9df0(&local_b8,&local_d8,uVar5,1);
  if (0 < iVar2) {
    local_78 = 0x14;
    if (param_4 < 0x12) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[0x11];
    }
    FUN_1400019a0(&local_f8,puVar4);
    FUN_1416d0720(&local_70,0x18997,0x80000000,&local_f8);
    uVar5 = (undefined4)DAT_1420f6b08;
  }
  local_cc = 0;
  local_d8 = 0x4032000000000000;
  iVar2 = FUN_1416d9df0(&local_b8,&local_d8,uVar5,1);
  if (0 < iVar2) {
    iVar2 = FUN_1416ab810(&local_d8,&local_90,&local_a8,&local_70);
    if (0 < iVar2) {
      do {
        local_78 = 0x15;
        DAT_142182d90 = 0x8d09fa;
        puVar4 = &DAT_1420b1000;
        if (0x12 < param_4) {
          puVar4 = (undefined8 *)param_5[0x12];
        }
        FUN_1400019a0(&local_238,puVar4);
        FUN_1416cfae0(local_90,DAT_1420d5a48,0,&local_238);
        cVar1 = FUN_1416abe60(&local_d8,&local_90);
      } while (cVar1 != '\0');
    }
    FUN_1416ab620(&local_d8,&local_90,&local_a8);
    if (local_c8 != 0) {
      thunk_FUN_1416c46f0();
      local_c8 = 0;
    }
    uVar5 = (undefined4)DAT_1420f6b08;
  }
  local_cc = 0;
  local_d8 = 0x4033000000000000;
  iVar2 = FUN_1416d9df0(&local_b8,&local_d8,uVar5,1);
  if (0 < iVar2) {
    local_78 = 0x16;
    if (param_4 < 0x14) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined8 *)param_5[0x13];
    }
    FUN_1400019a0(&local_e8,puVar4);
    FUN_1416d0720(&local_70,0x18b8b,0x80000000,&local_e8);
  }
  local_78 = 0x18;
  FUN_1400019a0(local_240,&local_70);
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
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
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
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
  DAT_142182d78 = (undefined8 *)local_88;
  return local_240;
}


