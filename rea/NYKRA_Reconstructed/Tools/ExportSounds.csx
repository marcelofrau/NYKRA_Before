// UTMT CLI script: exports the embedded audio of the wanted sounds plus a JSON with their properties,
// for Tools/generate_sounds.py (plan section 2, milestone 3.3 player stage 2). Read-only on the data.win.
// Env: SOUNDS_OUT   output directory (one audio file per sound, plus sounds.json)
//      SOUNDS_LIST  comma-separated sound names
using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using UndertaleModLib.Models;

EnsureDataLoaded();
string outDir = Environment.GetEnvironmentVariable("SOUNDS_OUT");
var wanted = new HashSet<string>((Environment.GetEnvironmentVariable("SOUNDS_LIST") ?? "").Split(',', StringSplitOptions.RemoveEmptyEntries));
Directory.CreateDirectory(outDir);
var json = new StringBuilder("[\n");
bool first = true;
foreach (var s in Data.Sounds)
{
    string name = s.Name.Content;
    if (!wanted.Contains(name)) continue;
    byte[] bytes = s.AudioFile?.Data;
    if (bytes == null)
    {
        Console.WriteLine($"NO EMBEDDED AUDIO: {name} (flags {s.Flags}, group {s.GroupID})");
        continue;
    }
    string ext = bytes.Length > 4 && bytes[0] == 'R' && bytes[1] == 'I' && bytes[2] == 'F' && bytes[3] == 'F' ? "wav"
               : bytes.Length > 4 && bytes[0] == 'O' && bytes[1] == 'g' && bytes[2] == 'g' && bytes[3] == 'S' ? "ogg" : "bin";
    File.WriteAllBytes(Path.Combine(outDir, name + "." + ext), bytes);
    if (!first) json.Append(",\n");
    first = false;
    json.Append($"  {{\"name\":\"{name}\",\"file\":\"{name}.{ext}\",\"bytes\":{bytes.Length},\"flags\":\"{s.Flags}\"," +
                $"\"volume\":{s.Volume.ToString(System.Globalization.CultureInfo.InvariantCulture)}," +
                $"\"preload\":{s.Preload.ToString().ToLowerInvariant()},\"group\":{s.GroupID}}}");
    Console.WriteLine($"exported {name}: {ext}, {bytes.Length} bytes");
}
json.Append("\n]\n");
File.WriteAllText(Path.Combine(outDir, "sounds.json"), json.ToString());
