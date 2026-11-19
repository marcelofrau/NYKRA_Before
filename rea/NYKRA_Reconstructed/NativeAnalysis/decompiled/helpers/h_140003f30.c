// Function: h_140003f30 @ 0x140003f30

double * h_140003f30(double *param_1,double param_2)

{
  double dVar1;
  double local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  switch(*(undefined4 *)((longlong)param_1 + 0xc)) {
  case 0:
  case 0xd:
    *param_1 = param_2 + *param_1;
    break;
  case 1:
    FUN_1416ab080("unable to add a number to string");
    break;
  default:
    local_1c = 0;
    local_28 = param_2;
    h_140001d70(&DAT_141981c71,param_1,&local_28);
    if ((0x46U >> (local_1c & 0x1f) & 1) != 0) {
      h_140001b50(&local_28);
    }
    break;
  case 7:
    dVar1 = (double)*(int *)param_1;
    goto LAB_140003fb9;
  case 10:
    dVar1 = (double)(longlong)*param_1;
LAB_140003fb9:
    *param_1 = dVar1 + param_2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}


