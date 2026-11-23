// Function: FUN_1416b8480 @ 0x1416b8480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416b8480(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       float param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float in_XMM3_Da;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_458 [32];
  undefined8 uStack_438;
  ulonglong *puStack_430;
  undefined1 auStack_428 [904];
  undefined *puStack_a0;
  float fStack_78;
  float fStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  int iStack_58;
  ulonglong uStack_50;
  uint uStack_48;
  undefined *puStack_40;
  ulonglong uStack_28;
  
  iVar7 = (int)param_3;
  if (iVar7 < 0) {
    puStack_40 = &UNK_1416b84a1;
    fVar9 = (float)FUN_1416bfa20();
    iVar7 = (int)fVar9;
  }
  puStack_40 = &UNK_1416b84ac;
  uVar2 = func_0x000141733f30(param_2);
  if (uVar2 == 0) {
    uStackX_10 = (ulonglong)param_2;
    uStack_28 = _DAT_14217a9b8 ^ (ulonglong)auStack_458;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    if (cRam0000000142184e43 == '\0') {
      puVar1 = (ulonglong *)func_0x0001416965a0();
      uStack_438 = 0;
      puStack_430 = &uStackX_10;
      func_0x00014194becc(*puVar1 | 2,auStack_428,0x400,&UNK_1419a3018);
      if (cRam0000000142184e43 == '\0') {
        FUN_14171eb30(auStack_428,1,0);
      }
    }
    else {
      uRam00000001421965ca = 1;
    }
    uVar2 = FUN_14193e380(uStack_28 ^ (ulonglong)auStack_458);
    return uVar2;
  }
  uVar3 = uVar2;
  if (cRam0000000142195700 != '\0') {
    puStack_a0 = &UNK_1417807c3;
    uVar3 = FUN_141715980(0x142195710,6,0x10);
  }
  iVar8 = *(int *)(uVar2 + 0x98);
  if ((iVar8 < 1) || ((*(longlong *)(uVar2 + 0x68) != 0 && (iVar7 < 0)))) goto code_r0x000141780a4a;
  uVar3 = (longlong)iVar7 / (longlong)iVar8 & 0xffffffff;
  iVar7 = iVar7 % iVar8;
  iVar8 = iVar7 + iVar8;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  if (cRam00000001420ff274 != '\0') {
    puStack_a0 = &UNK_1417807fc;
    uVar3 = FUN_141733090();
  }
  fVar9 = (float)*(int *)(uVar2 + 0xac);
  if (((cRam000000014219d695 != '\x01') && (*(int *)(uVar2 + 0xc4) != 2)) &&
     ((fVar9 < (float)iRam00000001423aeeb4 - param_5 ||
      (((fVar9 < param_5 - (float)iRam00000001423aeebc ||
        (fVar9 < (float)iRam00000001423aeeb0 - in_XMM3_Da)) ||
       (fVar9 < in_XMM3_Da - (float)iRam00000001423aeeb8)))))) {
    if (cRam000000014219b668 == '\0') goto code_r0x000141780a4a;
    puStack_a0 = &UNK_141780890;
    lVar4 = func_0x0001417460c0(0x14219b788);
    uVar3 = 0;
    if (lVar4 == 0) goto code_r0x000141780a4a;
    puStack_a0 = &UNK_1417808a5;
    uVar5 = func_0x0001417460c0(0x14219b788);
    puStack_a0 = &UNK_1417808ad;
    uVar3 = func_0x0001417462a0(uVar5);
    if ((char)uVar3 != '\0') goto code_r0x000141780a4a;
  }
  iVar7 = *(int *)(uVar2 + 0xc4);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      uStack_48 = 0x3f800000;
      uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
      iStack_58 = 0;
      uStack_60 = 0x3f800000;
      uStack_68 = 0x3f800000;
      fStack_70 = param_5;
      puStack_a0 = &UNK_14178096e;
      fStack_78 = in_XMM3_Da;
      uVar3 = FUN_14177f5e0(uVar2,iVar8);
      goto code_r0x000141780a4a;
    }
    if (iVar7 == 2) {
      iStack_58 = 0x3f800000;
      uStack_60 = 0xffffffff;
      uStack_68 = 0;
      fStack_70 = 1.0;
      fStack_78 = 1.0;
      puStack_a0 = &UNK_141780912;
      uVar3 = FUN_14176f5a0(*(undefined8 *)(uVar2 + 0x40));
      goto code_r0x000141780a4a;
    }
  }
  if ((*(longlong *)(uVar2 + 0x70) == 0) || (*(char *)(*(longlong *)(uVar2 + 0x70) + 0x98) == '\0'))
  {
    if (*(longlong *)(uVar2 + 0x38) == 0) {
      puStack_a0 = &UNK_141780a17;
      uVar3 = FUN_14176abd0(*(undefined4 *)(*(longlong *)(uVar2 + 0x30) + (longlong)iVar8 * 4));
      if ((char)uVar3 != '\0') goto code_r0x000141780a4a;
      puVar6 = &UNK_141a25450;
    }
    else {
      puStack_a0 = &UNK_141780a2d;
      uVar3 = FUN_14176ad90(*(undefined8 *)(*(longlong *)(uVar2 + 0x38) + (longlong)iVar8 * 8));
      if ((char)uVar3 != '\0') goto code_r0x000141780a4a;
      puVar6 = &UNK_141a25478;
    }
    puStack_a0 = &UNK_141780a49;
    uVar3 = (**(code **)(*plRam00000001420f7170 + 0x10))
                      (plRam00000001420f7170,puVar6,*(undefined8 *)(uVar2 + 0x50));
  }
  else {
    fStack_78 = (float)*(int *)(uVar2 + 0xa0);
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_60 = 0x3f800000;
    uStack_68 = 0xffffffff;
    fStack_70 = 0.0;
    puStack_a0 = &UNK_1417809d9;
    iStack_58 = iVar8;
    uStack_50 = uVar2;
    uVar3 = FUN_141777f30();
  }
code_r0x000141780a4a:
  if (cRam0000000142195700 != '\0') {
    puStack_a0 = &UNK_141780a5f;
    uVar3 = FUN_1417158c0(0x142195710);
  }
  return uVar3;
}


