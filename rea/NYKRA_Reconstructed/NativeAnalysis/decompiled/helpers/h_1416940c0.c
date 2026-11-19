// Function: h_1416940c0 @ 0x1416940c0

double h_1416940c0(double *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  double dVar4;
  double local_res8 [4];
  undefined1 local_18 [16];
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  local_res8[0] = 0.0;
  switch(uVar3) {
  case 0:
  case 0xd:
    return *param_1;
  case 1:
    dVar4 = 0.0;
    if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
       && (cVar2 = FUN_1416ac350(lVar1,local_res8), dVar4 = local_res8[0], cVar2 == '\0')) {
      FUN_1416ab080("unable to convert string \"%s\" to number",lVar1);
      return local_res8[0];
    }
    break;
  case 2:
    FUN_1416ab080("REAL argument is array");
    return local_res8[0];
  case 3:
  case 10:
    return (double)(longlong)*param_1;
  case 5:
    FUN_1416ab080("REAL argument is undefined");
    return local_res8[0];
  case 6:
    FUN_141718ec0(local_18,param_1,0);
    dVar4 = (double)h_1416940c0(local_18);
    return dVar4;
  case 7:
    return (double)*(int *)param_1;
  default:
    if (uVar3 == 0xffffff) {
      FUN_1416ab080("REAL argument is unset");
      return local_res8[0];
    }
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    FUN_1416ab080("REAL argument incorrect type %d",uVar3);
    dVar4 = local_res8[0];
  }
  return dVar4;
}


