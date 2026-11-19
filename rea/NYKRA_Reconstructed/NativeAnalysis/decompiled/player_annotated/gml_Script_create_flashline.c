// Function: gml_Script_create_flashline @ 0x140105ef0

undefined8 *
gml_Script_create_flashline
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 local_160 [16];
  longlong local_150;
  undefined8 *local_140;
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
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = "gml_Script_create_flashline";
  local_70 = 0;
  local_80 = DAT_142182d78;
  DAT_142182d78 = &local_80;
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
  local_58 = (ulonglong)(uint)local_58;
  local_60 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_140 = param_3;
  local_68 = param_2;
  local_50 = param_1;
  FUN_1416ab750(DAT_1420dd1b0/*gml_Script_create_flashline*/);
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_60 = 0;
  local_58 = 0x500000000;
  if (param_4 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_c8,puVar4);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  local_180 = &local_c8;
  FUN_1400019a0(&local_b8,puVar4);
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_178 = &local_b8;
  FUN_1400019a0(&local_a8,puVar4);
  local_170 = &local_a8;
  FUN_140002730(&local_98,&DAT_1420b3240);
  local_168 = &local_98;
  uVar3 = FUN_1416ab210(local_50,local_68,&local_60,4,DAT_1420da400/*instance_create_depth*/,&local_180);
  iVar2 = FUN_1416ab810(local_160,&local_50,&local_68,uVar3);
  if (0 < iVar2) {
    do {
      local_70 = 4;
      uVar3 = (**(code **)(*local_50 + 0x10))(local_50,0x18860/*var:d*/);
      puVar4 = &DAT_1420b1000;
      if (2 < param_4) {
        puVar4 = (undefined8 *)param_5[2];
      }
      FUN_1416a8cb0(local_50);
      FUN_1400019a0(uVar3,puVar4);
      FUN_1416a8c00(1);
      local_70 = 5;
      uVar3 = (**(code **)(*local_50 + 0x10))(local_50,0x187bc/*var:c*/);
      puVar4 = &DAT_1420b1000;
      if (4 < param_4) {
        puVar4 = (undefined8 *)param_5[4];
      }
      FUN_1416a8cb0(local_50);
      FUN_1400019a0(uVar3,puVar4);
      FUN_1416a8c00(1);
      local_70 = 6;
      uVar3 = (**(code **)(*local_50 + 0x10))(local_50,0x18c41/*var:s*/);
      puVar4 = &DAT_1420b1000;
      if (5 < param_4) {
        puVar4 = (undefined8 *)param_5[5];
      }
      FUN_1416a8cb0(local_50);
      FUN_1400019a0(uVar3,puVar4);
      FUN_1416a8c00(1);
      local_70 = 7;
      uVar3 = (**(code **)(*local_50 + 0x10))(local_50,0x18d92/*var:th*/);
      puVar4 = &DAT_1420b1000;
      if (6 < param_4) {
        puVar4 = (undefined8 *)param_5[6];
      }
      FUN_1416a8cb0(local_50);
      FUN_1400019a0(uVar3,puVar4);
      FUN_1416a8c00(1);
      cVar1 = FUN_1416abe60(local_160,&local_50,&local_68);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(local_160,&local_50,&local_68);
  if (local_150 != 0) {
    thunk_FUN_1416c46f0();
    local_150 = 0;
  }
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
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
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  DAT_142182d78 = (undefined8 *)local_80;
  return local_140;
}


