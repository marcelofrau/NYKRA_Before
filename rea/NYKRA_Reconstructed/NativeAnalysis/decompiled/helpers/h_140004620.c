// Function: h_140004620 @ 0x140004620

double * h_140004620(double *param_1,double *param_2)

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
      if (uVar1 == 3) goto switchD_140004651_caseD_2;
      dVar2 = (double)FUN_1416940c0(param_2);
    }
    *param_1 = *param_1 / dVar2;
    return param_1;
  case 1:
    dVar2 = (double)FUN_1416940c0(param_1);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) goto LAB_140004697;
    goto LAB_140004742;
  default:
switchD_140004651_caseD_2:
    FUN_140001d70(&DAT_141981da0,param_1,param_2);
    return param_1;
  case 7:
    uVar1 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar1 == 10) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 10;
LAB_14000471a:
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
    if (uVar1 == 3) goto switchD_140004651_caseD_2;
    if (uVar1 == 10) goto LAB_14000471a;
    if (uVar1 == 7) {
      *param_1 = (double)((longlong)*param_1 / (longlong)*(int *)param_2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    dVar2 = (double)(longlong)*param_1;
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
LAB_140004742:
    dVar3 = *param_2;
  }
  else {
LAB_140004697:
    dVar3 = (double)FUN_1416940c0(param_2);
  }
  *param_1 = dVar2 / dVar3;
  return param_1;
}


