// Function: FUN_1416927d0 @ 0x1416927d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1416927d0(double *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 auStackX_8 [32];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  auStackX_8[0] = 0;
  uVar3 = 0;
  switch(uVar4) {
  case 0:
  case 0xd:
    return _UNK_141981ea8 < *param_1;
  case 1:
    if ((longlong *)*param_1 == (longlong *)0x0) {
      return false;
    }
    lVar1 = *(longlong *)*param_1;
    if (lVar1 == 0) {
      return false;
    }
    cVar2 = FUN_1416ac2b0(lVar1,auStackX_8);
    if (cVar2 == '\0') {
      FUN_1416ab080(&UNK_1419a0140,lVar1);
      return auStackX_8[0];
    }
    break;
  case 2:
    FUN_1416ab080(&UNK_1419a0168);
    return auStackX_8[0];
  case 3:
  case 6:
    return *param_1 != 0.0;
  case 5:
    goto code_r0x0001416928f8;
  case 7:
    return 0 < *(int *)param_1;
  case 10:
    return 0 < (longlong)*param_1;
  default:
    if (uVar4 == 0xffffff) {
      FUN_1416ab080(&UNK_1419a0180);
      return auStackX_8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080(&UNK_1419a0198,uVar4);
  }
  uVar3 = auStackX_8[0];
code_r0x0001416928f8:
  return uVar3;
}


