"""Small textual editor for the resources and folders lists of the vertical-slice .yyp.

The .yyp is not strict JSON (trailing commas), and the IDE rewrites it, so this only
touches the two lists it needs and keeps the IDE's one-entry-per-line layout.
"""
import re
from pathlib import Path


def _block(text, key):
    match = re.search(r'("%s":\[\n)(.*?)(\n  \],\n)' % key, text, re.S)
    if not match:
        raise ValueError(f"{key} block not found in .yyp")
    return match


def _name(line):
    return re.search(r'"name":"([^"]+)"', line).group(1)


def update_yyp(yyp_path, add_resources=(), remove_resources=(), add_folders=()):
    """add_resources: [(name, relative .yy path)]; add_folders: [(name, folderPath)]."""
    yyp = Path(yyp_path)
    text = yyp.read_text(encoding="utf-8")
    match = _block(text, "resources")
    by_name = {_name(line): line for line in match.group(2).split("\n") if line.strip()}
    for name in remove_resources:
        by_name.pop(name, None)
    for name, path in add_resources:
        by_name[name] = f'    {{"id":{{"name":"{name}","path":"{path}",}},}},'
    ordered = "\n".join(by_name[key] for key in sorted(by_name, key=str.casefold))
    text = text[:match.start(2)] + ordered + text[match.end(2):]
    for name, folder_path in add_folders:
        match = _block(text, "Folders")
        if f'"name":"{name}"' not in match.group(2):
            line = (f'    {{"$GMFolder":"","%Name":"{name}","folderPath":"{folder_path}",'
                    f'"name":"{name}","resourceType":"GMFolder","resourceVersion":"2.0",}},')
            text = text[:match.end(2)] + "\n" + line + text[match.end(2):]
    yyp.write_text(text, encoding="utf-8", newline="\n")
