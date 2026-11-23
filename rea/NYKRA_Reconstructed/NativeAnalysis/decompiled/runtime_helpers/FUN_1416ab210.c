// Function: FUN_1416ab210 @ 0x1416ab210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416ab210(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,int param_5
                  ,longlong param_6)

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
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined *puStack_70;
  undefined1 auStack_68 [48];
  ulonglong auStack_38 [2];
  
  auStack_38[0] = _DAT_14217a9b8 ^ (ulonglong)auStack_38;
  uVar8 = (longlong)param_4 * 0x10;
  lVar12 = (longlong)param_5 * 0x50 + lRam00000001421974f0;
  uVar14 = uVar8 + 0xf;
  if (uVar14 <= uVar8) {
    uVar14 = 0xffffffffffffff0;
  }
  uVar14 = uVar14 & 0xfffffffffffffff0;
  puStack_70 = &UNK_1416ab282;
  puVar13 = param_3;
  FUN_14193e440();
  lVar3 = -uVar14;
  puVar11 = auStack_68 + lVar3;
  if (0 < param_4) {
    lVar9 = 0;
    puVar10 = (undefined4 *)((longlong)auStack_38 + lVar3);
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
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
    *(undefined **)(auStack_68 + lVar3 + -8) = &UNK_1416ab2d2;
    FUN_140001b50(param_3);
    puVar11 = auStack_68 + lVar3;
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  uVar7 = lRam0000000142184e50;
  *(undefined4 **)(puVar11 + 0x20) = (undefined4 *)((longlong)auStack_38 + lVar3);
  pcVar2 = *(code **)(lVar12 + 0x40);
  *(undefined **)(puVar11 + -8) = &UNK_1416ab301;
  lRam0000000142184e50 = lVar12;
  (*pcVar2)(param_3,param_1,param_2,param_4);
  uVar14 = auStack_38[0] ^ (ulonglong)auStack_38;
  *(undefined **)(puVar11 + -8) = &UNK_1416ab317;
  lRam0000000142184e50 = uVar7;
  FUN_14193e380(uVar14);
  return;
}


