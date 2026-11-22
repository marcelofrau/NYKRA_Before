"""Import sMal_bg1..4 and register the two sky tile scripts in the vertical slice.

Usage (from repo root):
    python -P rea/NYKRA_Reconstructed/Tools/import_maldis_sky.py

The recovered textures are cropped to their non-empty bounds. This restores the
original sprite canvas from sprites-metadata.json before writing GameMaker frames.
"""
import json
import sys
import uuid
from pathlib import Path

from PIL import Image

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject"
META = REA / "RecoveredAssets/Metadata/sprites-metadata.json"
TEXTURES = REA / "RecoveredAssets/Textures/Sprites"
NAMES = ("sMal_bg1", "sMal_bg2", "sMal_bg3", "sMal_bg4")
SCRIPTS = ("draw_bg_tiled_h", "draw_bg_tiled_hwave")


def guid(name, kind):
    return str(uuid.uuid5(uuid.NAMESPACE_URL, f"nykra/{name}/{kind}/0"))


def sprite_yy(meta, frame, layer, key):
    return (
        "{\n"
        '  "$GMSprite":"v2",\n'
        f'  "%Name":"{meta["Name"]}",\n'
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
        '  "frames":[\n'
        f'    {{"$GMSpriteFrame":"v1","%Name":"{frame}","name":"{frame}",'
        '"resourceType":"GMSpriteFrame","resourceVersion":"2.0",},\n'
        '  ],\n'
        '  "gridX":0,\n'
        '  "gridY":0,\n'
        f'  "height":{meta["Height"]},\n'
        '  "HTile":false,\n'
        '  "layers":[\n'
        f'    {{"$GMImageLayer":"","%Name":"{layer}","blendMode":0,"displayName":"default",'
        f'"isLocked":false,"name":"{layer}","opacity":100.0,"resourceType":"GMImageLayer",'
        '"resourceVersion":"2.0","visible":true,},\n'
        '  ],\n'
        f'  "name":"{meta["Name"]}",\n'
        '  "nineSlice":null,\n'
        '  "origin":9,\n'
        '  "parent":{\n    "name":"Sprites",\n    "path":"folders/Sprites.yy",\n  },\n'
        '  "preMultiplyAlpha":false,\n'
        '  "resourceType":"GMSprite",\n'
        '  "resourceVersion":"2.0",\n'
        '  "sequence":{\n'
        '    "$GMSequence":"v1",\n'
        f'    "%Name":"{meta["Name"]}",\n'
        '    "autoRecord":true,\n'
        '    "backdropHeight":768,\n'
        '    "backdropImageOpacity":0.5,\n'
        '    "backdropImagePath":"",\n'
        '    "backdropWidth":1366,\n'
        '    "backdropXOffset":0.0,\n'
        '    "backdropYOffset":0.0,\n'
        '    "events":{"$KeyframeStore<MessageEventKeyframe>":"","Keyframes":[],'
        '"resourceType":"KeyframeStore<MessageEventKeyframe>","resourceVersion":"2.0",},\n'
        '    "eventStubScript":null,\n'
        '    "eventToFunction":{},\n'
        '    "length":1.0,\n'
        '    "lockOrigin":false,\n'
        '    "moments":{"$KeyframeStore<MomentsEventKeyframe>":"","Keyframes":[],'
        '"resourceType":"KeyframeStore<MomentsEventKeyframe>","resourceVersion":"2.0",},\n'
        f'    "name":"{meta["Name"]}",\n'
        '    "playback":1,\n'
        f'    "playbackSpeed":{float(meta["GMS2PlaybackSpeed"])},\n'
        f'    "playbackSpeedType":{0 if meta["GMS2PlaybackSpeedType"] == "FramesPerSecond" else 1},\n'
        '    "resourceType":"GMSequence",\n'
        '    "resourceVersion":"2.0",\n'
        '    "showBackdrop":true,\n'
        '    "showBackdropImage":false,\n'
        '    "timeUnits":1,\n'
        '    "tracks":[\n'
        '      {"$GMSpriteFramesTrack":"","builtinName":0,"events":[],"inheritsTrackColour":true,'
        '"interpolation":1,"isCreationTrack":false,"keyframes":'
        '{"$KeyframeStore<SpriteFrameKeyframe>":"","Keyframes":[\n'
        '            {"$Keyframe<SpriteFrameKeyframe>":"","Channels":{"0":'
        '{"$SpriteFrameKeyframe":"","Id":{"name":"' + frame + '","path":"sprites/'
        + meta["Name"] + '/' + meta["Name"] + '.yy",},"resourceType":"SpriteFrameKeyframe",'
        '"resourceVersion":"2.0",},},"Disabled":false,"id":"' + key + '","IsCreationKey":false,'
        '"Key":0.0,"Length":1.0,"resourceType":"Keyframe<SpriteFrameKeyframe>",'
        '"resourceVersion":"2.0","Stretch":false,},\n'
        '          ],"resourceType":"KeyframeStore<SpriteFrameKeyframe>","resourceVersion":"2.0",},'
        '"modifiers":[],"name":"frames","resourceType":"GMSpriteFramesTrack","resourceVersion":"2.0",'
        '"spriteId":null,"trackColour":0,"tracks":[],"traits":0,},\n'
        '    ],\n'
        '    "visibleRange":null,\n'
        '    "volume":1.0,\n'
        f'    "xorigin":{meta["OriginX"]},\n'
        f'    "yorigin":{meta["OriginY"]},\n'
        '  },\n'
        '  "swatchColours":null,\n'
        '  "swfPrecision":2.525,\n'
        '  "textureGroupId":{"name":"Default","path":"texturegroups/Default",},\n'
        '  "type":0,\n'
        '  "VTile":false,\n'
        f'  "width":{meta["Width"]},\n'
        "}\n"
    )


def main():
    metadata = {m["Name"]: m for m in json.loads(META.read_text(encoding="utf-8"))}
    additions = []
    for name in NAMES:
        meta = metadata[name]
        frame, layer, key = guid(name, "frame"), guid(name, "layer"), guid(name, "key")
        out = PROJECT / "sprites" / name
        out.mkdir(parents=True, exist_ok=True)
        canvas = Image.new("RGBA", (meta["Width"], meta["Height"]), (0, 0, 0, 0))
        texture = Image.open(TEXTURES / name / f"{name}_0.png").convert("RGBA")
        canvas.paste(texture, (meta["MarginLeft"], meta["MarginTop"]))
        canvas.save(out / f"{frame}.png")
        layer_png = out / "layers" / frame / f"{layer}.png"
        layer_png.parent.mkdir(parents=True, exist_ok=True)
        canvas.save(layer_png)
        (out / f"{name}.yy").write_text(sprite_yy(meta, frame, layer, key), encoding="utf-8", newline="\n")
        additions.append((name, f"sprites/{name}/{name}.yy"))
    for name in SCRIPTS:
        additions.append((name, f"scripts/{name}/{name}.yy"))
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp", add_resources=additions)
    print(f"imported {len(NAMES)} sky sprites; registered {len(SCRIPTS)} scripts")


if __name__ == "__main__":
    main()
