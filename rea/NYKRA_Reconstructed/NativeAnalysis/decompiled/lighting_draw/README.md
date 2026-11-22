# `LIGHTING/Draw_73` native notes

`gml_Object_LIGHTING_Draw_73` starts at `0x1407826d0` (`yyc-function-table.json`).
The original function is ~854 KB, and Ghidra decompilation timed out at 600 s
(`NativeAnalysis/decompiled/lighting_draw/gml_Object_LIGHTING_Draw_73.c` was empty).
These notes come from raw x86-64 disassembly of that address range.

- Instance variable `0x18960` is `g`. While `g != 1`, the function draws
  `draw_rectangle_view(COLOUR, 1)` and exits. `Alarm_0` sets `g = 1`.
- `instance_number(0x68)` gates the main pass; `0x68` is the glow-beam object.
- `merge_colour(COLOUR, <mid>, ...)` builds the light colour.
- Builtins seen through the YYC dispatcher: `camera_get_view_x`,
  `camera_get_view_y`, `camera_get_view_width`, `camera_get_view_height`,
  `round`, `surface_exists`.
- External id `0x1420da190` is `surface_exists`; `0x1420da090` is
  `gpu_set_blendmode` (from other annotated functions).
- The draw exits unless `mode == 3`, the same mode used by the glow beams.
- Surface helpers `FUN_1416a8cb0` / `FUN_1416a8c00` are used around the pass
  (`surface_set_target` / `surface_reset_target`, inferred from other scripts).
- The pass builds **two** surfaces (`surface_exists` twice), clears them with
  `draw_clear_alpha`, and draws two gradient `draw_ellipse_color` calls separated
  by `gpu_set_blendmode(1)`.
- The original then issues hundreds of `draw_circle_colour` / `merge_colour`
  calls per beam, followed by `gpu_set_blendmode_ext`, `draw_surface`,
  `gpu_set_blendmode` and `surface_free`. This builds a soft light mask and
  composites it over the room, so lit areas keep the underlying environment.
- External id `0x1420da090` is `gpu_set_blendmode`; `0x1420dac80` is
  `draw_rectangle_color`. The final surface pass uses `gpu_set_blendmode_ext`.

The reconstructed GML in `GameMakerProject/objects/LIGHTING/Draw_73.gml` follows
this structure but is not a line-by-line port. It paints a dark mask
(`COLOUR = c_ink`), adds gradient ellipses and cone fans for each beam, then
multiplies the mask over the room with `gpu_set_blendmode_ext(bm_dest_colour,
bm_zero)`. That preserves room colours inside the light instead of adding white
over a dark overlay. If F5 shows a visual mismatch, regenerate the disassembly
with:

```powershell
python -P -c "from pathlib import Path; d=Path('RuntimeBaseline/NYKRA.exe').read_bytes(); o=0x781ad0; n=0x140852f70-0x1407826d0; Path('NativeAnalysis/decompiled/lighting_draw/lighting_draw.bin').write_bytes(d[o:o+n])"
objdump -D -b binary -m i386:x86-64 --adjust-vma=0x1407826d0 NativeAnalysis/decompiled/lighting_draw/lighting_draw.bin > NativeAnalysis/decompiled/lighting_draw/lighting_draw.asm
```
