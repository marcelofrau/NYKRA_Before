// Function: FUN_140003f30 @ 0x140003f30

double * FUN_140003f30(double *param_1,double param_2)

{
  double dVar1;
  double dStack_28;
  uint uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  switch(*(undefined4 *)((longlong)param_1 + 0xc)) {
  case 0:
  case 0xd:
    *param_1 = param_2 + *param_1;
    break;
  case 1:
    FUN_1416ab080(&UNK_141981c50);
    break;
  default:
    uStack_1c = 0;
    dStack_28 = param_2;
    FUN_140001d70(&UNK_141981c71,param_1,&dStack_28);
    if ((0x46U >> (uStack_1c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_28);
    }
    break;
  case 7:
    dVar1 = (double)*(int *)param_1;
    goto code_r0x000140003fb9;
  case 10:
    dVar1 = (double)(longlong)*param_1;
code_r0x000140003fb9:
    *param_1 = dVar1 + param_2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}


