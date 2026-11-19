// Function: h_140001c50 @ 0x140001c50

double * h_140001c50(double *param_1,int param_2)

{
  double local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  switch(*(int *)((longlong)param_1 + 0xc)) {
  case 0:
  case 0xd:
    *param_1 = (double)param_2 + *param_1;
    break;
  case 1:
    FUN_1416ab080("unable to add a number to string");
    break;
  default:
    local_1c = 0;
    local_28 = (double)param_2;
    h_140001d70(&DAT_141981c71,param_1,&local_28);
    if ((0x46U >> (local_1c & 0x1f) & 1) != 0) {
      h_140001b50(&local_28);
    }
    break;
  case 7:
    *(int *)param_1 = *(int *)param_1 + param_2;
    break;
  case 10:
    *param_1 = (double)((longlong)*param_1 + (longlong)param_2);
  }
  return param_1;
}


