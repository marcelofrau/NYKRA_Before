"""Copies the original oPlayer events into the vertical slice and writes oPlayer.yy.

Usage (from repo root):
    python -B rea/NYKRA_Reconstructed/Tools/generate_player_object.py

The 21 event files at the repository root (oPlayer/*.gml) are the author's own source, so they are
copied verbatim under a one-line header (plan section 2, milestone 3.3, player stage 1). What makes them
run here is everything they call: the reconstructed scripts, provisional_player_stubs and provisional_sounds.
"""
import re
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
SOURCE = REA.parents[1] / "oPlayer"
PROJECT = REA / "GameMakerProject"
EVENT_TYPES = {"Create": 0, "Destroy": 1, "Alarm": 2, "Step": 3, "Collision": 4, "Other": 7, "Draw": 8, "KeyPress": 9}


def event_of(path):
    kind, _, num = path.stem.partition("_")
    if kind == "Collision":
        return 4, 0, num  # the number is the collided object's name
    return EVENT_TYPES[kind], int(num), None


def event_yy(path):
    kind, num, target = event_of(path)
    collision = f'{{"name":"{target}","path":"objects/{target}/{target}.yy",}}' if target else "null"
    return (f'    {{"$GMEvent":"v1","%Name":"","collisionObjectId":{collision},"eventNum":{num},"eventType":{kind},'
            '"isDnD":false,"name":"","resourceType":"GMEvent","resourceVersion":"2.0",},')


def object_yy(events):
    return (
        "{\n"
        '  "$GMObject": "",\n'
        '  "%Name": "oPlayer",\n'
        '  "eventList": [\n' + "\n".join(events) + "\n  ],\n"
        '  "managed": true,\n'
        '  "name": "oPlayer",\n'
        '  "overriddenProperties": [],\n'
        '  "parent": {\n    "name": "Objects",\n    "path": "folders/Objects.yy",\n  },\n'
        '  "parentObjectId": {"name":"parEntity","path":"objects/parEntity/parEntity.yy",},\n'
        '  "persistent": true,\n'
        '  "physicsAngularDamping": 0.1,\n  "physicsDensity": 0.5,\n  "physicsFriction": 0.2,\n  "physicsGroup": 1,\n'
        '  "physicsKinematic": false,\n  "physicsLinearDamping": 0.1,\n  "physicsObject": false,\n'
        '  "physicsRestitution": 0.1,\n  "physicsSensor": false,\n  "physicsShape": 1,\n'
        '  "physicsShapePoints": [],\n  "physicsStartAwake": true,\n  "properties": [],\n'
        '  "resourceType": "GMObject",\n  "resourceVersion": "2.0",\n  "solid": false,\n'
        '  "spriteId": {"name":"sBnd_player","path":"sprites/sBnd_player/sBnd_player.yy",},\n'
        '  "spriteMaskId": {"name":"sBnd_player","path":"sprites/sBnd_player/sBnd_player.yy",},\n'
        '  "visible": true,\n'
        "}\n"
    )


def main():
    out = PROJECT / "objects" / "oPlayer"
    out.mkdir(parents=True, exist_ok=True)
    files = sorted(SOURCE.glob("*.gml"))
    events = []
    for path in files:
        text = path.read_text(encoding="utf-8")
        (out / path.name).write_text(f"// Original oPlayer/{path.name}, copied verbatim by Tools/generate_player_object.py\n{text}",
                                     encoding="utf-8", newline="\n")
        events.append(event_yy(path))
    (out / "oPlayer.yy").write_text(object_yy(events), encoding="utf-8", newline="\n")
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp", add_resources=[("oPlayer", "objects/oPlayer/oPlayer.yy")])
    print(f"wrote oPlayer with {len(files)} events")


if __name__ == "__main__":
    main()
