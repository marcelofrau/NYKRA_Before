// Function: h_1416cfeb0 @ 0x1416cfeb0

char h_1416cfeb0(longlong *param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4,
                undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (DAT_142184e10 != 0) {
    lVar5 = *(longlong *)(DAT_142184e10 + 0x28);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if ((uVar4 == 0) || (uVar4 != 6)) {
    uVar2 = FUN_141693b30(param_1);
    cVar1 = FUN_1416d0010(uVar2,param_2,param_3 & 0xffffffff,param_4,param_5,param_6);
  }
  else {
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x7c) == 1) {
      uVar2 = *(undefined4 *)(*(longlong *)(lVar5 + 0x90) + 0x94);
    }
    else {
      uVar2 = 0xffffffff;
    }
    cVar1 = h_1416cea80(lVar5,param_2,param_3,param_4,param_5,param_6);
  }
  if (cVar1 == '\0') {
    if (DAT_1421965b4 == '\0') {
      if (DAT_1421965b5 == '\0') {
        uVar3 = FUN_141709da0(&DAT_14199f8f1,uVar2,param_2);
        FUN_1416ab080("Unable to get variable %s from object %p\n",uVar3,lVar5);
      }
      else {
        uVar3 = FUN_1417271a0(uVar2);
        FUN_1416ab080("Unable to find any instance for object index \'%d\' name \'%s\'",uVar2,uVar3)
        ;
      }
    }
    else {
      FUN_1416ab080("Variable Index [%d] out of range [%d] - %d.%d(%d,%d)",DAT_1421965b8,
                    DAT_1421965c0,uVar2,param_2,param_2,(int)param_3);
    }
  }
  return cVar1;
}


