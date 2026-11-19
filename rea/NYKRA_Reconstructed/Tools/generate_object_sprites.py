"""Import the exported object sprites into the vertical slice (plan section 2, milestone 3.2c).

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/generate_object_sprites.py [exported_dir]

exported_dir is the output of Tools/ExportSpritesRestored.csx (default
%TEMP%/claude-tilediag/sprites): one PNG per frame with the original canvas restored, and
sprites.json. For every sprite not already in the project this writes
GameMakerProject/sprites/<name>/<frame guid>.png, layers/<frame guid>/<layer guid>.png and
<name>.yy in the LTS 2026 format, and registers it in the .yyp.

Sprites are NOT linked to any object (plan row P3): an object with a sprite and no events
animates on its own. Frame/layer GUIDs are derived from the sprite name, so reruns are stable.
"""
import json
import os
import shutil
import struct
import sys
import uuid
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject"
METADATA = REA / "RecoveredAssets" / "Metadata" / "sprites-metadata.json"
DEFAULT_EXPORT = Path(os.environ.get("TEMP", ".")) / "claude-tilediag" / "sprites"
SPEED_TYPES = {"FramesPerSecond": 0, "FramesPerGameFrame": 1}


def guid(name, kind, index=0):
    return str(uuid.uuid5(uuid.NAMESPACE_URL, f"nykra/{name}/{kind}/{index}"))


def png_size(path):
    header = path.read_bytes()[:24]
    if header[:8] != b"\x89PNG\r\n\x1a\n":
        raise ValueError(f"not a PNG: {path}")
    return struct.unpack(">II", header[16:24])


def sprite_yy(meta, exported):
    name = meta["Name"]
    if meta["SepMasks"] != "AxisAlignedRect":
        raise ValueError(f"{name}: unsupported SepMasks {meta['SepMasks']}")
    count = meta["FrameCount"]
    if len(exported["frames"]) != count:
        raise ValueError(f"{name}: exported {len(exported['frames'])} frames, metadata says {count}")
    frames = ",\n".join(
        f'    {{"$GMSpriteFrame":"v1","%Name":"{guid(name, "frame", i)}","name":"{guid(name, "frame", i)}",'
        f'"resourceType":"GMSpriteFrame","resourceVersion":"2.0",}}' for i in range(count))
    layer = guid(name, "layer")
    keys = ",\n".join(
        '            {"$Keyframe<SpriteFrameKeyframe>":"","Channels":{"0":{"$SpriteFrameKeyframe":"",'
        f'"Id":{{"name":"{guid(name, "frame", i)}","path":"sprites/{name}/{name}.yy",}},'
        '"resourceType":"SpriteFrameKeyframe","resourceVersion":"2.0",},},"Disabled":false,'
        f'"id":"{guid(name, "key", i)}","IsCreationKey":false,"Key":{float(i)},"Length":1.0,'
        '"resourceType":"Keyframe<SpriteFrameKeyframe>","resourceVersion":"2.0","Stretch":false,}'
        for i in range(count))
    speed_type = SPEED_TYPES[meta["GMS2PlaybackSpeedType"]]
    return (
        "{\n"
        '  "$GMSprite":"v2",\n'
        f'  "%Name":"{name}",\n'
        f'  "bboxMode":{meta["BBoxMode"]},\n'
        f'  "bbox_bottom":{meta["MarginBottom"]},\n'
        f'  "bbox_left":{meta["MarginLeft"]},\n'
        f'  "bbox_right":{meta["MarginRight"]},\n'
        f'  "bbox_top":{meta["MarginTop"]},\n'
        '  "collisionKind":1,\n'
        '  "collisionTolerance":0,\n'
        '  "DynamicTexturePage":false,\n'
        '  "edgeFiltering":false,\n'
        '  "For3D":false,\n'
        '  "frames":[\n' + frames + ",\n  ],\n"
        '  "gridX":0,\n'
        '  "gridY":0,\n'
        f'  "height":{meta["Height"]},\n'
        '  "HTile":false,\n'
        '  "layers":[\n'
        f'    {{"$GMImageLayer":"","%Name":"{layer}","blendMode":0,"displayName":"default","isLocked":false,'
        f'"name":"{layer}","opacity":100.0,"resourceType":"GMImageLayer","resourceVersion":"2.0","visible":true,}},\n'
        "  ],\n"
        f'  "name":"{name}",\n'
        '  "nineSlice":null,\n'
        '  "origin":9,\n'
        '  "parent":{\n    "name":"Sprites",\n    "path":"folders/Sprites.yy",\n  },\n'
        '  "preMultiplyAlpha":false,\n'
        '  "resourceType":"GMSprite",\n'
        '  "resourceVersion":"2.0",\n'
        '  "sequence":{\n'
        '    "$GMSequence":"v1",\n'
        f'    "%Name":"{name}",\n'
        '    "autoRecord":true,\n'
        '    "backdropHeight":768,\n'
        '    "backdropImageOpacity":0.5,\n'
        '    "backdropImagePath":"",\n'
        '    "backdropWidth":1366,\n'
        '    "backdropXOffset":0.0,\n'
        '    "backdropYOffset":0.0,\n'
        '    "events":{\n      "$KeyframeStore<MessageEventKeyframe>":"",\n      "Keyframes":[],\n'
        '      "resourceType":"KeyframeStore<MessageEventKeyframe>",\n      "resourceVersion":"2.0",\n    },\n'
        '    "eventStubScript":null,\n'
        '    "eventToFunction":{},\n'
        f'    "length":{float(count)},\n'
        '    "lockOrigin":false,\n'
        '    "moments":{\n      "$KeyframeStore<MomentsEventKeyframe>":"",\n      "Keyframes":[],\n'
        '      "resourceType":"KeyframeStore<MomentsEventKeyframe>",\n      "resourceVersion":"2.0",\n    },\n'
        f'    "name":"{name}",\n'
        '    "playback":1,\n'
        f'    "playbackSpeed":{float(meta["GMS2PlaybackSpeed"])},\n'
        f'    "playbackSpeedType":{speed_type},\n'
        '    "resourceType":"GMSequence",\n'
        '    "resourceVersion":"2.0",\n'
        '    "showBackdrop":true,\n'
        '    "showBackdropImage":false,\n'
        '    "timeUnits":1,\n'
        '    "tracks":[\n'
        '      {"$GMSpriteFramesTrack":"","builtinName":0,"events":[],"inheritsTrackColour":true,"interpolation":1,'
        '"isCreationTrack":false,"keyframes":{"$KeyframeStore<SpriteFrameKeyframe>":"","Keyframes":[\n'
        + keys + ",\n"
        '          ],"resourceType":"KeyframeStore<SpriteFrameKeyframe>","resourceVersion":"2.0",},"modifiers":[],'
        '"name":"frames","resourceType":"GMSpriteFramesTrack","resourceVersion":"2.0","spriteId":null,'
        '"trackColour":0,"tracks":[],"traits":0,},\n'
        "    ],\n"
        '    "visibleRange":null,\n'
        '    "volume":1.0,\n'
        f'    "xorigin":{meta["OriginX"]},\n'
        f'    "yorigin":{meta["OriginY"]},\n'
        "  },\n"
        '  "swatchColours":null,\n'
        '  "swfPrecision":2.525,\n'
        '  "textureGroupId":{\n    "name":"Default",\n    "path":"texturegroups/Default",\n  },\n'
        '  "type":0,\n'
        '  "VTile":false,\n'
        f'  "width":{meta["Width"]},\n'
        "}\n"
    )


def main(argv):
    export_dir = Path(argv[1]) if len(argv) > 1 else DEFAULT_EXPORT
    exported = {s["name"]: s for s in json.loads((export_dir / "sprites.json").read_text(encoding="utf-8"))}
    metadata = {m["Name"]: m for m in json.loads(METADATA.read_text(encoding="utf-8"))}
    written = []
    for name, sprite in exported.items():
        if (PROJECT / "sprites" / name / f"{name}.yy").exists():
            continue  # already in the project (sMal_Tree_1, sMal_Tree_1l, sTiles)
        meta = metadata[name]
        for key, value in (("width", "Width"), ("height", "Height"), ("originX", "OriginX"), ("originY", "OriginY")):
            if sprite[key] != meta[value]:
                raise ValueError(f"{name}: exported {key} {sprite[key]} != metadata {meta[value]}")
        out = PROJECT / "sprites" / name
        for i in range(meta["FrameCount"]):
            source = export_dir / name / f"{name}_{i}.png"
            if png_size(source) != (meta["Width"], meta["Height"]):
                raise ValueError(f"{name} frame {i}: PNG {png_size(source)} is not the canvas "
                                 f"{(meta['Width'], meta['Height'])}")
            frame_png = out / f"{guid(name, 'frame', i)}.png"
            layer_png = out / "layers" / guid(name, "frame", i) / f"{guid(name, 'layer')}.png"
            layer_png.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source, frame_png)
            shutil.copyfile(source, layer_png)
        (out / f"{name}.yy").write_text(sprite_yy(meta, sprite), encoding="utf-8", newline="\n")
        written.append(name)
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp",
               add_resources=[(n, f"sprites/{n}/{n}.yy") for n in written])
    print(f"wrote {len(written)} sprites: {', '.join(written)}")


if __name__ == "__main__":
    main(sys.argv)
