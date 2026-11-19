// Function: h_141951a30 @ 0x141951a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong h_141951a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar13;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  
  auVar7._8_56_ = in_ZMM0._8_56_;
  fVar3 = in_ZMM0._0_4_;
  auVar8._16_48_ = in_ZMM0._16_48_;
  if (DAT_1423e04d8 != 0) {
    if (((uint)fVar3 & DAT_141a80660) == DAT_141a80660) {
      uVar1 = FUN_1419687ec();
      return uVar1;
    }
    dVar2 = (double)fVar3;
    dVar14 = ABS(dVar2);
    if (DAT_141a80590 < (longlong)dVar14) {
      if ((longlong)dVar14 < DAT_141a805f0) {
        auVar15._0_4_ =
             (int)((double)((ulonglong)dVar14 & _DAT_141a80600) * DAT_141a80570 + DAT_141a80560);
        auVar15._4_4_ = (int)_UNK_141a80578;
        auVar15._8_8_ = 0;
        auVar15 = vpmovsxdq_avx(auVar15);
        uVar1 = auVar15._0_8_ & _DAT_141a80610;
        auVar15 = vshufps_avx(auVar15,auVar15,8);
        auVar15 = vcvtdq2pd_avx(auVar15);
        dVar2 = (-(auVar15._0_8_ * DAT_141a805a0) + dVar14) - auVar15._0_8_ * DAT_141a805b0;
        uVar13 = 0;
      }
      else if ((longlong)dVar14 < DAT_141a805f0) {
        uVar1 = FUN_141968760(dVar14);
        dVar2 = extraout_XMM0_Qa_00;
        uVar13 = extraout_XMM0_Qb;
      }
      else {
        uVar1 = FUN_141968570();
        dVar2 = extraout_XMM0_Qa_01;
        uVar13 = extraout_XMM0_Qb_00;
      }
      if ((uVar1 & 1) == 0) {
        dVar2 = dVar2 * dVar2;
        dVar2 = (dVar2 * (dVar2 * (dVar2 * DAT_141a854b0 + DAT_141a854a8) + DAT_141a854a0) +
                DAT_141a85498) * dVar2 * dVar2 + (DAT_141a80550 - dVar2 * DAT_141a80560);
        uVar13 = 0;
      }
      else {
        dVar14 = dVar2 * dVar2;
        dVar2 = (dVar14 * (dVar14 * (dVar14 * DAT_141a854d8 + DAT_141a854d0) + DAT_141a854c8) +
                DAT_141a854c0) * dVar2 * dVar14 + dVar2;
      }
      auVar5._0_8_ = (double)((ulonglong)dVar2 ^ (uVar1 + 1 >> 1) << 0x3f);
      auVar5._8_8_ = uVar13;
      auVar6._0_4_ = (float)auVar5._0_8_;
      auVar6._4_12_ = auVar5._4_12_;
      return auVar6._0_8_;
    }
    if (DAT_141a80630 <= (longlong)dVar14) {
      dVar2 = dVar2 * dVar2;
      dVar2 = (dVar2 * (dVar2 * (dVar2 * DAT_141a854b0 + DAT_141a854a8) + DAT_141a854a0) +
              DAT_141a85498) * dVar2 * dVar2 + (DAT_141a80550 - dVar2 * DAT_141a80560);
      return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
    }
    if ((longlong)dVar14 < DAT_141a80640) {
      return (ulonglong)DAT_141a80658;
    }
    dVar2 = -(dVar2 * dVar2 * DAT_141a80560) + DAT_141a80550;
    return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
  }
  if (((uint)fVar3 & 0x7f800000) == 0x7f800000) {
    uVar1 = FUN_1419687ec();
    return uVar1;
  }
  auVar7._0_8_ = (double)fVar3;
  dVar2 = ABS(auVar7._0_8_);
  if ((longlong)dVar2 < 0x3fe921fb54442d19) {
    uVar4 = 0;
  }
  else if ((ulonglong)dVar2 < (ulonglong)DAT_141a805e0) {
    uVar4 = (uint)(dVar2 * DAT_141a80570 + DAT_141a80560);
    dVar14 = (double)(int)uVar4;
    dVar16 = dVar2 - DAT_141a805a0 * dVar14;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar16;
    auVar7._8_56_ = auVar8._8_56_;
    auVar7._0_8_ = dVar16 - DAT_141a805b0 * dVar14;
    uVar1 = (ulonglong)ABS(auVar7._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - uVar1)) {
      dVar2 = dVar16 - DAT_141a805c0 * dVar14;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar2;
      auVar9._16_48_ = auVar8._16_48_;
      auVar7._8_56_ = auVar9._8_56_;
      auVar7._0_8_ = dVar2 - (DAT_141a805d0 * dVar14 - ((dVar16 - dVar2) - DAT_141a805c0 * dVar14));
    }
    if (uVar1 < 0x3f2) {
      auVar10._16_48_ = auVar7._16_48_;
      if (uVar1 < 0x3df) {
        if ((uVar4 & 1) == 0) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = DAT_141a80550;
          auVar7._16_48_ = auVar10._16_48_;
        }
      }
      else {
        dVar2 = auVar7._0_8_;
        if ((uVar4 & 1) == 0) {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_141a80550;
          auVar7._8_56_ = auVar10._8_56_;
          auVar7._0_8_ = DAT_141a80550 - dVar2 * dVar2 * DAT_141a80560;
        }
        else {
          auVar7._0_8_ = dVar2 - DAT_141a80580 * dVar2 * dVar2 * dVar2;
        }
      }
      goto LAB_141951cd4;
    }
  }
  else {
    uVar4 = FUN_141968420(param_1,auVar7._0_8_,1,param_4,auVar7._0_8_);
    auVar7._8_56_ = extraout_var;
    auVar7._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar2 = auVar7._0_8_;
  dVar14 = dVar2 * dVar2;
  if ((uVar4 & 1) == 0) {
    auVar11._16_48_ = auVar7._16_48_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = DAT_141a85490;
    auVar7._8_56_ = auVar11._8_56_;
    auVar7._0_8_ = DAT_141a85490 * dVar14 + DAT_141a80550 +
                   ((DAT_141a854b0 * dVar14 + DAT_141a854a8) * dVar14 * dVar14 +
                   DAT_141a854a0 * dVar14 + DAT_141a85498) * dVar14 * dVar14;
  }
  else {
    auVar7._0_8_ = dVar2 + ((DAT_141a854d8 * dVar14 + DAT_141a854d0) * dVar14 * dVar14 +
                           DAT_141a854c8 * dVar14 + DAT_141a854c0) * dVar2 * dVar14;
  }
LAB_141951cd4:
  if ((uVar4 + 1 & 2) != 0) {
    dVar2 = auVar7._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = 0.0 - dVar2;
  }
  auVar12._4_60_ = auVar7._4_60_;
  auVar12._0_4_ = (float)auVar7._0_8_;
  return auVar12._0_8_;
}


