// Function: gml_Script_bb_setmiddle @ 0x14003d740

undefined8 * gml_Script_bb_setmiddle(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = "gml_Script_bb_setmiddle";
  local_b0 = 0;
  local_c0 = DAT_142182d78;
  DAT_142182d78 = &local_c0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc7f0);
  local_b0 = 2;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0x18e3b);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e3d);
  FUN_1400019a0(&local_98,uVar1);
  local_a8 = &local_98;
  FUN_1400019a0(&local_88,uVar2);
  local_a0 = &local_88;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da0c0,&local_a8);
  FUN_1400019a0(&local_78,uVar1);
  FUN_1416cfae0(param_1,DAT_1420d58e8,0x80000000,&local_78);
  local_b0 = 3;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0x18e4b);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e4d);
  FUN_1400019a0(&local_98,uVar1);
  local_a8 = &local_98;
  FUN_1400019a0(&local_88,uVar2);
  local_a0 = &local_88;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_58,2,DAT_1420da0c0,&local_a8);
  FUN_1400019a0(&local_68,uVar1);
  FUN_1416cfae0(param_1,DAT_1420d58f8,0x80000000,&local_68);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  DAT_142182d78 = (undefined8 *)local_c0;
  return param_3;
}


