// Function: FUN_140001fe0 @ 0x140001fe0

double * FUN_140001fe0(double *param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (((uVar2 < 0xe) && ((0x2481U >> (uVar2 & 0x1f) & 1) != 0)) &&
     ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 1)) {
    FUN_1416959d0(param_1,param_2);
    return param_1;
  }
  switch(uVar2 & 0xffffff) {
  case 0:
  case 0xd:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 0) {
      dVar3 = *param_2;
    }
    else {
      dVar3 = (double)FUN_1416940c0(param_2);
    }
    dVar3 = dVar3 * *param_1;
    goto code_r0x000140002101;
  default:
    FUN_140001d70(&UNK_141981ccf,param_1);
    return param_1;
  case 7:
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar2 == 10) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 10;
code_r0x0001400020b1:
      *param_1 = (double)((longlong)*param_1 * (longlong)*param_2);
      return param_1;
    }
    if (uVar2 == 7) {
      *(int *)param_1 = *(int *)param_1 * *(int *)param_2;
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    dVar1 = (double)*(int *)param_1;
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) goto code_r0x0001400020d5;
code_r0x0001400020f8:
    dVar3 = *param_2;
    break;
  case 10:
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
    if (uVar2 == 10) goto code_r0x0001400020b1;
    if (uVar2 == 7) {
      *param_1 = (double)((longlong)*(int *)param_2 * (longlong)*param_1);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    dVar1 = (double)(longlong)*param_1;
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 0) goto code_r0x0001400020f8;
code_r0x0001400020d5:
    dVar3 = (double)FUN_1416940c0(param_2);
  }
  dVar3 = dVar3 * dVar1;
code_r0x000140002101:
  *param_1 = dVar3;
  return param_1;
}


