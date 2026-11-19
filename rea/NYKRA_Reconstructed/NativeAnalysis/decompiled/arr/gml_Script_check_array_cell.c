// Function: gml_Script_check_array_cell @ 0x1401363e0

undefined8 *
gml_Script_check_array_cell
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint in_stack_fffffffffffffe28;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_138 = "gml_Script_check_array_cell";
  local_130 = 0;
  local_140 = DAT_142182d78;
  DAT_142182d78 = &local_140;
  local_11c = 0xffffff;
  local_128 = 0;
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
  DAT_142182d90 = param_1;
  local_148 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e);
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  local_60 = (ulonglong)(uint)local_60;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd450);
  local_130 = 2;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
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
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  in_stack_fffffffffffffe28 = in_stack_fffffffffffffe28 & 0xffffff00;
  FUN_1416d0010(0x4f,0x18b09,0x80000000,&local_168,in_stack_fffffffffffffe28,
                in_stack_fffffffffffffe30);
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_108,puVar2);
  local_1b8 = &local_108;
  FUN_140002730(&local_f8,&DAT_14217f518);
  local_1b0 = &local_f8;
  FUN_1400019a0(&local_e8,&local_168);
  local_1a8 = &local_e8;
  FUN_1416d0010(0x4f,0x18abd,0x80000000,&local_158,in_stack_fffffffffffffe28 & 0xffffff00,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_d8,puVar2);
  local_1a0 = &local_d8;
  FUN_140002730(&local_c8,&DAT_14217f518);
  local_198 = &local_c8;
  FUN_1400019a0(&local_b8,&local_158);
  local_190 = &local_b8;
  FUN_1400019a0(&local_a8,local_148);
  local_188 = &local_a8;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_68,3,DAT_1420da130,&local_1b8);
  FUN_1400019a0(&local_98,uVar1);
  local_180 = &local_98;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_58,3,DAT_1420da130,&local_1a0);
  FUN_1400019a0(&local_88,uVar1);
  local_178 = &local_88;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_78,3,DAT_1420da240,&local_188);
  FUN_1400019a0(param_3,uVar1);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
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
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  DAT_142182d78 = (undefined8 *)local_140;
  return param_3;
}


