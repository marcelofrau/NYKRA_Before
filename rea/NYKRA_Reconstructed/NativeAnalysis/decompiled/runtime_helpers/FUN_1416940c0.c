// Function: FUN_1416940c0 @ 0x1416940c0

double FUN_1416940c0(double *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  double dVar4;
  double adStackX_8 [4];
  undefined1 auStack_18 [16];
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  adStackX_8[0] = 0.0;
  switch(uVar3) {
  case 0:
  case 0xd:
    return *param_1;
  case 1:
    if ((longlong *)*param_1 == (longlong *)0x0) {
      return 0.0;
    }
    lVar1 = *(longlong *)*param_1;
    if (lVar1 == 0) {
      return 0.0;
    }
    cVar2 = FUN_1416ac350(lVar1,adStackX_8);
    if (cVar2 == '\0') {
      FUN_1416ab080(&UNK_14199ff00,lVar1);
      return adStackX_8[0];
    }
    break;
  case 2:
    FUN_1416ab080(&UNK_14199ff28);
    return adStackX_8[0];
  case 3:
  case 10:
    return (double)(longlong)*param_1;
  case 5:
    FUN_1416ab080(&UNK_14199ff40);
    return adStackX_8[0];
  case 6:
    FUN_141718ec0(auStack_18,param_1,0);
    dVar4 = (double)FUN_1416940c0(auStack_18);
    return dVar4;
  case 7:
    return (double)*(int *)param_1;
  default:
    if (uVar3 == 0xffffff) {
      FUN_1416ab080(&UNK_14199ff60);
      return adStackX_8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080(&UNK_14199ff78,uVar3);
  }
  return adStackX_8[0];
}


