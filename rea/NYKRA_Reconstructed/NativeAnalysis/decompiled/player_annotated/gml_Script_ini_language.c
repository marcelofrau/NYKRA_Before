// Function: gml_Script_ini_language @ 0x140109fe0

undefined8 * gml_Script_ini_language(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined8 *local_38;
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_58 = "gml_Script_ini_language";
  local_50 = 0;
  local_60 = DAT_142182d78;
  DAT_142182d78 = &local_60;
  local_3c = 0xffffff;
  local_48 = (undefined8 *)0x0;
  DAT_142182d90 = param_1;
  uVar1 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a5f/*var:LANGUAGE_FILE*/);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd210/*gml_Script_ini_language*/);
  local_50 = 3;
  FUN_1416ce870(param_1,DAT_1420d59d8/*working_directory*/,0x80000000,&local_48);
  local_2c = local_3c;
  local_30 = local_40;
  if ((0x46U >> (local_3c & 0x1f) & 1) == 0) {
    local_38 = local_48;
  }
  else {
    FUN_14010a380(&local_38,&local_48);
  }
  FUN_140003ca0(&local_38,uVar1);
  if (((local_2c & 0xffffff) == 1) && (local_38 != (undefined8 *)0x0)) {
    uVar1 = *local_38;
  }
  else {
    uVar1 = 0;
  }
  FUN_141700990(uVar1);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_38);
  }
  if ((0x46U >> (local_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_48);
  }
  DAT_142182d78 = (undefined8 *)local_60;
  return param_3;
}


