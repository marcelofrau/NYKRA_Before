"""Compare the IDE-generated tileset output image with the original runtime texture.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/compare_tileset_output.py [generated.png] [original.png]

Both images use the GameMaker output layout: 78 columns of 16x16 tiles, each with a
2 px border (20 px stride). Each tile interior and its border are compared separately,
and fully transparent pixels count as equal whatever their RGB values.
Exit code 0 when every tile interior matches; read-only on both files.
"""
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_GENERATED = ROOT / "GameMakerProject" / "tilesets" / "TILES" / "output_tileset.png"
DEFAULT_ORIGINAL = ROOT / "RecoveredAssets" / "Textures" / "Backgrounds" / "TILES" / "TILES_0.png"
TILE, BORDER, COLUMNS, COUNT = 16, 2, 78, 6144
STRIDE = TILE + 2 * BORDER


def same(a, b):
    return a == b or (a[3] == 0 and b[3] == 0)


def compare(generated_path, original_path):
    gen = Image.open(generated_path).convert("RGBA")
    org = Image.open(original_path).convert("RGBA")
    if gen.size != org.size:
        return {"size_mismatch": (gen.size, org.size)}
    gp, op = gen.load(), org.load()
    interior_bad, interior_px, border_px = [], 0, 0
    for i in range(COUNT):
        cx, cy = (i % COLUMNS) * STRIDE, (i // COLUMNS) * STRIDE
        tile_diff = 0
        for y in range(STRIDE):
            for x in range(STRIDE):
                inside = BORDER <= x < BORDER + TILE and BORDER <= y < BORDER + TILE
                if not same(gp[cx + x, cy + y], op[cx + x, cy + y]):
                    if inside:
                        tile_diff += 1
                        interior_px += 1
                    else:
                        border_px += 1
        if tile_diff:
            interior_bad.append((i, tile_diff))
    return {
        "size": gen.size,
        "tiles_compared": COUNT,
        "tiles_with_interior_diff": len(interior_bad),
        "interior_pixels_diff": interior_px,
        "border_pixels_diff": border_px,
        "first_bad_tiles": interior_bad[:10],
    }


def main(argv):
    generated = Path(argv[1]) if len(argv) > 1 else DEFAULT_GENERATED
    original = Path(argv[2]) if len(argv) > 2 else DEFAULT_ORIGINAL
    result = compare(generated, original)
    for key, value in result.items():
        print(f"{key}: {value}")
    return 0 if result.get("tiles_with_interior_diff") == 0 else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))
