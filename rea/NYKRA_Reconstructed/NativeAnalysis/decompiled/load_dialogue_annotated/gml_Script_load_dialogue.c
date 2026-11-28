// Function: gml_Script_load_dialogue @ 0x1400ec080

undefined8 * gml_Script_load_dialogue(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulonglong in_stack_fffffffffffffda8;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffdb0;
  undefined8 ***pppuVar10;
  undefined8 uStack_240;
  uint uStack_234;
  undefined8 uStack_230;
  uint uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int iStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  uint uStack_1ec;
  undefined8 *puStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 *puStack_1c8;
  uint uStack_1bc;
  undefined8 *puStack_1b8;
  uint uStack_1ac;
  undefined8 *puStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined8 *puStack_148;
  uint uStack_13c;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  uint uStack_c4;
  undefined1 auStack_c0 [12];
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 *puStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_158 = &UNK_141983a2a;
  uStack_150 = 0;
  uStack_160 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_160;
  uStack_1ec = 0xffffff;
  puStack_1f8 = (undefined8 *)0x0;
  uStack_1dc = 0xffffff;
  puStack_1e8 = (undefined8 *)0x0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1ac = 0xffffff;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_19c = 0xffffff;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_234 = 0xffffff;
  uStack_240 = 0;
  uStack_13c = 0xffffff;
  puStack_148 = (undefined8 *)0x0;
  uStack_c4 = 0xffffff;
  puStack_d0 = (undefined8 *)0x0;
  uStack_224 = 0xffffff;
  uStack_230 = 0;
  uStack_a8 = (ulonglong)(uint)uStack_a8;
  uStack_b0 = 0;
  uStack_d8 = (ulonglong)(uint)uStack_d8;
  uStack_e0 = 0;
  uStack_e8 = (ulonglong)(uint)uStack_e8;
  uStack_f0 = 0;
  uStack_200 = (ulonglong)(uint)uStack_200;
  uStack_208 = 0;
  uStack_218 = (ulonglong)(uint)uStack_218;
  uStack_220 = 0;
  plRam0000000142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(uRam00000001420dd050);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18b8e/*var:pick_random*/);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 == '\0') {
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x188a1/*var:dlg_name*/);
    in_stack_fffffffffffffda8 = in_stack_fffffffffffffda8 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,uRam00000001420d5a28,0x80000000,&uStack_240,in_stack_fffffffffffffda8,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(in_stack_fffffffffffffda8 >> 0x20);
    FUN_1400019a0(&puStack_1f8,&uStack_240);
    ppuStack_138 = &puStack_1f8;
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,CONCAT44(uVar9,uRam00000001420da320),
                          &ppuStack_138);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar3,uVar4);
    func_0x0001416a8c00(1);
  }
  uStack_150 = 3;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x188a1/*var:dlg_name*/);
  FUN_1400019a0(&puStack_148,uVar3);
  uStack_150 = 4;
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_d0);
  }
  uStack_c4 = 0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_150 = 7;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  uVar3 = 0;
  FUN_140109fe0(param_1,param_2,&uStack_b0,0,0);
  iStack_20c = 300;
  while (uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20), 0 < iStack_20c) {
    uStack_150 = 10;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3025);
    uVar4 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar4,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    uVar4 = CONCAT44(uVar9,uRam00000001420da730);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,2,uVar4,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 == '\0') break;
    uStack_150 = 0xb;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    if ((0x46U >> (uStack_200._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_208);
    }
    uStack_208 = 0;
    uStack_200 = 0x500000000;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
    ppuStack_120 = &puStack_d0;
    ppuStack_118 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3025);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_208,1,uVar7,&ppuStack_120);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&puStack_1a8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_110 = &puStack_1a8;
    FUN_140002730(&uStack_198,0x1420b30a0);
    puStack_108 = &uStack_198;
    plRam0000000142182d90 = (longlong *)0x810000;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,3,uVar7,&ppuStack_118);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0,uVar4);
    uStack_150 = 0xc;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3029);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,1,uVar4);
    uStack_150 = 0xd;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b302d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,2,uVar4);
    uStack_150 = 0xe;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3031);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,3,uVar4);
    uStack_150 = 0xf;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3035);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,4,uVar4);
    uStack_150 = 0x10;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3039);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,5,uVar4);
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b303d);
    uVar4 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar4,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    FUN_1416ac010(&puStack_90,0x1420b3041);
    uVar4 = CONCAT44(uVar9,uRam00000001420da540);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar4,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar3,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xc000000000000000/*-2*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,6,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    else {
      uStack_150 = 0x11;
      if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_f0);
      }
      uStack_f0 = 0;
      uStack_e8 = 0x500000000;
      if ((0x46U >> (uStack_200._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_208);
      }
      uStack_208 = 0;
      uStack_200 = 0x500000000;
      if ((0x46U >> (uStack_218._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_220);
      }
      uStack_220 = 0;
      uStack_218 = 0x500000000;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      ppuStack_118 = &puStack_d0;
      ppuStack_110 = &puStack_148;
      FUN_1416ac010(auStack_c0,0x1420b303d);
      uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
      uVar4 = FUN_1416ab210(param_1,param_2,&uStack_220,1,uVar7,&ppuStack_118);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1416ac010(&puStack_a0,0x1420b3020);
      uStack_74 = uStack_94;
      uStack_78 = uStack_98;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        puStack_80 = puStack_a0;
      }
      else {
        FUN_1400fad90(&puStack_80,&puStack_a0);
      }
      FUN_140003ca0(&puStack_80,uVar4);
      uStack_84 = uStack_74;
      uStack_88 = uStack_78;
      if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
        puStack_90 = puStack_80;
      }
      else {
        FUN_1400fad90(&puStack_90,&puStack_80);
      }
      FUN_140003ca0(&puStack_90,auStack_c0);
      FUN_1400019a0(&uStack_198,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
      if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_80);
      }
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_a0);
      }
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(auStack_c0);
      }
      puStack_108 = &uStack_198;
      FUN_140002730(&uStack_188,0x1420b30a0);
      puStack_100 = &uStack_188;
      uVar7 = CONCAT44(uVar9,uRam00000001420da540);
      uVar4 = FUN_1416ab210(param_1,param_2,&uStack_208,3,uVar7,&ppuStack_110);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&uStack_178,uVar4);
      puStack_f8 = &uStack_178;
      uVar7 = CONCAT44(uVar9,uRam00000001420da460);
      uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&puStack_f8);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,6,uVar4);
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b303d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    FUN_1416ac010(&puStack_90,0x1420b3044);
    pppuVar10 = &ppuStack_130;
    uVar8 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar8,pppuVar10);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x12;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d59e8,0x80000000,&uStack_230,uVar8,
                    (ulonglong)pppuVar10 & 0xffffffffffffff00);
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,6,&uStack_230);
    }
    uVar9 = (undefined4)(uVar8 >> 0x20);
    uStack_150 = 0x13;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3047);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,7,uVar4);
    uStack_150 = 0x15;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b304b);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,8,uVar4);
    uStack_150 = 0x16;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b304f);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,9,uVar4);
    uStack_150 = 0x17;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3053);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,10,uVar4);
    uStack_150 = 0x18;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3058);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xb,uVar4);
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30b0);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_84 = 0;
    puStack_90 = (undefined8 *)0x0;
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if (iVar2 == 0) {
      uStack_150 = 0x1a;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,8,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30c0);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_84 = 0;
    puStack_90 = (undefined8 *)0x0;
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if (iVar2 == 0) {
      uStack_150 = 0x1b;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,9,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30d0);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_84 = 0;
    puStack_90 = (undefined8 *)0x0;
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if (iVar2 == 0) {
      uStack_150 = 0x1c;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,10,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30e0);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_84 = 0;
    puStack_90 = (undefined8 *)0x0;
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if (iVar2 == 0) {
      uStack_150 = 0x1d;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xb,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30b0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x14217f438);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x1f;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,8,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30c0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x14217f438);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x20;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,9,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30d0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x14217f438);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x21;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,10,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30e0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x14217f438);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x22;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xb,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30b0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x1420b305d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x24;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,8,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30c0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x1420b305d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x25;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,9,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30d0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x1420b305d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x26;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,10,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    FUN_1400019a0(&puStack_1f8,uVar3);
    ppuStack_130 = &puStack_d0;
    ppuStack_138 = &puStack_1f8;
    FUN_140002730(&uStack_1d8,0x1420b30e0);
    puStack_128 = &uStack_1d8;
    FUN_1416ac010(&puStack_90,0x1420b305d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da240);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar4,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x27;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uStack_84 = 0;
      puStack_90 = (undefined8 *)0xbff0000000000000/*-1*/;
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xb,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
    }
    uStack_150 = 0x29;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b305f);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xc,uVar4);
    uStack_150 = 0x2a;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3064);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xd,uVar4);
    uStack_150 = 0x2b;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3069);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xe,uVar4);
    uStack_150 = 0x2c;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b306e);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar4 = *puStack_90;
    }
    else {
      uVar4 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar4,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar4);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0xf,uVar4);
    uStack_150 = 0x2e;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3073);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar4);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar4 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar3,(longlong)(double)puVar6,0x10,uVar4);
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b3078);
    uVar4 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar4,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    FUN_1416ac010(&puStack_90,0x1420b3041);
    pppuVar10 = &ppuStack_130;
    uVar8 = CONCAT44(uVar9,uRam00000001420da540);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,3,uVar8,pppuVar10);
    iVar2 = FUN_1416d9df0(uVar3,&puStack_90,uRam00000001420f6b08,0);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if (iVar2 == 0) {
      uStack_150 = 0x2f;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d59e8,0x80000000,&uStack_230,uVar8,
                    (ulonglong)pppuVar10 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar8 >> 0x20);
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x11,&uStack_230);
    }
    else {
      if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b0);
      }
      uVar9 = (undefined4)(uVar8 >> 0x20);
      uStack_b0 = 0;
      uStack_a8 = 0x500000000;
      if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_e0);
      }
      uStack_e0 = 0;
      uStack_d8 = 0x500000000;
      if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_f0);
      }
      uStack_f0 = 0;
      uStack_e8 = 0x500000000;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,0x1889d/*var:dlg*/);
      ppuStack_138 = &puStack_d0;
      ppuStack_130 = &puStack_148;
      FUN_1416ac010(auStack_c0,0x1420b3078);
      uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1416ac010(&puStack_a0,0x1420b3020);
      uStack_74 = uStack_94;
      uStack_78 = uStack_98;
      if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
        puStack_80 = puStack_a0;
      }
      else {
        FUN_1400fad90(&puStack_80,&puStack_a0);
      }
      FUN_140003ca0(&puStack_80,uVar3);
      uStack_84 = uStack_74;
      uStack_88 = uStack_78;
      if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
        puStack_90 = puStack_80;
      }
      else {
        FUN_1400fad90(&puStack_90,&puStack_80);
      }
      FUN_140003ca0(&puStack_90,auStack_c0);
      FUN_1400019a0(&uStack_1d8,&puStack_90);
      if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_90);
      }
      if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_80);
      }
      if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&puStack_a0);
      }
      if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(auStack_c0);
      }
      puStack_128 = &uStack_1d8;
      FUN_140002730(&puStack_1c8,0x1420b30a0);
      ppuStack_120 = &puStack_1c8;
      uVar7 = CONCAT44(uVar9,uRam00000001420da540);
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,3,uVar7,&ppuStack_130);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&puStack_1b8,uVar3);
      ppuStack_118 = &puStack_1b8;
      uVar7 = CONCAT44(uVar9,uRam00000001420da460);
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&ppuStack_118);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((uStack_c4 & 0xffffff) == 0) {
        puVar6 = puStack_d0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
      }
      FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x11,uVar3);
    }
    uStack_150 = 0x30;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    ppuStack_130 = &puStack_148;
    FUN_1416ac010(auStack_c0,0x1420b307d);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    FUN_1400019a0(&uStack_1d8,&puStack_90);
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    puStack_128 = &uStack_1d8;
    FUN_140002730(&puStack_1c8,0x1420b30a0);
    ppuStack_120 = &puStack_1c8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da540);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,3,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&puStack_1b8,uVar3);
    ppuStack_118 = &puStack_1b8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da460);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&ppuStack_118);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x12,uVar3);
    uStack_150 = 0x31;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3082);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x13,uVar3);
    uStack_150 = 0x33;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3087);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x14,uVar3);
    uStack_150 = 0x34;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b308c);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x15,uVar3);
    uStack_150 = 0x35;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3091);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x16,uVar3);
    uStack_150 = 0x36;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b3096);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da230);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar7,&puStack_128);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x17,uVar3);
    uStack_150 = 0x37;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_e0);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x500000000;
    if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_f0);
    }
    uStack_f0 = 0;
    uStack_e8 = 0x500000000;
    ppuStack_138 = &puStack_d0;
    FUN_1416ac010(auStack_c0,0x1420b309b);
    uVar7 = CONCAT44(uVar9,uRam00000001420da2b0);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_f0,1,uVar7,&ppuStack_138);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1416ac010(&puStack_a0,0x1420b3020);
    uStack_74 = uStack_94;
    uStack_78 = uStack_98;
    if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
      puStack_80 = puStack_a0;
    }
    else {
      FUN_1400fad90(&puStack_80,&puStack_a0);
    }
    FUN_140003ca0(&puStack_80,uVar3);
    uStack_84 = uStack_74;
    uStack_88 = uStack_78;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
      puStack_90 = puStack_80;
    }
    else {
      FUN_1400fad90(&puStack_90,&puStack_80);
    }
    FUN_140003ca0(&puStack_90,auStack_c0);
    if (((uStack_84 & 0xffffff) == 1) && (puStack_90 != (undefined8 *)0x0)) {
      uVar3 = *puStack_90;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = &UNK_141983a62;
    if (((uStack_13c & 0xffffff) == 1) &&
       (puVar5 = &UNK_141983a62, puStack_148 != (undefined8 *)0x0)) {
      puVar5 = (undefined *)*puStack_148;
    }
    puVar6 = (undefined8 *)FUN_141700ad0(puVar5,uVar3,0xbff0000000000000/*-1*/);
    if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_1e8);
    }
    uStack_1dc = 0;
    puStack_1e8 = puVar6;
    if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_90);
    }
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_80);
    }
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&puStack_a0);
    }
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_c0);
    }
    ppuStack_130 = &puStack_1e8;
    uVar7 = CONCAT44(uVar9,uRam00000001420da340);
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_e0,1,uVar7,&ppuStack_130);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&uStack_1d8,uVar3);
    puStack_128 = &uStack_1d8;
    uVar3 = CONCAT44(uVar9,uRam00000001420da230);
    FUN_1416ab210(param_1,param_2,&uStack_b0,1,uVar3,&puStack_128);
    if ((uStack_c4 & 0xffffff) == 0) {
      puVar6 = puStack_d0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1416940c0(&puStack_d0);
    }
    FUN_1416cd560(uVar4,(longlong)(double)puVar6,0x18);
    iStack_20c = iStack_20c + -1;
    uStack_150 = 0x39;
    FUN_140001c50(&puStack_d0,1);
  }
  uStack_150 = 0x3c;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  FUN_1416ab210(param_1,param_2,&uStack_b0,0,CONCAT44(uVar9,uRam00000001420da550),0);
  if ((0x46U >> (uStack_218._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_220);
  }
  if ((0x46U >> (uStack_200._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_e8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f0);
  }
  if ((0x46U >> (uStack_d8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e0);
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_230);
  }
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_d0);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_148);
  }
  if ((0x46U >> (uStack_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_240);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_1f8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_160;
  return param_3;
}


