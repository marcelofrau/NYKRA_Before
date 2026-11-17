// UTMT CLI script: dumps the TILES tileset texture/metadata, tileset sprites and room tile layers of a data.win.
// Env: TILEDIAG_OUT (output dir for PNGs), TILEDIAG_TAG (label). Read-only on the data.win.
using System;
using System.IO;
using System.Linq;
using UndertaleModLib.Models;
using UndertaleModLib.Util;
EnsureDataLoaded();
string outDir = Environment.GetEnvironmentVariable("TILEDIAG_OUT");
string tag = Environment.GetEnvironmentVariable("TILEDIAG_TAG");
ScriptMessage($"[{tag}] GM={Data.GeneralInfo.Major}.{Data.GeneralInfo.Minor}.{Data.GeneralInfo.Release}.{Data.GeneralInfo.Build} BC={Data.GeneralInfo.BytecodeVersion} pages={Data.EmbeddedTextures.Count} tpag={Data.TexturePageItems.Count}");
for (int i = 0; i < Data.EmbeddedTextures.Count; i++) {
    var t = Data.EmbeddedTextures[i];
    try { ScriptMessage($"[{tag}] page{i} {t.TextureData.Width}x{t.TextureData.Height} genMips={t.GeneratedMips} scaled={t.Scaled}"); } catch (Exception e) { ScriptMessage($"[{tag}] page{i} err {e.Message}"); }
}
var worker = new TextureWorker();
foreach (var bg in Data.Backgrounds) {
    if (bg.Name.Content != "TILES") continue;
    var tp = bg.Texture;
    ScriptMessage($"[{tag}] TILES tw={bg.GMS2TileWidth} th={bg.GMS2TileHeight} obx={bg.GMS2OutputBorderX} oby={bg.GMS2OutputBorderY} cols={bg.GMS2TileColumns} items={bg.GMS2ItemsPerTileCount} count={bg.GMS2TileCount} frameUs={bg.GMS2FrameLength} ids={bg.GMS2TileIds.Count} transparent={bg.Transparent} smooth={bg.Smooth} preload={bg.Preload}");
    if (tp == null) { ScriptMessage($"[{tag}] TILES texture NULL"); continue; }
    ScriptMessage($"[{tag}] TPAG src=({tp.SourceX},{tp.SourceY},{tp.SourceWidth},{tp.SourceHeight}) tgt=({tp.TargetX},{tp.TargetY},{tp.TargetWidth},{tp.TargetHeight}) bound=({tp.BoundingWidth},{tp.BoundingHeight}) page={Data.EmbeddedTextures.IndexOf(tp.TexturePage)}");
    worker.ExportAsPNG(tp, Path.Combine(outDir, tag + "_TILES.png"), null, true);
    // also export whole page holding it
    var pg = tp.TexturePage;
    File.WriteAllBytes(Path.Combine(outDir, tag + "_page.png"), pg.TextureData.Image.ConvertToPng().ToSpan().ToArray());
}
foreach (var s in Data.Sprites) {
    if (!s.Name.Content.StartsWith("sTileset") && s.Name.Content != "sTiles") continue;
    var tp = s.Textures.Count > 0 ? s.Textures[0].Texture : null;
    ScriptMessage($"[{tag}] sprite {s.Name.Content} {s.Width}x{s.Height} tpag=" + (tp == null ? "null" : $"src=({tp.SourceX},{tp.SourceY},{tp.SourceWidth},{tp.SourceHeight}) page={Data.EmbeddedTextures.IndexOf(tp.TexturePage)}"));
}
foreach (var r in Data.Rooms) {
    foreach (var l in r.Layers) {
        if (l.LayerType == UndertaleRoom.LayerType.Tiles) ScriptMessage($"[{tag}] room {r.Name.Content} tilelayer {l.LayerName.Content} depth={l.LayerDepth} bg={l.TilesData.Background?.Name?.Content} {l.TilesData.TilesX}x{l.TilesData.TilesY}");
    }
}
