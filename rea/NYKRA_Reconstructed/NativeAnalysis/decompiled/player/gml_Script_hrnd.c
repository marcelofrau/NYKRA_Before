// Function: gml_Script_hrnd @ 0x1400b9750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_hrnd(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *local_a0 [2];
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [12];
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_88 = "gml_Script_hrnd";
  local_80 = 0;
  local_90 = DAT_142182d78;
  DAT_142182d78 = &local_90;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = (ulonglong)(uint)local_48;
  local_50 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcca0);
  local_80 = 2;
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  local_50 = 0;
  local_48 = 0x500000000;
  if (param_4 < 1) {
    param_5 = &DAT_1420b1000;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_140001a50(local_40,param_5,2);
  FUN_1400019a0(&local_68,local_40);
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_40);
  }
  local_a0[0] = &local_68;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_50,1,DAT_1420da230,local_a0);
  FUN_140004520(local_40,uVar1,_DAT_141982c40);
  FUN_1400019a0(param_3,local_40);
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_40);
  }
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  DAT_142182d78 = (undefined8 *)local_90;
  return param_3;
}


