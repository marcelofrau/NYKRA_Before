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
| 3.3 — Player/objetos/portas | 🟨 em andamento | **Etapa 1 (jogador que anda, em silêncio e sem efeitos) aceita pelo usuário em 19/11**: anda, pula com espaço, colisões com paredes, degraus e chão corretas, animação fluida (F5 na IDE). Origem: `ARRAY_COLLIDE` reconstruído do binário + 21 eventos originais do `oPlayer` + `parEntity`. Pendências registradas em §7 (P21-P28). **Etapa 2 (sons e a poeira `oFx`) e etapa 3a (notas) aceitas em 19/11**: 87 sons, passos por tipo de chão, partículas, o salto com a curva `easing` 14 (alcança a plataforma alta) e as 2 notas do nível abrem e mostram o texto legível na fonte original. A grama reagindo ao jogador (P19a) também foi aceita. **ESCRITO E COMMITADO, MAS AINDA NÃO TESTADO NA IDE (pendente de F5, 19/11 à noite):** (1) placas de pressão `oInput_pp`, `oVIEW_CONSTRICT`, `oDoor_Origin` e o estado inicial dos fios (commit `afde059`); (2) portas `parDoor_Flat`/`oMal_Door_Flat` com sons e os níveis `rmMal_1`/`rmMal_o1` (commit `f73b8ee`, P35: várias inferências; confirmar a seta, a animação de abrir, o fade e o carregamento do próximo nível, e colar o log). **Faltam**: fios (`oWire*`: `Draw_0`, `Draw_77`, propagação do sinal, P34), `COLLIDE` (P24, empurrar o `oDoor_chunky`), o corte da grama (P19b, depende do ataque Telarod), `oOrigin` (cutscene, P21), `oEo`, `oCamera_Point` (P33), efeitos restantes (`create_flash`, `create_poly`, `mask_*`...) e os outros tipos de `easing` (P25) |
| 3.4 — Save V1 | ⬜ | só codec Python de referência |
| 4 — Resto do jogo | ⬜ | 2.720 funções YYC; 16 reconstruídas |

### 0.1 Atualização em 22/11/2026 — branch `reconstruction-attempt-pickle`

Branch criada a partir de `origin/reconstruction-attempt-1` @ `113393e`, com três commits e push. Estado verificado no F5 pelo usuário:

- animação da porta corrigida (recorte superior em `oMal_Door_Flat/Draw_0.gml`);
- fade de transição corrigido (`oFade_in` no depth `1000`; cobertura opaca removida de `parDoor_Flat/Draw_73.gml`);
- céu em gradiente visível (`oControl/Draw_72.gml`; `Background` preto de `rmMAIN` desligado);
- câmera com clamp correto em `oVIEW_CONSTRICT` (`mean` agora pesa a posição constrita 4×);
- cascas de `LIGHTING`, `oGlow_Beam_L`, `oGlow_Beam_S` e `oGlw_yellow_m` e snap da câmera na chegada pela porta;
- suíte Python: 65 testes OK, 1 erro de import preexistente em `test_save_v1_format.py`; `git diff --check` limpo.

**Gamepad:** decidido pelo usuário em 22/11 para ficar na Fase 4, junto com o `oControl` completo (P1/P11) e a cauda de `set_controls` (P16). Não é item do marco atual.

**Ordem retomada em 22/11:** (1) ✓ parallax do céu com `sMal_bg1..4` + `draw_bg_tiled_h`/`draw_bg_tiled_hwave` — aceito no F5 pelo usuário em 22/11 (costuras e UVs ok; nuvens visíveis); (2) ✓ eventos e sprites de `LIGHTING`/glows — aceito no F5 pelo usuário em 22/11 (luz projetada nos objetos, pedra com bilhete sutilmente visível, quarto escuro); (3) fios e propagação de sinal (P34); (4) `oOrigin`, `oEo`, `oCamera_Point` e curvas `easing` restantes; (5) Fase 4, base global.

**Correção do plano:** P14 cobriu `sMal_bg_leaves*`, não as camadas de céu `sMal_bg1..4`. Essas foram importadas em 22/11 com `Tools/import_maldis_sky.py`, juntas dos scripts `draw_bg_tiled_h` e `draw_bg_tiled_hwave` reconstruídos a partir do YYC (`NativeAnalysis/decompiled/parallax_annotated/`). F5 mostrou dois requisitos do formato LTS: sprite precisa do PNG em `sprites/<nome>/layers/<frame>/<layer>.png`, e script chamado com argumentos precisa declarar `function nome(...)`. Ambos corrigidos. F5 seguinte mostrou costura nas montanhas: `draw_bg_tiled_h` usava `_x / tile_w` como fase; o YYC original usa `_x mod tile_w`, laço de `-2` até `view_x/tile_w + view_width/tile_w + 1`. Corrigido. F5 seguinte: costuras perfeitas, mas sobrava uma "montanha cortada" que sumia ao caminhar. Causa era outro erro meu em `draw_bg_tiled_hwave`: eu emitia 2 vértices por tile com `u` fracionário; o YYC original emite 4 vértices por tile (`u=0` na borda esquerda, `u=1` na direita). Corrigido em 22/11 e aceito no F5. Lição: quando o defeito some com a fase do parallax, conferir as coordenadas de textura do primitivo antes de suspeitar da imagem do sprite.

**Estado atual (22/11):** `LIGHTING` agora tem `Create_0`, `Alarm_0`, `Destroy_0` e `Draw_73`; `parGlow_Beam` tem `Create_0` com os três raios e os offsets originais (L 13.5, S 8.5, par 2). F5 mostrou luz, mas sem interação com o cenário: minha primeira versão escurecia a tela e somava branco por cima. O assembly completo mostra que o original constrói uma máscara de luz com duas surfaces, `draw_ellipse_color`, centenas de `draw_circle_colour` e compõe com `gpu_set_blendmode_ext` + `draw_surface`. `Draw_73` foi reescrito como máscara multiplicativa: `draw_clear(COLOUR)`, elipses e cones brancos somados na surface, depois `gpu_set_blendmode_ext(bm_dest_colour, bm_zero)` sobre a sala. Isso preserva cor e detalhe do ambiente dentro da luz. A decompilação completa estourou 600 s no Ghidra; a implementação ainda não é tradução linha a linha. **F5 validado em 22/11:** usuário confirmou luz projetada nos objetos e refletida no ambiente; quarto escuro, luz ilumina a pedra com o bilhete sutilmente visível. Marco encerrado. Se surgir divergência, refinar com `NativeAnalysis/decompiled/lighting_draw/lighting_draw.asm`. Próximo marco: fios e propagação de sinal (P34).

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


#### Levantamento do jogador (19/11/2026; `SURVEY_3_3_player.md`, gerado por `Tools/survey_object_dependencies.py`)
- **`oPlayer`: os 21 eventos têm GML original na raiz** (só o `PreCreate_0`, vazio, não tem). O trabalho dele é reunir dependências, não decifrar código: **40 scripts** (34 a fazer, 2 decompilados, 2 reconstruídos, 2 com GML original), 20 objetos, 41 sprites, 56 sons e 1 shader.
- **`oOrigin`** (cria o jogador no `rmMal_Origin`): 9 eventos, **nenhum** com GML original; precisam ser elevados do `.exe` (Alarm_0..3, Create_0, Draw_0, Draw_73, Step_1).
- `oEo`: 7 de 8 eventos com GML original e 22 scripts (muitos em comum com o `oPlayer`). `parNote`: 4 de 5 com GML original e 9 scripts.
- **Scripts do `oPlayer` por função:**
  - movimento e colisão (núcleo): `ARRAY_COLLIDE` (decompilado), `bb_setmiddle`, `box_inside_bound`, `playerhascontrol`, `obj_setpos`, `instance_create_one`, `reach`;
  - som: `play_sound`, `snd_step_dirt/grass/stone/wood` (+ `play_sound_pos`, que já existe);
  - efeitos visuais: `create_flash`, `create_flashline`, `create_fx`, `create_lighting_flash`, `create_poly`, `create_spark`, `mask_set/mask_draw/mask_reset`, `draw_polygon`, `draw_rectangle_view`, `draw_sprite_glitch`;
  - texto e interface: `draw_ui_arrow`, `string_n`, `string_n_glitch`, `string_wordbreak`, `ini_language`, `open_book`, `inv_delete`, `real_string`;
  - utilidades: `sleep`, `hrnd`, `easing`, `save_game`.
- **Proposta de ordem para o 3.3 (a confirmar com o usuário):** (1) **jogador que anda**, em silêncio e sem efeitos: scripts de movimento/colisão + `oOrigin` + `oPlayer` + só os sprites que ele usa para andar, com sons e efeitos como stubs visíveis; (2) **sons e efeitos** (importar sons; scripts `create_*`/`mask_*`); (3) **interações**: portas (`oMal_Door_Flat`), notas, fios, o ramo da grama que reage ao jogador (P19), `oEo`.

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
| P18 | `oGrass`/`oGrass3` chamam `event_inherited()` no `Create`: a decompilação **não** mostra essa chamada, mas o `Draw` herdado lê `shake`, `col1` etc. que só o `Create` do pai define. É uma inferência para validar em execução | 3.3 | quando o runtime original puder ser observado | confirmar se o original executa o `Create` do pai |
| P19 | `parGrass_Draw_0` com jogador: **parte (a) resolvida em 19/11**: a mola da lâmina (`tshake`/`shake`, divisor 9 e amortecimento 0,975 lidos do `.exe`) e o balanço quando a caixa do jogador sobrepõe a grama (`shake += oPlayer.hsp`); a leitura da decompilação mostrou que o "ramo de ~500 linhas" é na verdade o **corte pelo ataque do jogador** (`player_attack_distance(x, y-8, 18.5, 1, 0.1)`: 1 chance em 21 por quadro de criar um `oToka`, um som de farfalhar (sons 150..155), 4 partículas de poeira e 16 `oObject_Bits`, e destruir a lâmina). **Parte (b) pendente**: o corte, que só ocorre com o ataque do jogador (Telarod), ainda inexistente | 3.3 | junto com o `oPlayer` | ramo reconstruído e testado com o jogador |
| P20 | `parGrass`: o `Create` escreve `wave = (instance_number(oIs_Inside) >= 1)` e o `Alarm_2` o oposto (`< 1`); mantido como no pseudocódigo | 3.3 | quando for possível observar | confirmar a intenção do autor |
| P21 | Nascimento do jogador: o `oOrigin` (cutscene do despertar) e o nível `rmMal_Origin` **não** criam o `oPlayer`; só `load_CHARACTER` (save) e `oPlace_Player` (célula 3) o criam. Num jogo novo o ponto de criação original não foi achado. O projeto vai criá-lo no `oControl` provisório em `oOrigin.x, oOrigin.y-32` (posição do respawn do `oPlayer/Other_11`) e o `oOrigin` fica como shell, sem a cutscene | 3.3 (jogador, etapa 1) | quando a cutscene `oOrigin` for reconstruída e o fluxo de novo jogo (menu, 3.4) for entendido | achar quem cria o jogador no novo jogo; reconstruir `oOrigin` |
| P22 | `hurt_player` é stub ruidoso (o jogador não leva dano). O script real (`0x1400e28e0`, `decompiled/arr_lifted`) baixa `hp`, empurra o jogador e treme a câmera | 3.3 (jogador, etapa 1) | etapa 3 (interações) | reconstruir `hurt_player` |
| P24 | `parEntity_Step_2` provisório: o original tem o script `COLLIDE` inlinado (colisão entidade-objeto: objetos sólidos, água `oWATER`, plataformas móveis, `collision_list`). Só o ramo `collide_object = 0` foi escrito. Consequência: o jogador não colide com objetos, e filhos de `parEntity` com gravidade (`oDoor_chunky`, sem sprite) caem até o fim do mapa | 3.3 (jogador, etapa 1) | etapa 3 (interações) | reconstruir `COLLIDE` (`decompiled/phase1_lifted`) |
| P25 | **Parcialmente resolvido em 19/11**: o tipo 14 (curva do salto) é a *ease in-out sine*, `-c/2*(cos(pi*t/d)-1)+b`, lida do binário (constantes pi, 2.0 e -1.0 conferidas no `.exe`); a ordem das 30 curvas (10 famílias de Penner × In/Out/InOut) é inferida. O `easing` reconstruído só cobre o tipo 14; os outros tipos logam `STUB`. Com o stub linear anterior o pulo ficava mais baixo (o usuário não alcançava a nota da plataforma alta). Texto antigo: `easing` era stub que devolvia o tempo sem curva: o salto (`Step_1`: `easing(14, ...)`) fica com altura/forma diferente da original. O script real tem 1.481 linhas lifted (tipo 14 ainda não lido) | 3.3 (jogador, etapa 1) | logo depois do primeiro F5 do jogador andando | ler o `case 14` e reconstruir só o necessário. Achados (19/11): `easing(tipo, t, b, c, d)` é a biblioteca de 30 curvas (0..29) com uma tabela de saltos em `0x140084be8` (o decompilador não resolve os `case`; o do tipo 14 está em `0x140064dd8` e começa multiplicando por π, ou seja, é uma curva trigonométrica). Para ler um `case` basta `NativeAnalysis/scripts/DisassembleRange.java` (Ghidra, só leitura) sobre o intervalo; falta seguir o rabo comum `0x140066e18` e as chamadas de seno/cosseno que o compilador esconde |
| P26 | `shDissolve`: o fonte do shader não foi recuperado; o projeto tem um shader passa-direto com os 4 uniformes que o `Create_0` procura. A dissolução da morte não existe. As tags do `.yy` do shader não foram copiadas de um arquivo salvo pela IDE | 3.3 (jogador, etapa 1) | quando a IDE regravar o `.yy` e a morte for reconstruída | recuperar o GLSL no `data.win` |
| P27 | 19 scripts de efeito/UI do `oPlayer` são stubs ruidosos (`provisional_player_stubs`, gerado por `Tools/generate_player_stubs.py`; loga `STUB nome` uma vez). **Sons (etapa 2): os 56 do `oPlayer` mais 31 de passos foram importados** (`Tools/ExportSounds.csx` + `Tools/generate_sounds.py`), e `play_sound`, `play_sound_pos` (original) e `snd_step_*` (por nome: os índices 5..37 do original são `sndStep_grass1..wood8`, e o 25 é `sndMCh_Discovery`, excluído) estão reais; o `.yy` de som não foi copiado de um arquivo salvo pela IDE. O `oControl` provisório ganhou `anim1`, `game_dialogue`, `EO_SPAWN` e `GAME_CHAPTER` copiados do original | 3.3 (jogador, etapas 1-3) | etapa 2 (efeitos) e 3 (UI) | reconstruir `create_*`, `mask_*`, `draw_*` |
| P29 | `play_sound`: as duas constantes que o Ghidra perdeu no primeiro `audio_sound_gain` foram assumidas como `0, 0` (mesmo padrão do `play_sound_pos` original); o `play_sound` real não multiplica por `SOUND_VOLUME` nem por `mode == 3`, ao contrário do `play_sound_pos` | 3.3 (jogador, etapa 2) | quando o som de um uso de `play_sound` soar diferente do original | comparar de ouvido com o jogo original |
| P28 | ~~Fontes~~ **resolvido em 19/11 (notas)**: os 9 sprites de fonte foram importados e o `oControl` provisório cria as fontes com o `font_add_sprite_ext` copiado do original. Continuam provisórios os globais copiados do original: `LETTERBOX`, `GLITCH`, `c_iiem`, `c_ink`, `c_edgb*`, `CHYP`, `DIALOGUE_*`, `ITEM` (só `ITEM[0,0]`; a tabela de itens ainda não existe) | 3.3 (jogador, etapa 1) | etapa 3 (UI e inventário) | importar os sprites de fonte; reconstruir `add_item`/`ITEM` |
| P30 | `oFx` (a partícula de `create_fx`: poeira, faíscas): reconstruída de `decompiled/fx_lifted`, com 4 incertezas: (1) a 1ª opção do `choose` do ângulo em `Create_0` (as outras são 90, 180, 270) tomada como 0; (2) no círculo de brilho (`Draw_0`/`Draw_73`) as cores 1 e 2 tomadas como `c_black` e o contorno como `false`, e o modo de mistura restaurado como `bm_normal`; (3) o ramo `player == 1` do `Step_2` (a partícula segue o jogador) **não** foi reconstruído: loga `STUB`; (4) `sprite_index == 392` do original vira `sCloud_Puff` (índice 392 na ordem original; sprite importado só para isso) | 3.3 (jogador, etapa 2) | quando a poeira do pouso/passos puder ser comparada com o jogo original | comparar visualmente; ler o ramo `player` |
| P35 | Portas **escritas em 19/11** a partir de `decompiled/door_lifted`, com inferências: o builtin que testa `anim2` (`round(anim2 + 0.49) <= 0`), o argumento de loop dos sons, o alfa dos dois sprites de brilho (`anim2`), as cores do círculo de brilho (`c_black`), `halign/valign/cor/alfa` do texto "LOCKED", `arrow_colour = make_colour_rgb(255, 64, 1)`, o valor inicial de `rm` (`""`), a lógica do véu de fade na chegada (`fade_in == 2`) e a ordem dos quadros (2/6, 3/7, 0/5, 1, 4). **Desvio**: se o arquivo do nível destino não existe, a porta loga e devolve o controle (o original sempre o acha). Incluídos nos `datafiles`: `rmMal_1` e `rmMal_o1` (destinos das duas portas); os objetos que esses níveis usam e o projeto não tem são pulados e logados por `map_load`. A chegada na porta é do próprio `oPlayer/Step_1.gml` original (`door_n`) | 3.3 (etapa 3) | quando o usuário comparar as portas com o jogo original | comparar visualmente; reconstruir os objetos dos níveis seguintes |
| P31 | Portas (`parDoor_Flat`, `oMal_Door_Flat`): lidas e escritas (ver P35). Achados: o `Step_1` abre a porta quando `playerhascontrol()`, o jogador está a menos de 15 px de `(x, y-8)`, `locked != 1`, `control` e `kpu` ligados, `open == 0`, `UI_OPEN == 0` e `anim <= 0` (toca o som de índice 81); o `Draw_77` com `in == 1` faz o fade, grava `door_n = n`, chama `save_game()` e, com `oControl`, `map_load(working_directory + "level_data/" + rm + ".rmlvl", rm)`. As portas do `rmMal_Origin` levam a `rmMal_1` (n=7) e `rmMal_o1` (n=8); para a transição real faltam esses níveis nos `datafiles`, o posicionamento na porta de chegada e muitos objetos desses níveis | 3.3 (etapa 3) | quando as portas forem reconstruídas | escrever as portas; decidir se a troca de sala entra já |
| P32 | `oVIEW_CONSTRICT.Step_2`: a média de cinco valores que suaviza a câmera foi lida como `mean(novo, atual, atual, atual, atual)`; as três cópias vêm de um slot de pilha que o decompilador não nomeou. Também mantido do original: o teste vertical usa a LARGURA da vista no limite distante (provável erro do autor) | 3.3 (etapa 3) | quando houver um nível com `oVIEW_CONSTRICT` ativo para comparar | comparar o comportamento da câmera com o jogo original |
| P33 | `oCamera_Point` (`Draw_0`: círculos de edição, só com `mode != 3`) **não** reconstruído; o objeto segue como casca porque o `oCamera` só usa a posição dele | 3.3 (etapa 3) | com o editor de níveis (fase "Base global") | ler `small_lifted/gml_Object_oCamera_Point_Draw_0` |
| P34 | Fios (`oWire`, `oWire_DIODE_D`, `oWire_TIMER`): só `Create_0` e `Step_1` (estado `on`/`p_on`/`anim`/`send`/`sfx`/`rand`, arrays `d` e `an`; idênticos nos três) foram escritos. **`Draw_0` (863/660/1.136 linhas lifted), `Draw_77` (som `sndWire`) e a propagação do sinal não existem**: os fios são invisíveis e não conduzem. Para a placa de pressão (`oInput_pp`) achá-los com `instance_place`, eles usam o sprite como máscara de colisão, mas não como desenho | 3.3 (etapa 3) | quando os fios forem reconstruídos | ler `Draw_0` de cada fio (é ele que anima `anim`, lê `d` e liga os vizinhos) |
| P23 | `ARRAY_COLLIDE`: os builtins que o Ghidra perdeu foram inferidos (`floor`, `ceil` no teste de plataforma de atravessar, `max`/`min` nas margens); `FUN_141944a50(v,16)` tratado como `fmod`; limite inferior 0 nos `clamp` de `check_array_cell`/`check_array` (constante inicializada em execução, vale P12); ordem dos argumentos `[coluna, linha]` do `hit_id`; a sonda lateral do tile 19 (`check_array(x1-2 ...)`) foi mantida, mas o `hurt_player` é stub | 3.3 (jogador, etapa 1) | quando o F5 mostrar o jogador andando, pulando e pousando sem travar | validar andando em paredes, chão, plataformas de atravessar e tile 19 |
| P15 | `config_get` aproximado: confirmado que abre o arquivo `config`, lê com `ini_read_string` e fecha; **não** confirmado um ramo extra quando o padrão é 1 | 3.3 | quando decifrar `FUN_140135c90` | ramo extra reconstruído |
| P16 | `set_controls`: só as duas tabelas de teclas (WASD ou setas); a parte final (comparações com 37..40) não foi reconstruída | 3.3 | quando o teclado/gamepad forem testados | cauda do `gml_Script_set_controls` lida |
| P17 | `reach` é stub (só o ramo da UI do Eo no `oCamera` usa) | 3.3 | junto com `oEo` | `gml_Script_reach` @ 0x14003b450 reconstruído |
| P9 | ~~`oCamera` só com `Create_0`~~ **resolvido em 19/11**: Alarm_0, Alarm_1, Step_2 e Draw_75 copiados do GML original (o Step_1 original é só comentário). Sem jogador a câmera fica livre (W A S D), porque `START_GAME = 0` mantém `mode = 0` | 3.2b | 3.3 | feito; falta o seguimento do jogador, que depende do `oPlayer` |
| ~~P14~~ | ~~As folhas de fundo aparecem deslocadas~~ **resolvido em 19/11** com a câmera real (confirmado pelo usuário: janela, imagem ampliada, parallax funcionando). Era: (vazam para fora do nível): o parallax usa o centro da câmera (`CMX`, `CMY`), e o `oCamera` real (Step/Alarm) e o `set_game_screen` ainda não existem | 3.3 | quando a câmera for reconstruída (P9) | folhas alinhadas com o jogo original; conferir visualmente |
| P11 | `oControl` provisório com só o `tick` (`Step_1`: 2 linhas do original) | 3.3 | Fase 4 passo 1 | `oControl` original com o `Step_1` completo |
| P12 | `parLeaves_Draw_0`: o argumento de sub-imagem do `draw_sprite_pos` é uma constante preenchida em execução (não está no arquivo); usado `-1`, equivalente a `0` porque `image_index = 0` | 3.3 | quando o runtime puder ser inspecionado | confirmar o valor, ou aceitar a equivalência |
| P13 | `lengthdir_x` assumido como cosseno (o corpo de seno/cosseno do CRT não foi decifrado); só muda a fase do balanço | 3.3 | quando decifrar `FUN_141951a30` | conferir contra um par seno/cosseno conhecido |
| P5 | **Stubs visíveis** (`scripts/provisional_stubs`): `obj_setpos`, `instance_create_one`, `real_string`, `inv_add_obj` (cada um registra `STUB <nome>` no log) | 3.2b | 3.3 | função decompilada e reconstruída; o stub deixa de existir |
| P6 | `load_game`/`save_game` (stubs) e qualquer escrita **desligados** (`START_GAME = 0`) | 3.2b | 3.4 (Save V1) | save V1 implementado e testado (`SAVE_MIGRATION_DESIGN.md`) |
| P7 | `interpolate_pixels = false` (escolha do usuário) | 3.2 | quando o usuário notar diferença | decisão do usuário; valor original não lido do GEN8 |
| P8 | Sem som, sem música, sem sombras/iluminação (`LIGHTING`), sem shaders. O `oControl` provisório define 18 variáveis `snd... = -1` para o `_SET_SCENE` não quebrar | 3.2b | Fase 4 | sons importados **e as variáveis `snd... = -1` removidas** (senão sombreiam os assets); `LIGHTING` e shaders importados e testados |

Regra de manutenção: ao criar um provisório novo, acrescentar uma linha aqui **no mesmo commit**; ao removê-lo, riscar a linha e anotar o commit.

## 6. Próximo passo imediato
**Atualizado em 19/11:** marco 3.2 aceito (§1.3c). Levantamento do 3.2b feito (§2) e decisões do usuário tomadas: `oControl` mínimo provisório (P1) e objetos-casca sem eventos (P2), com a importação do `oControl` original e dos sprites/eventos **registrados em §7** para as fases seguintes. Próximo: escrever os scripts convertidos, o `oControl` mínimo e o gerador de cascas. O texto abaixo é o plano original de 17/11.

Executar **T1** (§1.4) **sem** mexer na opção, para descobrir qual condição é a decisiva. Rodar o dump UTMT como critério objetivo. Em seguida, desligar `option_remove_unused_assets` (T2) de qualquer forma, por causa dos assets referenciados só pelos `.rmlvl`, e repetir o dump. Só então pedir a confirmação visual. Isso fecha o marco 3.2 e libera o 3.2b.
