# NYKRA: Before — Handoff, Plano de Reconstrução & Estado do Projeto

## 1. Contexto, Autorização e Licenciamento
- **Autor Original:** ENDESGA (`https://endesga.itch.io/nykra-before`).
- **Autorização:** O autor/criador original perdeu o projeto-fonte editável (`.yyp` e parte dos `.gml`) e concedeu autorização para investigar, reconstruir o projeto a partir da build compilada (enviada via `NYKRA.zip` do itch.io) e corrigir os bugs do jogo.
- **Licença:** Este fork foi licenciado sob **GNU GPL v3.0** (`LICENSE`), conforme solicitado pelo mantenedor do projeto de recuperação.
- **Integridade dos Dados:** O arquivo original `rea/NYKRA.zip` (`SHA-256: B2E8FF5BB348BB38A367579B7BC35DA60BB250E099E5B6BD25F85E53045D34C1`) foi preservado intacto localmente. Todas as extrações foram feitas em pastas separadas dentro de `rea/NYKRA_Reconstructed/`.

---

## 2. O Que Já Está no Repositório (Estrutura & Assets Recuperados)

### 2.1. Código GML Original (Raiz do Repositório)
Trechos do código-fonte original publicados pelo autor junto ao postmortem (`README.md`):
- **Objetos completos com `.yy` e eventos `.gml`:**
  - `oControl/` (25 eventos — controlador global, editor/loader de níveis `.rmlvl`, áudio, câmera, save/load de capítulos, UI)
  - `oPlayer/` (21 eventos — física, colisão, armas, inventário, estados)
  - `oCamera/` (6 eventos — câmera e efeitos)
  - `oEo/` (7 eventos — companheiro Eo)
  - `parDialogue/` (6 eventos — sistema base de diálogos)
  - `parNote/` (4 eventos — notas/lore)
  - `LIGHTING/` (4 eventos — iluminação)
- **Scripts originais (`scripts/`):**
  - `set_game_screen/set_game_screen.gml`
  - `reach_tween/reach_tween.gml`
  - `play_sound_pos/play_sound_pos.gml`

### 2.2. Recursos Extraídos de `data.win` (`rea/NYKRA_Reconstructed/RecoveredAssets/`)
Extraídos e validados via UndertaleModTool CLI v0.9.2.0:
- `Textures/Sprites/`: **2.938 PNGs** agrupados nas pastas dos **490 sprites** originais.
- `Textures/Backgrounds/`: **1 PNG** de background (`bStars`).
- `EmbeddedTextures/`: **11 páginas de textura** originais (`0.png` a `10.png`).
- `Masks/`: **735 PNGs** de máscaras de colisão dos sprites.
- `Sounds/`: **708 arquivos de áudio** (589 `.wav` + 119 `.ogg`) agrupados por audio group (`audiogroup_default`, `MUSIC_GROUP`).
- `Shaders/`: **25 shaders** completos (GLSL ES, GLSL, HLSL9, HLSL11 binário e atributos de vértice).
- `Strings/data-win-strings.json`: Todas as **2.528 strings** do `data.win`.
- `Included Files/`: Todos os arquivos externos usados em runtime:
  - `level_data/`: **183 arquivos `.rmlvl`** (todos os níveis do jogo).
  - `DATA/`: **74 arquivos**, incluindo `DATA/main` (stream zlib), modelos 3D/vértices e `DATA/CHAPTER_TEMPLATES/` (27 arquivos `.SAVE` + templates `CHARACTER`, `CONTROL`, `GENERAL` dos capítulos 1 a 6).
  - `dlg_eng.lang` (arquivo de diálogos em inglês), `config`, `options.ini`, `SIGILS`, `EDG_LOGO.png`, `LOGO_NEW.png` e 23 faixas `.ogg` externas.

### 2.3. Metadados Completos para Reconstrução do `.yyp` (`RecoveredAssets/Metadata/`)
Como o `data.win` (292 MB) e o `NYKRA.zip` (374 MB) excedem o limite de 100 MB por arquivo do GitHub (estando no `.gitignore`), **todos os metadados estruturais do `data.win` já foram extraídos em JSON versionado**:
- `general-info.json`: Informações gerais (GameMaker Studio 2.3.6.0, Bytecode 17, YYC = true, RoomOrder com as 13 rooms).
- `asset-order.txt`: Ordem exata de todos os IDs de recursos (`sounds`, `sprites`, `backgrounds`, `scripts`, `objects`, `rooms`, `shaders`).
- `sprites-metadata.json`: Dimensões, origens (`OriginX`/`OriginY`), `BBoxMode`, `Margin*`, `SepMasks`, velocidade de animação e contagem de frames de todos os 490 sprites.
- `sounds-metadata.json`: Flags, volume, pitch, grupo e arquivo de todos os 708 sons.
- `objects-metadata.json`: Hierarquia (`Parent`), `Sprite`, `Depth`, `Visible`, `Solid`, `Persistent`, `TextureMask` e lista completa de eventos/subeventos de todos os **699 objetos**.
- `rooms-metadata.json`: Dimensões, layers, instâncias posicionadas e views de todas as **13 rooms** (`INIT`, `rmMM`, `rmMAIN`, `rmIntro`, `rmREALITY`, etc.).
- `yyc-symbols.txt`: Lista dos 2.507 símbolos únicos `gml_Script_*` e `gml_Object_*` encontrados no executável.
- `yyc-function-table.json`: **Mapeamento cirúrgico de 2.720 funções YYC** extraído diretamente da seção `.data` de `NYKRA.exe`, ligando cada nome `gml_GlobalScript_*`, `gml_Script_*` e `gml_Object_*` ao seu endereço virtual exato (`va`) e offset no arquivo (`text_file_offset`).

### 2.4. Binário para Engenharia Reversa (`rea/NYKRA_Reconstructed/RuntimeBaseline/`)
- `NYKRA.exe` (35,34 MB, PE x86_64 YYC) está incluído no repositório para que qualquer agente possa descompilar funções nativas diretamente usando os endereços em `yyc-function-table.json`, mesmo sem o `data.win`.

---

## 3. Descoberta Técnica Chave (Por que a Reconstrução é Viável)
1. Embora a build seja **YYC** (código GML compilado para C++ -> x86_64 nativo em `NYKRA.exe`), a tabela interna do YYC em `NYKRA.exe` (`.data` offsets `0x20e46a0` a `0x20f4588`) preserva os nomes originais de todas as **2.720 funções** (`gml_Script_*` e `gml_Object_*`).
2. A arquitetura do jogo concentra quase toda a execução dentro da room `rmMAIN` através do objeto `oControl` (cujo código GML original já está em `oControl/`), que carrega dinamicamente os 183 níveis externos (`level_data/<nome>.rmlvl`) usando `map_load`.
3. Os arquivos `DATA/main` e partes dos saves/níveis usam buffers comprimidos com **zlib** (`0x78 0x9C`, ou seja, `buffer_compress` / `buffer_decompress` do GameMaker) ou serialização JSON/DS (`snap_to_json`, `snap_from_json`, `ds_list_write`, `ds_grid_write`).

---

## 4. Plano de Ação em 4 Fases para o Próximo Agente

> **Regra de Condução:** Validar cada etapa antes de avançar para a próxima. Priorizar segurança dos dados (nunca sobrescrever os templates/níveis originais sem backup e validação por hash/script).

### Fase 1 — Engenharia Reversa das Funções de Nível e Save (`NYKRA.exe`) *(Próximo Passo Imediato)*
Usando `rea/NYKRA_Reconstructed/RecoveredAssets/Metadata/yyc-function-table.json` e `rea/NYKRA_Reconstructed/RuntimeBaseline/NYKRA.exe`:
1. Descompilar (via Ghidra, `objdump`/`llvm-objdump`, Capstone ou script Python/Ghidra) as funções críticas nos endereços já mapeados:
   - `gml_Script_map_load` (`va: 0x14004bac0`, wrapper `gml_GlobalScript_map_load` em `0x14005b210`)
   - `gml_GlobalScript_map_save` (`va: 0x1400474b0`)
   - `gml_Script__SET_SCENE`
   - `gml_Script_clear_objects` (`va: 0x14005ffa0`)
   - `gml_Script_goto_map`, `gml_Script_reset_files` (`va: 0x14003ec80`)
   - `gml_Script_load_GENERAL`, `gml_Script_load_CHARACTER`, `gml_Script_load_CONTROL`, `gml_Script_save_game`, `gml_Script_load_game`
   - `gml_Script_COLLIDE` (`va: 0x141671610`), `gml_Script_col_move` (`va: 0x140061cf0`), `gml_Script_col_move_yeah` (`va: 0x140063e70`)
2. Escrever um script validador em Python que leia os **183 arquivos `.rmlvl`** em `RecoveredAssets/Included Files/level_data/` e os saves em `DATA/CHAPTER_TEMPLATES/`, confirmando 100% do layout binário.
3. Reconstruir esses scripts em GML limpo dentro da pasta `scripts/`.
- **Critério de validação da Fase 1:** Todos os 183 `.rmlvl` lidos sem erro pelo validador e scripts GML de `map_load` / `save_game` reconstruídos.

### Fase 2 — Diagnóstico dos Bugs Prioritários
1. Cruzar o GML original (`oControl`, `oPlayer`, `parDialogue`, `oEo`) com o código reconstruído na Fase 1.
2. Identificar e listar os bugs que causam falha de carregamento de nível, corrupção de save/capítulo, softlocks de diálogo ou problemas de colisão/câmera.
- **Critério de validação da Fase 2:** Relatório curto e objetivo dos bugs encontrados para aprovação antes de alterar a lógica.

### Fase 3 — Geração do Projeto `.yyp` (Vertical Slice no GameMaker)
1. Gerar um script em Python que use `general-info.json`, `asset-order.txt`, `sprites-metadata.json`, `sounds-metadata.json`, `objects-metadata.json` e `rooms-metadata.json` para criar automaticamente o arquivo `NYKRA.yyp` e os `.yy` faltantes no formato GameMaker Studio 2.3+.
2. Conectar os objetos principais já existentes (`oControl`, `oPlayer`, `oCamera`, `oEo`, `parDialogue`) e testar a abertura da room `INIT` -> `rmMM` -> `rmMAIN` carregando `rmMal_Origin.rmlvl`.
- **Critério de validação da Fase 3:** Primeiro nível carregando e rodando no GameMaker (ou avaliação objetiva se vale manter 100% no GameMaker).

### Fase 4 — Reconstrução dos Objetos Restantes & Aplicação de Fixes
1. Reconstruir os scripts e eventos `gml_Object_*` restantes sob demanda (agrupados por planeta/capítulo: Maldis, Mexulta, Arthek, Irnem, Septeon, Quornem, Iiedakama) usando `yyc-function-table.json` + `objects-metadata.json`.
2. Aplicar e testar as correções de bugs aprovadas na Fase 2.
