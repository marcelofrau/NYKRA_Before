// Function: FUN_140004620 @ 0x140004620

double * FUN_140004620(double *param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  switch(*(uint *)((longlong)param_1 + 0xc) & 0xffffff) {
  case 0:
  case 0xd:
    uVar1 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar1 == 0) {
      dVar2 = *param_2;
    }
    else {
      if (uVar1 == 3) goto code_r0x0001400046ed;
      dVar2 = (double)FUN_1416940c0(param_2);
    }
    *param_1 = *param_1 / dVar2;
    return param_1;
  case 1:
    dVar2 = (double)FUN_1416940c0(param_1);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) goto code_r0x000140004697;
    goto code_r0x000140004742;
  default:
code_r0x0001400046ed:
    FUN_140001d70(&UNK_141981da0,param_1,param_2);
    return param_1;
  case 7:
    uVar1 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar1 == 10) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 10;
code_r0x00014000471a:
      *param_1 = (double)((longlong)*param_1 / (longlong)*param_2);
      return param_1;
    }
    if (uVar1 == 7) {
      *(int *)param_1 = *(int *)param_1 / *(int *)param_2;
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    dVar2 = (double)*(int *)param_1;
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    break;
  case 10:
    uVar1 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar1 == 3) goto code_r0x0001400046ed;
    if (uVar1 == 10) goto code_r0x00014000471a;
    if (uVar1 == 7) {
      *param_1 = (double)((longlong)*param_1 / (longlong)*(int *)param_2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    dVar2 = (double)(longlong)*param_1;
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
code_r0x000140004742:
    dVar3 = *param_2;
  }
  else {
code_r0x000140004697:
    dVar3 = (double)FUN_1416940c0(param_2);
  }
  *param_1 = dVar2 / dVar3;
  return param_1;
}


