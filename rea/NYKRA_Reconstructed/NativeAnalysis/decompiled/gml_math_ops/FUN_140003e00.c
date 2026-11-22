// Function: FUN_140003e00 @ 0x140003e00

double * FUN_140003e00(double *param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  switch(*(uint *)((longlong)param_1 + 0xc) & 0xffffff) {
  case 0:
  case 0xd:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 0) {
      dVar3 = *param_2;
    }
    else {
      dVar3 = (double)FUN_1416940c0(param_2);
    }
    *param_1 = *param_1 - dVar3;
    break;
  case 1:
    dVar3 = (double)FUN_1416940c0(param_1);
    *(int *)((longlong)param_1 + 0xc) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 0) {
      dVar4 = *param_2;
    }
    else {
      dVar4 = (double)FUN_1416940c0(param_2);
    }
    *param_1 = dVar3 - dVar4;
    break;
  default:
    FUN_140001d70(&UNK_141981d50,param_1,param_2);
    break;
  case 7:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) {
      iVar1 = FUN_141693b30(param_2);
      *(int *)param_1 = *(int *)param_1 - iVar1;
      return param_1;
    }
    dVar3 = (double)*(int *)param_1;
    goto code_r0x000140003ed2;
  case 10:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) {
      lVar2 = FUN_141693ca0(param_2);
      *param_1 = (double)((longlong)*param_1 - lVar2);
      return param_1;
    }
    dVar3 = (double)(longlong)*param_1;
code_r0x000140003ed2:
    *param_1 = dVar3 - *param_2;
    *(int *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}


