// Function: h_141693b30 @ 0x141693b30

ulonglong h_141693b30(double *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint local_res8 [8];
  undefined1 local_18 [16];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  local_res8[0] = 0;
  switch(uVar4) {
  case 0:
  case 0xd:
    return (ulonglong)(uint)(int)*param_1;
  case 1:
    if ((longlong *)*param_1 == (longlong *)0x0) {
      return 0;
    }
    lVar1 = *(longlong *)*param_1;
    if (lVar1 == 0) {
      return 0;
    }
    cVar2 = FUN_1416ac390(lVar1,local_res8);
    if (cVar2 == '\0') {
      FUN_1416ab080("unable to convert string \"%s\" to integer",lVar1);
      return (ulonglong)local_res8[0];
    }
    break;
  case 2:
    FUN_1416ab080("I32 argument is array");
    return (ulonglong)local_res8[0];
  case 3:
  case 7:
  case 10:
    return (ulonglong)*(uint *)param_1;
  case 5:
    FUN_1416ab080("I32 argument is undefined");
    return (ulonglong)local_res8[0];
  case 6:
    FUN_141718ec0(local_18,param_1);
    uVar3 = h_141693b30(local_18);
    return uVar3;
  default:
    if (uVar4 == 0xffffff) {
      FUN_1416ab080("I32 argument is unset");
      return (ulonglong)local_res8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080("I32 argument incorrect type %d",uVar4);
  }
  return (ulonglong)local_res8[0];
}


