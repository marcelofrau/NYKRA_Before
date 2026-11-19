// Function: h_1416f82f0 @ 0x1416f82f0

undefined8 h_1416f82f0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_3 == -2) {
    if (param_2 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_2 + 0xb0);
  }
  else {
    if (param_3 != -1) {
      uVar2 = FUN_1417c13d0(param_3);
      return uVar2;
    }
    if (param_1 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0xb0);
  }
  if ((bVar1 & 3) != 0) {
    return 0;
  }
  return 1;
}


