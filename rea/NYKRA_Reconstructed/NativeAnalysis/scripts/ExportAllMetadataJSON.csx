using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using Newtonsoft.Json;
using UndertaleModLib.Models;

EnsureDataLoaded();

string outDir = @"C:\Users\fraumar\workspace\_non_work_\NYKRA_Before\rea\NYKRA_Reconstructed\RecoveredAssets\Metadata";
Directory.CreateDirectory(outDir);

var general = new {
    Name = Data.GeneralInfo?.Name?.Content,
    FileName = Data.GeneralInfo?.FileName?.Content,
    Config = Data.GeneralInfo?.Config?.Content,
    BytecodeVersion = Data.GeneralInfo?.BytecodeVersion,
    IsYYC = Data.IsYYC(),
    Major = Data.GeneralInfo?.Major,
    Minor = Data.GeneralInfo?.Minor,
    Release = Data.GeneralInfo?.Release,
    Build = Data.GeneralInfo?.Build,
    DefaultWindowWidth = Data.GeneralInfo?.DefaultWindowWidth,
    DefaultWindowHeight = Data.GeneralInfo?.DefaultWindowHeight,
    InfoFlags = Data.GeneralInfo?.Info.ToString(),
    RoomOrder = Data.GeneralInfo?.RoomOrder?.Select(r => r?.Resource?.Name?.Content).ToList()
};
File.WriteAllText(Path.Combine(outDir, "general-info.json"), JsonConvert.SerializeObject(general, Formatting.Indented));

var sprites = Data.Sprites.Select((s, idx) => s == null ? null : new {
    Index = idx,
    Name = s.Name?.Content,
    Width = s.Width,
    Height = s.Height,
    MarginLeft = s.MarginLeft,
    MarginRight = s.MarginRight,
    MarginTop = s.MarginTop,
    MarginBottom = s.MarginBottom,
    OriginX = s.OriginX,
    OriginY = s.OriginY,
    BBoxMode = s.BBoxMode,
    SepMasks = s.SepMasks.ToString(),
    GMS2PlaybackSpeed = s.GMS2PlaybackSpeed,
    GMS2PlaybackSpeedType = s.GMS2PlaybackSpeedType.ToString(),
    FrameCount = s.Textures?.Count ?? 0,
    MaskCount = s.CollisionMasks?.Count ?? 0
}).ToList();
File.WriteAllText(Path.Combine(outDir, "sprites-metadata.json"), JsonConvert.SerializeObject(sprites, Formatting.Indented));

var sounds = Data.Sounds.Select((s, idx) => s == null ? null : new {
    Index = idx,
    Name = s.Name?.Content,
    Flags = s.Flags.ToString(),
    Type = s.Type?.Content,
    File = s.File?.Content,
    Volume = s.Volume,
    Pitch = s.Pitch,
    GroupID = s.GroupID,
    AudioID = s.AudioID,
    AudioGroup = s.AudioGroup?.Name?.Content
}).ToList();
File.WriteAllText(Path.Combine(outDir, "sounds-metadata.json"), JsonConvert.SerializeObject(sounds, Formatting.Indented));

var objects = Data.GameObjects.Select((o, idx) => o == null ? null : new {
    Index = idx,
    Name = o.Name?.Content,
    Sprite = o.Sprite?.Name?.Content,
    Visible = o.Visible,
    Solid = o.Solid,
    Depth = o.Depth,
    Persistent = o.Persistent,
    Parent = o.ParentId?.Name?.Content,
    TextureMask = o.TextureMaskId?.Name?.Content,
    UsesPhysics = o.UsesPhysics,
    IsSensor = o.IsSensor,
    Events = o.Events?.Select((evList, evTypeIdx) => new {
        EventType = ((EventType)evTypeIdx).ToString(),
        EventTypeIndex = evTypeIdx,
        SubEvents = evList?.Select(ev => new {
            EventSubtype = ev.EventSubtype,
            Actions = ev.Actions?.Select(a => a.CodeId?.Name?.Content).ToList()
        }).ToList()
    }).Where(x => x.SubEvents != null && x.SubEvents.Count > 0).ToList()
}).ToList();
File.WriteAllText(Path.Combine(outDir, "objects-metadata.json"), JsonConvert.SerializeObject(objects, Formatting.Indented));

var rooms = Data.Rooms.Select((r, idx) => r == null ? null : new {
    Index = idx,
    Name = r.Name?.Content,
    Caption = r.Caption?.Content,
    Width = r.Width,
    Height = r.Height,
    Speed = r.Speed,
    Persistent = r.Persistent,
    BackgroundColor = r.BackgroundColor,
    DrawBackgroundColor = r.DrawBackgroundColor,
    Flags = r.Flags.ToString(),
    Views = r.Views?.Where(v => v != null && v.Enabled).Select(v => new {
        ViewX = v.ViewX,
        ViewY = v.ViewY,
        ViewWidth = v.ViewWidth,
        ViewHeight = v.ViewHeight,
        PortX = v.PortX,
        PortY = v.PortY,
        PortWidth = v.PortWidth,
        PortHeight = v.PortHeight,
        ObjectId = v.ObjectId?.Name?.Content
    }).ToList(),
    GameObjects = r.GameObjects?.Select(go => new {
        InstanceID = go.InstanceID,
        Object = go.ObjectDefinition?.Name?.Content,
        X = go.X,
        Y = go.Y,
        ScaleX = go.ScaleX,
        ScaleY = go.ScaleY,
        Color = go.Color,
        Rotation = go.Rotation,
        ImageSpeed = go.ImageSpeed,
        ImageIndex = go.ImageIndex
    }).ToList(),
    Layers = r.Layers?.Select(l => new {
        LayerName = l.LayerName?.Content,
        LayerId = l.LayerId,
        LayerType = l.LayerType.ToString(),
        LayerDepth = l.LayerDepth,
        XOffset = l.XOffset,
        YOffset = l.YOffset,
        HSpeed = l.HSpeed,
        VSpeed = l.VSpeed,
        IsVisible = l.IsVisible,
        Instances = l.InstancesData?.Instances?.Select(inst => new {
            InstanceID = inst.InstanceID,
            Object = inst.ObjectDefinition?.Name?.Content,
            X = inst.X,
            Y = inst.Y,
            ScaleX = inst.ScaleX,
            ScaleY = inst.ScaleY,
            Color = inst.Color,
            Rotation = inst.Rotation
        }).ToList()
    }).ToList()
}).ToList();
File.WriteAllText(Path.Combine(outDir, "rooms-metadata.json"), JsonConvert.SerializeObject(rooms, Formatting.Indented));

ScriptMessage("Exported all metadata JSON files successfully.");
