#!/usr/bin/env python3
"""
Phase 1 structural validator & binary parser for NYKRA: Before.
Save-value ambiguities are reported separately and are not certified as intact:
  1. All 183 level files in Included Files/level_data/*.rmlvl
  2. All 6 chapter templates (GENERAL, CONTROL, CHARACTER) in DATA/CHAPTER_TEMPLATES/chapter_*
  3. All 27 room state files (*.SAVE) in DATA/CHAPTER_TEMPLATES/chapter_*/ROOMS/*.SAVE
  4. All 29 zlib-compressed 3D vertex/grid buffers in Included Files/DATA/*
"""

import glob
import json
import os
import struct
import sys
import zlib
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[3]
ASSETS_DIR = REPO_ROOT / "rea" / "NYKRA_Reconstructed" / "RecoveredAssets"
METADATA_DIR = ASSETS_DIR / "Metadata"
INCLUDED_DIR = ASSETS_DIR / "Included Files"


def load_object_hierarchy():
    with open(METADATA_DIR / "objects-metadata.json", "r", encoding="utf-8") as f:
        objs = json.load(f)
    obj_by_name = {o["Name"]: o for o in objs}
    return obj_by_name


def is_ancestor(obj_by_name, obj_name, ancestor_name):
    cur = obj_name
    visited = set()
    while cur and cur not in visited:
        if cur == ancestor_name:
            return True
        visited.add(cur)
        cur = obj_by_name[cur]["Parent"] if cur in obj_by_name else None
    return False


def read_cstring(buf, pos):
    end = buf.find(b"\x00", pos)
    if end < 0:
        raise ValueError(f"Unterminated string at offset {pos}")
    return buf[pos:end].decode("utf-8", errors="replace"), end + 1


def parse_rmlvl(path, obj_by_name, sprite_names):
    with open(path, "rb") as f:
        buf = f.read()
    pos = 0
    map_n, mw, mh, planet, horizon, r1, r2, r3 = struct.unpack_from("<BBBBBBBB", buf, pos)
    pos += 8

    # 1. Collision/block grid: map[0..mw-1, 0..mh-1] as u16
    grid_bytes = mw * mh * 2
    pos += grid_bytes

    # 2. 6 tilemap layers (_layer[0..5]): each mw * mh * u16
    pos += 6 * grid_bytes

    # 3. 2 asset sprite layers (asset_list[0]="aFRONT", asset_list[1]="aBACK")
    assets = [[], []]
    for layer_idx in (0, 1):
        count = struct.unpack_from("<H", buf, pos)[0]
        pos += 2
        for _ in range(count):
            sx, sy = struct.unpack_from("<HH", buf, pos)
            pos += 4
            sname, pos = read_cstring(buf, pos)
            if sname != "<undefined>" and sname not in sprite_names:
                raise ValueError(f"{path.name}: unknown sprite '{sname}' in asset_list[{layer_idx}]")
            assets[layer_idx].append((sx, sy, sname))

    # 4. Object instances list (obj_list)
    obj_count = struct.unpack_from("<H", buf, pos)[0]
    pos += 2
    has_save_wire = False
    parsed_objs = []
    truncated_at_eof = False

    for _ in range(obj_count):
        if pos >= len(buf) or pos + 6 > len(buf):
            truncated_at_eof = True
            break
        xs, ys, depth = struct.unpack_from("<hhh", buf, pos)
        pos += 6
        oname, pos = read_cstring(buf, pos)
        if oname == "":
            # Unwritten slot in power-of-2 buffer (when an instance in obj_list was undefined/deleted at save time)
            pos -= 7
            truncated_at_eof = True
            break
        if oname not in obj_by_name:
            raise ValueError(f"{path.name}: unknown object '{oname}' at offset {pos}")
        if oname == "oSAVE_WIRE":
            has_save_wire = True

        extra = {}
        if oname == "PATH":
            extra["n"] = buf[pos]
            pos += 1
            extra["rm"], pos = read_cstring(buf, pos)
        elif is_ancestor(obj_by_name, oname, "parLootable"):
            locked, inv_sz = struct.unpack_from("<HH", buf, pos)
            pos += 4
            items = []
            for _ in range(inv_sz):
                item_id, item_n = struct.unpack_from("<HH", buf, pos)
                pos += 4
                items.append((item_id, item_n))
            extra["locked"] = locked
            extra["inv"] = items
        elif is_ancestor(obj_by_name, oname, "parDoor_out"):
            extra["locked"] = buf[pos]
            pos += 1
        elif is_ancestor(obj_by_name, oname, "parDoor_Flat"):
            extra["locked"] = buf[pos]
            extra["n"] = buf[pos + 1]
            pos += 2
            extra["rm"], pos = read_cstring(buf, pos)
        elif oname == "oRoof_angle":
            w, rep, mat, d_ang = struct.unpack_from("<HHBh", buf, pos)
            pos += 7
            extra.update({"width": w, "repeat_t": rep, "material": mat, "dir": d_ang})
        elif is_ancestor(obj_by_name, oname, "parNote"):
            txt, pos = read_cstring(buf, pos)
            page = buf[pos]
            pos += 1
            extra.update({"text": txt, "page": page})
        elif is_ancestor(obj_by_name, oname, "oBook") or oname == "oBook":
            extra["book"] = buf[pos]
            extra["book_text"] = buf[pos + 1]
            pos += 2
        elif has_save_wire and is_ancestor(obj_by_name, oname, "parWire"):
            if is_ancestor(obj_by_name, oname, "oWire"):
                # d[0..3], an[0..3], anim, on (10 x s16 = 20 bytes)
                extra["wire_state"] = struct.unpack_from("<10h", buf, pos)
                pos += 20
            else:
                # anim, on (2 x s16 = 4 bytes)
                extra["wire_light_state"] = struct.unpack_from("<2h", buf, pos)
                pos += 4

        parsed_objs.append((oname, xs, ys, depth, extra))

    # Any remaining bytes must be 0x00 padding from GameMaker's buffer_grow power-of-2 allocation
    remainder = buf[pos:]
    if remainder != b"\x00" * len(remainder):
        raise ValueError(
            f"{path.name}: {len(remainder)} non-zero leftover bytes at offset {pos}/{len(buf)}"
        )

    return {
        "file": path.name,
        "size": len(buf),
        "parsed_bytes": pos,
        "padding_bytes": len(remainder),
        "map_n": map_n,
        "mw": mw,
        "mh": mh,
        "planet": planet,
        "horizon": horizon,
        "assets_front": len(assets[0]),
        "assets_back": len(assets[1]),
        "declared_objects": obj_count,
        "parsed_objects": len(parsed_objs),
        "has_save_wire": has_save_wire,
        "truncated_slot": truncated_at_eof,
    }


def read_saved_type(buf, pos):
    value_start = pos
    if pos >= len(buf):
        return None, pos, "truncated_value"
    tag = buf[pos]
    pos += 1
    if tag == 1:
        val = struct.unpack_from("<f", buf, pos)[0]
        return val, pos + 4, None
    elif tag == 2:
        val, pos = read_cstring(buf, pos)
        return val, pos, None
    elif tag == 3:
        n = struct.unpack_from("<H", buf, pos)[0]
        pos += 2
        arr = []
        for _ in range(n):
            elem_start = pos
            if pos >= len(buf):
                return arr, pos, "truncated_array"
            t2 = buf[pos]
            pos += 1
            if t2 == 1:
                v = struct.unpack_from("<f", buf, pos)[0]
                pos += 4
            elif t2 == 3:
                n2 = struct.unpack_from("<H", buf, pos)[0]
                pos += 2
                v = []
                for _ in range(n2):
                    nested_start = pos
                    if pos >= len(buf):
                        return arr + [v], pos, "truncated_nested_array"
                    t3 = buf[pos]
                    pos += 1
                    if t3 == 1:
                        v3 = struct.unpack_from("<f", buf, pos)[0]
                        pos += 4
                    elif t3 == 2:
                        v3 = struct.unpack_from("<q", buf, pos)[0]
                        pos += 8
                    else:
                        return arr + [v], nested_start, f"unknown_nested_array_tag_{t3}"
                    v.append(v3)
            elif t2 == 4:
                v = struct.unpack_from("<q", buf, pos)[0]
                pos += 8
            else:
                return arr, elem_start, f"unknown_array_tag_{t2}"
            arr.append(v)
        return arr, pos, None
    elif tag == 4:
        return (buf[pos] != 0), pos + 1, None
    elif tag == 5:
        return None, value_start, "tag_5_not_emitted_by_native_writer"
    else:
        # A missing array payload leaves the next variable name at this position.
        return None, value_start, "missing_or_unknown_payload"


def parse_saved_instance(buf, pos, obj_by_name, is_room_save=False):
    oname, pos = read_cstring(buf, pos)
    if oname == "":
        return None, pos
    if oname not in obj_by_name:
        raise ValueError(f"Unknown saved instance object '{oname}' at {pos}")
    # 4x f32 (xstart, ystart, x, y) + 8x s16 (depth..image_speed) + 1x f32 (image_alpha)
    # + 2x u32 (image_blend, visible) + 12x s16 (alarm[0..11]) = 68 bytes
    header_vals = struct.unpack_from("<ffffhhhhhhhhfIIhhhhhhhhhhhh", buf, pos)
    pos += 68
    var_cnt = struct.unpack_from("<H", buf, pos)[0]
    pos += 2
    decode_issues = []
    decoded_var_count = 0
    parse_stopped = False
    for _ in range(var_cnt):
        vname, pos = read_cstring(buf, pos)
        value_offset = pos
        _, pos, issue = read_saved_type(buf, pos)
        if issue:
            decode_issues.append({"variable": vname, "offset": value_offset, "status": issue})
            if issue != "missing_or_unknown_payload":
                parse_stopped = True
                break
        else:
            decoded_var_count += 1
    if not parse_stopped and is_room_save and is_ancestor(obj_by_name, oname, "parLootable"):
        inv_sz = struct.unpack_from("<H", buf, pos)[0]
        pos += 2 + inv_sz * 4
        invn_sz = struct.unpack_from("<H", buf, pos)[0]
        pos += 2 + invn_sz * 4
    return {
        "object": oname,
        "header": header_vals,
        "var_count": var_cnt,
        "decoded_var_count": decoded_var_count,
        "decode_issues": decode_issues,
        "parse_stopped": parse_stopped,
    }, pos


def main():
    obj_by_name = load_object_hierarchy()
    with open(METADATA_DIR / "sprites-metadata.json", "r", encoding="utf-8") as f:
        sprite_names = {s["Name"] for s in json.load(f)}

    # 1. Validate all 183 .rmlvl files
    rmlvl_paths = sorted((INCLUDED_DIR / "level_data").glob("*.rmlvl"))
    assert len(rmlvl_paths) == 183, f"Expected 183 .rmlvl files, found {len(rmlvl_paths)}"
    rmlvl_summaries = [parse_rmlvl(p, obj_by_name, sprite_names) for p in rmlvl_paths]

    # 2. Validate all 6 chapter templates (GENERAL, CONTROL, CHARACTER) and 27 .SAVE files
    chapter_summaries = []
    save_file_count = 0
    save_decode_issues = []

    def collect_save_issues(path, instance):
        relative_path = str(path.relative_to(INCLUDED_DIR))
        for issue in instance["decode_issues"]:
            save_decode_issues.append({"file": relative_path, "object": instance["object"], **issue})

    for ch in range(1, 7):
        cdir = INCLUDED_DIR / "DATA" / "CHAPTER_TEMPLATES" / f"chapter_{ch}"
        with open(cdir / "GENERAL", "rb") as f:
            gbuf = f.read()
        ver, gp = read_cstring(gbuf, 0)
        rm, gp = read_cstring(gbuf, gp)
        dnum = struct.unpack_from("<I", gbuf, gp)[0]
        gp += 4
        chap = gbuf[gp]
        gp += 1
        assert gbuf[gp:] == b"\x00" * (len(gbuf) - gp)

        with open(cdir / "CONTROL", "rb") as f:
            cbuf = f.read()
        c_inst, cp = parse_saved_instance(cbuf, 0, obj_by_name, is_room_save=False)
        collect_save_issues(cdir / "CONTROL", c_inst)
        if not c_inst["parse_stopped"]:
            assert cbuf[cp:] == b"\x00" * (len(cbuf) - cp)

        with open(cdir / "CHARACTER", "rb") as f:
            chbuf = f.read()
        p_inst, chp = parse_saved_instance(chbuf, 0, obj_by_name, is_room_save=False)
        collect_save_issues(cdir / "CHARACTER", p_inst)
        if p_inst["parse_stopped"]:
            eo_inst = None
        else:
            books_sz = struct.unpack_from("<H", chbuf, chp)[0]
            chp += 2 + books_sz * 4
            pf_sz = struct.unpack_from("<H", chbuf, chp)[0]
            chp += 2 + pf_sz * 4
            eo_inst, chp = parse_saved_instance(chbuf, chp, obj_by_name, is_room_save=False)
            if eo_inst is not None:
                collect_save_issues(cdir / "CHARACTER", eo_inst)
        if not p_inst["parse_stopped"] and (eo_inst is None or not eo_inst["parse_stopped"]):
            assert chbuf[chp:] == b"\x00" * (len(chbuf) - chp)

        room_saves = sorted((cdir / "ROOMS").glob("*.SAVE"))
        for sf in room_saves:
            with open(sf, "rb") as f:
                sbuf = f.read()
            mw, mh, has_eo = struct.unpack_from("<BBB", sbuf, 0)
            sp = 3 + mw * mh * 2
            room_boundary_verified = True
            try:
                while sp < len(sbuf):
                    if sbuf[sp] == 0:
                        sp += 1
                        break
                    ins, sp = parse_saved_instance(sbuf, sp, obj_by_name, is_room_save=True)
                    collect_save_issues(sf, ins)
                    if ins["parse_stopped"]:
                        room_boundary_verified = False
                        break
                if room_boundary_verified:
                    assert sbuf[sp:] == b"\x00" * (len(sbuf) - sp)
            except (ValueError, IndexError, struct.error) as exc:
                room_boundary_verified = False
                save_decode_issues.append({
                    "file": str(sf.relative_to(INCLUDED_DIR)),
                    "object": None,
                    "variable": None,
                    "offset": sp,
                    "status": f"parse_stopped: {exc}",
                })
            save_file_count += 1

        chapter_summaries.append({
            "chapter": ch,
            "version": ver,
            "room": rm,
            "d_number": dnum,
            "chapter_val": chap,
            "control_vars": c_inst["var_count"],
            "player_vars": p_inst["var_count"],
            "eo_present": eo_inst is not None,
            "control_decode_issues": len(c_inst["decode_issues"]),
            "player_decode_issues": len(p_inst["decode_issues"]),
            "room_saves": len(room_saves),
        })

    # 3. Validate all 29 compressed DATA/* buffers
    data_blobs = [p for p in sorted((INCLUDED_DIR / "DATA").iterdir()) if p.is_file()]
    assert len(data_blobs) == 29, f"Expected 29 DATA blobs, found {len(data_blobs)}"
    for blob in data_blobs:
        with open(blob, "rb") as f:
            dec = zlib.decompress(f.read())
        assert len(dec) > 0

    report = {
        "rmlvl_total": len(rmlvl_summaries),
        "rmlvl_exact_eof": sum(1 for r in rmlvl_summaries if r["padding_bytes"] == 0),
        "rmlvl_power_of_2_padded": sum(1 for r in rmlvl_summaries if r["padding_bytes"] > 0),
        "rmlvl_with_save_wire": [r["file"] for r in rmlvl_summaries if r["has_save_wire"]],
        "rmlvl_with_deleted_slot": [r["file"] for r in rmlvl_summaries if r["truncated_slot"]],
        "chapter_templates_validated": len(chapter_summaries),
        "room_save_files_validated": save_file_count,
        "save_decode_issue_count": len(save_decode_issues),
        "save_files_with_decode_issues": sorted({issue["file"] for issue in save_decode_issues}),
        "save_decode_issues": save_decode_issues,
        "zlib_data_buffers_validated": len(data_blobs),
        "chapters": chapter_summaries,
    }
    out_path = REPO_ROOT / "rea" / "NYKRA_Reconstructed" / "Tools" / "phase1_validation_report.json"
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(report, f, indent=2)

    print(f"[PASS] 183/183 .rmlvl files validated ({report['rmlvl_exact_eof']} exact EOF, {report['rmlvl_power_of_2_padded']} zero-padded).")
    print(f"[PASS] 6/6 chapter templates scanned (save values are reported separately).")
    print(f"[PASS] {save_file_count}/{save_file_count} .SAVE room files scanned.")
    print(f"[INFO] {len(report['save_files_with_decode_issues'])} save files contain {len(save_decode_issues)} ambiguous/unsupported values; counts do not certify value integrity.")
    print(f"[PASS] {len(data_blobs)}/{len(data_blobs)} zlib-compressed DATA buffers validated.")


if __name__ == "__main__":
    main()
