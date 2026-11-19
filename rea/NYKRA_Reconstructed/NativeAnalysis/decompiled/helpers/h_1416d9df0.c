// Function: h_1416d9df0 @ 0x1416d9df0

byte * h_1416d9df0(double *param_1,double *param_2,double param_3,char param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  char local_res8 [8];
  
  pbVar13 = (byte *)0x0;
  pbVar12 = (byte *)0x0;
  uVar9 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  uVar15 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
  uVar14 = uVar9 * 0x10 + uVar15;
  if (0xffffff < uVar14) {
    if (uVar14 < 0xffffff3) {
      if (uVar14 != 0xffffff2) {
        if (uVar14 < 0x10000a0) {
          if (((uVar14 != 0x100009f) && (uVar14 != 0x100001f)) && (uVar14 != 0x100005f)) {
            bVar16 = uVar14 == 0x100006f;
LAB_1416da42a:
            if (!bVar16) goto switchD_1416d9e76_caseD_3;
          }
        }
        else if (uVar14 != 0x10000cf) {
          bVar16 = uVar14 == 0xffffff0;
          goto LAB_1416da42a;
        }
      }
    }
    else if ((((uVar14 != 0xffffff6) && (uVar14 != 0xffffff7)) && (uVar14 != 0xffffffa)) &&
            (uVar14 != 0xffffffd)) {
      bVar16 = uVar14 == 0x10ffffef;
      goto LAB_1416da42a;
    }
LAB_1416da43d:
    pcVar8 = "Cannot compare unset variables";
LAB_1416da444:
    FUN_1416ab080(pcVar8);
    return pbVar13;
  }
  if (uVar14 == 0xffffff) goto LAB_1416da43d;
  uVar11 = 0;
  switch(uVar14) {
  case 0:
  case 0xd:
  case 0xd0:
  case 0xdd:
    dVar19 = *param_1 - *param_2;
    if (NAN(dVar19)) {
      sVar5 = _dclass();
      if ((sVar5 == 1) && (sVar5 = _dclass(), sVar5 == 1)) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = param_3 + param_3;
      }
    }
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & DAT_1419a2a20._4_4_,
                                    SUB84(dVar19,0) & (uint)DAT_1419a2a20)) &&
       (pbVar13 = (byte *)0x1, dVar19 < 0.0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 1:
    if ((uVar15 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_2;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    dVar19 = (double)FUN_1416a32c0(puVar7,param_4,local_res8);
    dVar19 = *param_1 - dVar19;
    if (((NAN(dVar19)) && (sVar5 = _dclass(), sVar5 == 1)) && (sVar5 = _dclass(), sVar5 == 1)) {
      dVar19 = 0.0;
    }
    if (local_res8[0] != '\0') goto LAB_1416da11d;
    goto LAB_1416da333;
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
    pbVar13 = (byte *)0x1;
    if (param_4 == '\0') {
      return (byte *)0x1;
    }
    pcVar8 = "Illegal array use";
    goto LAB_1416da444;
  default:
switchD_1416d9e76_caseD_3:
    pbVar13 = (byte *)0x1;
    if (uVar9 == 0) {
      pbVar13 = (byte *)0xffffffff;
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
    pbVar13 = (byte *)0xfffffffe;
    break;
  case 7:
    fVar18 = (float)*param_1;
    fVar17 = (float)*(int *)param_2;
    goto LAB_1416d9f06;
  case 10:
    dVar19 = *param_1 - (double)(longlong)*param_2;
    pbVar13 = pbVar12;
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & DAT_1419a2a20._4_4_,
                                    SUB84(dVar19,0) & (uint)DAT_1419a2a20)) &&
       (pbVar13 = (byte *)0x1, dVar19 < 0.0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 0x10:
    if ((uVar9 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_1;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    dVar19 = (double)FUN_1416a32c0(puVar7,param_4,local_res8);
    dVar19 = dVar19 - *param_2;
    if (((NAN(dVar19)) && (sVar5 = _dclass(), sVar5 == 1)) && (sVar5 = _dclass(), sVar5 == 1)) {
      dVar19 = 0.0;
    }
    if (local_res8[0] != '\0') {
      return (byte *)0x1;
    }
LAB_1416da333:
    pbVar13 = pbVar12;
    if ((dVar19 != 0.0) && (pbVar13 = (byte *)0x1, dVar19 < 0.0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 0x11:
    puVar2 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)*param_2;
    pbVar12 = pbVar13;
    if (puVar2 != (undefined8 *)0x0) {
      pbVar12 = (byte *)*puVar2;
    }
    if (puVar3 != (undefined8 *)0x0) {
      pbVar13 = (byte *)*puVar3;
    }
    if (pbVar12 == (byte *)0x0) {
      if (pbVar13 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (*pbVar13 == 0) {
        return (byte *)0x0;
      }
      uVar11 = (uint)(puVar2 != puVar3);
      if (pbVar13 == (byte *)0x0) goto LAB_1416da0b6;
    }
    else if (pbVar13 == (byte *)0x0) {
LAB_1416da0b6:
      uVar11 = (uint)(puVar2 != puVar3);
      if (*pbVar12 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      lVar10 = (longlong)pbVar13 - (longlong)pbVar12;
      do {
        bVar1 = *pbVar12;
        if (bVar1 != pbVar12[lVar10]) {
          uVar11 = -(uint)(bVar1 < pbVar12[lVar10]) | 1;
          break;
        }
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    if ((int)uVar11 < 0) {
      pbVar13 = (byte *)0xffffffff;
    }
    else {
      pbVar13 = (byte *)(ulonglong)(uVar11 != 0);
    }
    break;
  case 0x17:
    if ((uVar9 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_1;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    iVar6 = FUN_1416a3330(puVar7,param_4,local_res8);
    iVar6 = iVar6 - *(int *)param_2;
    if (local_res8[0] != '\0') {
      return (byte *)0x1;
    }
    goto LAB_1416d9e7e;
  case 0x1a:
    if ((uVar9 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_1;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    lVar10 = FUN_1416a3330(puVar7,param_4,local_res8);
    lVar10 = lVar10 - (longlong)*param_2;
    if (local_res8[0] != '\0') {
      return (byte *)0x1;
    }
LAB_1416da26e:
    pbVar13 = pbVar12;
    if ((lVar10 != 0) && (pbVar13 = (byte *)0x1, lVar10 < 0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 0x1d:
    if ((uVar9 == 1) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_1;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    cVar4 = FUN_1416a3200(puVar7,param_4,local_res8);
    iVar6 = (uint)(cVar4 != '\0') - (int)*param_2;
    if (local_res8[0] == '\0') goto LAB_1416da1a7;
    goto LAB_1416da11d;
  case 0x22:
    if ((*param_1 != 0.0) && (*param_1 == *param_2)) {
      return (byte *)0x0;
    }
    goto LAB_1416da11d;
  case 0x25:
    pbVar13 = (byte *)(ulonglong)(*param_1 != 0.0);
    break;
  case 0x33:
  case 0x66:
    pbVar13 = pbVar12;
    if ((*param_1 != *param_2) &&
       (pbVar13 = (byte *)0xffffffff, (ulonglong)*param_1 < (ulonglong)*param_2)) {
      pbVar13 = (byte *)0x1;
    }
    break;
  case 0x52:
    pbVar13 = (byte *)(ulonglong)(*param_2 != 0.0);
    break;
  case 0x55:
    break;
  case 0x70:
    fVar18 = (float)*(int *)param_1;
    fVar17 = (float)*param_2;
LAB_1416d9f06:
    pbVar13 = pbVar12;
    if ((param_3 < (double)(float)((uint)(fVar18 - fVar17) & DAT_1419a2a10)) &&
       (pbVar13 = (byte *)0x1, fVar18 - fVar17 < 0.0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 0x71:
    if ((uVar15 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_2;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    iVar6 = FUN_1416a3330(puVar7,param_4,local_res8);
    iVar6 = *(int *)param_1 - iVar6;
    if (local_res8[0] != '\0') {
      return (byte *)0x1;
    }
LAB_1416da1a7:
    pbVar13 = pbVar12;
    if (iVar6 != 0) {
      pbVar13 = (byte *)(ulonglong)((iVar6 >> 0x1f & 0xfffffffeU) + 1);
    }
    break;
  case 0x77:
    iVar6 = *(int *)param_1;
    goto LAB_1416d9e7c;
  case 0x7a:
    dVar19 = (double)(longlong)*(int *)param_1;
    goto LAB_1416d9eb3;
  case 0x7d:
    pbVar13 = pbVar12;
    if (*(int *)param_1 - (int)*param_2 != 0) {
      pbVar13 = (byte *)(ulonglong)((*(int *)param_1 - (int)*param_2 >> 0x1f & 0xfffffffeU) + 1);
    }
    break;
  case 0xa0:
    dVar19 = (double)(longlong)*param_1 - *param_2;
    pbVar13 = pbVar12;
    if ((param_3 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & DAT_1419a2a20._4_4_,
                                    SUB84(dVar19,0) & (uint)DAT_1419a2a20)) &&
       (pbVar13 = (byte *)0x1, dVar19 < 0.0)) {
      pbVar13 = (byte *)0xffffffff;
    }
    break;
  case 0xa1:
    if ((uVar15 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_2;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    lVar10 = FUN_1416a3330(puVar7,param_4,local_res8);
    lVar10 = (longlong)*param_1 - lVar10;
    if (local_res8[0] == '\0') goto LAB_1416da26e;
    goto LAB_1416da11d;
  case 0xa7:
    lVar10 = (longlong)*param_1 - (longlong)*(int *)param_2;
    bVar16 = lVar10 == 0;
    goto LAB_1416d9eb6;
  case 0xaa:
    dVar19 = *param_1;
    goto LAB_1416d9eb3;
  case 0xad:
    lVar10 = (longlong)*param_1 - (longlong)*param_2;
    bVar16 = lVar10 == 0;
    goto LAB_1416d9eb6;
  case 0xd1:
    if ((uVar15 == 1) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
      puVar7 = *(undefined1 **)*param_2;
    }
    else {
      puVar7 = &DAT_14199f8f1;
    }
    cVar4 = FUN_1416a3200(puVar7,param_4,local_res8);
    iVar6 = (int)*param_1 - (uint)(cVar4 != '\0');
    if (local_res8[0] == '\0') goto LAB_1416d9e7e;
LAB_1416da11d:
    pbVar13 = (byte *)0x1;
    break;
  case 0xd7:
    iVar6 = (int)*param_1;
LAB_1416d9e7c:
    iVar6 = iVar6 - *(int *)param_2;
LAB_1416d9e7e:
    pbVar13 = pbVar12;
    if (iVar6 != 0) {
      pbVar13 = (byte *)(ulonglong)((iVar6 >> 0x1f & 0xfffffffeU) + 1);
    }
    break;
  case 0xda:
    dVar19 = (double)(longlong)*param_1;
LAB_1416d9eb3:
    lVar10 = (longlong)dVar19 - (longlong)*param_2;
    bVar16 = lVar10 == 0;
LAB_1416d9eb6:
    if ((!bVar16) && (pbVar13 = (byte *)0x1, lVar10 < 0)) {
      pbVar13 = (byte *)0xffffffff;
    }
  }
  return pbVar13;
}


