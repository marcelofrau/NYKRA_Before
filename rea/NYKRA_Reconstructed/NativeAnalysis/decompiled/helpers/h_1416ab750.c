// Function: h_1416ab750 @ 0x1416ab750

longlong h_1416ab750(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 < 100000) {
    return 0;
  }
  lVar2 = FUN_141729a00(param_1 + -100000);
  lVar1 = DAT_142182dd8;
  if (lVar2 == 0) {
    while( true ) {
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x88) == param_1 + -100000) break;
      lVar1 = *(longlong *)(lVar1 + 8);
    }
    lVar3 = *(longlong *)(lVar1 + 0xb0);
    if (lVar3 == 0) {
      lVar2 = FUN_141692b60();
      *(longlong *)(lVar1 + 0xb0) = lVar2;
      return lVar2;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = FUN_141692b60();
      *(longlong *)(lVar2 + 0x18) = lVar3;
    }
  }
  return lVar3;
}


