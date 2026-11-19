// Function: gml_Script_player_distance @ 0x1400d89e0

double * gml_Script_player_distance
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined4 local_f0;
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
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_f8 = "gml_Script_player_distance";
  local_f0 = 0;
  local_100 = DAT_142182d78;
  DAT_142182d78 = &local_100;
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
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_48 = (ulonglong)(uint)local_48;
  local_50 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  FUN_1416ab750(DAT_1420dce50);
  local_f0 = 2;
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  local_50 = 0;
  local_48 = 0x500000000;
  FUN_1416ab670(0x40,DAT_1420d58e8,0x80000000,&local_70);
  FUN_1416ab670(0x40,DAT_1420d58f8,0x80000000,&local_60);
  if (param_4 < 1) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_b8,puVar3);
  if (param_4 < 2) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  local_120 = &local_b8;
  FUN_1400019a0(&local_a8,puVar3);
  local_118 = &local_a8;
  FUN_1400019a0(&local_98,&local_70);
  local_110 = &local_98;
  FUN_1400019a0(&local_88,&local_60);
  if (param_4 < 3) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
  }
  local_108 = &local_88;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_50,4,DAT_1420da150,&local_120);
  iVar1 = FUN_1416d9df0(uVar2,puVar3,DAT_1420f6b08,1);
  if ((0x46U >> (*(uint *)((longlong)param_3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)(iVar1 != -2 && iVar1 < 0);
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
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
  DAT_142182d78 = (undefined8 *)local_100;
  return param_3;
}


