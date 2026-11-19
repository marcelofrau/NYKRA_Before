// Function: gml_Script_sleep @ 0x140087080

undefined8 *
gml_Script_sleep(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                undefined8 *param_5)

{
  int iVar1;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_88 = "gml_Script_sleep";
  local_80 = 0;
  local_90 = DAT_142182d78;
  DAT_142182d78 = &local_90;
  local_6c = 0xffffff;
  local_78 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dca20);
  FUN_1416ce870(param_1,DAT_1420d59a8,0x80000000,&local_50);
  if (param_4 < 1) {
    param_5 = &DAT_1420b1000;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_34 = local_44;
  local_38 = local_48;
  if ((0x46U >> (local_44 & 0x1f) & 1) == 0) {
    local_40 = local_50;
  }
  else {
    FUN_140087510(&local_40,&local_50);
  }
  FUN_140003ca0(&local_40,param_5);
  FUN_1400019a0(&local_60,&local_40);
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_40);
  }
  do {
    FUN_1416ce870(param_1,DAT_1420d59a8,0x80000000,&local_50);
    iVar1 = FUN_1416d9df0(&local_50,&local_60,DAT_1420f6b08,1);
    if (iVar1 == -2) break;
  } while (iVar1 < 1);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  DAT_142182d78 = (undefined8 *)local_90;
  return param_3;
}


