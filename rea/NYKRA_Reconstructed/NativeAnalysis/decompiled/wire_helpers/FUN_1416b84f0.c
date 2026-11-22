// Function: FUN_1416b84f0 @ 0x1416b84f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1416b84f0(undefined8 param_1,uint param_2,undefined8 param_3,float param_4,float param_5,
             float param_6,float param_7,float param_8,uint param_9,float param_10)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 in_R9;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 uStack0000000000000000;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_458 [32];
  undefined8 uStack_438;
  ulonglong *puStack_430;
  undefined1 auStack_428 [856];
  undefined *puStack_d0;
  float fStack_a8;
  float fStack_a0;
  float fStack_98;
  float fStack_90;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined *puStack_70;
  ulonglong uStack_28;
  
  iVar7 = (int)param_3;
  if (iVar7 < 0) {
    puStack_70 = &UNK_1416b8511;
    fVar9 = (float)FUN_1416bfa20();
    iVar7 = (int)fVar9;
  }
  puStack_70 = &UNK_1416b851c;
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
    puVar6 = (undefined1 *)FUN_14193e380(uStack_28 ^ (ulonglong)auStack_458);
    return puVar6;
  }
  fVar9 = (float)(param_9 & 0xffffff);
  iVar8 = *(int *)(uVar3 + 0x98);
  if (iVar8 < 1) {
    return &uStack0000000000000000;
  }
  if ((*(longlong *)(uVar3 + 0x68) != 0) && ((float)iVar7 < 0.0)) {
    return &uStack0000000000000000;
  }
  if (cRam0000000142195700 != '\0') {
    puStack_d0 = &UNK_14177a3d5;
    FUN_141715980(0x142195710,6,0xf);
    iVar8 = *(int *)(uVar3 + 0x98);
  }
  puStack_d0 = &UNK_14177a3e3;
  fVar10 = (float)func_0x00014195d250();
  uVar1 = (ulonglong)(uint)((int)((longlong)(int)fVar10 % (longlong)iVar8) >> 0x1f) << 0x20 |
          (longlong)(int)fVar10 % (longlong)iVar8 & 0xffffffffU;
  puVar6 = (undefined1 *)((longlong)uVar1 / (longlong)iVar8 & 0xffffffff);
  fVar15 = (float)((longlong)uVar1 % (longlong)iVar8);
  fVar10 = (float)(iVar8 + (int)fVar15);
  if (-1 < (int)fVar15) {
    fVar10 = fVar15;
  }
  if (*(int *)(uVar3 + 0xc4) == 2) {
    if (lRam000000014219d630 != 0) {
      puStack_d0 = &UNK_14177a414;
      lVar4 = FUN_1416c28b0();
      if (lVar4 != 0) {
        puStack_d0 = &UNK_14177a425;
        uVar5 = FUN_1416c28b0(lRam000000014219d630);
        puStack_d0 = &UNK_14177a433;
        FUN_1417719e0(uVar5,uVar3,0);
        puStack_d0 = &UNK_14177a43e;
        puVar6 = (undefined1 *)FUN_141786ca0();
        goto code_r0x00014177a4bc;
      }
    }
    if (*(int *)(uVar3 + 0xc0) == 1) {
      puStack_d0 = &UNK_14177a458;
      dVar11 = (double)func_0x000141729510(0x14219b690);
      fVar15 = (float)dVar11;
    }
    else {
      fVar15 = *(float *)(uVar3 + 0xbc);
    }
    fVar15 = fVar15 * *(float *)(**(longlong **)
                                   (*(longlong *)(*(longlong *)(uVar3 + 0x40) + 8) + 0x98) + 8);
    if (0.0 < fVar15) {
      puStack_d0 = &UNK_14177a496;
      auVar12._0_8_ = FUN_141951f30();
      auVar12._8_8_ = extraout_XMM0_Qb;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = (float)auVar12._0_8_ + fVar15;
      puStack_d0 = &UNK_14177a4a2;
      FUN_141951f30(auVar13._0_8_);
    }
    puStack_d0 = &UNK_14177a4b1;
    puVar6 = (undefined1 *)func_0x000141729510(0x14219b690);
  }
code_r0x00014177a4bc:
  if (cRam00000001420ff274 != '\0') {
    puStack_d0 = &UNK_14177a4ca;
    puVar6 = (undefined1 *)FUN_141733090();
  }
  fVar15 = (float)((uint)((float)*(int *)(uVar3 + 0xac) * param_6) & _UNK_1419a2a10);
  fVar14 = (float)((uint)((float)*(int *)(uVar3 + 0xac) * param_7) & _UNK_1419a2a10);
  if (fVar15 <= fVar14) {
    fVar15 = fVar14;
  }
  if (((cRam000000014219d695 == '\0') && (*(int *)(uVar3 + 0xc4) != 2)) &&
     ((fVar15 < (float)iRam00000001423aeeb4 - param_5 ||
      (((fVar15 < param_5 - (float)iRam00000001423aeebc ||
        (fVar15 < (float)iRam00000001423aeeb0 - param_4)) ||
       (fVar15 < param_4 - (float)iRam00000001423aeeb8)))))) {
    if (cRam000000014219b668 == '\0') goto code_r0x00014177a7b3;
    puStack_d0 = &UNK_14177a593;
    lVar4 = func_0x0001417460c0(0x14219b788);
    puVar6 = (undefined1 *)0x0;
    if (lVar4 == 0) goto code_r0x00014177a7b3;
    puStack_d0 = &UNK_14177a5a8;
    uVar5 = func_0x0001417460c0(0x14219b788);
    puStack_d0 = &UNK_14177a5b0;
    puVar6 = (undefined1 *)func_0x0001417462a0(uVar5);
    if ((char)puVar6 != '\0') goto code_r0x00014177a7b3;
  }
  iVar7 = *(int *)(uVar3 + 0xc4);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      fStack_78 = param_10;
      uStack_80 = CONCAT44(uStack_80._4_4_,param_9) & 0xffffffff00ffffff;
      fStack_88 = param_8;
      fStack_90 = param_7;
      fStack_98 = param_6;
      fStack_a0 = param_5;
      puStack_d0 = &UNK_14177a687;
      fStack_a8 = param_4;
      puVar6 = (undefined1 *)FUN_14177f5e0(uVar3,fVar10);
      goto code_r0x00014177a7b3;
    }
    if (iVar7 == 2) {
      fStack_88 = param_10;
      fStack_98 = param_8;
      fStack_a0 = param_7;
      fStack_a8 = param_6;
      puStack_d0 = &UNK_14177a61e;
      fStack_90 = fVar9;
      puVar6 = (undefined1 *)FUN_14176f5a0(*(undefined8 *)(uVar3 + 0x40));
      goto code_r0x00014177a7b3;
    }
  }
  if ((*(longlong *)(uVar3 + 0x70) == 0) || (*(char *)(*(longlong *)(uVar3 + 0x70) + 0x98) == '\0'))
  {
    fStack_90 = (param_8 * _UNK_1419a2a08) / _UNK_1419a2a0c;
    uStack_80 = CONCAT44(uStack_80._4_4_,param_10);
    fStack_98 = param_7;
    fStack_a0 = param_6;
    fStack_a8 = param_5;
    fStack_88 = fVar9;
    if (*(longlong *)(uVar3 + 0x38) == 0) {
      puStack_d0 = &UNK_14177a796;
      puVar6 = (undefined1 *)
               FUN_141768fa0(*(undefined4 *)
                              (*(longlong *)(uVar3 + 0x30) + (longlong)(int)fVar10 * 4));
    }
    else {
      puStack_d0 = &UNK_14177a788;
      puVar6 = (undefined1 *)
               FUN_1417693a0(*(undefined8 *)
                              (*(longlong *)(uVar3 + 0x38) + (longlong)(int)fVar10 * 8));
    }
    if ((char)puVar6 == '\0') {
      puStack_d0 = &UNK_14177a7b2;
      puVar6 = (undefined1 *)
               (**(code **)(*plRam00000001420f7170 + 0x10))
                         (plRam00000001420f7170,&UNK_141a25358,*(undefined8 *)(uVar3 + 0x50));
    }
  }
  else {
    fStack_a8 = (float)*(int *)(uVar3 + 0xa0) * param_7;
    fStack_78 = (float)((uint)fStack_78 & 0xffffff00);
    fStack_90 = param_10;
    fStack_a0 = param_8;
    puStack_d0 = &UNK_14177a707;
    fStack_98 = fVar9;
    fStack_88 = fVar10;
    uStack_80 = uVar3;
    puVar6 = (undefined1 *)FUN_141777f30();
  }
code_r0x00014177a7b3:
  if (cRam0000000142195700 != '\0') {
    puStack_d0 = &UNK_14177a7c8;
    puVar6 = (undefined1 *)FUN_1417158c0(0x142195710);
  }
  return puVar6;
}


