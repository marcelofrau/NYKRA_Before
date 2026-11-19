# NYKRA: Before — Plano Mestre de Reconstrução

**Criado em 17/11/2026.** Este documento consolida `RECOVERY_PLAN_AND_HANDOFF.md`, `PHASE1_FORMATS_AND_INFRASTRUCTURE.md`, `PHASE2_PRIORITY_BUGS.md`, `PHASE3_EXECUTION_PLAN.md` e `SAVE_MIGRATION_DESIGN.md` num único passo a passo, do bloqueio atual (tiles) até o jogo reconstruído. As regras de segurança do `PHASE3_EXECUTION_PLAN.md` §1 continuam obrigatórias; aqui elas só são referenciadas.

**Objetivo final:** um projeto GameMaker editável que reproduza o NYKRA: Before original (183 níveis, 7 planetas, saves funcionando) com os bugs conhecidos corrigidos. **Estratégia:** marcos pequenos, cada um com um critério de aceite objetivo e validação do usuário antes do próximo.

---

## 0. Onde estamos

| Fase | Estado | Evidência |
|---|---|---|
| 1 — Formatos e núcleo nativo | ✅ concluída (análise estática) | 16 funções decompiladas/anotadas; `validate_formats.py` cobre 183 níveis, 6 templates, 27 saves, 29 DATA |
| 2 — Bugs prioritários | ✅ relatório entregue | `PHASE2_PRIORITY_BUGS.md` (P1 load_game, P1 arrays omitidos, P2 int64) |
| 3.0 — Ambiente | ✅ | IDE 2024.14.4.222, runtime 2024.14.4.268, Igor compila VM |
| 3.1 — Projeto + sprite | ✅ parcial | árvore `sMal_Tree_1`/`sMal_Tree_1l` vista pelo usuário |
| 3.2 — Renderizar nível | ✅ **aceito pelo usuário em 19/11** (§1.3c, §1.5) | 6 camadas + sprite `aBACK` do nível, build da IDE LTS 2026 |
| 3.2b — `map_load` reconstruído | ✅ **aceito pelo usuário em 19/11** | pela IDE (F5): 79 objetos criados, contagens corretas, 4 `<undefined>` pulados, copa visível, log sem erros (commits `71d2dbb`, `a83f8cf`) |
| 3.2c — sprites dos objetos (P3) | ✅ **aceito pelo usuário em 19/11** | 15 sprites / 61 quadros importados com canvas restaurado; `sMal_Door_Flat` conferido no editor da IDE (30×35, origem 15,34, 8 quadros); jogo inalterado |
| 3.3 — Player/objetos/portas | ⬜ | — |
| 3.4 — Save V1 | ⬜ | só codec Python de referência |
| 4 — Resto do jogo | ⬜ | 2.720 funções YYC; 16 reconstruídas |

---

## 1. Bloqueio atual: por que os tiles não aparecem

### 1.1 Sintoma (registrado em 13/11)
`tileset_get_info(TILES)` está correto (16×16, 78 colunas, 6144 tiles). `tilemap_set` e `tilemap_get` concordam e as layers estão visíveis. Mesmo assim, **nada** aparece: nem nas 6 layers, nem num tilemap manual, nem com `draw_tile` ou `draw_tilemap`. O sprite-fonte desenhado com `draw_sprite_part_ext` aparece. `tileset_get_uvs` retorna `(0,0)→(1,1)`.

### 1.2 Linha de raciocínio e evidências (17/11)

**Passo 1 — os dados do nível estão certos?** Sim. Um script Python cruzou os 6 tile layers de `rmMal_Origin.rmlvl` com as imagens:
- 80 IDs distintos (2 a 526), 954 tiles no total; todos usam só ≤10 bits (sem flags de flip/rotação).
- **0 de 80** IDs caem numa célula transparente de `Textures/Backgrounds/TILES/TILES_0.png` (grade de 78 colunas, passo 20 px, offset 2).
- O tile *i* de `sTiles_0.png` (grade de 64 colunas, passo 16) é **idêntico pixel a pixel** ao tile *i* da textura de runtime nos 80 IDs.
- Conclusão: índices, ordem x-major e mapeamento estão corretos. Se a textura existisse, os tiles certos apareceriam. **Hipótese "dados errados" descartada.**

**Passo 2 — o que o compilador gerou?** Rodei o `Tools/DumpTilesetTexture.csx` (UTMT CLI 0.9.2.0) nos `data.win` das builds de teste em `%TEMP%\opencode\gm-nykra-*` (`handoff`, `padded`, `tiles-retry`, `tiles-export`, `tile-diag`):

```
[slice] TILES tw=16 th=16 obx=0 oby=0 cols=78 items=1 count=6144 ... ids=6144
[slice] TILES texture NULL          ← nenhuma texture page item
[slice] sprite sTileset_TILES 1560x1580 tpag=src=(2,2,1560,1575) page=1
```

**Todas as 5 builds** (as duas variantes de importação) têm `TILES.Texture == NULL`. As texture pages também confirmam: só existem uma de 64×64 e uma de 2048×2048, e esta última já está ocupada pelo sprite. Não há espaço onde o tileset pudesse estar. O compilador de assets **não gerou a textura do tileset**. Isso explica todos os sintomas: metadados e tilemaps funcionam, mas não existe imagem para desenhar, e UV `(0,0,1,1)` é o padrão de textura ausente.

**Passo 3 — como era no original?** Mesmo script no `RuntimeBaseline/data.win` (GMS 2.3.6):

```
[original] TILES tw=16 th=16 obx=2 oby=2 cols=78 count=6144
[original] TPAG src=(4,4,1560,1580) tgt=(0,0,1560,1580) page=10      ← textura existe
[original] sprite sTiles 1024x1536 tpag=src=(2,1590,1024,1533) page=10
[original] room rmMAIN tilelayer tFRONT_over depth=-30 bg=TILES 128x64
[original] room rmMAIN tilelayer tFRONT      depth=-20 bg=TILES 128x64
[original] room rmMAIN tilelayer tFRONT_bg   depth=-10 bg=TILES 128x64
[original] room rmMAIN tilelayer tBACK_over  depth=10  bg=TILES 128x64
[original] room rmMAIN tilelayer tBACK       depth=20  bg=TILES 128x64
[original] room rmMAIN tilelayer tBACK_bg    depth=30  bg=TILES 128x64
           (rmDEMO_START e rmDEMO_END têm as mesmas 6 layers)
```

Três diferenças em relação à vertical slice:

| Item | Original | Vertical slice | Impacto |
|---|---|---|---|
| Referência estática ao `TILES` | 6 tile layers em 3 rooms | **nenhuma** (o probe cria as layers em runtime) | o compilador pode considerar o tileset "não usado" |
| `option_remove_unused_assets` | não existia em 2.3.6 | **`True`** (padrão 2024; ver `cache/MainOptions.json` da build) | o compilador descarta o que julga não usado |
| Sprite-fonte | `sTiles` 1024×1536 (64×96 = 6144 tiles, offset 0, sep 0, borda de saída 2) | `sTileset_TILES` = textura *já compilada* reimportada | não é fiel; e a textura de saída é gerada a partir disso |

O `GMAssetCompiler` 2024.14 tem um sistema de dependências (strings `DependencyAssets`, `used_assets`, `m_option_remove_unused_assets` em `CoreResources.dll`). O texto da IDE é *"Automatically remove unused assets when compiling"*. O manual online não pôde ser consultado (HTTP 403).

### 1.3 Causa raiz (hipótese principal, com forte evidência)
> **O compilador de assets do GameMaker 2024 não gera a textura do tileset `TILES`, porque nenhuma room o referencia e "Remove unused assets" está ligado.** A referência só por código (`layer_tilemap_create(..., TILES, ...)`) mantém os metadados, mas não a textura.

Ainda não foi provado qual das duas condições (sem layer em room × opção ligada) é a decisiva. As tentativas T1/T2 abaixo isolam isso. A correção fiel resolve as duas de uma vez: é exatamente o que o projeto original tinha (layers no `rmMAIN`). O `map_load` reconstruído também **depende** dessas layers pré-existentes: ele usa `layer_tilemap_get_id(layer_get_id(_layer[i]))` e `tilemap_clear`, e não cria tilemaps.

Problema secundário observado: `option_windows_interpolate_pixels = True`. Em pixel art isso borra e faz tiles "sangrarem". Confirmar o valor original (flag `InterpolatePixels` no GEN8 do `data.win` original) e alinhar.

### 1.3b Resultado de T1 e T2 (18/11/2026): bloqueio continua
- **T1 aplicada** (sprite `sTiles` 1024×1536 com 3 linhas transparentes embaixo, `TILES.yy` com offset 0/sep 0/borda 2, 6 tile layers 128×64 no `rmMAIN`, probe usando `layer_tilemap_get_id`). Build `%TEMP%\opencode\gm-nykra-t1-20261118`: as 6 layers aparecem no `data.win` com `bg=TILES`, mas **`TILES texture NULL`**. O usuário abriu o jogo: a árvore e o `sTiles` desenhado direto aparecem; tilemaps, `draw_tile` e `draw_tilemap` não; `tileset_get_uvs` = `(0,0,1,1)`. Isso confirma que o UTMT lê certo e a textura realmente não existe.
- **T2 aplicada** (`options/main/options_main.yy` com `option_remove_unused_assets:false`). A 1ª e 2ª versões do arquivo falharam ao carregar porque a tag era `"$GMMainOptions":"v1"`; o projeto da IDE (`C:\Users\fraumar\GameMakerProjects\BLANK GAME`) usa **`"v5"`**. Com `v5`, o build `gm-nykra-t2c-20261118` respeita a opção (`remove_unused_assets in build = false`), mas **`TILES texture NULL`** de novo.
- **Descartado:** dados do nível, sprite-fonte, falta de referência na room e "remove unused assets".
- **Hipótese restante:** algo no formato do `TILES.yy` (escrito à mão, nunca salvo pela IDE 2024) faz o compilador pular a textura em silêncio. Duas tentativas falharam, então paramos conforme a regra. **Próximo: T3 com o usuário na IDE** (abrir o projeto, conferir o editor do `TILES` e criar um tileset de referência `TILES_ide_ref` a partir do `sTiles`, 16×16), depois comparar os `.yy`.
- **Lição:** as tags `"$GM<Tipo>":"vN"` escolhem o esquema do leitor. Sempre copiar de um arquivo salvo pela IDE 2024.14, nunca supor a versão.

### 1.3c Resolvido (19/11/2026): tiles renderizam
- O usuário instalou a **GameMaker LTS 2026** (IDE `2026.1.0.27`, runtime `2026.1.0.28`, ao lado da 2024.14). Abriu o projeto, a IDE regravou os `.yy` no formato dela (tags `"$GMSprite":"v2"`, `"$GMRInstance":"v4"`, `"$GMProject":"v1"`, mais `options/windows|operagx|reddit`) e o editor do `TILES` mostrou o `sTiles` com grade e os valores originais (16×16, offset 0, sep 0, borda 2), sem erros. Ao rodar pela IDE (F5), **as 6 camadas do `rmMal_Origin` renderizam**, `draw_tilemap` e `draw_tile` funcionam, e `tileset_get_uvs` = `(0,0) → (0.76,0.77)`, isto é, 1560×1580 numa página 2048, o mesmo tamanho do `TILES` original.
- **Causa mais provável:** ao salvar o tileset, a IDE gera `tilesets/TILES/output_tileset.png` (1560×1580, a textura de saída com borda), e o compilador só empacota esse arquivo. O nosso `TILES.yy` sempre foi escrito à mão e nunca tinha esse PNG; o compilador gerava o tileset sem textura e sem erro. Como o compilador também mudou (2024.14 → 2026.1), não foi isolado qual das duas mudanças decidiu. Não vale isolar, porque o projeto segue na LTS.
- **Regra nova:** todo tileset criado ou alterado fora da IDE precisa ser aberto e salvo pela IDE (para gerar o `output_tileset.png`) antes do build. Arquivos `.yy` escritos por script devem copiar as tags de versão de arquivos salvos pela LTS 2026.
- Hashes de `rmMal_Origin.rmlvl` (`4dcb0788…`) e `rmMal_1.rmlvl` (`07a2b082…`) conferidos e intactos (originais e cópia no projeto).
- Fechamento do 3.2 (19/11):
  - `Tools/compare_tileset_output.py` mostra que o `output_tileset.png` é **idêntico pixel a pixel** ao `TILES_0.png` original: 6144 tiles, 0 pixels diferentes no interior e na borda. Só a compressão do PNG difere.
  - `interpolate_pixels` foi desligado por decisão do usuário (pixel art nítida); religar se ele notar diferença em relação ao original.
  - O probe cria os sprites `aFRONT`/`aBACK` dos registros do nível com `layer_sprite_create`. **Política:** `<undefined>` e sprites que não estão no projeto são pulados com `show_debug_message`, nunca criados com -1. O `map_load` original não faz essa checagem.
  - A instância de teste `inst_tree_probe` e o objeto `oSpriteProbe` foram removidos; o tronco `sMal_Tree_1` agora vem do nível.
  - O usuário confirmou: árvore no lugar, `created: 1 undefined: 4 missing: 0`, pixels nítidos. **Marco 3.2 aceito.**
  - As folhas ainda são desenhadas pelo `oLeavesProbe` provisório; elas pertencem ao objeto de nível `oMal_Tree1`, que entra no 3.3.

### 1.4 Tentativas, em ordem (parar na primeira que passar no aceite)

Antes de cada build: `git status` limpo ou commit do estado anterior; build numa pasta nova `%TEMP%\opencode\gm-nykra-<nome>-<data>` (fora do repo); hash dos fixtures antes e depois.

**T1 — Correção fiel (recomendada)**
1. Exportar `sTiles` do `data.win` original **com canvas restaurado** (UTMT `TextureWorker.ExportAsPNG(tpag, path, null, true)`, o mesmo usado para as árvores). Resultado esperado: 1024×1536. O crop está no rodapé (`target_y = 0`), como prova o Passo 1, em que o tile *i* do PNG de 1533 px bate com a linha `i div 64` contada do topo. Se exportar manualmente, completar com 3 linhas transparentes **embaixo**.
2. Criar o sprite `sTiles` no projeto: 1024×1536, origem (0,0), 1 frame, textura `Default`. Conferir as origens no `sprites-metadata.json`.
3. Reescrever `tilesets/TILES/TILES.yy` com `spriteId = sTiles`, `tileWidth/Height = 16`, `tilexoff/yoff = 0`, `tilehsep/vsep = 0`, `out_tilehborder/vborder = 2`, `out_columns = 78` e `tile_count = 6144`. Remover `sTileset_TILES` do `.yyp` (ou deixá-lo marcado como provisório, sem uso).
4. Em `rooms/rmMAIN/rmMAIN.yy`, adicionar 6 `GMRTileLayer` com os nomes e profundidades exatos (`tFRONT_over` -30, `tFRONT` -20, `tFRONT_bg` -10, `tBACK_over` 10, `tBACK` 20, `tBACK_bg` 30), `tilesetId = TILES` e `SerialiseWidth = 128`, `SerialiseHeight = 64`, todos os tiles 0. **Não escrever o JSON de cabeça**: criar uma tile layer pela IDE 2024.14 numa room de teste, salvar e copiar o formato exato (`tiles.TileDataFormat`, `TileCompressedData` etc.).
5. Ajustar `oLevelProbe/Create_0.gml`: em vez de `layer_create` + `layer_tilemap_create`, usar `layer_tilemap_get_id(layer_get_id(nome))`, como o `map_load` original. Manter o tilemap manual em `Instances` apenas como diagnóstico.
6. Build VM. **Aceite automático (sem depender de olhar a tela):**
   ```powershell
   $env:TILEDIAG_OUT = "$env:TEMP\claude-tilediag"; $env:TILEDIAG_TAG = "t1"
   & "$env:TEMP\opencode\utmt-cli-0.9.2.0\UndertaleModCli.exe" load "<build>\out\data.win" --scripts "rea\NYKRA_Reconstructed\Tools\DumpTilesetTexture.csx"
   ```
   Esperado: `TILES texture` **não** NULL; TPAG 1560×1580 (78 × 20 px por 79 × 20 px); `room rmMAIN tilelayer ... bg=TILES` ×6. Comparar `t1_TILES.png` com `RecoveredAssets/Textures/Backgrounds/TILES/TILES_0.png` (SHA-256 `FB7DBBF0…`). Pixel-igual é o ideal; diferenças só na borda de 2 px são aceitáveis e devem ser registradas.
7. Rodar o jogo; o usuário confirma visualmente os tiles das 6 camadas nas posições do nível.

**T2 — Isolar a opção (se T1 ainda der `texture NULL`)**
1. Criar `options/main/options_main.yy` copiado de um projeto vazio gerado pela IDE 2024.14 e mudar só `option_remove_unused_assets` para `false`. Registrar no `.yyp` se a IDE exigir.
2. Rebuild e rodar o mesmo dump. Se a textura aparecer, a causa é a opção. Decidir com o usuário se ela fica desligada para sempre (simples, recomendado durante a reconstrução, porque muitos assets serão referenciados só por `asset_get_index` vindo dos `.rmlvl`) ou se cada asset ganha uma referência estática.
   > ⚠️ Esse ponto é **crítico para o projeto todo**: os `.rmlvl` referenciam sprites (`aFRONT/aBACK`) e objetos **por nome**, via `asset_get_index`. Com "remove unused assets" ligado, o compilador pode remover sprites/objetos usados só pelos níveis. **Recomendação: desligar a opção no projeto reconstruído**, independentemente do resultado de T1.

**T3 — Tileset mínimo de referência pela IDE (se T1 e T2 falharem)**
1. Na IDE: sprite 32×32 com 4 cores sólidas, tileset 16×16 sobre ele, uma tile layer numa room com 4 tiles pintados. Build.
2. Se renderizar: comparar campo a campo (`diff`) o `.yy` da IDE com o nosso `TILES.yy`/`rmMAIN.yy` e transplantar as diferenças uma de cada vez.
3. Se **não** renderizar: o problema é do runtime/driver (DX11, GPU corporativa). Testar `draw_tile` com esse tileset em outra máquina ou no alvo GX.games/HTML5, e registrar.

**T4 — Fallback de visualização (somente se T1–T3 falharem; marcar como provisório)**
Renderer de diagnóstico com `draw_sprite_part_ext(sTiles, 0, (id mod 64)*16, (id div 64)*16, 16, 16, x*16, y*16, ...)` por layer, com surfaces por camada. Prova o nível visualmente, mas **não** é o tilemap original. Não usar para colisão nem fechar o marco 3.2 com ele.

**Regra:** duas tentativas de reparo sem sucesso → parar e informar o bloqueio (PHASE3 §1).

### 1.5 Checklist do marco 3.2
- [x] T1.1 `sTiles` com canvas 1024×1536 (SHA-256 `0ADD1858…3D1F0C`; 1533 linhas originais + 3 transparentes)
- [x] T1.2 sprite `sTiles` no projeto, origem (0,0) conforme `sprites-metadata.json`
- [x] T1.3 `TILES.yy` aponta para `sTiles` com offset 0 / sep 0 / borda 2 / 78 colunas
- [x] T1.4 6 tile layers no `rmMAIN.yy`, 128×64, `TILES` (formato escrito à mão; a IDE ainda precisa confirmar)
- [x] T1.5 probe usa as layers da room (`layer_tilemap_get_id`)
- [x] `option_remove_unused_assets = false` (T2, `"$GMMainOptions":"v5"`)
- [x] T3: `TILES.yy` conferido e regravado pela IDE (LTS 2026.1), que gerou o `output_tileset.png` 1560×1580
- [x] `interpolate_pixels` desligado (decisão do usuário; valor original não lido)
- [x] Textura existe em runtime: UV `(0,0)→(0.76,0.77)` = 1560×1580 (o dump UTMT 0.9.2 pode não ler o formato 2026; o critério foi o runtime)
- [x] `output_tileset.png` idêntico pixel a pixel a `TILES_0.png` (`Tools/compare_tileset_output.py`)
- [x] Usuário viu os tiles das 6 camadas na posição certa (19/11, build da IDE LTS 2026)
- [x] Referências `<undefined>` (4 em `rmMal_Origin`) puladas com log, sem crash
- [x] Sprite `aBACK` `sMal_Tree_1` posicionado pelo registro do nível (565,287)
- [x] Hashes de `rmMal_Origin.rmlvl` (`4dcb0788…`) e `rmMal_1.rmlvl` (`07a2b082…`) inalterados (19/11)
- [ ] Atualizar `PHASE3_EXECUTION_PLAN.md` §5 3.2, `RECOVERY_NOTES.md` e este plano; um commit por mudança lógica

---

## 2. Fase 3 restante — do nível visível ao recorte jogável

### 3.2b — Carregar o nível com o `map_load` reconstruído (em vez do probe)
Objetivo: trocar o probe por `ReconstructedGML/phase1_core/map_load.gml` real, num modo controlado.
1. Converter `map_load`, `clear_objects`, `goto_map`, `_SET_SCENE` e `reset_files` de scripts `argument0..n` (pré-2.3) para `function nome(...)` 2.3+, **sem mudar a lógica**. Um script por arquivo `scripts/<nome>/<nome>.gml` + `.yy` (copiar o formato de um script criado pela IDE).
2. Resolver as dependências listadas em `PHASE3_EXECUTION_PLAN.md` §4: `load_game`, `obj_setpos`, `inv_add_obj`, `real_string`, `instance_create_one`, `parEntity`, `parLootable`, `parDoor_out`, `parDoor_Flat`, `parNote`, `oBook`, `parWire`, `oSAVE_WIRE`, `oCamera`. Para cada uma: (a) existe GML original na raiz? usar; (b) está nas 16 decompiladas? reconstruir; (c) senão, decompilar agora (§3.2). **Proibido no-op silencioso**: um stub precisa de `show_debug_message("STUB <nome>")` e precisa constar na lista de provisórios.
3. Bootstrap de teste: objeto `oDebugBoot` (provisório, nome explícito) que inicializa o mínimo de `oControl` (`map_id`, `obj_list`, `_layer[]`, `asset_list[]`) e chama `map_load("rmMal_Origin")`. Alternativa preferível, se der: importar `oControl` original da raiz e desligar só o que ainda não existe.
4. **`load_game` e escrita de save desligados** nesta etapa (`START_GAME = 0`), porque o código ainda grava em `PROFILES/`.
5. Aceite: o nível aparece igual ao probe; os 79 objetos são criados ou reportados; nenhum crash; hashes dos fixtures intactos.

### 3.2c — Sprites dos objetos do nível (P3)
Importar para o projeto os **15 sprites novos** dos objetos de `rmMal_Origin` (o 16º, `sMal_Tree_1l`, já existe), com **canvas, origem, quadros, velocidade e máscara** do original. **Sem ligá-los aos objetos ainda**: uma casca com sprite e sem eventos anima sozinha (visto com o `oMal_Tree1`), então cada vínculo entra junto com os eventos do objeto (3.3).
- Sprites e quadros (de `sprites-metadata.json`): `sMal_Grass` (6), `sMal_Grass3` (6), `sMal_bg_leaves` (1), `sMal_bg_leaves_1` (1), `sMal_bg_leaves_11` (1), `sWire` (2), `sWire_DIODE` (8), `sWire_TIMER` (4), `sMal_Door_Flat` (8), `sMal_Door1` (3, 10 fps), `sVIEW_CONSTRICT` (1), `sInput_pp` (2), `sNote_Small` (?), `sOrigin` (1), `sDoor_chunky` (4). Total do conjunto: 62 quadros.
- Método: script UTMT (`Tools/ExportSpritesRestored.csx`) exporta cada quadro com o canvas restaurado (`includePadding`), mais um JSON com recortes e origens; um gerador cria `.yy` e PNGs no formato da LTS 2026 (copiar as tags dos `.yy` de sprite que a IDE já regravou). Conferir cada sprite no editor da IDE contra `sprites-metadata.json` (tamanho, origem, quadros).
- Aceite: os 15 sprites aparecem no Asset Browser com os tamanhos e origens do metadata; o usuário confere 3 ou 4 no editor (grama, porta, fio); nenhum objeto muda de aparência no jogo.

#### Levantamento do 3.2b (19/11/2026; `SURVEY_3_2b_rmMal_Origin.md`, gerado por `Tools/survey_dependencies.py`)
- **`map_load` na LTS 2026:** `array_get_2D(a,i,j)` → `a[i,j]` e `array_length_1d(a)` → `array_length(a)` (as duas funções não existem mais; eram do runtime 2.3.6). Nenhuma outra mudança de lógica.
- **Contexto:** `map_load` e os scripts irmãos referenciam `oControl` pelo nome e usam variáveis dele (`map`, `obj_list`, `_layer`, `asset_layer`, `asset_list`, `map_id`, `file`, `cam`, `CURRENTROOM`, `MUSIC`, `GRV_SPD`, `FADE_COLOUR`, `START_GAME`). O objeto de controle precisa se chamar `oControl`.
- **`oControl` original:** 3.039 linhas de eventos; referencia 23 objetos, 36 sprites, 7 sons, 18 scripts, 1 shader e 2 outros assets (editor, UI, partículas). Importá-lo inteiro no 3.2b arrasta tudo isso.
- **Nível `rmMal_Origin`:** 17 tipos de objeto, 27 com os pais, **96 eventos** (todos com função YYC), **16 sprites / 62 quadros**. Só `oMal_Door_Flat` (payload `locked, n, rm`) e `oNote` (`text, page`) têm payload: precisam existir com a cadeia de pais (`parDoor_Flat > parSAVE`, `parNote`), senão a leitura desalinha em silêncio.
- **Grade de colisão:** só a célula 3 (`oPlace_Player`) cria objeto; `rmMal_Origin` não tem essa célula.
- **Scripts que o `map_load` chama:** reconstruídos `clear_objects`, `reset_files`, `_SET_SCENE`; decompilado `load_game` (fica desligado); **a fazer** `obj_setpos`, `inv_add_obj`, `real_string`, `instance_create_one` (`obj_setpos` e `instance_create_one` são exigidos pelo caminho do nível; `inv_add_obj` só com loot).
- **Proposta de estratégia (aguardando decisão do usuário):**
  1. `oControl` **mínimo e provisório** (mesmo nome, só as variáveis do `map_load`, `START_GAME = 0`, sem editor/UI/saves), substituído pelo original na fase "Base global" da Fase 4.
  2. **Objetos-casca** gerados dos metadados (nome, pai, sprite, profundidade, flags, **sem eventos**) para os 27 objetos do nível: mantém a hierarquia e o payload alinhado. Identificados como provisórios.
  3. Eventos decompilados em lotes depois, do mais simples ao mais acoplado (§3.3).
  4. Sprites dos 27 objetos (16 sprites / 62 quadros) com os recortes por quadro lidos do `data.win`, após a casca.

### 3.3 — Player, objetos do nível e transição real
**Objetos que `rmMal_Origin` instancia** (17 tipos, 79 instâncias; 27 tipos contando os pais):

| Qtde | Objeto | Herança | Eventos YYC disponíveis |
|---:|---|---|---|
| 23 | `oGrass` | `parGrass` | Create, Alarm_0, PreCreate |
| 13 | `oMal_bg_leaves_bg_fg` | — | Create, Step, Draw |
| 9 | `oMal_bg_leaves_bg` | — | Create, Step, Draw |
| 8 | `oMal_bg_leaves_fg` | — | Create, Step, Draw |
| 7 | `oGrass3` | `parGrass` | Create, Alarm_0 |
| 3 | `oWire` | `parWire` | Create, Step_1, Draw, Draw_77 |
| 2 | `oMal_Door_Flat` | `parDoor_Flat > parSAVE` | Draw (resto herdado de `parDoor_Flat`) |
| 2 | `oVIEW_CONSTRICT` | — | Create, Alarm_0, Step_2, Draw |
| 2 | `oInput_pp` | — | Create, Step_1, Draw |
| 2 | `oNote` | `parNote` (GML original existe) | — |
| 2 | `oWire_DIODE_D` | `oWire > parWire` | Create, Step_1, Draw |
| 1 | `oDoor_Origin` | — | Draw |
| 1 | `oCamera_Point` | — | Draw |
| 1 | `oOrigin` | — | Create, Alarm_0..3, Step_1, Draw, Draw_73 |
| 1 | `oMal_Tree1` | `parLeaves` | (herdado) |
| 1 | `oDoor_chunky` | `parWirePhysics > parPhysics > parEntity > parObject` | Create, Step_1, Draw, Draw_73, Destroy |
| 1 | `oWire_TIMER` | `oWire > parWire` | Create, Step_1, Draw, Draw_77 |

Os nomes de eventos vêm de `yyc-function-table.json` (prefixo `gml_Object_<obj>_`). Conferir com `objects-metadata.json`, porque nomes com prefixo comum, como `oWire` e `oWire_TIMER`, se misturam numa busca por prefixo.

Ordem sugerida (do mais simples ao mais acoplado):
1. **Decorativos sem lógica de jogo:** `oMal_Tree1`/`parLeaves`, `oMal_bg_leaves_*`, `oGrass`/`parGrass`. Validam o pipeline decompilar → GML → `.yy` → sprite.
2. **Câmera:** `oCamera` (GML original na raiz) + `set_game_screen` (original) + `oCamera_Point` + `oVIEW_CONSTRICT`.
3. **Player:** `oPlayer` (GML original, 21 eventos) + cadeia `parEntity > parObject` + scripts de colisão já decompilados (`COLLIDE`, `ARRAY_COLLIDE`, `col_move`, `col_move_yeah`) + sprites/sons que ele referencia (contagem léxica: 62 sprites, 62 sons, 27 objetos e 48 scripts; levantar a lista real antes de importar). `sBnd_player` com máscara Precise (8×24, origem 4,12).
4. **Spawn:** `oOrigin` (como cria/posiciona o player; investigar Alarm_0..3) e `oPlace_Player` (célula 3 não existe em `rmMal_Origin`).
5. **Fios/energia:** `parWire`, `oWire`, `oWire_DIODE_D`, `oWire_TIMER`, `oSAVE_WIRE` (ordem: `oSAVE_WIRE` primeiro no `obj_list`), `oDoor_chunky`.
6. **Portas e transição:** `parDoor_Flat`, `oMal_Door_Flat` (n=7 → `rmMal_1`, n=8 → `rmMal_o1`), `PATH`, `goto_map`. Adicionar `rmMal_1.rmlvl`/`rmMal_o1.rmlvl` como Included Files (cópias).
7. **UI no nível:** `oInput_pp`, `oNote`/`parNote` (original), `oDoor_Origin`.

Aceite 3.3: o player anda, colide e atravessa ida e volta `rmMal_Origin ↔ rmMal_1` sem crash, entrando no PATH certo. Comparar coordenadas com a evidência nativa. Lista de tudo que foi simulado.

### 3.4 — Save V1
Seguir `SAVE_MIGRATION_DESIGN.md` integralmente (root `PROFILES_V1`, header `NYKRASV\0`, tags tipadas, snapshots, ativação por ponteiro). Passos:
1. Especificar os payloads concretos de `GENERAL`, `CONTROL`, `CHARACTER` e `ROOM` (ainda não definidos).
2. Portar `save_v1_format.py` para GML; gerar vetores de teste no Python e verificar no GML byte a byte.
3. Verificar no runtime: `buffer_sha1`/SHA-256 disponível? Atomicidade de `file_copy`/rename? Não afirmar sem prova.
4. Localizar o ponto original de persistência global (`save_CHARACTER`/`save_CONTROL` não são chamados nos trechos atuais); está em eventos ainda não reconstruídos.
5. Aceite: perfil novo → mudar de sala → salvar → fechar → reabrir com estado idêntico; gravação interrompida preserva o snapshot anterior; hashes dos originais iguais.

---

## 3. Fase 4 — Reconstruir o jogo inteiro

### 3.1 Tamanho do trabalho
| Tipo | Total no `NYKRA.exe` | Feito |
|---|---:|---:|
| Eventos de objeto (`gml_Object_*`) | 2.281 | ~7 objetos com GML original na raiz |
| Scripts (`gml_Script_*`) | 226 | 16 decompilados/anotados (+3 originais) |
| Global scripts (`gml_GlobalScript_*`) | 208 | 0 |
| Room/RoomCC | 5 | 0 |
| Objetos / sprites / sons / shaders | 699 / 490 / 708 / 25 | 3 / 3 / 0 / 0 |
| Níveis `.rmlvl` | 183 | 1 copiado |

Níveis por planeta (prefixo do nome): Mex 43, Mal 33, Prae 17, EO 16, Irn 13, Art 12, Quo 10, Sep 9, Iie/Iinenea 6, Oosasma 2, testes ~8. Só **Maldis** usa 108 tipos de objeto (131 com pais).

### 3.2 Pipeline por objeto/script (repetível, automatizar aos poucos)
1. **Inventário:** do `objects-metadata.json`, pegar parent, sprite, mask, depth, flags e lista de eventos; do `yyc-function-table.json`, os endereços.
2. **Decompilar:** estender `NativeAnalysis/scripts/DecompilePhase1Functions.java` para aceitar uma lista de nomes/endereços (lote por planeta). Saída em `NativeAnalysis/decompiled/<lote>/`, sem sobrescrever `phase1*`.
3. **Anotar:** `NativeAnalysis/scripts/annotate_yyc_c.py` com `Tools/yyc_Call_and_Var_Tables.json` (built-ins + 1.983 variáveis).
4. **Escrever o GML** em `ReconstructedGML/<lote>/` com comentário de origem (`// from gml_Object_X_Create_0 @0x…`). Um evento por arquivo, nomes de evento iguais aos do `.yy`.
5. **Gerar o `.yy`** (objeto/sprite/som) com um gerador Python a partir dos metadados. O gerador **deve** usar como molde `.yy` salvos pela IDE 2024.14, não o formato 2.3. Sprites: frames com offset/crop por TPAG (2.340 de 2.938 frames têm tamanho diferente do canvas), sufixos ordenados numericamente.
6. **Testar** no recorte do planeta: nível carrega, objeto aparece, comportamento comparado com a build original (rodada isolada, sem perfis valiosos).
7. **Registrar** em uma tabela de progresso (sugestão: `Tools/reconstruction_progress.tsv` gerado: função, estado `todo/decompiled/gml/tested`, notas).

### 3.3 Ordem de ataque
1. **Base global:** `oControl` completo (25 eventos originais) + global scripts usados no boot; rooms `INIT → rmMM → rmMAIN`; menu `oMainMenu`, `oFade_in`, `oIs_Inside`.
2. **Capítulo/planeta Maldis** (33 níveis): todos os objetos `oMal_*` e genéricos que ele usa. Fecha o primeiro capítulo jogável do início ao fim.
3. **Diálogo:** `parDialogue` (original) + 147 objetos `oDlg_*` + `dlg_eng.lang`.
4. **Eo:** `oEo` (original) e níveis `EO*`.
5. Demais planetas em ordem de capítulo (confirmar com os templates `CHAPTER_TEMPLATES` 1–6): Mexulta, Arthek, Irnem, Septeon, Quornem, Iiedakama, Prae/Nen/Oosasma.
6. **Cenas 3D/estação:** buffers `DATA/*` (meshes zlib, 24 bytes/vértice) + 25 shaders.
7. **Bugs:** aplicar os aprovados da Fase 2 e os novos achados, cada um com teste de regressão antes da correção.

### 3.4 Aceite final
Jogo completo jogável do menu ao fim: 183 níveis carregam, transições funcionam e o save V1 é confiável. Tudo que foi simulado ou reconstruído por inferência fica listado; os fixtures originais continuam com hash inalterado.

---

## 4. Regras que valem em todas as etapas (resumo; texto completo em `PHASE3_EXECUTION_PLAN.md` §1)
- Nunca alterar `rea/NYKRA.zip`, `RuntimeBaseline/`, `RecoveredAssets/Included Files/` ou as saídas de `NativeAnalysis/`. Usar cópias e conferir hashes.
- Não rodar código de save reconstruído nem o binário original contra perfis reais; o projeto de teste tem nome próprio; sandbox ligado.
- Sem fallback ou import de perfis legados; nunca adivinhar valores ambíguos; nunca no-op silencioso; nunca pular bytes de payload desconhecido.
- Só os assets necessários a cada marco; placeholders marcados como provisórios.
- Um marco por vez, validação do usuário entre eles; duas tentativas falhas → reportar o bloqueio. Um commit por mudança lógica.

## 5. Ferramentas e comandos
```powershell
# testes Python (fixtures/estrutura; não certificam GML)
python -B -m unittest rea.NYKRA_Reconstructed.Tools.test_save_load_compat rea.NYKRA_Reconstructed.Tools.test_save_v1_format rea.NYKRA_Reconstructed.Tools.test_phase3_level_probe rea.NYKRA_Reconstructed.Tools.test_phase3_tileset -v
# validador (reescreve Tools/phase1_validation_report.json → revisar git diff)
python -B rea/NYKRA_Reconstructed/Tools/validate_formats.py
# inspecionar o que o compilador gerou (tileset/texture pages/tile layers) — somente leitura
$env:TILEDIAG_OUT="$env:TEMP\claude-tilediag"; $env:TILEDIAG_TAG="<rótulo>"
& "$env:TEMP\opencode\utmt-cli-0.9.2.0\UndertaleModCli.exe" load "<pasta-build>\out\data.win" --scripts "rea\NYKRA_Reconstructed\Tools\DumpTilesetTexture.csx"
```
- UTMT CLI: `UndertaleModCli.exe load <data.win> --scripts <script.csx>`. Rodar com stdin redirecionado, porque `--help` travou no Git Bash.
- Builds anteriores ficam em `%TEMP%\opencode\gm-nykra-*\out\data.win` e as opções usadas em `...\cache\MainOptions.json`/`PlatformOptions.json`.
- **Versão atual do projeto: GameMaker LTS 2026** (IDE em `C:\Program Files\GameMaker-LTS2026`, runtime em `C:\ProgramData\GameMakerStudio2-LTS2026\Cache\runtimes\runtime-2026.1.0.28`, pasta do usuário em `%APPDATA%\GameMakerStudio2-LTS2026\`). A forma mais simples de testar é o usuário rodar pela IDE (F5). Para builds por linha de comando, adaptar o comando abaixo trocando o runtime e a pasta do usuário pelos da LTS. Ainda não testado com a LTS.
- **Comando Igor que funcionou em 18/11 com a 2024.14** (compilar uma *cópia* do projeto numa pasta nova em `%TEMP%`; não abre o jogo). O `data.win` sai em `out\`. O exit code 1 vem só do empacotamento do zip (`File.Move` com destino vazio) e não afeta o `data.win`:
  ```powershell
  $dst = "$env:TEMP\opencode\gm-nykra-<nome>-<data>"   # pasta nova; copiar GameMakerProject para $dst\proj
  & "C:\ProgramData\GameMakerStudio2\Cache\runtimes\runtime-2024.14.4.268\bin\igor\windows\x64\Igor.exe" `
    "--project=$dst\proj\NYKRA_VerticalSlice.yyp" "--user=$env:APPDATA\GameMakerStudio2\<pasta-do-usuário>" `
    "--runtimePath=C:\ProgramData\GameMakerStudio2\Cache\runtimes\runtime-2024.14.4.268" `
    "--cache=$dst\cache" "--temp=$dst\tmp" "--of=$dst\out\NYKRA_VerticalSlice.zip" -r=VM -j=4 -- windows PackageZip
  ```
- Modelo de formato 2024.14 salvo pela IDE: `C:\Users\fraumar\GameMakerProjects\BLANK GAME` (projeto, room, opções main/windows; não tem tileset).
- O título da janela aparece como `${project_name}` porque falta `options/windows/options_windows.yy`; copiar do BLANK GAME quando for preciso.

## 7. Registro de provisórios (nada daqui pode ser esquecido)
Todo atalho tomado de propósito fica listado aqui, com o marco que o remove e o critério de saída. **Ao fechar um marco, revisar esta tabela.** Nenhum provisório conta como jogo fiel (PHASE3 §1).

| # | Provisório | Criado em | Sai em | Critério de saída |
|---|---|---|---|---|
| P1 | `oControl` **mínimo** (só as variáveis do `map_load`; sem editor, UI, saves, música) | 3.2b | Fase 4, passo 1 "Base global" (§3.3) | `oControl` original importado e funcionando (eventos, Draw_73 etc.), com todos os assets que ele referencia (23 objetos, 36 sprites, 7 sons, 18 scripts, 1 shader, 2 outros) |
| P2 | **Objetos-casca** dos 27 objetos de `rmMal_Origin` (hierarquia, sprite e flags; **sem eventos**) | 3.2b | 3.3 (eventos) | cada objeto com seus eventos reconstruídos a partir de `gml_Object_*` (96 eventos no nível) |
| P3 | Cascas **sem sprite**: os 15 sprites estão importados (3.2c, `Tools/ExportSpritesRestored.csx` + `generate_object_sprites.py`) mas **não ligados** aos objetos, porque um objeto com sprite e sem eventos anima sozinho | 3.2c (importação, feita) / 3.3 (vínculo) | 3.3 | cada sprite ligado ao seu objeto junto com os eventos reconstruídos (Create/PreCreate que definem `image_speed`/`image_index`) |
| P4 | ~~`oLevelProbe` e `oLeavesProbe`~~ **removidos no 3.2b**: o `map_load` os substitui, e o `clear_objects` original destruiria o `oLeavesProbe` (não persistente) | 3.1 / 3.2 | 3.2b | feito: o nível carrega só pelo `map_load` |
| ~~P10~~ | ~~`oMal_Tree1` com `Create_0` provisório~~ **resolvido em 19/11**: o `PreCreate` do `oMal_Tree1` é vazio; a copa é o pai `parLeaves`, cujos 4 eventos (Create, Destroy, Step_1, Draw_0) foram reconstruídos do `.exe` | 3.2b | 3.3 | feito e confirmado visualmente pelo usuário em 19/11 (copa com 2 camadas balançando) |
| P11 | `oControl` provisório com só o `tick` (`Step_1`: 2 linhas do original) | 3.3 | Fase 4 passo 1 | `oControl` original com o `Step_1` completo |
| P12 | `parLeaves_Draw_0`: o argumento de sub-imagem do `draw_sprite_pos` é uma constante preenchida em execução (não está no arquivo); usado `-1`, equivalente a `0` porque `image_index = 0` | 3.3 | quando o runtime puder ser inspecionado | confirmar o valor, ou aceitar a equivalência |
| P13 | `lengthdir_x` assumido como cosseno (o corpo de seno/cosseno do CRT não foi decifrado); só muda a fase do balanço | 3.3 | quando decifrar `FUN_141951a30` | conferir contra um par seno/cosseno conhecido |
| P5 | **Stubs visíveis** (`scripts/provisional_stubs`): `obj_setpos`, `instance_create_one`, `real_string`, `inv_add_obj` (cada um registra `STUB <nome>` no log) | 3.2b | 3.3 | função decompilada e reconstruída; o stub deixa de existir |
| P6 | `load_game`/`save_game` (stubs) e qualquer escrita **desligados** (`START_GAME = 0`) | 3.2b | 3.4 (Save V1) | save V1 implementado e testado (`SAVE_MIGRATION_DESIGN.md`) |
| P7 | `interpolate_pixels = false` (escolha do usuário) | 3.2 | quando o usuário notar diferença | decisão do usuário; valor original não lido do GEN8 |
| P8 | Sem som, sem música, sem sombras/iluminação (`LIGHTING`), sem shaders. O `oControl` provisório define 18 variáveis `snd... = -1` para o `_SET_SCENE` não quebrar | 3.2b | Fase 4 | sons importados **e as variáveis `snd... = -1` removidas** (senão sombreiam os assets); `LIGHTING` e shaders importados e testados |
| P9 | `oCamera` só com o `Create_0` original; os outros 5 eventos (Alarm_0, Alarm_1, Step_1, Step_2, Draw_75) não foram importados, então a câmera não segue o jogador | 3.2b | 3.3 | os 5 eventos importados (precisam de `reach` etc.) |

Regra de manutenção: ao criar um provisório novo, acrescentar uma linha aqui **no mesmo commit**; ao removê-lo, riscar a linha e anotar o commit.

## 6. Próximo passo imediato
**Atualizado em 19/11:** marco 3.2 aceito (§1.3c). Levantamento do 3.2b feito (§2) e decisões do usuário tomadas: `oControl` mínimo provisório (P1) e objetos-casca sem eventos (P2), com a importação do `oControl` original e dos sprites/eventos **registrados em §7** para as fases seguintes. Próximo: escrever os scripts convertidos, o `oControl` mínimo e o gerador de cascas. O texto abaixo é o plano original de 17/11.

Executar **T1** (§1.4) **sem** mexer na opção, para descobrir qual condição é a decisiva. Rodar o dump UTMT como critério objetivo. Em seguida, desligar `option_remove_unused_assets` (T2) de qualquer forma, por causa dos assets referenciados só pelos `.rmlvl`, e repetir o dump. Só então pedir a confirmação visual. Isso fecha o marco 3.2 e libera o 3.2b.
