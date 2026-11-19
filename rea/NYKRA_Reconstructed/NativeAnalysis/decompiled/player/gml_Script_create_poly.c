// Function: gml_Script_create_poly @ 0x14012eb00

undefined8 *
gml_Script_create_poly
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
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
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_60 = "gml_Script_create_poly";
  local_58 = 0;
  local_68 = DAT_142182d78;
  DAT_142182d78 = &local_68;
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
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd3b0);
  local_58 = 3;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_158,puVar2);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_250 = &local_158;
  FUN_1400019a0(&local_148,puVar2);
  if (param_4 < 3) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  local_248 = &local_148;
  FUN_1400019a0(&local_138,puVar2);
  local_240 = &local_138;
  FUN_140002730(&local_128,&DAT_1420b33c0);
  local_238 = &local_128;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_78,4,DAT_1420da400,&local_250);
  FUN_1400019a0(&local_50,uVar1);
  local_58 = 4;
  if (param_4 < 4) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  FUN_1400019a0(&local_118,puVar2);
  FUN_1416d0720(&local_50,0x18c41,0x80000000,&local_118);
  local_58 = 5;
  if (param_4 < 5) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  FUN_1400019a0(&local_108,puVar2);
  FUN_1416d0720(&local_50,0x187bc,0x80000000,&local_108);
  local_58 = 6;
  if (param_4 < 6) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[5];
  }
  FUN_1400019a0(&local_f8,puVar2);
  FUN_1416d0720(&local_50,0x18d06,0x80000000,&local_f8);
  local_58 = 7;
  if (param_4 < 7) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[6];
  }
  FUN_1400019a0(&local_e8,puVar2);
  FUN_1416d0720(&local_50,0x188f6,0x80000000,&local_e8);
  local_58 = 8;
  if (param_4 < 8) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[7];
  }
  FUN_1400019a0(&local_d8,puVar2);
  FUN_1416d0720(&local_50,0x18d4a,0x80000000,&local_d8);
  local_58 = 9;
  if (param_4 < 9) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[8];
  }
  FUN_1400019a0(&local_c8,puVar2);
  FUN_1416d0720(&local_50,0x188f8,0x80000000,&local_c8);
  local_58 = 10;
  if (param_4 < 10) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[9];
  }
  FUN_1400019a0(&local_b8,puVar2);
  FUN_1416d0720(&local_50,0x1870b,0x80000000,&local_b8);
  local_58 = 0xb;
  if (param_4 < 0xb) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[10];
  }
  FUN_1400019a0(&local_a8,puVar2);
  FUN_1416d0720(&local_50,0x1871c,0x80000000,&local_a8);
  local_58 = 0xc;
  if (param_4 < 0xc) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xb];
  }
  FUN_1400019a0(&local_98,puVar2);
  FUN_1416d0720(&local_50,0x1871d,0x80000000,&local_98);
  local_58 = 0xd;
  if (param_4 < 0xd) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xc];
  }
  FUN_1400019a0(&local_88,puVar2);
  FUN_1416d0720(&local_50,0x18971,0x80000000,&local_88);
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
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
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
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
  DAT_142182d78 = (undefined8 *)local_68;
  return param_3;
}


