// Function: gml_Script_check_block @ 0x14012cc90

undefined8 *
gml_Script_check_block
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined4 uVar4;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
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
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f0 = "gml_Script_check_block";
  local_e8 = 0;
  local_f8 = DAT_142182d78;
  DAT_142182d78 = &local_f8;
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
  local_6c = 0xffffff;
  local_78 = 0;
  DAT_142182d90 = param_1;
  uVar1 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18aa0/*var:map_id*/);
  local_60 = (ulonglong)(uint)local_60;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e0 = param_3;
  FUN_1416ab750(DAT_1420dd370/*gml_Script_check_block*/);
  local_e8 = 2;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_b8,puVar2);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_128 = &local_b8;
  FUN_1400019a0(&local_a8,puVar2);
  local_120 = &local_a8;
  FUN_1400019a0(&local_98,uVar1);
  ppuVar3 = &local_128;
  local_118 = &local_98;
  uVar1 = FUN_1401363e0(param_1,param_2,&local_58,2,ppuVar3);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  FUN_1400019a0(&local_88,uVar1);
  local_110 = &local_88;
  FUN_140002730(&local_78,&DAT_1420b33a0);
  local_108 = &local_78;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_68,3,CONCAT44(uVar4,DAT_1420da240/*array_get_2D*/),&local_118);
  FUN_1400019a0(local_e0,uVar1);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  puVar2 = local_e0;
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
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
  DAT_142182d78 = (undefined8 *)local_f8;
  return puVar2;
}


