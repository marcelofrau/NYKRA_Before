// Function: h_1416927d0 @ 0x1416927d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 h_1416927d0(double *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 local_res8 [32];
  
  uVar3 = 0;
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  local_res8[0] = 0;
  switch(uVar4) {
  case 0:
  case 0xd:
    return _DAT_141981ea8 < *param_1;
  case 1:
    if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
       && (cVar2 = FUN_1416ac2b0(lVar1,local_res8), uVar3 = local_res8[0], cVar2 == '\0')) {
      FUN_1416ab080("unable to convert string \"%s\" to bool",lVar1);
      return local_res8[0];
    }
    break;
  case 2:
    FUN_1416ab080("bool argument is array");
    return local_res8[0];
  case 3:
  case 6:
    return *param_1 != 0.0;
  case 5:
    break;
  case 7:
    return 0 < *(int *)param_1;
  case 10:
    return 0 < (longlong)*param_1;
  default:
    if (uVar4 == 0xffffff) {
      FUN_1416ab080("bool argument is unset");
      return local_res8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080("bool argument incorrect type %d",uVar4);
    uVar3 = local_res8[0];
  }
  return uVar3;
}


