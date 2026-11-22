// Function: FUN_1416a8cb0 @ 0x1416a8cb0

void FUN_1416a8cb0(undefined8 param_1)

{
  if (cRam00000001420f6b78 != '\0') {
    if (iRam0000000142184e68 == iRam0000000142184e6c) {
      iRam0000000142184e6c = iRam0000000142184e6c * 2;
      if (iRam0000000142184e6c == 0) {
        iRam0000000142184e6c = 1;
      }
      lRam0000000142184e60 =
           FUN_1416c4900(lRam0000000142184e60,(longlong)iRam0000000142184e6c << 3,&UNK_14199fc50,
                         0x4a,0);
      *(undefined8 *)(lRam0000000142184e60 + (longlong)iRam0000000142184e68 * 8) = param_1;
      iRam0000000142184e68 = iRam0000000142184e68 + 1;
      return;
    }
    *(undefined8 *)(lRam0000000142184e60 + (longlong)iRam0000000142184e68 * 8) = param_1;
    iRam0000000142184e68 = iRam0000000142184e68 + 1;
  }
  return;
}


