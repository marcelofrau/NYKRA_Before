// Function: FUN_1416cd560 @ 0x1416cd560

void FUN_1416cd560(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong ***ppplVar2;
  longlong ***ppplStack_18;
  int iStack_c;
  
  uVar1 = uRam0000000142182d90;
  if (*(int *)((longlong)param_1 + 0xc) == 3) {
    param_1 = (longlong *)*param_1;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 2) {
    if (*param_1 != 0) {
      iStack_c = 5;
      uRam0000000142182d90 = *(undefined8 *)(*param_1 + 0x98);
      FUN_141693480(&ppplStack_18,param_1,0,param_2,1,1);
      ppplVar2 = (longlong ***)&ppplStack_18;
      if (iStack_c == 3) {
        ppplVar2 = ppplStack_18;
      }
      uRam0000000142182d90 = uVar1;
      if ((*(int *)((longlong)ppplVar2 + 0xc) == 2) && (*ppplVar2 != (longlong **)0x0)) {
        FUN_141694630(ppplVar2,param_4,0,param_3);
      }
      else {
        FUN_1416ab080(&UNK_1419a55f0);
      }
      if (cRam00000001421965b4 != '\0') {
        FUN_1416ab080(&UNK_1419a5628,uRam00000001421965b8,uRam00000001421965c0);
        return;
      }
    }
  }
  else {
    FUN_1416ab080(&UNK_1419a5660);
  }
  return;
}


