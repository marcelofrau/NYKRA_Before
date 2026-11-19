// Function: gml_Script_obj_setpos @ 0x140060650

undefined8 *
gml_Script_obj_setpos
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e0;
  uint local_d4;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_98 = "gml_Script_obj_setpos";
  local_90 = 0;
  local_a0 = DAT_142182d78;
  DAT_142182d78 = &local_a0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc900);
  local_90 = 3;
  if (param_4 < 1) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_48,puVar1);
  local_90 = 4;
  if (param_4 < 2) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_68,puVar1);
  FUN_1416cf7b0(&local_48,DAT_1420d58e8,0x80000000,&local_68);
  local_90 = 5;
  if (param_4 < 3) {
    puVar1 = &DAT_1420b1000;
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
  }
  FUN_1400019a0(&local_58,puVar1);
  FUN_1416cf7b0(&local_48,DAT_1420d58f8,0x80000000,&local_58);
  local_90 = 6;
  FUN_1416cfc30(&local_48,DAT_1420d58e8,0x80000000,&local_68);
  FUN_1416cfeb0(&local_48,0x187b5,0x80000000,&local_88,0,0);
  local_2c = local_5c;
  local_30 = local_60;
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_38 = local_68;
  }
  else {
    FUN_1400612d0(&local_38,&local_68);
  }
  FUN_140003e00(&local_38,&local_88);
  FUN_1400019a0(&local_e0,&local_38);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_38);
  }
  FUN_1416d0720(&local_48,0x18e3b,0x80000000,&local_e0);
  local_90 = 7;
  FUN_1416cfc30(&local_48,DAT_1420d58f8,0x80000000,&local_58);
  FUN_1416cfeb0(&local_48,0x18782,0x80000000,&local_78,0,0);
  local_2c = local_4c;
  local_30 = local_50;
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_38 = local_58;
  }
  else {
    FUN_1400612d0(&local_38,&local_58);
  }
  FUN_140003e00(&local_38,&local_78);
  FUN_1400019a0(&local_d0,&local_38);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_38);
  }
  FUN_1416d0720(&local_48,0x18e4b,0x80000000,&local_d0);
  local_90 = 8;
  FUN_1416cfc30(&local_48,DAT_1420d58e8,0x80000000,&local_68);
  FUN_1416cfeb0(&local_48,0x187b5,0x80000000,&local_88,0,0);
  local_2c = local_5c;
  local_30 = local_60;
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_38 = local_68;
  }
  else {
    FUN_1400612d0(&local_38,&local_68);
  }
  FUN_140003ca0(&local_38,&local_88);
  FUN_1400019a0(&local_c0,&local_38);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_38);
  }
  FUN_1416d0720(&local_48,0x18e3d,0x80000000,&local_c0);
  local_90 = 9;
  FUN_1416cfc30(&local_48,DAT_1420d58f8,0x80000000,&local_58);
  FUN_1416cfeb0(&local_48,0x18782,0x80000000,&local_78,0,0);
  local_2c = local_4c;
  local_30 = local_50;
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_38 = local_58;
  }
  else {
    FUN_1400612d0(&local_38,&local_58);
  }
  FUN_140003ca0(&local_38,&local_78);
  FUN_1400019a0(&local_b0,&local_38);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_38);
  }
  FUN_1416d0720(&local_48,0x18e4d,0x80000000,&local_b0);
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_48);
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
  DAT_142182d78 = (undefined8 *)local_a0;
  return param_3;
}


