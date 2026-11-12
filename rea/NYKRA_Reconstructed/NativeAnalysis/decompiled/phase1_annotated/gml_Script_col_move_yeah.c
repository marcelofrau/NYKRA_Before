// Function: gml_Script_col_move_yeah @ 0x140063e70

undefined8 * gml_Script_col_move_yeah(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = "gml_Script_col_move_yeah";
  local_20 = 0;
  local_30 = DAT_142182d78;
  DAT_142182d78 = &local_30;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc9a0/*gml_Script_col_move_yeah*/);
  DAT_142182d78 = (undefined8 *)local_30;
  return param_3;
}


