// Function: h_1416cd560 @ 0x1416cd560

void h_1416cd560(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong ***ppplVar2;
  longlong **local_18;
  int local_c;
  
  uVar1 = DAT_142182d90;
  if (*(int *)((longlong)param_1 + 0xc) == 3) {
    param_1 = (longlong *)*param_1;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 2) {
    if (*param_1 != 0) {
      local_c = 5;
      DAT_142182d90 = *(undefined8 *)(*param_1 + 0x98);
      FUN_141693480(&local_18,param_1,0,param_2,1,1);
      ppplVar2 = &local_18;
      if (local_c == 3) {
        ppplVar2 = (longlong ***)local_18;
      }
      DAT_142182d90 = uVar1;
      if ((*(int *)((longlong)ppplVar2 + 0xc) == 2) && (*ppplVar2 != (longlong **)0x0)) {
        FUN_141694630(ppplVar2,param_4,0,param_3);
      }
      else {
        h_1416ab080("array_set_2D :: first referenced entry is not an array");
      }
      if (DAT_1421965b4 != '\0') {
        h_1416ab080("array_set_2d :: variable Index [%d] out of range [%d]",DAT_1421965b8,
                    DAT_1421965c0);
        return;
      }
    }
  }
  else {
    h_1416ab080("array_set_2d :: argument 0 is not an array");
  }
  return;
}


