// Function: h_1416cfae0 @ 0x1416cfae0

undefined8 h_1416cfae0(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_2;
  if (param_2 < 10000) {
    iVar2 = DAT_1421974e8;
    if (*(int *)(param_1 + 0x7c) == 1) {
      iVar2 = 0;
    }
    if ((iVar2 <= (int)param_2) && ((int)param_2 < DAT_1421974e8)) {
      if ((&DAT_1421896f8)[lVar5 * 0x20] == '\0') {
        FUN_1416ab080("unable to set built in variable %s\n",(&DAT_1421896e0)[lVar5 * 4]);
        return 0;
      }
      uVar3 = (**(code **)(&DAT_1421896f0 + lVar5 * 0x20))(param_1,param_3,param_4);
      return uVar3;
    }
  }
  h_1416a8cb0(param_1);
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar4 = (longlong *)FUN_1416c0560(param_1,param_2);
  }
  else {
    plVar4 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 8));
  }
  if (plVar4 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) == 0) {
        plVar4 = (longlong *)FUN_1416c0560(lVar1,param_2);
      }
      else {
        plVar4 = (longlong *)(lVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
      if ((((plVar4 != (longlong *)0x0) && (*(int *)((longlong)plVar4 + 0xc) == 6)) &&
          (*plVar4 != 0)) && (*(int *)(*plVar4 + 0x7c) == 4)) goto LAB_1416cfbef;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar4 = (longlong *)FUN_1416c0340(param_1,param_2);
    }
    else {
      plVar4 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 8));
    }
  }
LAB_1416cfbef:
  FUN_141694260(plVar4,param_4,param_1,param_3);
  h_1416a8c00(1);
  return 1;
}


