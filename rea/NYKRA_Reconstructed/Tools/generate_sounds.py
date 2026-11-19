"""Imports the exported sounds into the vertical slice (plan section 2, milestone 3.3 player stage 2).

Usage (from repo root):
    python -B rea/NYKRA_Reconstructed/Tools/generate_sounds.py [exported_dir]

exported_dir is the output of Tools/ExportSounds.csx (default %TEMP%/claude-tilediag/sounds_player): one
audio file per sound plus sounds.json. For every sound not already in the project this copies the audio to
GameMakerProject/sounds/<name>/, writes <name>.yy and registers it in the .yyp. Sample rate, channels,
bit depth and duration are read from the WAV / OGG headers.

The .yy layout follows the GameMaker LTS 2026 GMSound format as remembered, not copied from a file the
IDE saved (none existed when this was written): if the IDE rejects it, fix SOUND_YY and rerun.
"""
import json
import os
import shutil
import struct
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject"
DEFAULT_EXPORT = Path(os.environ.get("TEMP", ".")) / "claude-tilediag" / "sounds_player"
FOLDER = ("Sounds", "folders/Sounds.yy")


def wav_info(data):
    """(channels, sample rate, bits per sample, duration seconds) of a PCM WAV."""
    if data[:4] != b"RIFF" or data[8:12] != b"WAVE":
        raise ValueError("not a WAV file")
    pos, fmt, size = 12, None, None
    while pos + 8 <= len(data):
        chunk, length = data[pos:pos + 4], struct.unpack("<I", data[pos + 4:pos + 8])[0]
        body = pos + 8
        if chunk == b"fmt ":
            _tag, channels, rate, _byte_rate, block, bits = struct.unpack("<HHIIHH", data[body:body + 16])
            fmt = (channels, rate, bits, block)
        elif chunk == b"data":
            size = min(length, len(data) - body)
            break
        pos = body + length + (length & 1)
    if fmt is None or size is None:
        raise ValueError("WAV without fmt or data chunk")
    channels, rate, bits, block = fmt
    return channels, rate, bits, size / block / rate


def ogg_info(data):
    """(channels, sample rate, 16, duration seconds) of an Ogg Vorbis file."""
    i = data.find(b"\x01vorbis")
    if i < 0:
        raise ValueError("not an Ogg Vorbis file")
    channels, rate = data[i + 11], struct.unpack("<I", data[i + 12:i + 16])[0]
    last = data.rfind(b"OggS")
    granule = struct.unpack("<q", data[last + 6:last + 14])[0]
    return channels, rate, 16, granule / rate


def sound_yy(name, filename, info, meta):
    channels, rate, bits, duration = info
    compressed = filename.endswith(".ogg")
    return (
        "{\n"
        '  "$GMSound":"",\n'
        f'  "%Name":"{name}",\n'
        '  "audioGroupId":{\n    "name":"audiogroup_default",\n    "path":"audiogroups/audiogroup_default",\n  },\n'
        f'  "bitDepth":{0 if bits == 8 else 1},\n'
        '  "bitRate":128,\n'
        f'  "compression":{1 if compressed else 0},\n'
        '  "conversionMode":0,\n'
        f'  "duration":{duration:.6f},\n'
        f'  "name":"{name}",\n'
        f'  "parent":{{\n    "name":"{FOLDER[0]}",\n    "path":"{FOLDER[1]}",\n  }},\n'
        f'  "preload":{"true" if meta.get("preload") else "false"},\n'
        '  "resourceType":"GMSound",\n'
        '  "resourceVersion":"2.0",\n'
        f'  "sampleRate":{rate},\n'
        f'  "soundFile":"{filename}",\n'
        f'  "type":{0 if channels == 1 else 1},\n'
        f'  "volume":{float(meta["volume"])},\n'
        "}\n"
    )


def main(argv):
    export_dir = Path(argv[1]) if len(argv) > 1 else DEFAULT_EXPORT
    exported = json.loads((export_dir / "sounds.json").read_text(encoding="utf-8"))
    written = []
    for meta in exported:
        name, filename = meta["name"], meta["file"]
        data = (export_dir / filename).read_bytes()
        info = wav_info(data) if filename.endswith(".wav") else ogg_info(data)
        out = PROJECT / "sounds" / name
        out.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(export_dir / filename, out / filename)
        (out / f"{name}.yy").write_text(sound_yy(name, filename, info, meta), encoding="utf-8", newline="\n")
        written.append(name)
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp", add_resources=[(n, f"sounds/{n}/{n}.yy") for n in written],
               add_folders=[FOLDER])
    print(f"wrote {len(written)} sounds")


if __name__ == "__main__":
    main(sys.argv)
