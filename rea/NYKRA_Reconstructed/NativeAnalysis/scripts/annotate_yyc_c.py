import json
import pathlib
import re
import struct

ROOT = pathlib.Path(r"C:\Users\fraumar\workspace\_non_work_\NYKRA_Before\rea\NYKRA_Reconstructed")
META = ROOT / "RecoveredAssets" / "Metadata"
EXE_BYTES = (ROOT / "RuntimeBaseline" / "NYKRA.exe").read_bytes()

sym_data = json.loads((META / "yyc-dat-symbols.json").read_text(encoding="utf-8"))
dat_map = sym_data["dat_map"]
var_ids = sym_data["var_ids"]

objects = json.loads((META / "objects-metadata.json").read_text(encoding="utf-8"))
obj_by_idx = {o["Index"]: o["Name"] for o in objects if o}
sprites = json.loads((META / "sprites-metadata.json").read_text(encoding="utf-8"))
spr_by_idx = {s["Index"]: s["Name"] for s in sprites if s}
sounds = json.loads((META / "sounds-metadata.json").read_text(encoding="utf-8"))
snd_by_idx = {s["Index"]: s["Name"] for s in sounds if s}


def rva_to_off(rva: int):
    if 0x1000 <= rva < 0x1000 + 0x197F200:
        return 0x400 + (rva - 0x1000)
    if 0x1981000 <= rva < 0x1981000 + 0x72F600:
        return 0x197F600 + (rva - 0x1981000)
    if 0x20B1000 <= rva < 0x20B1000 + 0xCD800:
        return 0x20AEC00 + (rva - 0x20B1000)
    return None


def resolve_dat(match):
    token = match.group(0)
    key = token.lower()
    for k, v in dat_map.items():
        if k.lower() == key:
            return f"{token}/*{v}*/"
    va = int(token.split("_")[1], 16)
    off = rva_to_off(va - 0x140000000)
    if off is not None and off + 8 <= len(EXE_BYTES):
        # check if it's a pointer to a string in .data
        q = struct.unpack_from("<Q", EXE_BYTES, off)[0]
        if 0x141981000 <= q < 0x1420B0600:
            soff = rva_to_off(q - 0x140000000)
            if soff is not None:
                end = EXE_BYTES.find(b"\x00", soff, soff + 200)
                if end != -1:
                    try:
                        s = EXE_BYTES[soff:end].decode("ascii")
                        if s:
                            return f'{token}/*"{s}"*/'
                    except Exception:
                        pass
    return token


def resolve_hex_double(match):
    hx = match.group(0)
    val = int(hx, 16)
    if val in (0xFFFFFFFFFFFFFFFE, 0x500000000, 0x80000000):
        return hx
    if len(hx) == 18:  # 0x + 16 hex chars
        try:
            d = struct.unpack("<d", struct.pack("<Q", val))[0]
            if d == int(d) and -100000 <= d <= 100000:
                iv = int(d)
                extra = f"{iv}"
                if iv in obj_by_idx and iv > 0:
                    extra += f" (obj:{obj_by_idx[iv]})"
                return f"{hx}/*{extra}*/"
            elif 1e-6 < abs(d) < 1e9:
                return f"{hx}/*{d:g}*/"
        except Exception:
            pass
    elif 0x186A0 <= val <= 0x20000:
        vname = var_ids.get(hx.lower())
        if vname:
            return f"{hx}/*var:{vname}*/"
    return hx


in_dir = ROOT / "NativeAnalysis" / "decompiled" / "phase1"
out_dir = ROOT / "NativeAnalysis" / "decompiled" / "phase1_annotated"
out_dir.mkdir(parents=True, exist_ok=True)

for cfile in sorted(in_dir.glob("*.c")):
    txt = cfile.read_text(encoding="utf-8", errors="replace")
    txt = re.sub(r"\bDAT_14[0-9a-fA-F]+\b", resolve_dat, txt)
    txt = re.sub(r"\b0x[0-9a-fA-F]{5,16}\b", resolve_hex_double, txt)
    (out_dir / cfile.name).write_text(txt, encoding="utf-8")

print(f"Annotated {len(list(out_dir.glob('*.c')))} files in {out_dir}")
