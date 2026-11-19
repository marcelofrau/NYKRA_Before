// Function: h_1416cd800 @ 0x1416cd800

float h_1416cd800(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float local_res8 [8];
  
  fVar1 = (float)FUN_141951a30((param_2 * DAT_1419a2a08) / DAT_1419a2a0c);
  uVar2 = FUN_141952d98(fVar1 * param_1,local_res8);
  if ((float)(uVar2 & DAT_1419a2a10) < DAT_1419a5084) {
    return local_res8[0];
  }
  return fVar1 * param_1;
}


