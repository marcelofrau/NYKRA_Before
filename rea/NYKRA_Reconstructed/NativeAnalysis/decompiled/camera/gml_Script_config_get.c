// Function: gml_Script_config_get @ 0x140120200

undefined8 *
gml_Script_config_get
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
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
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_a8 = "gml_Script_config_get";
  local_a0 = 0;
  local_b0 = DAT_142182d78;
  DAT_142182d78 = &local_b0;
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
  FUN_1416ab750(DAT_1420dd290);
  local_a0 = 4;
  FUN_141700990(s_config_1420b3320);
  local_a0 = 5;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  if (param_4 < 1) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_98,puVar3);
  if (param_4 < 2) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  local_c8 = &local_98;
  FUN_1400019a0(&local_88,puVar3);
  local_c0 = &local_88;
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  FUN_1416ab000(&local_78,&DAT_14217f4cc);
  ppuVar5 = &local_c8;
  uVar4 = CONCAT44(uVar6,DAT_1420da540);
  local_b8 = &local_78;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_58,3,uVar4,ppuVar5);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_1400019a0(&local_68,uVar2);
  if (param_4 < 3) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
  }
  local_cc = 0;
  local_d8 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(puVar3,&local_d8,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_a0 = 7;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    local_c8 = &local_68;
    uVar2 = FUN_140135c90(param_1,param_2,&local_58,1,ppuVar5);
    uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
    FUN_1400019a0(&local_68,uVar2);
  }
  local_a0 = 9;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  FUN_1416ab210(param_1,param_2,&local_58,0,CONCAT44(uVar6,DAT_1420da550),0);
  local_a0 = 10;
  FUN_1400019a0(param_3,&local_68);
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
  DAT_142182d78 = (undefined8 *)local_b0;
  return param_3;
}


