# Phase 1 Specification: Binary Formats & Core Infrastructure (`NYKRA.exe`)

This document records the binary layouts inferred from `NYKRA.exe` (YYC x86_64). `Tools/validate_formats.py` checks all **183 `.rmlvl` files, 6 chapter templates, 27 `.SAVE` room files, and 29 compressed `DATA/*` blobs**. Level and DATA checks establish structural coverage; save parsing reports ambiguous or unsupported values and does **not** certify their full integrity.

---

## 1. YYC Symbol & Variable Resolution Tables (`NYKRA.exe`)

In `NYKRA.exe` (ImageBase `0x140000000`), we located and extracted two additional runtime tables alongside the 2,720-entry YYC function table (`yyc-function-table.json`):
- **Global Built-in / Asset Index Slots (`0x1420d58e0..0x1420dd900`):** Maps runtime global addresses (`DAT_1420da3e0` -> `buffer_read`, `DAT_1420da400` -> `instance_create_depth`, etc.) to their exact GML built-in function or built-in variable names (`Tools/yyc_Call_and_Var_Tables.json`).
- **Instance / Global Variable ID Table (`0x186a9..0x18e67`):** Maps 1,983 YYC variable slot IDs (`0x1885a` -> `CURRENTROOM`, `0x18b09` -> `mw`, `0x18abd` -> `mh`, `0x18b9c` -> `planet`, etc.) initialized in `FUN_141691350`.

All 16 core Phase 1 functions were decompiled and annotated using these tables in `NativeAnalysis/decompiled/phase1_annotated/`.

---

## 2. Level File Format (`level_data/*.rmlvl`)

Read by `gml_Script_map_load` (`0x14004bac0`) and written by `gml_Script_map_save` (`0x14003fa60`). All integers are little-endian.

### 2.1. Header (8 bytes)
| Offset | Type | Field | Description |
|---|---|---|---|
| `0x00` | `u8` | `map_n` | Tileset / map variant index |
| `0x01` | `u8` | `mw` | Map width in 16x16 tiles |
| `0x02` | `u8` | `mh` | Map height in 16x16 tiles |
| `0x03` | `u8` | `planet` | Planet ID (`0`=Maldis, `1`=Mexulta, `2`=Arthek, `3`=Irnem, `4`=Septeon, `5`=Quornem, `6`=Iiedakama) |
| `0x04` | `u8` | `horizon` | Horizon / background flag |
| `0x05..0x07` | `u8[3]` | `reserved` | Always `0, 0, 0` |

### 2.2. Collision & Block Grid (`mw * mh * 2` bytes)
- Loop `_ix = 0..mw-1`, inner loop `_iy = 0..mh-1`:
  - `u16` cell ID stored into `map[_ix, _iy]`.
  - If `cell != 0` and `map_id[cell, 4] != noone`, `map_load` spawns object `map_id[cell, 4]` at `(_ix * 16, _iy * 16)` with depth `map_id[cell, 5]`.

### 2.3. Six Tilemap Layers (`6 * mw * mh * 2` bytes)
- For each of the 6 layers in `oControl._layer`:
  - `_layer[0] = "tFRONT_over"`
  - `_layer[1] = "tFRONT"`
  - `_layer[2] = "tFRONT_bg"`
  - `_layer[3] = "tBACK_over"`
  - `_layer[4] = "tBACK"`
  - `_layer[5] = "tBACK_bg"`
- Loop `_ix = 0..mw-1`, inner loop `_iy = 0..mh-1`:
  - `u16` tiledata word passed to `tilemap_set(tmap, tile, _ix, _iy)` when non-zero.

### 2.4. Two Asset Sprite Layers (`aFRONT` and `aBACK`)
- Repeated for `layer_idx = 0` (`"aFRONT"`) and `layer_idx = 1` (`"aBACK"`):
  - `u16` `count`: number of decorative sprites on the layer.
  - Followed by `count` entries:
    - `u16` `x`
    - `u16` `y`
    - `cstring` `sprite_name` (null-terminated UTF-8 string; resolved via `asset_get_index(sprite_name)`).
    - *Edge case found in validation:* `rmArt_BlackMarket.rmlvl` has one entry with `sprite_name = "<undefined>"` (written when a sprite index was `-1` during level editing).

### 2.5. Object Instances (`obj_list`)
- `u16` `obj_count`: number of object entries in `obj_list`.
  - *Note:* In `map_save`, if `oSAVE_WIRE` exists in the room, it is moved to index `0` of `obj_list` before saving so `map_load` always instantiates `oSAVE_WIRE` prior to any `parWire` descendants.
- Followed by `obj_count` entries:
  - `s16` `xstart`
  - `s16` `ystart`
  - `s16` `depth`
  - `cstring` `object_name` (null-terminated)
  - Type-specific extra payload based on `object_name` / ancestry:
    1. **`PATH`**:
       - `u8` `n` (portal ID)
       - `cstring` `rm` (destination room name)
    2. **Descendant of `parLootable`**:
       - `u16` `locked`
       - `u16` `inv_count`
       - `inv_count` pairs of `(u16 item_id, u16 item_qty)`
    3. **Descendant of `parDoor_out`**:
       - `u8` `locked`
    4. **Descendant of `parDoor_Flat`**:
       - `u8` `locked`
       - `u8` `n`
       - `cstring` `rm`
    5. **`oRoof_angle`**:
       - `u16` `width`
       - `u16` `repeat_t`
       - `u8` `material`
       - `s16` `dir`
    6. **Descendant of `parNote`**:
       - `cstring` `text` (decoded via `real_string`)
       - `u8` `page`
    7. **`oBook` (or descendant)**:
       - `u8` `book`
       - `u8` `book_text`
    8. **Descendant of `parWire` when `oSAVE_WIRE` exists in the room** (e.g., `rmMal_2_2.rmlvl`):
       - For each variable that exists on the newly created instance (in order): `anim1`..`anim9` (`s16` each), `d[0..3]` (`4 x s16`), `an[0..3]` (`4 x s16`), `anim` (`s16`), `on` (`s16`), `power_on` (`s16`).
       - In practice: `oWire` instances have `d[0..3]`, `an[0..3]`, `anim`, `on` (**20 bytes**); `oPowered_light*` instances have `anim`, `on` (**4 bytes**).

### 2.6. Trailing Buffer Padding & Deleted Slot Quirk
- Because `map_save` creates the buffer with `buffer_create(2, buffer_grow, 1)` and calls `buffer_save(_b, path)` directly (which saves the entire allocated capacity of the grow buffer rather than `buffer_tell(_b)`), **66 of the 183 `.rmlvl` files** have power-of-2 sizes (`8192`, `16384`, `32768`) padded with `0x00` bytes after the last object.
- When `obj_list` contained a deleted/undefined instance during editing (e.g., `rmMal_6.rmlvl`), `ds_list_size(obj_list)` is 1 higher than the number of written objects; `map_load` safely stops or skips when `buffer_tell >= buffer_get_size` or `asset_get_index("") == -1`.

### 2.7. Static Parity Review of Reconstructed Level GML
`ReconstructedGML/phase1_core/map_load.gml` and `map_save.gml` were compared against the annotated native routines for the file contract. Their field order agrees for the 8-byte header, column-major collision grid, six tilemap layers, two counted sprite layers, counted object list, and the known PATH/loot/door/roof/note/book/wire payloads. Static ordering checks are in `Tools/test_save_load_compat.py`.

This verifies source-level consistency with the decompilation and fixture parser; it is **not** a GameMaker execution or round-trip test. No `.yyp` exists yet.

---

## 3. Save & Chapter Template Formats (`DATA/CHAPTER_TEMPLATES/` & `PROFILES/`)

### 3.1. `GENERAL`
- `cstring` `EO_SPAWN` (`"0"` or `"1"`)
- `cstring` `CURRENTROOM` (e.g. `"rmMal_1p"`)
- `u32` `global.D_NUMBER`
- `u8` `oControl.CHAPTER`
- `u8` `0` (terminator)

### 3.2. Common 68-Byte Instance Record (`CONTROL`, `CHARACTER`, `*.SAVE`)
Each saved instance writes:
- `cstring` `object_name`
- `f32` `xstart`, `f32` `ystart`, `f32` `x`, `f32` `y` (16 bytes)
- `s16` `depth`, `s16` `speed`, `s16` `direction`, `s16` `friction`, `s16` `gravity`, `s16` `sprite_index`, `s16` `image_index`, `s16` `image_speed` (16 bytes)
- `f32` `image_alpha` (4 bytes)
- `u32` `image_blend`, `u32` `visible` (8 bytes)
- `s16[12]` `alarm[0..11]` (24 bytes)
- `u16` `var_count`: number of instance variables returned by `variable_instance_get_names(id)`
- Followed by `var_count` entries of `(cstring var_name, _save_type payload)`:
  - Tag `1` (`number`, `int32`, or `int64` in the native writer): `f32` (int64 precision is therefore not preserved)
  - Tag `2` (`is_string`): `cstring`
  - Tag `3` (`is_array`): recursively serialized array data; some values are omitted or unsupported as described below
  - Tag `4` (`is_bool`): one-byte bool payload (`buffer_bool` / buffer type 10)
  - Tag `5`: not emitted by the inspected native `_save_type`; do not infer an int64 payload from this tag when validating original game saves

The reconstructed GML currently has a separate, unversioned encoding: it writes scalar int64 as tag `5` and string array elements as tag `6`. Those are reconstruction-specific additions, not evidence of the original native save contract.

### 3.3. `CONTROL`
- Single instance record for `oControl`, followed by `u8` `0`.

### 3.4. `CHARACTER`
- Instance record for `oPlayer`
- `_save_ds_list(books)`: `u16 count` + `count * f32`
- `_save_ds_list(PLANET_FOUND)`: `u16 count` + `count * f32`
- Optional instance record for `oEo` (if `instance_exists(oEo)`)
- `u8` `0` terminator.

### 3.5. `ROOMS/*.SAVE`
- `u8` `mw`, `u8` `mh`, `u8` `has_eo` (3 bytes)
- `mw * mh * u16` collision grid (`map`)
- Sequence of instance records for all active room objects (where `parLootable` instances append two `_save_ds_list` blocks: `INV` and `INV_N`)
- `u8` `0` terminator (read as empty `object_name == ""` on load).

---

## 4. Compressed 3D Model & Map Buffers (`Included Files/DATA/*`)
All 29 standalone files in `Included Files/DATA/` (`main`, `map`, `dodeca`, `door_bar`, `door_main`, `FAN_L`, `FAN_L_CASE`, `floor_1..3`, `light_1`, `light_ring_blue`, `module_case`, `module_frame`, `module_handle`, `pillar_1..2`, `pod_frame`, `pod_front`, `pod_main`, `pod_side`, `pod_side2`, `pod_top`, `pod_top2`, `tool_manipulator`, `wall_1..3`, `wall_3_sharp`) are **zlib-compressed GameMaker buffers** (`buffer_decompress`), containing 24-byte-per-vertex 3D meshes (`RGBA u32` + `x,y,z f32` + `nx,ny f32`) used by the 3D/station scenes, except `map` (76,800 bytes decompressed zero-initialized grid).

---

## 5. Save Findings & Validation Limits

- The earlier claim of a native tag-4/tag-5 inversion is withdrawn. The inspected native `_save_type` sends `number`, `int32`, and `int64` through tag `1`/`f32`; bool uses tag `4`/buffer type 10. `load_CONTROL` and `load_CHARACTER` also read tag `4` with buffer type 10. The exact tag handling in `load_game` has not been independently established, so this document makes no claim about it.
- In `chapter_4/CONTROL`, offset `1271` is `anim1\0 04 01 min_mh\0...`; `anim1` is true in that fixture. It does not demonstrate a native reader overrun.
- Native array serialization can omit the array payload when the array is empty, its first element is a string, or its first nested element is a string. Later string elements can be written with tag `2`, but the inspected native array readers do not handle that tag. A missing payload makes the following variable name appear where a type tag was expected; the absent value itself cannot be recovered from that file alone.
- `validate_formats.py` reports save files/fields with ambiguous or unsupported values. Counts such as 6 chapter templates and 27 room saves mean those files were scanned; they are not a claim that every save value was decoded or that the original game could load every value correctly.
- The reconstructed GML’s scalar-tag fix and tag-6 array-string extension apply only to that reconstruction. There is not yet a file-level version marker or automatic classifier/migrator separating original saves from reconstructed saves.
- The annotated `load_game` pseudocode still does not resolve every buffer-type constant to a named `buffer_*` type. No tag-4/tag-5 conclusion is claimed for that reader.
