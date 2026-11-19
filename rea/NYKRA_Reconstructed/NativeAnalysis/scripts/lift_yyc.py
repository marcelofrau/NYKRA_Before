"""Lift annotated YYC pseudo-C (decompiled/<dir>_annotated/*.c) to GML-like statements.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/NativeAnalysis/scripts/lift_yyc.py <annotated dir> <out dir> [function name ...]
(directories are under NativeAnalysis/decompiled/)

It removes the compiler's bookkeeping (prologue, value release, ref-counted copies,
to-real conversions) and rewrites the recurring runtime helpers into statements, using the
helper semantics recorded in NativeAnalysis/YYC_HELPERS.md. A line it does not recognise is kept
as `// ?? <original>` so nothing is silently dropped. Output is a reading aid, not final GML:
temporaries stay as vNNN and control flow is kept as decompiled.
"""
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXE = (ROOT / "RuntimeBaseline" / "NYKRA.exe").read_bytes()


def va_to_off(va):
    rva = va - 0x140000000
    for start, size, file_off in ((0x1000, 0x197F200, 0x400), (0x1981000, 0x72F600, 0x197F600), (0x20B1000, 0xCD800, 0x20AEC00)):
        if start <= rva < start + size:
            return file_off + rva - start
    return None


def read_const(va, kind):
    off = va_to_off(va)
    if off is None:
        return None
    return struct.unpack_from("<f" if kind == "f" else "<d", EXE, off)[0]


def fmt_num(d):
    if d is None:
        return "?"
    if d == int(d) and abs(d) < 1e12:
        return str(int(d))
    return f"{d:.6g}"


def short(name):
    name = name.strip().lstrip("&")
    m = re.fullmatch(r"local_([0-9a-f]+)", name)
    return f"v{m.group(1)}" if m else name


def const(token, kind="d"):
    """Numeric value of a DAT constant. kind 'a' (auto) picks float when the double reading is absurd."""
    m = re.fullmatch(r"_?DAT_([0-9a-f]+)", token)
    if not m:
        return short(token)
    va = int(m.group(1), 16)
    if kind == "a":
        d, f = read_const(va, "d"), read_const(va, "f")
        if d is not None and (d == 0 or 1e-30 < abs(d) < 1e30):
            return fmt_num(d)
        return fmt_num(f)
    return fmt_num(read_const(va, kind))


# ---- preprocessing: remove bookkeeping -----------------------------------------------------
FREE = re.compile(r"[ \t]*if \(\(0x46U >> \([^\n]*? & 0x1f\) & 1\) != 0\) \{\n[ \t]*FUN_140001b50\([^)]*\);\n[ \t]*\}\n")
COPY = re.compile(
    r"(?:[ \t]*\w+ = (?:\*\(\w+ \*\)\(\(longlong\)\w+ \+ 0xc\)|\*\(\w+ \*\)\(\w+ \+ 1\)|\w+);\n){0,2}"
    r"[ \t]*if \(\(0x46U >> \(\w+ & 0x1f\) & 1\) == 0\) \{\n[ \t]*[^\n]*;\n[ \t]*\}\s*else \{\n[ \t]*FUN_\w+\((&?\w+),(&?\w+)\);\n[ \t]*\}\n")
NEG = re.compile(
    r"[ \t]*(\w+) = \(double\)CONCAT44\(\(uint\)\(\(ulonglong\)(\w+) >> 0x20\) \^ DAT_141982e90\._4_4_,\s*"
    r"\(uint\)\w+ \^ \(uint\)DAT_141982e90\);\n")
TOREAL1 = re.compile(r"[ \t]*if \(\(\w+ & 0xffffff\) != 0\) \{\n[ \t]*\w+ = \(double\)FUN_1416940c0\(&?\w+\);\n[ \t]*\}\n")
TOREAL2 = re.compile(
    r"[ \t]*if \(\(\*\(uint \*\)\(\(longlong\)(\w+) \+ 0xc\) & 0xffffff\) == 0\) \{\n[ \t]*(\w+) = \*\w+;\n[ \t]*\}\s*else \{\n"
    r"[ \t]*\w+ = (?:\(double\))?FUN_1416940c0\(\w+\);\n[ \t]*\}\n")


# Value copies: "if (needs-refcount) FUN_(&dst,&src) else dst = src" is just dst = src.
COPY_PTR = re.compile(
    r"[ \t]*uStack_\w+ = (\w+)\[1\];\n[ \t]*if \(\(0x46U >> \(\*\(uint \*\)\(\(longlong\)\1 \+ 0xc\) & 0x1f\) & 1\) == 0\) \{\n"
    r"[ \t]*(\w+) = \*\1;\n[ \t]*\}\n[ \t]*else \{\n[ \t]*FUN_\w+\(&\2,\1\);\n[ \t]*\}\n")
COPY_LOCAL = re.compile(
    r"[ \t]*if \(\(0x46U >> \(\w+\._4_4_ & 0x1f\) & 1\) == 0\) \{\n[ \t]*(\w+) = (\w+);\n[ \t]*\}\n"
    r"[ \t]*else \{\n[ \t]*FUN_\w+\(&\1,&\2\);\n[ \t]*\}\n")


def preprocess(text):
    text = text.replace("\r\n", "\n")
    text = FREE.sub("", text)
    text = COPY_PTR.sub(lambda m: f"@COPY &{m.group(2)} {m.group(1)};\n", text)
    text = COPY_LOCAL.sub(lambda m: f"@COPY &{m.group(1)} &{m.group(2)};\n", text)
    text = COPY.sub(lambda m: f"@COPY {m.group(1)} {m.group(2)};\n", text)
    text = NEG.sub(lambda m: f"@NEG {m.group(1)} {m.group(2)};\n", text)
    text = TOREAL1.sub("", text)
    text = TOREAL2.sub(lambda m: f"@REALP {m.group(2)} {m.group(1)};\n", text)
    return text


# ---- statement recognisers -----------------------------------------------------------------
REF = re.compile(r"(\w+) = (?:\([^)]*\))?\(\*\*\(code \*\*\)\(\*(\w+) \+ (0x10|8)\)\)\(\w+,0x[0-9a-f]+/\*var:(\w+)\*/\);")
READ_SELF = re.compile(r"FUN_1416cea80\(param_1,DAT_\w+/\*(\w+)\*/,0x80000000,&(\w+)")
WRITE_SELF = re.compile(r"FUN_1416cfae0\(param_1,DAT_\w+/\*(\w+)\*/,0x80000000,&(\w+)\);")
WRITE_OTHER = re.compile(r"FUN_1416cf7b0\((\w+),DAT_\w+/\*(\w+)\*/,0x80000000,&(\w+)\);")
READ_OTHER = re.compile(r"FUN_1416cfeb0\((&?\w+),DAT_\w+/\*(\w+)\*/,0x80000000,&(\w+)")
CALL = re.compile(r"(?:(\w+) = )?(?:\([^)]*\))?FUN_1416ab210\(param_1,\w+,&(\w+),(\d+),DAT_\w+/\*(\w+)\*/,(&?\w+)\);")
SLOT = re.compile(r"(local_[0-9a-f]+) = &(local_[0-9a-f]+);")
SLOT_AL = re.compile(r"(\w+) = &(local_[0-9a-f]+);")
CONST_DBL = re.compile(r"(local_[0-9a-f]+) = (0x[0-9a-f]{16})(?:/\*[^*]*\*/)?;")
CONST_COPY = re.compile(r"FUN_140002730\(&(\w+),&(DAT_[0-9a-f]+)(?:/\*[^*]*\*/)?\);")
ARITH2 = {"FUN_140003ca0": "+=", "FUN_140003e00": "-=", "FUN_140001fe0": "*=", "FUN_140004620": "/="}
ARITH2_RE = re.compile(r"(FUN_140003ca0|FUN_140003e00|FUN_140001fe0|FUN_140004620)\((&?\w+),(&?\w+)\);")
MUL_INT = re.compile(r"FUN_140001a50\((&?\w+),(&?\w+),(0x[0-9a-f]+|\d+)\);")
ADD_INT = re.compile(r"FUN_140001c50\((&?\w+),(0x[0-9a-f]+|\d+)\);")
ADD_DBL = re.compile(r"FUN_140003f30\((&?\w+),(\w+)\);")
MUL_DBL = re.compile(r"FUN_140009980\((&?\w+),(&?\w+),(_?DAT_[0-9a-f]+)(?:/\*[^*]*\*/)?\);")
DIV_DBL = re.compile(r"FUN_140004520\((&?\w+),(&?\w+),(_?DAT_[0-9a-f]+)(?:/\*[^*]*\*/)?\);")
LENGTHDIR = re.compile(r"(\w+) = \(float\)FUN_1416cd8(00|80)\((_?DAT_[0-9a-f]+|[\w.]+),(?:CONCAT44\(\w+,\(float\)(\w+)\)|(\w+))\);")
CONCAT_F = re.compile(r"(\w+) = CONCAT44\(\w+,\(float\)(\w+)\);")
CMP = re.compile(r"(\w+) = (?:\(\w+\))?FUN_1416d9df0\(([^,()]+),([^,()]+),([^,()]+),(\d)\);")
CHOOSE = re.compile(r"(\w+) = FUN_1416cd660\(&\w+,(\d+),&(local_[0-9a-f]+)\);")
INST_NUM = re.compile(r"(\w+) = (?:\(\w+\))?FUN_1416f82f0\(param_1,param_2,(0x[0-9a-f]+|-?\d+)\);")


def object_names():
    import json
    objs = json.loads((ROOT / "RecoveredAssets" / "Metadata" / "objects-metadata.json").read_text(encoding="utf-8"))
    return {o["Index"]: o["Name"] for o in objs if o}


OBJECTS = object_names()
RANDOM_RANGE = re.compile(r"(\w+) = (?:\(double\))?FUN_1416cdc60\((_?DAT_[0-9a-f]+),(_?DAT_[0-9a-f]+)\);")
RANDOM = re.compile(r"(\w+) = FUN_1416cdc30\((_?DAT_[0-9a-f]+|\w+)\);")
EXISTS = re.compile(r"(\w+) = FUN_1416f8280\(param_1,param_2,\(longlong\)(\w+)\);")
DESTROY = re.compile(r"FUN_1416f8210\(param_1,param_2,(\d+),&(local_[0-9a-f]+)\);")
DEREF_SET = re.compile(r"\*(\w+) = (.+);")
DEREF_KIND = re.compile(r"\*\(undefined4 \*\)\(\(longlong\)(\w+) \+ 0xc\) = 0;")
EXPR = re.compile(r"(\w+) = (.*(?:fVar\d+|DAT_[0-9a-f]+).*);")
BOILER = re.compile(
    r"^(DAT_142182d78 =|DAT_142182d90 =|FUN_141706ee0\(\);|FUN_1416a8cb0\(|FUN_1416a8c00\(|return;|local_[0-9a-f]+ = (?:\"gml_Object|0xfffffffffffffffe)|"
    r"(?:undefined[0-9]*|uint|char|ulonglong|longlong|double|int|float|code|byte|bool|local_\w+)[ \*]+\w+(?:\[[0-9a-z]+\])?;$|"
    r"local_[0-9a-f]+ = 0x[0-9a-f]{1,9};|local_[0-9a-f]+ = (?:0|0\.0);|\w+ = \w+ & 0xffffff;|uVar\w+ = \w+ & 0xffffff00;|"
    r"in_stack_\w+|uStack_\w+ = |\(double \*\*\)|\w+ = \(double \*\*\)|\w+ = \(\w+\)in_stack_|\w+ = \(undefined4\)\(\(ulonglong\)|local_[0-9a-f]+ = [0-9]+;|\(ulonglong\)|\w+ = DAT_\w+/\*[^*]*\*/;|uVar\w+ = (?:uVar|DAT_)\w+;)"
)


def expr_value(rhs, real_of):
    rhs = rhs.replace("(double)", "").replace("(float)", "")
    rhs = re.sub(r"_?DAT_[0-9a-f]+(?:/\*[^*]*\*/)?", lambda m: const(m.group(0).split("/*")[0], "a"), rhs)
    rhs = re.sub(r"local_[0-9a-f]+", lambda m: short(m.group(0)), rhs)
    return rhs.strip()


COND_LINE = re.compile(r"(\} )?(if|else if|while) \((.*)\) (\{|goto \w+;)")
WITH_BEGIN = re.compile(r"(\w+) = FUN_1416ab810\(&\w+,&param_1,&param_2,&?(\w+)\);")
SELF_ALIAS = re.compile(r"param_[12] = \w+;")


def comparison(cond):
    """Ghidra prints the sign of FUN_1416d9df0(a, b) as `-1 < v`, `v != -2 && v < 1`, ...; -2 is unordered.
    Returns (variable, operator) with the operator applied to (a, b), or None."""
    c = re.sub(r"\w+ != -2 && ", "", re.sub(r"\w+ == -2 \|\| ", "", cond.replace("(", "").replace(")", ""))).strip()
    for pattern, op in ((r"-1 < (\w+)", ">="), (r"(\w+) < 1", "<="), (r"(\w+) < 0", "<"), (r"0 < (\w+)", ">")):
        m = re.fullmatch(pattern, c)
        if m:
            return m.group(1), op
    return None


def lift_function(text):
    text = preprocess(text)
    # A `with` loop passes the aliases of self/other by address and rewrites them in place; the
    # first argument always means "the current self" and the second "the current other".
    for s, o in re.findall(r"FUN_1416ab810\(&\w+,&(\w+),&(\w+),", text):
        text = re.sub(rf"\b{s}\b", "param_1", text)
        text = re.sub(rf"\b{o}\b", "param_2", text)
    refs, slots, ret_alias, real_of, out, cmp_of, consts = {}, {}, {}, {}, [], {}, {}

    def emit(statement):
        # pointer aliases (uVar2 -> tick) are resolved as of this statement; a statement that
        # assigns to an alias name reuses it as a plain value (uVar1 = random(360)), so drop the alias
        m = re.match(r"(uVar\d+|puVar\d+|pdVar\d+) = (.*)", statement)
        if m and not re.search(r"\b(?:" + m.group(1) + r")\b", m.group(2)):
            out.append(f"{m.group(1)} = " + re.sub(r"\b(uVar\d+|puVar\d+|pdVar\d+)\b", lambda k: refs.get(k.group(1), k.group(1)), m.group(2)))
            refs.pop(m.group(1), None)
            return
        out.append(re.sub(r"\b(uVar\d+|puVar\d+|pdVar\d+)\b", lambda k: refs.get(k.group(1), k.group(1)), statement))

    lines = [l.rstrip() for l in text.split("\n")]
    for line in lines:
        m = SLOT.fullmatch(line.strip())
        if m:
            slots[int(m.group(1)[6:], 16)] = short(m.group(2))
        m = re.fullmatch(r"(local_[0-9a-f]+)\[(\d+)\] = &(local_[0-9a-f]+);", line.strip())
        if m:  # element i of a pointer array sits 8*i bytes above its base: a smaller local_ number
            slots[int(m.group(1)[6:], 16) - 8 * int(m.group(2))] = short(m.group(3))
    # The compiler stores the current source line in one local ("trace"), set to 0 right after the
    # function-name string. Its first non-zero assignment marks the start of the real body.
    m = re.search(r'\w+ = "gml_\w+";\n\s*(\w+) = 0;', text)
    trace = m.group(1) if m else None
    declared = dict((n, t) for t, n in re.findall(r"^\s*(undefined8|undefined4|double|float|uint|longlong)\s+(local_\w+);", text, re.M))
    value_locals = {n for n, t in declared.items() if t in ("undefined8", "double", "float")}
    body_started = trace is None
    for raw in lines:
        line = raw.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue
        m = REF.fullmatch(line)
        if m:
            refs[m.group(1)] = ("other." if m.group(2) == "param_2" else "") + m.group(4)
            continue
        if not body_started:
            # the body starts at "DAT_142182d90 = param_1;" (the current-instance marker); the line
            # counter alone is not enough because the first statement runs before it is incremented
            if line.startswith("DAT_142182d90 = "):
                body_started = True
            continue
        if trace and re.fullmatch(rf"{trace} = \w+;", line):
            continue
        m = re.fullmatch(r"(local_[0-9a-f]+) = (0|0\.0);", line)
        if m and m.group(1) in value_locals:
            emit(f"{short(m.group(1))} = 0;  // zero-init, dropped if unused")
            continue
        if BOILER.match(line):
            continue
        if SLOT.fullmatch(line) or re.fullmatch(r"local_[0-9a-f]+\[\d+\] = &local_[0-9a-f]+;", line):
            continue
        m = SLOT_AL.fullmatch(line)
        if m and m.group(1).startswith("pp"):
            ret_alias[m.group(1)] = int(m.group(2)[6:], 16)
            continue
        if SELF_ALIAS.fullmatch(line):
            continue
        m = WITH_BEGIN.fullmatch(line)
        if m:
            cmp_of.pop(m.group(1), None)
            obj = consts.get(short(m.group(2)), m.group(2))
            if isinstance(obj, float) and obj == int(obj):
                obj = OBJECTS.get(int(obj), obj)
            emit(f"{m.group(1)} = with_begin({obj});  // the loop below runs with self = each instance, other = this one")
            continue
        m = READ_SELF.search(line)
        if m:
            emit(f"{short(m.group(2))} = {m.group(1)};")
            continue
        m = re.search(r"FUN_1416cea80\(param_2,DAT_\w+/\*(\w+)\*/,0x80000000,&(\w+)", line)
        if m:
            emit(f"{short(m.group(2))} = other.{m.group(1)};")
            continue
        m = WRITE_SELF.search(line)
        if m:
            emit(f"{m.group(1)} = {short(m.group(2))};")
            continue
        m = WRITE_OTHER.search(line)
        if m:
            emit(f"{refs.get(m.group(1), m.group(1))}.{m.group(2)} = {short(m.group(3))};")
            continue
        m = READ_OTHER.search(line)
        if m:
            emit(f"{short(m.group(3))} = {refs.get(m.group(1), short(m.group(1)))}.{m.group(2)};")
            continue
        m = CALL.fullmatch(line)
        if m:
            alias, ret, argc, fname, base = m.groups()
            base_hex = int(base[7:], 16) if base.startswith("&local_") else ret_alias.get(base)
            args = [slots.get(base_hex - 8 * i, f"?arg{i}") for i in range(int(argc))] if base_hex is not None else []
            emit(f"{short(ret)} = {fname}({', '.join(args)});")
            if alias:
                refs[alias] = short(ret)
            continue
        m = DESTROY.fullmatch(line)
        if m:
            base_hex = int(m.group(2)[6:], 16)
            args = [slots.get(base_hex - 8 * i, f"?arg{i}") for i in range(int(m.group(1)))]
            emit(f"instance_destroy({', '.join(args)});")
            continue
        m = re.fullmatch(r"@COPY (&?\w+) (&?\w+);", line)
        if m:
            dst, src = m.groups()
            emit(f"{refs.get(dst, short(dst))} = {refs.get(src, short(src.lstrip('*')))};")
            continue
        m = re.fullmatch(r"@REALP (\w+) (\w+);", line)
        if m:
            real_of[m.group(1)] = refs.get(m.group(2), m.group(2))
            continue
        m = re.fullmatch(r"FUN_1400019a0\((&?\w+),(&?\w+)\);", line)
        if m:
            dst, src = m.groups()
            emit(f"{refs.get(dst, short(dst))} = {refs.get(src, short(src))};")
            continue
        m = CONST_COPY.search(line)
        if m:
            emit(f"{short(m.group(1))} = {const(m.group(2))};")
            continue
        m = CONST_DBL.fullmatch(line)
        if m:
            value = struct.unpack('<d', struct.pack('<Q', int(m.group(2), 16)))[0]
            consts[short(m.group(1))] = value
            emit(f"{short(m.group(1))} = {fmt_num(value)};")
            continue
        m = ARITH2_RE.search(line)
        if m:
            emit(f"{short(m.group(2))} {ARITH2[m.group(1)]} {short(m.group(3))};")
            continue
        m = MUL_INT.search(line)
        if m:
            emit(f"{short(m.group(1))} = {short(m.group(2))} * {int(m.group(3), 0)};")
            continue
        m = re.search(r"FUN_140017bd0\((&?\w+),(&?\w+),(0x[0-9a-f]+|\d+)\);", line)
        if m:  # d = s - n
            emit(f"{short(m.group(1))} = {short(m.group(2))} - {int(m.group(3), 0)};")
            continue
        m = ADD_INT.search(line)
        if m:
            emit(f"{short(m.group(1))} += {int(m.group(2), 0)};")
            continue
        m = ADD_DBL.search(line)
        if m:
            emit(f"{short(m.group(1))} += {real_of.get(m.group(2), m.group(2))};")
            continue
        m = MUL_DBL.search(line)
        if m:
            emit(f"{short(m.group(1))} = {short(m.group(2))} * {const(m.group(3))};")
            continue
        m = DIV_DBL.search(line)
        if m:
            emit(f"{short(m.group(1))} = {short(m.group(2))} / {const(m.group(3))};")
            continue
        m = re.fullmatch(r"(dVar\w+) = (local_[0-9a-f]+);", line)
        if m:
            real_of[m.group(1)] = short(m.group(2))
            continue
        m = re.fullmatch(r"(dVar\w+) = (?:\(double\))?(fVar\w+);", line)
        if m:
            real_of[m.group(1)] = m.group(2)
            continue
        m = CONCAT_F.fullmatch(line)
        if m:
            real_of[m.group(1)] = real_of.get(m.group(2), m.group(2))
            continue
        m = re.fullmatch(r"@NEG (\w+) (\w+);", line)
        if m:
            emit(f"{short(m.group(1))} = -{real_of.get(m.group(2), m.group(2))};")
            continue
        m = LENGTHDIR.fullmatch(line)
        if m:
            fn = "lengthdir_x" if m.group(2) == "00" else "lengthdir_y"
            angle = m.group(4) or m.group(5)
            emit(f"{m.group(1)} = {fn}({const(m.group(3), 'f')}, {real_of.get(angle, angle)});")
            continue
        m = CMP.fullmatch(line)
        if m:
            def operand(tok):
                tok = tok.strip()
                bare = tok.lstrip("&")
                if re.fullmatch(r"_?DAT_[0-9a-f]+", bare):
                    return const(bare)
                return real_of.get(bare, refs.get(bare, short(tok)))
            cmp_of[m.group(1)] = (operand(m.group(2)), operand(m.group(3)), m.group(5))
            continue
        m = CHOOSE.fullmatch(line)
        if m:
            base_hex = int(m.group(3)[6:], 16)
            args = [slots.get(base_hex - 8 * i, f"?arg{i}") for i in range(int(m.group(2)))]
            emit(f"{m.group(1)} = choose({', '.join(args)});")
            continue
        m = INST_NUM.fullmatch(line)
        if m:
            idx = int(m.group(2), 0)
            cmp_of.pop(m.group(1), None)
            emit(f"{m.group(1)} = instance_number({OBJECTS.get(idx, 'object#' + str(idx))});")
            continue
        m = COND_LINE.fullmatch(line)
        if m:
            parsed = comparison(m.group(3))
            if parsed and parsed[0] in cmp_of:
                a, b, _ = cmp_of[parsed[0]]
                emit(f"{m.group(1) or ''}{m.group(2)} ({a} {parsed[1]} {b}) {m.group(4)}")
                continue
        m = re.fullmatch(r"(?:\w+ )?(if|else if) \((\w+) (==|!=) 0\) (\{|goto \w+;)", line)
        if m and m.group(2) in cmp_of:
            a, b, mode = cmp_of[m.group(2)]
            op = "==" if m.group(3) == "==" else "!="
            emit(f"{m.group(1)} ({a} {op} {b}) {m.group(4)}")  # mode 0: 0 means equal
            continue
        m = RANDOM_RANGE.fullmatch(line)
        if m:
            emit(f"{m.group(1)} = random_range({const(m.group(2))}, {const(m.group(3))});")
            continue
        m = RANDOM.fullmatch(line)
        if m:
            emit(f"{m.group(1)} = random({const(m.group(2))});")
            continue
        m = EXISTS.fullmatch(line)
        if m:
            emit(f"{m.group(1)} = instance_exists({real_of.get(m.group(2), m.group(2))});")
            continue
        m = DEREF_KIND.fullmatch(line)
        if m:
            continue
        m = DEREF_SET.fullmatch(line)
        if m and m.group(1) in refs:
            emit(f"{refs[m.group(1)]} = {expr_value(m.group(2), real_of)};")
            continue
        m = EXPR.fullmatch(line)
        if m and "FUN_" not in m.group(2):
            emit(f"{short(m.group(1))} = {expr_value(m.group(2), real_of)};")
            continue
        if re.match(r"(if|else|for|while|switch|do|case|default|break|goto|LAB_)", line) or line in ("}", "{"):
            emit(line)
            continue
        if BOILER.match(line):
            continue
        emit(f"// ?? {line}")
    # drop zero-inits nobody reads afterwards
    kept = []
    for i, line in enumerate(out):
        m = re.fullmatch(r"(v[0-9a-f]+) = 0;  // zero-init, dropped if unused", line)
        if m:
            var = m.group(1)
            nxt = next((l for l in out[i + 1:] if re.search(rf"(?<![\w.]){var}\b", l)), None)
            # dead when nothing reads it, or when the next mention overwrites it without reading it
            if nxt is None or re.match(rf"{var} = (?!.*(?<![\w.]){var}\b)", nxt):
                continue
            line = f"{var} = 0;"
        kept.append(line)
    return kept


def indent(lines):
    depth, res = 0, []
    for line in lines:
        if line.startswith("}"):
            depth = max(0, depth - 1)
        res.append("    " * depth + line)
        if line.endswith("{"):
            depth += 1
    return res


def main(argv):
    in_dir = ROOT / "NativeAnalysis" / "decompiled" / argv[1]
    out_dir = ROOT / "NativeAnalysis" / "decompiled" / argv[2]
    out_dir.mkdir(parents=True, exist_ok=True)
    wanted = set(argv[3:])
    count = 0
    for path in sorted(in_dir.glob("*.c")):
        if wanted and path.stem not in wanted:
            continue
        lifted = indent(lift_function(path.read_text(encoding="utf-8", errors="replace")))
        (out_dir / (path.stem + ".gml.txt")).write_text(f"// lifted from {path.name}\n" + "\n".join(lifted) + "\n", encoding="utf-8", newline="\n")
        count += 1
    print(f"lifted {count} functions into {out_dir}")


if __name__ == "__main__":
    main(sys.argv)
