// Function: gml_Script_create_flash @ 0x140103b00

undefined8 *
gml_Script_create_flash
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
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
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f8 = "gml_Script_create_flash";
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
  DAT_142182d90 = param_1;
  uVar1 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18816);
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18817);
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd130);
  local_f0 = 3;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_1400019a0(&local_c8,uVar1);
  local_128 = &local_c8;
  FUN_1400019a0(&local_b8,uVar2);
  local_120 = &local_b8;
  FUN_140002730(&local_a8,&DAT_1420b31f0);
  local_118 = &local_a8;
  FUN_140002730(&local_98,&DAT_1420b3200);
  local_110 = &local_98;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_58,4,DAT_1420da400,&local_128);
  FUN_1400019a0(&local_68,uVar1);
  local_f0 = 4;
  if (param_4 < 1) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_88,puVar3);
  FUN_1416d0720(&local_68,0x187bc,0x80000000,&local_88);
  local_f0 = 5;
  if (param_4 < 2) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_78,puVar3);
  FUN_1416d0720(&local_68,0x18c52,0x80000000,&local_78);
  local_f0 = 6;
  FUN_1400019a0(param_3,&local_68);
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
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


