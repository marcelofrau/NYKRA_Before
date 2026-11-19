// Function: h_1416cd880 @ 0x1416cd880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong h_1416cd880(float param_1,float param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [8];
  
  uVar2 = FUN_141952180((param_2 * DAT_1419a2a08) / DAT_1419a2a0c);
  uVar3 = (uint)((float)uVar2 * param_1) ^ DAT_14198dea0;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x20) ^ _UNK_14198dea4;
  uVar1 = FUN_141952d98(uVar3,local_res8);
  if ((float)(uVar1 & DAT_1419a2a10) < DAT_1419a5084) {
    return (ulonglong)local_res8[0];
  }
  return CONCAT44(uVar4,uVar3);
}


