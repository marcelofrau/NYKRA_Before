// Function: h_1416a8cb0 @ 0x1416a8cb0

void h_1416a8cb0(undefined8 param_1)

{
  if (DAT_1420f6b78 != '\0') {
    if (DAT_142184e68 == DAT_142184e6c) {
      DAT_142184e6c = DAT_142184e6c * 2;
      if (DAT_142184e6c == 0) {
        DAT_142184e6c = 1;
      }
      DAT_142184e60 =
           FUN_1416c4900(DAT_142184e60,(longlong)DAT_142184e6c << 3,
                         "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Platform\\MemoryManager.h"
                         ,0x4a,0);
      *(undefined8 *)(DAT_142184e60 + (longlong)DAT_142184e68 * 8) = param_1;
      DAT_142184e68 = DAT_142184e68 + 1;
      return;
    }
    *(undefined8 *)(DAT_142184e60 + (longlong)DAT_142184e68 * 8) = param_1;
    DAT_142184e68 = DAT_142184e68 + 1;
  }
  return;
}


