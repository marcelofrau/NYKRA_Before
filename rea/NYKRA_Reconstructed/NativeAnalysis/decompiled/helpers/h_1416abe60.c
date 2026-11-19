// Function: h_1416abe60 @ 0x1416abe60

ulonglong h_1416abe60(longlong param_1,longlong *param_2)

{
  longlong *in_RAX;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
    in_RAX = *(longlong **)(param_1 + 0x18);
    if (*in_RAX != 0) {
      *param_2 = *in_RAX;
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


