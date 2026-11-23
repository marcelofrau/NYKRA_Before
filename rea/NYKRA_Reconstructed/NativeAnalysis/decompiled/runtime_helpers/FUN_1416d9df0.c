// Function: FUN_1416d9df0 @ 0x1416d9df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1416d9df0(double *param_1,double *param_2,double param_3,char param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  char acStackX_8 [8];
  
  uVar8 = 0;
  uVar10 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  uVar14 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
  uVar13 = uVar10 * 0x10 + uVar14;
  if (0xffffff < uVar13) {
    if (uVar13 < 0xffffff3) {
      if (uVar13 != 0xffffff2) {
        if (uVar13 < 0x10000a0) {
          if (((uVar13 != 0x100009f) && (uVar13 != 0x100001f)) && (uVar13 != 0x100005f)) {
            bVar15 = uVar13 == 0x100006f;
            goto code_r0x0001416da42a;
          }
        }
        else if (uVar13 != 0x10000cf) {
          bVar15 = uVar13 == 0xffffff0;
code_r0x0001416da42a:
          if (!bVar15) goto code_r0x0001416da42c;
        }
      }
    }
    else if (((uVar13 != 0xffffff6) && (uVar13 != 0xffffff7)) &&
            ((uVar13 != 0xffffffa && (uVar13 != 0xffffffd)))) {
      bVar15 = uVar13 == 0x10ffffef;
      goto code_r0x0001416da42a;
    }
code_r0x0001416da43d:
    puVar9 = &UNK_1419a6780;
code_r0x0001416da444:
    FUN_1416ab080(puVar9);
    return uVar8;
  }
  if (uVar13 == 0xffffff) goto code_r0x0001416da43d;
  switch(uVar13) {
  case 0:
  case 0xd:
  case 0xd0:
  case 0xdd:
    dVar18 = *param_1 - *param_2;
    if (NAN(dVar18)) {
      sVar5 = FUN_14194d168();
      if ((sVar5 == 1) && (sVar5 = FUN_14194d168(), sVar5 == 1)) {
        dVar18 = 0.0;
      }
      else {
        dVar18 = param_3 + param_3;
      }
    }
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_1419a2a24,
                                    SUB84(dVar18,0) & _UNK_1419a2a20)) && (uVar8 = 1, dVar18 < 0.0))
    {
      uVar8 = 0xffffffff;
    }
    break;
  case 1:
    if ((uVar14 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_2;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    dVar18 = (double)FUN_1416a32c0(puVar9,param_4,acStackX_8);
    dVar18 = *param_1 - dVar18;
    if (((NAN(dVar18)) && (sVar5 = FUN_14194d168(), sVar5 == 1)) &&
       (sVar5 = FUN_14194d168(), sVar5 == 1)) {
      dVar18 = 0.0;
    }
    if (acStackX_8[0] != '\0') goto code_r0x0001416da11d;
    goto code_r0x0001416da333;
  case 2:
  case 0x20:
  case 0x26:
  case 0x27:
  case 0x2a:
  case 0x2d:
  case 0x62:
  case 0x72:
  case 0xa2:
  case 0xd2:
    uVar8 = 1;
    if (param_4 == '\0') {
      return 1;
    }
    puVar9 = &UNK_1419a6768;
    goto code_r0x0001416da444;
  default:
code_r0x0001416da42c:
    uVar8 = 1;
    if (uVar10 == 0) {
      uVar8 = 0xffffffff;
    }
    break;
  case 5:
  case 0x50:
  case 0x56:
  case 0x57:
  case 0x5a:
  case 0x5d:
  case 0x65:
  case 0x75:
  case 0xa5:
  case 0xd5:
    uVar8 = 0xfffffffe;
    break;
  case 7:
    fVar17 = (float)*param_1;
    fVar16 = (float)*(int *)param_2;
    goto code_r0x0001416d9f06;
  case 10:
    dVar18 = *param_1 - (double)(longlong)*param_2;
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_1419a2a24,
                                    SUB84(dVar18,0) & _UNK_1419a2a20)) && (uVar8 = 1, dVar18 < 0.0))
    {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x10:
    if ((uVar10 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_1;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    dVar18 = (double)FUN_1416a32c0(puVar9,param_4,acStackX_8);
    dVar18 = dVar18 - *param_2;
    if (((NAN(dVar18)) && (sVar5 = FUN_14194d168(), sVar5 == 1)) &&
       (sVar5 = FUN_14194d168(), sVar5 == 1)) {
      dVar18 = 0.0;
    }
    if (acStackX_8[0] != '\0') {
      return 1;
    }
code_r0x0001416da333:
    if ((dVar18 != 0.0) && (uVar8 = 1, dVar18 < 0.0)) {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x11:
    puVar2 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)*param_2;
    uVar8 = (uint)(puVar2 != puVar3);
    if (puVar2 == (undefined8 *)0x0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)*puVar2;
    }
    if (puVar3 == (undefined8 *)0x0) {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)*puVar3;
    }
    if (pbVar7 == (byte *)0x0) {
      if (pcVar12 == (char *)0x0) {
        return 0;
      }
      if (*pcVar12 == '\0') {
        return 0;
      }
      if (pcVar12 == (char *)0x0) goto code_r0x0001416da0b6;
    }
    else if (pcVar12 == (char *)0x0) {
code_r0x0001416da0b6:
      if (*pbVar7 == 0) {
        return 0;
      }
    }
    else {
      lVar11 = (longlong)pcVar12 - (longlong)pbVar7;
      do {
        bVar1 = *pbVar7;
        if (bVar1 != pbVar7[lVar11]) {
          uVar8 = -(uint)(bVar1 < pbVar7[lVar11]) | 1;
          goto code_r0x0001416da0ba;
        }
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      uVar8 = 0;
    }
code_r0x0001416da0ba:
    if ((int)uVar8 < 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)(uVar8 != 0);
    }
    break;
  case 0x17:
    if ((uVar10 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_1;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    iVar6 = FUN_1416a3330(puVar9,param_4,acStackX_8);
    iVar6 = iVar6 - *(int *)param_2;
    if (acStackX_8[0] != '\0') {
      return 1;
    }
    goto code_r0x0001416d9e7e;
  case 0x1a:
    if ((uVar10 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_1;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    lVar11 = FUN_1416a3330(puVar9,param_4,acStackX_8);
    lVar11 = lVar11 - (longlong)*param_2;
    if (acStackX_8[0] != '\0') {
      return 1;
    }
code_r0x0001416da26e:
    if ((lVar11 != 0) && (uVar8 = 1, lVar11 < 0)) {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x1d:
    if ((uVar10 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_1;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    cVar4 = FUN_1416a3200(puVar9,param_4,acStackX_8);
    iVar6 = (uint)(cVar4 != '\0') - (int)*param_2;
    if (acStackX_8[0] == '\0') goto code_r0x0001416da1a7;
    goto code_r0x0001416da11d;
  case 0x22:
    if ((*param_1 != 0.0) && (*param_1 == *param_2)) {
      return 0;
    }
    goto code_r0x0001416da11d;
  case 0x25:
    uVar8 = (uint)(*param_1 != 0.0);
    break;
  case 0x33:
  case 0x66:
    if ((*param_1 != *param_2) && (uVar8 = 0xffffffff, (ulonglong)*param_1 < (ulonglong)*param_2)) {
      uVar8 = 1;
    }
    break;
  case 0x52:
    uVar8 = (uint)(*param_2 != 0.0);
    break;
  case 0x55:
    break;
  case 0x70:
    fVar17 = (float)*(int *)param_1;
    fVar16 = (float)*param_2;
code_r0x0001416d9f06:
    if ((param_3 < (double)(float)((uint)(fVar17 - fVar16) & _UNK_1419a2a10)) &&
       (uVar8 = 1, fVar17 - fVar16 < 0.0)) {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x71:
    if ((uVar14 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_2;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    iVar6 = FUN_1416a3330(puVar9,param_4,acStackX_8);
    iVar6 = *(int *)param_1 - iVar6;
    if (acStackX_8[0] != '\0') {
      return 1;
    }
code_r0x0001416da1a7:
    if (iVar6 != 0) {
      uVar8 = (iVar6 >> 0x1f & 0xfffffffeU) + 1;
    }
    break;
  case 0x77:
    iVar6 = *(int *)param_1;
    goto code_r0x0001416d9e7c;
  case 0x7a:
    dVar18 = (double)(longlong)*(int *)param_1;
    goto code_r0x0001416d9eb3;
  case 0x7d:
    if (*(int *)param_1 - (int)*param_2 != 0) {
      uVar8 = (*(int *)param_1 - (int)*param_2 >> 0x1f & 0xfffffffeU) + 1;
    }
    break;
  case 0xa0:
    dVar18 = (double)(longlong)*param_1 - *param_2;
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_1419a2a24,
                                    SUB84(dVar18,0) & _UNK_1419a2a20)) && (uVar8 = 1, dVar18 < 0.0))
    {
      uVar8 = 0xffffffff;
    }
    break;
  case 0xa1:
    if ((uVar14 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_2;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    lVar11 = FUN_1416a3330(puVar9,param_4,acStackX_8);
    lVar11 = (longlong)*param_1 - lVar11;
    if (acStackX_8[0] == '\0') goto code_r0x0001416da26e;
    goto code_r0x0001416da11d;
  case 0xa7:
    lVar11 = (longlong)*param_1 - (longlong)*(int *)param_2;
    bVar15 = lVar11 == 0;
    goto code_r0x0001416d9eb6;
  case 0xaa:
    dVar18 = *param_1;
    goto code_r0x0001416d9eb3;
  case 0xad:
    lVar11 = (longlong)*param_1 - (longlong)*param_2;
    bVar15 = lVar11 == 0;
    goto code_r0x0001416d9eb6;
  case 0xd1:
    if ((uVar14 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar9 = *(undefined **)*param_2;
    }
    else {
      puVar9 = &UNK_14199f8f1;
    }
    cVar4 = FUN_1416a3200(puVar9,param_4,acStackX_8);
    iVar6 = (int)*param_1 - (uint)(cVar4 != '\0');
    if (acStackX_8[0] == '\0') goto code_r0x0001416d9e7e;
code_r0x0001416da11d:
    uVar8 = 1;
    break;
  case 0xd7:
    iVar6 = (int)*param_1;
code_r0x0001416d9e7c:
    iVar6 = iVar6 - *(int *)param_2;
code_r0x0001416d9e7e:
    if (iVar6 != 0) {
      uVar8 = (iVar6 >> 0x1f & 0xfffffffeU) + 1;
    }
    break;
  case 0xda:
    dVar18 = (double)(longlong)*param_1;
code_r0x0001416d9eb3:
    lVar11 = (longlong)dVar18 - (longlong)*param_2;
    bVar15 = lVar11 == 0;
code_r0x0001416d9eb6:
    if ((!bVar15) && (uVar8 = 1, lVar11 < 0)) {
      uVar8 = 0xffffffff;
    }
  }
  return uVar8;
}


