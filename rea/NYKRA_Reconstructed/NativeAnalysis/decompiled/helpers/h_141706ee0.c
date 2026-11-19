// Function: h_141706ee0 @ 0x141706ee0

void h_141706ee0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*DAT_1421973f8 + (longlong)(int)(*(uint *)(DAT_1421973f8 + 1) & DAT_1420fb0b4) * 0x10);
  do {
    if (lVar1 == 0) {
      lVar1 = 0;
LAB_141706f21:
      FUN_141802c50(param_1,param_2,*(undefined4 *)(lVar1 + 0x8c),DAT_14219b628,DAT_14219b62c);
      return;
    }
    if (*(uint *)(lVar1 + 0x10) == DAT_1420fb0b4) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      goto LAB_141706f21;
    }
    lVar1 = *(longlong *)(lVar1 + 8);
  } while( true );
}


