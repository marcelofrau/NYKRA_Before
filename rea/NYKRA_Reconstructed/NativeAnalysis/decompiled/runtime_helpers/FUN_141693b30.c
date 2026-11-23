// Function: FUN_141693b30 @ 0x141693b30

ulonglong FUN_141693b30(double *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint auStackX_8 [8];
  undefined1 auStack_18 [16];
  
  uVar4 = 0;
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  auStackX_8[0] = 0;
  switch(uVar5) {
  case 0:
  case 0xd:
    return (ulonglong)(uint)(int)*param_1;
  case 1:
    if (((longlong *)*param_1 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_1, lVar1 == 0))
    goto code_r0x000141693c56;
    cVar2 = FUN_1416ac390(lVar1,auStackX_8);
    if (cVar2 == '\0') {
      FUN_1416ab080(&UNK_1419a00a0,lVar1);
      return (ulonglong)auStackX_8[0];
    }
    break;
  case 2:
    FUN_1416ab080(&UNK_1419a00d0);
    return (ulonglong)auStackX_8[0];
  case 3:
  case 7:
  case 10:
    return (ulonglong)*(uint *)param_1;
  case 5:
    FUN_1416ab080(&UNK_1419a00e8);
    return (ulonglong)auStackX_8[0];
  case 6:
    FUN_141718ec0(auStack_18,param_1);
    uVar3 = FUN_141693b30(auStack_18);
    return uVar3;
  default:
    if (uVar5 == 0xffffff) {
      FUN_1416ab080(&UNK_1419a0108);
      return (ulonglong)auStackX_8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080(&UNK_1419a0120,uVar5);
  }
  uVar4 = auStackX_8[0];
code_r0x000141693c56:
  return (ulonglong)uVar4;
}


