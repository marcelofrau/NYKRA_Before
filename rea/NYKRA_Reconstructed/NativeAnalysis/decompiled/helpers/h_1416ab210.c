// Function: h_1416ab210 @ 0x1416ab210

/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void h_1416ab210(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,int param_5,
                longlong param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_14217a9b8 ^ (ulonglong)local_38;
  uVar8 = (longlong)param_4 * 0x10;
  lVar11 = (longlong)param_5 * 0x50 + DAT_1421974f0;
  uVar12 = uVar8 + 0xf;
  if (uVar12 <= uVar8) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1416ab282;
  lVar3 = -(uVar12 & 0xfffffffffffffff0);
  lVar9 = 0;
  puVar10 = (undefined4 *)((longlong)local_38 + lVar3);
  if (0 < param_4) {
    do {
      puVar1 = *(undefined4 **)(param_6 + lVar9 * 8);
      lVar9 = lVar9 + 1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar10 = *puVar1;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      puVar10 = puVar10 + 4;
    } while (lVar9 < param_4);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1416ab2d2;
    h_140001b50(param_3);
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  uVar7 = DAT_142184e50;
  *(undefined4 **)((longlong)alStack_48 + lVar3) = (undefined4 *)((longlong)local_38 + lVar3);
  pcVar2 = *(code **)(lVar11 + 0x40);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1416ab301;
  DAT_142184e50 = lVar11;
  (*pcVar2)(param_3,param_1,param_2,param_4);
  uVar12 = local_38[0] ^ (ulonglong)local_38;
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1416ab317;
  DAT_142184e50 = uVar7;
  FUN_14193e380(uVar12);
  return;
}


