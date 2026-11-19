// Function: h_1416ab670 @ 0x1416ab670

void h_1416ab670(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint in_stack_ffffffffffffffd8;
  uint uVar3;
  uint in_stack_ffffffffffffffe0;
  uint uVar4;
  
  uVar4 = in_stack_ffffffffffffffe0 & 0xffffff00;
  uVar3 = in_stack_ffffffffffffffd8 & 0xffffff00;
  cVar1 = FUN_1416ce980();
  if (cVar1 == '\0') {
    if (DAT_1421965b4 != '\0') {
      FUN_1416ab080("Variable Index [%d] out of range [%d] - %d.%d(%d,%d)",DAT_1421965b8,
                    DAT_1421965c0,param_1,param_2,param_2,param_3);
      return;
    }
    if (DAT_1421965b5 != '\0') {
      uVar2 = FUN_1417271a0(param_1);
      FUN_1416ab080("Unable to find any instance for object index \'%d\' name \'%s\'",param_1,uVar2)
      ;
      return;
    }
    if (param_1 == -1) {
      param_1 = *(int *)(*(longlong *)(DAT_142184e10 + 0x28) + 0xb4);
    }
    FUN_1416ab080("Variable Get %d (%d, %d)",param_1,param_2,param_3,uVar3,uVar4);
  }
  return;
}


