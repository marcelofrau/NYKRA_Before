# NYKRA recovery status

This is a recovery workspace, **not yet a native GameMaker `.yyp` project**.

- `RuntimeBaseline/` is a copy of the supplied Windows build (291 files, about 477 MB). The original `rea/NYKRA.zip` is unchanged (SHA-256: `b2e8ff5bb348bb38a367579b7bc35da60bb250e099e5b6bd25f85e53045d34c1`); hashes for `NYKRA.exe`, `data.win`, dialogue, and a level file match the extracted source.
- `RecoveredAssets/Textures/`: 2,938 sprite-frame PNGs and one background PNG (2.31 MB total).
- `RecoveredAssets/EmbeddedTextures/`: 11 original texture pages.
- `RecoveredAssets/Sounds/`: 708 exported sounds (589 WAV, 119 OGG; about 431 MB); `Shaders/`: 244 files across 25 shaders; `Masks/`: 735 collision-mask PNGs.
- `RecoveredAssets/Strings/data-win-strings.json`: 2,528 strings. `Included Files/` preserves the 183 external `.rmlvl` files, 27 chapter-template `.SAVE` files, 74 custom `DATA` files, dialogue/config files, and 23 loose OGGs.
- `RecoveredAssets/Metadata/asset-order.txt` lists the main resource names; UTMT notes that this legacy list omits some newer GameMaker 2.3+ asset types.

UTMT 0.9.2.0 reads the build as GameMaker 2, bytecode version 17, **YYC**: 699 objects, 434 scripts, 490 sprites, 708 sounds, 25 shaders, and 13 embedded rooms. In YYC builds, GML is compiled into native code; UTMT reports that there is no GML code to dump. So the original gameplay source cannot be recovered from `data.win` with its GML decompiler. The logic is in `NYKRA.exe`; Ghidra 12.1.4 is being used in `NativeAnalysis/` for static native pseudocode. This will not reproduce the original GML/comments automatically. No native `.yyp` has been created yet.
