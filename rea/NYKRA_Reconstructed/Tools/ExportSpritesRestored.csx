// UTMT CLI script: exports sprite frames with their canvas restored plus a JSON with the
// per-frame texture-page data, for the sprite importer (plan section 2, milestone 3.2c).
// Read-only on the data.win.
// Env: SPRITES_OUT  output directory (one folder per sprite, plus sprites.json)
//      SPRITES_LIST comma-separated sprite names
using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using UndertaleModLib.Models;
using UndertaleModLib.Util;

EnsureDataLoaded();
string outDir = Environment.GetEnvironmentVariable("SPRITES_OUT");
var wanted = new HashSet<string>((Environment.GetEnvironmentVariable("SPRITES_LIST") ?? "").Split(',', StringSplitOptions.RemoveEmptyEntries));
Directory.CreateDirectory(outDir);
var worker = new TextureWorker();
var json = new StringBuilder("[\n");
bool first = true;
foreach (var s in Data.Sprites) {
    if (!wanted.Contains(s.Name.Content)) continue;
    string dir = Path.Combine(outDir, s.Name.Content);
    Directory.CreateDirectory(dir);
    var frames = new List<string>();
    for (int i = 0; i < s.Textures.Count; i++) {
        var tp = s.Textures[i].Texture;
        if (tp == null) { frames.Add("null"); continue; }
        worker.ExportAsPNG(tp, Path.Combine(dir, s.Name.Content + "_" + i + ".png"), null, true);
        frames.Add($"{{\"src\":[{tp.SourceX},{tp.SourceY},{tp.SourceWidth},{tp.SourceHeight}],\"target\":[{tp.TargetX},{tp.TargetY},{tp.TargetWidth},{tp.TargetHeight}],\"bounding\":[{tp.BoundingWidth},{tp.BoundingHeight}]}}");
    }
    if (!first) json.Append(",\n");
    first = false;
    json.Append($"  {{\"name\":\"{s.Name.Content}\",\"width\":{s.Width},\"height\":{s.Height},\"originX\":{s.OriginX},\"originY\":{s.OriginY},\"frames\":[{string.Join(",", frames)}]}}");
    ScriptMessage($"exported {s.Name.Content}: {s.Textures.Count} frames");
}
json.Append("\n]\n");
File.WriteAllText(Path.Combine(outDir, "sprites.json"), json.ToString());
