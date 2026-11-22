// Function: FUN_1416b8480 @ 0x1416b8480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416b8480(undefined8 param_1,uint param_2,undefined8 param_3,float param_4,
                       float param_5)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  float fVar9;
  undefined8 in_R9;
  float fVar10;
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
  float fStack_68;
  float fStack_60;
  float fStack_58;
  ulonglong uStack_50;
  float fStack_48;
  undefined *puStack_40;
  ulonglong uStack_28;
  
  iVar8 = (int)param_3;
  if (iVar8 < 0) {
    puStack_40 = &UNK_1416b84a1;
    fVar10 = (float)FUN_1416bfa20();
    iVar8 = (int)fVar10;
  }
  puStack_40 = &UNK_1416b84ac;
  uVar3 = func_0x000141733f30(param_2);
  if (uVar3 == 0) {
    uStackX_10 = (ulonglong)param_2;
    uStack_28 = _DAT_14217a9b8 ^ (ulonglong)auStack_458;
    uStackX_18 = param_3;
    uStackX_20 = in_R9;
    if (cRam0000000142184e43 == '\0') {
      puVar2 = (ulonglong *)func_0x0001416965a0();
      uStack_438 = 0;
      puStack_430 = &uStackX_10;
      func_0x00014194becc(*puVar2 | 2,auStack_428,0x400,&UNK_1419a3018);
      if (cRam0000000142184e43 == '\0') {
        FUN_14171eb30(auStack_428,1,0);
      }
    }
    else {
      uRam00000001421965ca = 1;
    }
    uVar3 = FUN_14193e380(uStack_28 ^ (ulonglong)auStack_458);
    return uVar3;
  }
  uVar4 = uVar3;
  if (cRam0000000142195700 != '\0') {
    puStack_a0 = &UNK_1417807c3;
    uVar4 = FUN_141715980(0x142195710,6,0x10);
  }
  iVar1 = *(int *)(uVar3 + 0x98);
  if ((iVar1 < 1) || ((*(longlong *)(uVar3 + 0x68) != 0 && (iVar8 < 0)))) goto code_r0x000141780a4a;
  uVar4 = (longlong)iVar8 / (longlong)iVar1 & 0xffffffff;
  fVar10 = (float)(iVar8 % iVar1);
  fVar9 = (float)((int)fVar10 + iVar1);
  if (-1 < (int)fVar10) {
    fVar9 = fVar10;
  }
  if (cRam00000001420ff274 != '\0') {
    puStack_a0 = &UNK_1417807fc;
    uVar4 = FUN_141733090();
  }
  fVar10 = (float)*(int *)(uVar3 + 0xac);
  if (((cRam000000014219d695 != '\x01') && (*(int *)(uVar3 + 0xc4) != 2)) &&
     ((fVar10 < (float)iRam00000001423aeeb4 - param_5 ||
      (((fVar10 < param_5 - (float)iRam00000001423aeebc ||
        (fVar10 < (float)iRam00000001423aeeb0 - param_4)) ||
       (fVar10 < param_4 - (float)iRam00000001423aeeb8)))))) {
    if (cRam000000014219b668 == '\0') goto code_r0x000141780a4a;
    puStack_a0 = &UNK_141780890;
    lVar5 = func_0x0001417460c0(0x14219b788);
    uVar4 = 0;
    if (lVar5 == 0) goto code_r0x000141780a4a;
    puStack_a0 = &UNK_1417808a5;
    uVar6 = func_0x0001417460c0(0x14219b788);
    puStack_a0 = &UNK_1417808ad;
    uVar4 = func_0x0001417462a0(uVar6);
    if ((char)uVar4 != '\0') goto code_r0x000141780a4a;
  }
  iVar8 = *(int *)(uVar3 + 0xc4);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      fStack_48 = _UNK_141981f80;
      uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
      fStack_58 = 0.0;
      fStack_60 = _UNK_141981f80;
      fStack_68 = _UNK_141981f80;
      fStack_70 = param_5;
      puStack_a0 = &UNK_14178096e;
      fStack_78 = param_4;
      uVar4 = FUN_14177f5e0(uVar3,fVar9);
      goto code_r0x000141780a4a;
    }
    if (iVar8 == 2) {
      fStack_58 = _UNK_141981f80;
      fStack_60 = -NAN;
      fStack_68 = 0.0;
      fStack_70 = _UNK_141981f80;
      fStack_78 = _UNK_141981f80;
      puStack_a0 = &UNK_141780912;
      uVar4 = FUN_14176f5a0(*(undefined8 *)(uVar3 + 0x40));
      goto code_r0x000141780a4a;
    }
  }
  if ((*(longlong *)(uVar3 + 0x70) == 0) || (*(char *)(*(longlong *)(uVar3 + 0x70) + 0x98) == '\0'))
  {
    if (*(longlong *)(uVar3 + 0x38) == 0) {
      puStack_a0 = &UNK_141780a17;
      uVar4 = FUN_14176abd0(*(undefined4 *)(*(longlong *)(uVar3 + 0x30) + (longlong)(int)fVar9 * 4))
      ;
      if ((char)uVar4 != '\0') goto code_r0x000141780a4a;
      puVar7 = &UNK_141a25450;
    }
    else {
      puStack_a0 = &UNK_141780a2d;
      uVar4 = FUN_14176ad90(*(undefined8 *)(*(longlong *)(uVar3 + 0x38) + (longlong)(int)fVar9 * 8))
      ;
      if ((char)uVar4 != '\0') goto code_r0x000141780a4a;
      puVar7 = &UNK_141a25478;
    }
    puStack_a0 = &UNK_141780a49;
    uVar4 = (**(code **)(*plRam00000001420f7170 + 0x10))
                      (plRam00000001420f7170,puVar7,*(undefined8 *)(uVar3 + 0x50));
  }
  else {
    fStack_78 = (float)*(int *)(uVar3 + 0xa0);
    fStack_48 = (float)((uint)fStack_48 & 0xffffff00);
    fStack_60 = _UNK_141981f80;
    fStack_68 = -NAN;
    fStack_70 = 0.0;
    puStack_a0 = &UNK_1417809d9;
    fStack_58 = fVar9;
    uStack_50 = uVar3;
    uVar4 = FUN_141777f30();
  }
code_r0x000141780a4a:
  if (cRam0000000142195700 != '\0') {
    puStack_a0 = &UNK_141780a5f;
    uVar4 = FUN_1417158c0(0x142195710);
  }
  return uVar4;
}


