# Graph Report - NYKRA_Before  (2026-11-17)

## Corpus Check
- Large corpus: 72 files · ~941,849 words. Semantic extraction will be expensive (many Claude tokens). Consider running on a subfolder.

## Summary
- 416 nodes · 615 edges · 29 communities (11 shown, 18 thin omitted)
- Extraction: 90% EXTRACTED · 10% INFERRED · 0% AMBIGUOUS · INFERRED: 60 edges (avg confidence: 0.86)
- Token cost: 157,076 input · 0 output

## Community Hubs (Navigation)
- Python Tools & Codecs
- Level Format & map_load
- Save File Formats
- Repo & Recovery Workspace
- Original Game Design (README)
- Annotated goto_map & Save Scripts
- Raw Decompiled Load/Clear Scripts
- Recovery Status & YYC Evidence
- Ghidra Export Scripts
- Annotated map_load & load_game
- Raw Decompiled Save Scripts
- Save/Load Compat Tests
- Format Validator
- Annotated Collision Scripts
- Raw Collision Scripts
- Annotated ARRAY_COLLIDE
- Annotated load_CHARACTER
- Annotated map_save
- Raw ARRAY_COLLIDE
- Raw load_CHARACTER
- Raw map_save
- Annotated col_move_yeah
- Annotated load_CONTROL
- Annotated load_GENERAL
- Annotated save_GENERAL
- Raw col_move_yeah
- Raw load_CONTROL
- Raw load_GENERAL
- Raw save_GENERAL

## God Nodes (most connected - your core abstractions)
1. `Phase 3: Execution Plan and Handoff` - 23 edges
2. `Phase 1 Specification: Binary Formats & Core Infrastructure` - 17 edges
3. `SaveLoadCompatibilityTests` - 15 edges
4. `NYKRA: Before Postmortem (README)` - 12 edges
5. `Level File Format (.rmlvl)` - 12 edges
6. `Reconstructed Save V1 Design (Legacy Profiles Unsupported)` - 12 edges
7. `encode_value()` - 11 edges
8. `SaveV1FormatTests` - 11 edges
9. `NYKRA: Before - Handoff, Reconstruction Plan & Project State` - 11 edges
10. `SaveFormatError` - 10 edges

## Surprising Connections (you probably didn't know these)
- `Recovery & Handoff Workspace (rea/NYKRA_Reconstructed)` --conceptually_related_to--> `post mortem, ante vitam`  [AMBIGUOUS]
  AGENTS.md → README.md
- `Phase 2 - Priority bug diagnosis` --references--> `Phase 2: Priority Bugs for Approval`  [INFERRED]
  rea/NYKRA_Reconstructed/RECOVERY_PLAN_AND_HANDOFF.md → rea/NYKRA_Reconstructed/PHASE2_PRIORITY_BUGS.md
- `gml_Script_save_game()` --calls--> `gml_Script__save_type()`  [INFERRED]
  rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/phase1/gml_Script_save_game.c → rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/phase1/gml_Script__save_type.c
- `gml_Script_goto_map()` --calls--> `gml_Script_map_load()`  [INFERRED]
  rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/phase1_annotated/gml_Script_goto_map.c → rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/phase1_annotated/gml_Script_map_load.c
- `Original GML Excerpts (repo root)` --semantically_similar_to--> `NYKRA: Before Source Excerpt (no root .yyp)`  [INFERRED] [semantically similar]
  CLAUDE.md → AGENTS.md

## Import Cycles
- None detected.

## Hyperedges (group relationships)
- **Control / Camera / Player foundation objects** — readme_ocontrol, readme_ocamera, readme_oplayer, readme_core_components_foundation, readme_set_game_screen [EXTRACTED 1.00]
- **PHASE3 recovery hard rules** — claude_immutable_baseline_rule, claude_save_sandbox_rule, claude_no_silent_fallbacks_rule, claude_milestone_workflow, claude_sprite_frame_offsets [EXTRACTED 1.00]
- **YYC compiled-build recovery pipeline** — agents_nykra_zip, agents_runtime_baseline, agents_yyc_function_addresses, claude_ghidra_native_analysis, claude_reconstructed_gml_phase1, agents_recovered_assets [INFERRED 0.85]
- **.rmlvl level file sections read by map_load** — rea_nykra_reconstructed_phase1_formats_and_infrastructure_rmlvl_header, rea_nykra_reconstructed_phase1_formats_and_infrastructure_collision_block_grid, rea_nykra_reconstructed_phase1_formats_and_infrastructure_six_tilemap_layers, rea_nykra_reconstructed_phase1_formats_and_infrastructure_asset_sprite_layers, rea_nykra_reconstructed_phase1_formats_and_infrastructure_object_instances_obj_list, rea_nykra_reconstructed_phase1_formats_and_infrastructure_map_load [EXTRACTED 1.00]
- **PATH room transition save/load flow** — rea_nykra_reconstructed_phase2_priority_bugs_path_transition_flow, rea_nykra_reconstructed_phase1_formats_and_infrastructure_map_load, rea_nykra_reconstructed_phase2_priority_bugs_save_game_room_only_fix, rea_nykra_reconstructed_phase1_formats_and_infrastructure_rooms_save_format, rea_nykra_reconstructed_phase2_priority_bugs_bug_load_game_global_state_reload [INFERRED 0.85]
- **Save V1 safety contract** — rea_nykra_reconstructed_save_migration_design_v1_header, rea_nykra_reconstructed_save_migration_design_v1_typed_value_tags, rea_nykra_reconstructed_save_migration_design_format_recognition_states, rea_nykra_reconstructed_save_migration_design_snapshot_rollout_and_rollback, rea_nykra_reconstructed_save_migration_design_profiles_v1_root, rea_nykra_reconstructed_save_migration_design_save_v1_format_py [EXTRACTED 1.00]

## Communities (29 total, 18 thin omitted)

### Community 0 - "Python Tools & Codecs"
Cohesion: 0.09
Nodes (19): resolve_dat(), resolve_hex_double(), rva_to_off(), _byte_size(), decode_file(), decode_value(), _decode_value(), encode_file() (+11 more)

### Community 1 - "Level Format & map_load"
Cohesion: 0.07
Nodes (36): Asset Sprite Layers (aFRONT/aBACK), Collision & Block Grid (column-major u16), gml_Script_map_load (0x14004bac0), gml_Script_map_save (0x14003fa60), Object Instances list (obj_list) with type-specific payloads, Level File Format (.rmlvl), Six Tilemap Layers (tFRONT_over..tBACK_bg), <undefined> sprite_name edge case (+28 more)

### Community 2 - "Save File Formats"
Cohesion: 0.10
Nodes (33): CHARACTER save file format, Compressed 3D Model & Map Buffers (DATA/*, zlib), CONTROL save file format, GENERAL save file format, Global Built-in / Asset Index Slots table, Instance/Global Variable ID Table (1,983 slots), Common 68-Byte Instance Record, Native array payload omission (+25 more)

### Community 3 - "Repo & Recovery Workspace"
Cohesion: 0.10
Nodes (25): Agent Notes (AGENTS.md), GNU GPL v3.0 License, No Build/Test/Lint or CI in Excerpt, NYKRA.zip (compiled itch.io build), RecoveredAssets (sprites, sounds, shaders, levels, metadata), RECOVERY_PLAN_AND_HANDOFF.md / RECOVERY_NOTES.md, Recovery & Handoff Workspace (rea/NYKRA_Reconstructed), RuntimeBaseline (NYKRA.exe, data.win) (+17 more)

### Community 4 - "Original Game Design (README)"
Cohesion: 0.11
Nodes (23): Camera Points (oCamera_Point / oCamera_Point_Weak), Climbing Mechanic (cut), Dialogue String Commands (parDialogue/Draw_73), ENDESGA (edg, author), Heptaverse (Seven Observers, Nenox, Nea), Iiedakama Silhouette Fog Hack (planet 6), Keu (protagonist), Letterbox Effect (oControl/Draw_73) (+15 more)

### Community 5 - "Annotated goto_map & Save Scripts"
Cohesion: 0.08
Nodes (8): gml_Script_goto_map(), gml_Script_save_CHARACTER(), gml_Script_save_CONTROL(), gml_Script__save_ds_list(), gml_Script_save_game(), gml_Script__save_type(), gml_Script__save_type_rec2(), gml_Script__save_type_rec()

### Community 6 - "Raw Decompiled Load/Clear Scripts"
Cohesion: 0.08
Nodes (7): gml_Script_clear_objects(), gml_Script_goto_map(), gml_Script_load_game(), gml_Script_map_load(), gml_Script_reset_files(), gml_Script_save_game(), gml_Script__SET_SCENE()

### Community 7 - "Recovery Status & YYC Evidence"
Cohesion: 0.12
Nodes (21): Planet IDs (Maldis, Mexulta, Arthek, Irnem, Septeon, Quornem, Iiedakama), rmlvl 8-byte Header (map_n, mw, mh, planet, horizon), YYC Function Table (2,720 entries, yyc-function-table.json), Object metadata Actions null in YYC (not recovered code), Ghidra 12.1.4 native analysis (NativeAnalysis/), NYKRA recovery status, RecoveredAssets inventory (textures, sounds, shaders, masks, strings), RuntimeBaseline (supplied Windows build copy) (+13 more)

### Community 9 - "Annotated map_load & load_game"
Cohesion: 0.11
Nodes (5): gml_Script_clear_objects(), gml_Script_load_game(), gml_Script_map_load(), gml_Script_reset_files(), gml_Script__SET_SCENE()

### Community 10 - "Raw Decompiled Save Scripts"
Cohesion: 0.11
Nodes (6): gml_Script_save_CHARACTER(), gml_Script_save_CONTROL(), gml_Script__save_ds_list(), gml_Script__save_type(), gml_Script__save_type_rec2(), gml_Script__save_type_rec()

### Community 12 - "Format Validator"
Cohesion: 0.26
Nodes (7): is_ancestor(), load_object_hierarchy(), main(), parse_rmlvl(), parse_saved_instance(), read_cstring(), read_saved_type()

## Ambiguous Edges - Review These
- `Recovery & Handoff Workspace (rea/NYKRA_Reconstructed)` → `post mortem, ante vitam`  [AMBIGUOUS]
  AGENTS.md · relation: conceptually_related_to

## Knowledge Gaps
- **14 isolated node(s):** `No Build/Test/Lint or CI in Excerpt`, `GNU GPL v3.0 License`, `validate_formats.py`, `ENDESGA (edg, author)`, `Iiedakama Silhouette Fog Hack (planet 6)` (+9 more)
  These have ≤1 connection - possible missing edges or undocumented components. (Counts symbols only; 158 node(s) total have ≤1 connection when file, concept and rationale nodes are included.)
- **18 thin communities (<3 nodes) omitted from report** — run `graphify query` to explore isolated nodes.

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Why does `Phase 3: Execution Plan and Handoff` connect `Level Format & map_load` to `Save File Formats`, `Recovery Status & YYC Evidence`?**
  _High betweenness centrality (0.028) - this node is a cross-community bridge._
- **What connects `No Build/Test/Lint or CI in Excerpt`, `GNU GPL v3.0 License`, `validate_formats.py` to the rest of the system?**
  _14 weakly-connected nodes found - possible documentation gaps or missing edges._
- **Should `Python Tools & Codecs` be split into smaller, more focused modules?**
  _Cohesion score 0.0935374149659864 - nodes in this community are weakly interconnected._
- **Why does `Phase 1 Specification: Binary Formats & Core Infrastructure` connect `Save File Formats` to `Level Format & map_load`, `Recovery Status & YYC Evidence`?**
  _High betweenness centrality (0.013) - this node is a cross-community bridge._
- **Should `Level Format & map_load` be split into smaller, more focused modules?**
  _Cohesion score 0.07308970099667775 - nodes in this community are weakly interconnected._
- **Why does `Level File Format (.rmlvl)` connect `Level Format & map_load` to `Save File Formats`, `Recovery Status & YYC Evidence`?**
  _High betweenness centrality (0.012) - this node is a cross-community bridge._

### Low-confidence Hints
_AMBIGUOUS edges — the extractor was unsure. Verify before acting on these._

- **What is the exact relationship between `Recovery & Handoff Workspace (rea/NYKRA_Reconstructed)` and `post mortem, ante vitam`?**
  _Edge tagged AMBIGUOUS (relation: conceptually_related_to) - confidence is low._