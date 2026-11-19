// Function: h_1416ab080 @ 0x1416ab080

void h_1416ab080(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStackY_458 [32];
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14217a9b8 ^ (ulonglong)auStackY_458;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_142184e43 == '\0') {
    puVar1 = (ulonglong *)FUN_1416965a0();
    common_vsprintf<__crt_stdio_output::standard_base,char>
              (*puVar1 | 2,local_428,0x400,param_1,(__crt_locale_pointers *)0x0,(char *)&local_res10
              );
    if (DAT_142184e43 == '\0') {
      FUN_14171eb30(local_428,1,0);
    }
  }
  else {
    DAT_1421965ca = 1;
  }
  FUN_14193e380(local_28 ^ (ulonglong)auStackY_458);
  return;
}


