"""Copies original object events into the vertical slice and writes the object .yy.

Usage (from repo root):
    python -B rea/NYKRA_Reconstructed/Tools/generate_player_object.py

The event files at the repository root (oPlayer/*.gml, parNote/*.gml) are the author's own source, so
they are copied verbatim under a one-line header (plan section 2, milestone 3.3). What makes them run
here is everything they call: the reconstructed scripts, provisional_player_stubs and the imported assets.
The generated .yy files keep the original flags, parent, sprite and mask from objects-metadata.json.
"""
import sys
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
from yyp_edit import update_yyp  # noqa: E402

REA = TOOLS.parent
REPO = REA.parents[1]
PROJECT = REA / "GameMakerProject"
EVENT_TYPES = {"Create": 0, "Destroy": 1, "Alarm": 2, "Step": 3, "Collision": 4, "Other": 7, "Draw": 8, "KeyPress": 9}
# object -> (parent object or None, sprite or None, mask sprite or None, persistent)
OBJECTS = {
    "oPlayer": ("parEntity", "sBnd_player", "sBnd_player", True),
    "parNote": (None, "sNote_Small", None, False),
    "oNote": ("parNote", "sNote_Small", None, False),  # no events of its own (only an empty PreCreate)
}


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


def ref(kind, name):
    return f'{{"name":"{name}","path":"{kind}/{name}/{name}.yy",}}' if name else "null"


def object_yy(name, events, parent, sprite, mask, persistent):
    return (
        "{\n"
        '  "$GMObject": "",\n'
        f'  "%Name": "{name}",\n'
        '  "eventList": [\n' + "\n".join(events) + "\n  ],\n"
        '  "managed": true,\n'
        f'  "name": "{name}",\n'
        '  "overriddenProperties": [],\n'
        '  "parent": {\n    "name": "Objects",\n    "path": "folders/Objects.yy",\n  },\n'
        f'  "parentObjectId": {ref("objects", parent)},\n'
        f'  "persistent": {"true" if persistent else "false"},\n'
        '  "physicsAngularDamping": 0.1,\n  "physicsDensity": 0.5,\n  "physicsFriction": 0.2,\n  "physicsGroup": 1,\n'
        '  "physicsKinematic": false,\n  "physicsLinearDamping": 0.1,\n  "physicsObject": false,\n'
        '  "physicsRestitution": 0.1,\n  "physicsSensor": false,\n  "physicsShape": 1,\n'
        '  "physicsShapePoints": [],\n  "physicsStartAwake": true,\n  "properties": [],\n'
        '  "resourceType": "GMObject",\n  "resourceVersion": "2.0",\n  "solid": false,\n'
        f'  "spriteId": {ref("sprites", sprite)},\n'
        f'  "spriteMaskId": {ref("sprites", mask)},\n'
        '  "visible": true,\n'
        "}\n"
    )


def generate(name, parent, sprite, mask, persistent):
    out = PROJECT / "objects" / name
    out.mkdir(parents=True, exist_ok=True)
    files = sorted((REPO / name).glob("*.gml"))
    events = []
    for path in files:
        text = path.read_text(encoding="utf-8")
        (out / path.name).write_text(f"// Original {name}/{path.name}, copied verbatim by Tools/generate_player_object.py\n{text}",
                                     encoding="utf-8", newline="\n")
        events.append(event_yy(path))
    (out / f"{name}.yy").write_text(object_yy(name, events, parent, sprite, mask, persistent), encoding="utf-8", newline="\n")
    print(f"wrote {name} with {len(files)} events")


def main():
    for name, config in OBJECTS.items():
        generate(name, *config)
    update_yyp(PROJECT / "NYKRA_VerticalSlice.yyp",
               add_resources=[(n, f"objects/{n}/{n}.yy") for n in OBJECTS])


if __name__ == "__main__":
    main()
