// Function: h_1400044a0 @ 0x1400044a0

void h_1400044a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
  if (uVar1 == 1) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    *param_1 = lVar3;
  }
  else if (uVar1 == 6) {
    *param_1 = *param_2;
    if (*param_2 != 0) {
      uVar2 = FUN_1416a5890();
      lVar3 = *param_2;
LAB_14000450a:
      FUN_1416be750(uVar2,lVar3);
      return;
    }
  }
  else if (uVar1 == 2) {
    lVar3 = *param_2;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      FUN_1416ba900();
      FUN_1416ba910(*param_1);
      uVar2 = FUN_1416a5890();
      lVar3 = *param_1;
      goto LAB_14000450a;
    }
  }
  return;
}


