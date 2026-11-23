// Function: FUN_140003ca0 @ 0x140003ca0

double * FUN_140003ca0(double *param_1,double *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  switch(*(uint *)((longlong)param_1 + 0xc) & 0xffffff) {
  case 0:
  case 0xd:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) == 0) {
      dVar6 = *param_2;
    }
    else {
      dVar6 = (double)FUN_1416940c0(param_2);
    }
    *param_1 = dVar6 + *param_1;
    break;
  case 1:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 1) {
      FUN_1416ab080(&UNK_141981c50);
      return param_1;
    }
    if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
      uVar4 = 0;
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 == (undefined8 *)0x0) goto code_r0x000140003d97;
code_r0x000140003d06:
      uVar5 = *puVar2;
    }
    else {
      uVar4 = *(undefined8 *)*param_1;
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 != (undefined8 *)0x0) goto code_r0x000140003d06;
code_r0x000140003d97:
      uVar5 = 0;
    }
    uVar4 = FUN_1416ab140(uVar4,uVar5);
    FUN_1416ab000(param_1,uVar4);
    func_0x000141695b90(uVar4);
    break;
  default:
    FUN_140001d70(&UNK_141981c71,param_1);
    break;
  case 7:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) {
      iVar1 = FUN_141693b30(param_2);
      *(int *)param_1 = *(int *)param_1 + iVar1;
      return param_1;
    }
    dVar6 = (double)*(int *)param_1;
    goto code_r0x000140003d77;
  case 10:
    if ((*(uint *)((longlong)param_2 + 0xc) & 0xffffff) != 0) {
      lVar3 = FUN_141693ca0(param_2);
      *param_1 = (double)((longlong)*param_1 + lVar3);
      return param_1;
    }
    dVar6 = (double)(longlong)*param_1;
code_r0x000140003d77:
    *param_1 = dVar6 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}


