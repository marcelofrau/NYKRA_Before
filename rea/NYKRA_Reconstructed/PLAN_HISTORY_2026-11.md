# NYKRA: Before — Histórico do plano (novembro de 2026)

Seções retiradas do `MASTER_RECONSTRUCTION_PLAN.md` na revisão de 24/11/2026 para deixar o plano curto. O texto está como estava, sem edição; as referências internas (`§1.3c`, `§2`...) apontam para as seções deste arquivo. O estado atual e as regras estão no plano.

## A. Estado e atualizações até 23/11 (antigo §0, §0.1–§0.3)

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
| 3.3 — Player/objetos/portas | 🟨 em andamento | **Etapa 1 (jogador que anda, em silêncio e sem efeitos) aceita pelo usuário em 19/11**: anda, pula com espaço, colisões com paredes, degraus e chão corretas, animação fluida (F5 na IDE). Origem: `ARRAY_COLLIDE` reconstruído do binário + 21 eventos originais do `oPlayer` + `parEntity`. Pendências registradas em §7 (P21-P28). **Etapa 2 (sons e a poeira `oFx`) e etapa 3a (notas) aceitas em 19/11**: 87 sons, passos por tipo de chão, partículas, o salto com a curva `easing` 14 (alcança a plataforma alta) e as 2 notas do nível abrem e mostram o texto legível na fonte original. A grama reagindo ao jogador (P19a) também foi aceita. **ESCRITO E COMMITADO, MAS AINDA NÃO TESTADO NA IDE (pendente de F5, 19/11 à noite):** (1) placas de pressão `oInput_pp`, `oVIEW_CONSTRICT`, `oDoor_Origin` e o estado inicial dos fios (commit `afde059`); (2) portas `parDoor_Flat`/`oMal_Door_Flat` com sons e os níveis `rmMal_1`/`rmMal_o1` (commit `f73b8ee`, P35: várias inferências; confirmar a seta, a animação de abrir, o fade e o carregamento do próximo nível, e colar o log). **Faltam**: `COLLIDE` (P24, empurrar o `oDoor_chunky`), o corte da grama (P19b, depende do ataque Telarod), `oOrigin` (cutscene, P21), `oEo`, `oCamera_Point` (P33), efeitos restantes (`create_flash`, `create_poly`, `mask_*`...) e os outros tipos de `easing` (P25) |
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

### 0.2 Atualização em 23/11/2026 — fios e porta pesada validados

Estado ao fim do dia, no F5 do usuário:

- **Fios (P34) concluídos:** `oWire`, `oWire_DIODE_D` e `oWire_TIMER` com desenho, propagação e som próprios. O diodo anima só `an[2]` (entrada da placa) e empurra apenas para baixo; o timer usa `lerp(an, d*3, 0.04/0.2)`, limite 3 e três cliques descendentes. A limpeza de sinal agora escreve na própria entrada, não no vizinho. Logs `WIRE`/`PLATE` removidos.
- **`oDoor_chunky` portado:** `Create_0`, `Step_1`, `Step_2` (End Step, bloqueio provisório), `Draw_0` e sprite `sDoor_chunky`. Fechada encosta no arco; aberta sobe 44 px e some na pedra acima. O valor 44 substitui os 80 px do YYC, que afundavam a laje e deixavam meia parede por causa do `min(y + 6, ystart)` no desenho.
- **Suíte Python:** 71 testes, 70 OK, 1 erro de import preexistente em `test_save_v1_format.py`.
- **Logs:** todos os `show_debug_message` passam por `scripts/debug_log` (`global.LOG_LEVEL` 0/1/2; padrão 1). O `FADE` por quadro, o `FADE alarm` vazio, a lista por objeto do boot e o `hurt_player` por quadro saíram do log; o overlay do `oControl/Draw_64` só desenha no nível 2. Teste novo proíbe `show_debug_message` fora do gate.
- **`oDoor_chunky/Draw_73` portado em 23/11:** o evento inteiro é `power_on_t = power_on;` (o resto do decompilado é limpeza de pilha). Não desenha nada, então a porta não tem brilho nem sombra próprios. `Destroy_0` fica pendente como P36.
- **Pendências:** confirmar no F5 o bloqueio/passagem da porta, a descarga do timer com 3 cliques e o circuito sem sinal preso; portar P24 (`COLLIDE`) e remover o bloqueio local do `Step_2`.

**Gamepad:** decidido pelo usuário em 22/11 para ficar na Fase 4, junto com o `oControl` completo (P1/P11) e a cauda de `set_controls` (P16). Não é item do marco atual.

**Ordem retomada em 22/11:** (1) ✓ parallax do céu com `sMal_bg1..4` + `draw_bg_tiled_h`/`draw_bg_tiled_hwave` — aceito no F5 pelo usuário em 22/11 (costuras e UVs ok; nuvens visíveis); (2) ✓ eventos e sprites de `LIGHTING`/glows — aceito no F5 pelo usuário em 22/11 (luz projetada nos objetos, pedra com bilhete sutilmente visível, quarto escuro); (3) ✅ fios e propagação de sinal (P34) — `oWire` agora tem `Draw_0` (sprite, brilho, `an[]`, `on`, propagação e `power_on`) e `Draw_77` (som `sndWire`); `oWire_DIODE_D` teve a propagação própria portada do YYC (só empurra para o fio abaixo, limpa as próprias entradas ociosas, `on = round(min(2,soma))`); `oWire_TIMER` ainda usa o desenho de `oWire` de forma provisória, aguardando F5; (4) `oOrigin`, `oEo`, `oCamera_Point` e curvas `easing` restantes; (5) Fase 4, base global.

**Correção do plano:** P14 cobriu `sMal_bg_leaves*`, não as camadas de céu `sMal_bg1..4`. Essas foram importadas em 22/11 com `Tools/import_maldis_sky.py`, juntas dos scripts `draw_bg_tiled_h` e `draw_bg_tiled_hwave` reconstruídos a partir do YYC (`NativeAnalysis/decompiled/parallax_annotated/`). F5 mostrou dois requisitos do formato LTS: sprite precisa do PNG em `sprites/<nome>/layers/<frame>/<layer>.png`, e script chamado com argumentos precisa declarar `function nome(...)`. Ambos corrigidos. F5 seguinte mostrou costura nas montanhas: `draw_bg_tiled_h` usava `_x / tile_w` como fase; o YYC original usa `_x mod tile_w`, laço de `-2` até `view_x/tile_w + view_width/tile_w + 1`. Corrigido. F5 seguinte: costuras perfeitas, mas sobrava uma "montanha cortada" que sumia ao caminhar. Causa era outro erro meu em `draw_bg_tiled_hwave`: eu emitia 2 vértices por tile com `u` fracionário; o YYC original emite 4 vértices por tile (`u=0` na borda esquerda, `u=1` na direita). Corrigido em 22/11 e aceito no F5. Lição: quando o defeito some com a fase do parallax, conferir as coordenadas de textura do primitivo antes de suspeitar da imagem do sprite.

**Estado atual (22/11):** `LIGHTING` agora tem `Create_0`, `Alarm_0`, `Destroy_0` e `Draw_73`; `parGlow_Beam` tem `Create_0` com os três raios e os offsets originais (L 13.5, S 8.5, par 2). F5 mostrou luz, mas sem interação com o cenário: minha primeira versão escurecia a tela e somava branco por cima. O assembly completo mostra que o original constrói uma máscara de luz com duas surfaces, `draw_ellipse_color`, centenas de `draw_circle_colour` e compõe com `gpu_set_blendmode_ext` + `draw_surface`. `Draw_73` foi reescrito como máscara multiplicativa: `draw_clear(COLOUR)`, elipses e cones brancos somados na surface, depois `gpu_set_blendmode_ext(bm_dest_colour, bm_zero)` sobre a sala. Isso preserva cor e detalhe do ambiente dentro da luz. A decompilação completa estourou 600 s no Ghidra; a implementação ainda não é tradução linha a linha. **F5 validado em 22/11:** usuário confirmou luz projetada nos objetos e refletida no ambiente; quarto escuro, luz ilumina a pedra com o bilhete sutilmente visível. Marco encerrado. Se surgir divergência, refinar com `NativeAnalysis/decompiled/lighting_draw/lighting_draw.asm`.

**Fios (P34), estado em 22/11:** o YYC de `oWire/Draw_0` (`NativeAnalysis/decompiled/small_annotated/gml_Object_oWire_Draw_0.c`) foi lido até o fim: `d[0..3]` são entradas esquerda/direita/cima/baixo; `an[]` suaviza cada entrada com `lerp(an,d,0.15)` (o helper `FUN_14003b450` é `lerp`, não `reach_tween`); `anim` é o clamp da soma; `on` é `round(min(1,soma))`. Cada fio propaga para o vizinho `oWire` na direção oposta quando não recebe dele, e limpa a própria entrada quando o vizinho está inativo. Ao final, escreve `power_on` no `parWire`/`parWirePhysics` no próprio local. `Draw_77` toca `sndWire` (ID 473) na subida e descida de `on`. Os dois eventos foram registrados e o sprite `sWire` passou a ser usado por `sprite_index`. Faltam traduzir as variantes diodo/timer e validar F5: placa pressionada deve acender o fio, o brilho deve subir e o som de clique deve tocar uma vez por transição. **F5 do usuário em 22/11:** placa não reagiu e houve ruído de estática. Causa encontrada no YYC: a propagação original só roda quando `anim >= 1`; minha versão propagava sempre, então fios desligados se realimentavam e travavam a rede acesa antes de qualquer placa. Corrigido em `oWire`, `oWire_DIODE_D` e `oWire_TIMER` com `if (anim >= 1)`. O YYC também limita `on` a `min(2, soma(d))`, mas `on` binário foi mantido por enquanto porque `Draw_77` original só toca som quando `on == 1`. O nível `rmMal_Origin` tem duas placas em `(128,288)` e `(160,288)`, ambas na mesma plataforma; cada uma alimenta o diodo logo acima/direita. Segundo F5: placa pisca e apaga. Causa: troquei `lerp(an,d,0.15)` por `reach_tween(an,d,0.15)`; `reach_tween` calcula `lerp(..., 1/0.15 = 6.67)`, extrapola e diverge, então `anim` cai abaixo de zero e a rede se limpa. Corrigido nos três objetos para `lerp(an,d,0.15)`. Terceiro F5 do usuário: ao pisar na placa, as luzes avançam para a esquerda, só um slot do diodo acende e a passagem entre as placas fica livre. Isso ainda não é o comportamento final: a passagem livre é o gap conhecido de `COLLIDE`/`oDoor_chunky` (P24), e o diodo estava usando a propagação bidirecional de `oWire`. O YYC de `oWire_DIODE_D/Draw_0` mostra que o diodo limpa as próprias entradas `d[0..2]` quando o vizinho está inativo e só escreve `d[2]` no fio abaixo; `on = round(min(2,soma(d)))`. Portado em `GameMakerProject/objects/oWire_DIODE_D/Draw_0.gml`. Quarto F5 do usuário: placa acende diodo, bola de luz, luz central, slots e o outro diodo; ao sair da placa nada apaga, mesmo esperando. Luz no outro diodo é esperada: o fio abaixo do diodo esquerdo liga ao timer e daí ao fio/diodo direito. O travamento é bug da reconstrução: `lerp(an,d,0.15)` nunca chega a zero exato, mas minhas limpezas usavam `<= 0`; o YYC usa epsilon `0.00001`. Troquei `anim <= 0` e as quatro comparações de vizinho por `<= 1e-5` em `oWire`, `oWire_DIODE_D` e `oWire_TIMER`. Falta novo F5 para confirmar que soltar a placa apaga a rede com um clique. Primeiro F5 desta correção falhou na compilação: GML não aceita notação científica `1e-5`; trocado por `0.00001` nos três objetos. Também esclarecido ao usuário: o suposto "rastro brilhante no chão" não existe no port; o YYC passa alpha 0 nas duas chamadas de `draw_circle_colour`, então só os sprites `sWire` de 8×8 aparecem.

**Identificação da porta e causa raiz do loop (22/11):** o alvo elétrico no `rmMal_Origin` é `oDoor_chunky` em `(152,272)` (porta vertical pesada entre as duas placas `(128,288)` e `(160,288)`, não caixa empurrável). O fio central em `(152,296)` sobrepõe a máscara da porta e escreve `power_on`; o `Step_1` original ajusta `y1/y2 = by1/by2 + anim*80 - 0.1` no YYC; com o `+` a laje afundava e as peças de cima ficavam no lugar, deixando meia parede. A reconstrução usa `y1/y2 = by1/by2 - anim*44`: fechada, a laje fica exatamente no ponto de spawn; aberta, sobe 44 px, o suficiente para o corpo de 36 px limpar a passagem e se esconder na pedra logo acima, sem vazar para fora da montanha. Os três quadros são desenhados no mesmo `y`, porque compartilham o mesmo canvas. O `oDoor_chunky` foi portado em 23/11 (`Create_0`, `Step_1`, `Step_2`, `Draw_0`, sprite `sDoor_chunky`); o bloqueio do jogador ficou provisório no `Step_2` até o `COLLIDE` (P24). **Causa real do "circuito que volta e nunca apaga":** a conclusão anterior de "latch intencional do YYC" estava errada! No YYC (`gml_Object_oWire_DIODE_D_Draw_0.c`, linhas 573-658), `oWire_DIODE_D` força `an[0] = 0`, `an[1] = 0`, `an[3] = 0` e faz `lerp` **apenas em `an[2]`** (entrada de cima, vinda da placa). Eu fazia `lerp` nos 4 lados (`an[0..3]`), transformando o diodo num fio bidirecional que se mantinha aceso por `d[0]`/`d[1]`/`d[3]` e reinjetava sinal no fio abaixo (`_n.d[2] = 1`), travando o loop! Além disso: (1) `oWire_DIODE_D` desenhava subframes `0` e `1` (diodo U, para cima) em vez dos subframes `1` e `5` do YYC (diodo D, para baixo); (2) `oWire_DIODE_D` não tem `Draw_77` no original (removido); (3) `oWire_TIMER` tem `Draw_77` vazio no YYC (`0x141155d70`) para não herdar o clique de `oWire`, e toca a própria sequência de 3 cliques descendentes (`0.816667`, `0.666667`, `0.516667`) dentro do `Draw_0` enquanto `anim` desce `2.5 → 1.5 → 0.5`; (4) `DAT_1420c7510` / `DAT_1420c7660` valem `1.0` (não `2.0`), e todos os três objetos recalculam `on = min(1, d[0]+d[1]+d[2]+d[3])` após o bloco de propagação. Tudo corrigido; 29/29 testes passaram. Falta F5 para validar que o circuito acende o timer até 3 barras e, ao sair da placa, o timer descarrega com 3 cliques e toda a rede apaga.

### 0.3 Achados do F5 de 23/11 (original vs reconstrução)

Comparação feita pelo usuário rodando o build original (`RuntimeBaseline`), depois de ver a intro:

- **Confirmado:** o original **barra** o jogador na porta pesada fechada. O bloqueio provisório do `oDoor_chunky/Step_2` reproduz o efeito; o mecanismo do original continua desconhecido (a `collision_list` é vazia), mas o comportamento é fiel.
- **Arco grande do cenário ausente (corrigido em 23/11):** ligado `sOrigin` em `oOrigin.yy` e portados `oOrigin/Step_1.gml` (paralaxe `_x = xstart + (mean(xstart, cam_x + cam_w/2) - xstart) / 9`) e `oOrigin/Draw_0.gml` (`draw_sprite_ext(sprite_index, 0, _dx, y - 1, ...)` — única chamada quando `game_start == 0`). Cutscene de intro (`anim >= 1`) segue pendente em P21.
- **Sons de pássaros (corrigido em 23/11):** importado `sndAmb_windbirds.ogg`, removido o placeholder `-1` do `oControl/Create_0` e portado o bloco `MUSIC[0..2]` do `oControl/Step_1` original.
- **Porta sobe inteira (corrigido em 23/11):** leitura completa do YYC (`oDoor_chunky_Draw_0.c` + `Step_1.c`) revelou que `FUN_1416b8480` é `draw_sprite`, `FUN_1416cda40` é `min` e `FUN_14003b450` é `reach`. A porta sobe `anim * 34` (não 44), usa `reach` com passo `mean(abs(1-anim)/12, 0.02)/2` (abrindo) e `mean(abs(0-anim)/6, 0.02)` (fechando), toca `sndDoor_stonebig1`/`sndDoor_stonebig2` em loop com fade-out de 200 ms, e desenha os 3 quadros em telescópio: `y`, `min(y + 6, ystart)`, `min(y + 12, ystart)`.
- **Circuito mais lento/travado que o original (corrigido em 23/11):** `oWire`, `oWire_DIODE_D` e `oWire_TIMER` usavam `lerp` em vez de `reach` (`FUN_14003b450`), o que impedia `an[]` de bater 1/3 e 0 em tempo linear (7 frames por fio, 15 frames de carga / 75 frames de descarga linear no timer). Além disso, `_target.power_on` estava fora do `if (anim >= 1)`/`if (anim >= 3)`, e o timer tinha `round(anim)` sem `clamp(..., 1, 3)` e glow `sqr(anim)/2` (9× estourado) em vez de `sqr(anim/3)/2`. Tudo alinhado ao YYC.
### Iluminação (`LIGHTING`) — em validação

> **Revisto em 24/11 (§0.4, P38):** a análise abaixo está errada. O original do autor está em `LIGHTING/` na raiz e não usa bloom; esta versão vai ser substituída pela cópia do original.

- `LIGHTING/Draw_73` passou a compor **duas surfaces**, como o binário indica (`surface_create` duas vezes, `draw_clear_alpha`, `draw_ellipse_color`, `gpu_set_blendmode`, `draw_rectangle_color`):
  1. máscara de sombra (`surf`): `COLOUR` no fundo, formas brancas somadas, composta com `bm_dest_colour` (multiplica a sala);
  2. bloom quente (`surf_light`): fundo preto, formas `make_colour_rgb(72,42,18)` / `(80,54,24)` / `(90,60,26)`, composta com `bm_add`.
- O bloom aditivo é a explicação do arco `sOrigin` ficar marrom no original: o sprite é cinza escuro `(39,39,39)` em `RecoveredAssets/Textures/Sprites/sOrigin/sOrigin_0.png`, e o tom quente vem da soma, não do `draw_sprite_ext` (que usa `0xffffff`).
- `parGlow_Beam` deixou de ser um `pr_trianglestrip` de 6 vértices (que fundia os 3 raios num cone) e virou `pr_trianglelist` com 3 triângulos separados por 3 px.
- `oGlow` (`Create_0`, `Draw_0` só no editor) e `oGlw_yellow_m` (`r = 32`, amarelo quente) portados.
- Pendente: validação visual no F5 e, se necessário, ajustar raios/tons nos blocos `oPlayer`, `parGlow_Beam` e `oMal_Door_Flat`.
- **Título da janela:** "NYKRA VerticalSlice" em vez de "NYKRA" (falta `options/windows/options_windows.yy`).
- **Falas, dica "spacebar" e UI de diálogo:** ausentes por desenho (Fase 4).
- **`oOrigin` decompilado em 23/11** (`decompiled/oorigin/`): os 9 eventos saíram. `Draw_0` falhou no primeiro lote com "Response buffer size exceeded"; depois de `DecompileFunctionList.java` passar a chamar `DecompileOptions.setMaxPayloadMBytes(256)`, ele saiu com **210 KB** (do porte do `Step_1`, 24 KB). O `Draw_0` é quem desenha o templo/arco: portar `oOrigin` é um marco por si só, não um ajuste.


## B. Antigo §1 — bloqueio dos tiles (resolvido em 19/11)

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


## C. Antigo §2 — 3.2b, 3.2c e levantamentos de 19/11

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


## D. Antigo §6 — próximo passo (19/11)

## 6. Próximo passo imediato
**Atualizado em 19/11:** marco 3.2 aceito (§1.3c). Levantamento do 3.2b feito (§2) e decisões do usuário tomadas: `oControl` mínimo provisório (P1) e objetos-casca sem eventos (P2), com a importação do `oControl` original e dos sprites/eventos **registrados em §7** para as fases seguintes. Próximo: escrever os scripts convertidos, o `oControl` mínimo e o gerador de cascas. O texto abaixo é o plano original de 17/11.

Executar **T1** (§1.4) **sem** mexer na opção, para descobrir qual condição é a decisiva. Rodar o dump UTMT como critério objetivo. Em seguida, desligar `option_remove_unused_assets` (T2) de qualquer forma, por causa dos assets referenciados só pelos `.rmlvl`, e repetir o dump. Só então pedir a confirmação visual. Isso fecha o marco 3.2 e libera o 3.2b.
