# Registro de ports (um bloco por objeto, mais recente no fim)

Modelo e regras: `MASTER_RECONSTRUCTION_PLAN.md` §0.6. Um bloco é escrito **durante** o port, não depois. Os blocos de 24/11 servem de exemplo do nível de detalhe esperado.

### LIGHTING — 24/11/2026 — commit `bb053de`
- **Fontes:**
  - raiz: **sim** (`LIGHTING/Create_0`, `Alarm_0`, `Destroy_0`, `Draw_73`);
  - YYC: `Create_0`, `Destroy_0`, `Alarm_0`, `Draw_73` (854 KB, sem decompilação; a sequência de chamadas do asm em `decompiled/lighting_draw/README.md` bate com o original);
  - metadado: os mesmos 4 eventos e o `PreCreate`.
- **Lote:** nenhum (cópia do original).
- **Constantes e ids:** `instance_number(0x68)` = objeto 104 = `oLIGHTING_moonglow`, a primeira linha do original (`objects-metadata.json`).
- **Desvios e atalhos:** blocos com assets ausentes comentados com `//~ ` por `Tools/generate_lighting.py` (P38). Sem asset não há instância, então o efeito em jogo é o mesmo.
- **Teste:** `test_visual_fixes.test_lighting_events_are_registered`: a cópia é idêntica ao original byte a byte depois de remover os `//~ `.
- **F5:** sala leste igual ao original (usuário, 24/11). A sala oeste ficou incompleta porque faltam objetos, não por causa do `LIGHTING`.

### parSun_Glow + oSun_Mal — 24/11/2026 — commit `bb053de`
- **Fontes:**
  - raiz: não;
  - YYC: `parSun_Glow_Create_0` `0x140ee3cd0`, `parSun_Glow_Draw_0` `0x140ee4590`, `oSun_Mal_Create_0` `0x140eebf20`;
  - metadado: `oSun_Mal` (pai `parSun_Glow`) é criado pelo `_SET_SCENE` em áreas externas.
- **Lote:** `decompiled/rmmal1_sun_annotated` (decompilado agora, 35 funções, 0 falhas).
- **Constantes e ids:**
  - `0x4140204000000000` = 2113664 = `0x204080` = `rgb(128,64,32)`;
  - `0x4130204000000000` = `rgb(64,32,16)`;
  - `DAT_1420c20a8` = 9 e `DAT_1420c2098` = 1, logo `gpu_set_blendmode_ext(bm_dest_colour, bm_zero)`;
  - `DAT_1420c20b8` = 16777215 = `c_white`;
  - `FUN_140017bd0` = `d = s - n` (`helpers/h_140017bd0.c`), logo o raio é `CH - 2`;
  - `FUN_1400b9c80` = `gml_Script_reach_tween`;
  - `FUN_1416d0010(0x4f, _layer, i)` = `oControl._layer[i]` (79 = `oControl`);
  - `DAT_142181cd0` = 0 (no `.bss`; deduzido pela posição de 2ª cor e de `outline`);
  - `FUN_141706ee0` = `event_inherited()`.
- **`??`:** todos resolvidos no `.c`.
- **Assets:** nenhum.
- **Desvios e atalhos:** `array_length_1d` vira `array_length` (2.3+).
- **Teste:** `test_visual_fixes.test_sun_and_lamp_glows_match_the_yyc`.
- **F5:** "ficou certinho, muito bom a luz" (usuário, 24/11).

### oLight_Glow — 24/11/2026 — commit `bb053de`
- **Fontes:** raiz não; YYC `Draw_0` `0x1408f3460`; metadado: sem pai e sem sprite.
- **Lote:** `decompiled/rmmal1_sun_annotated`.
- **Constantes e ids:**
  - `FUN_1416b86b0(0x38,0x24,0x15)` = `make_colour_rgb(56,36,21)` (`helpers/h_1416b86b0.c`);
  - `0x3f000000` = `0.5f`;
  - `DAT_1420babc8` = 1 (`bm_add`).
- **Desvios e atalhos:** nenhum.
- **Teste:** o mesmo do sol. A volta do objeto reativou `with(oLight_Glow)` no `LIGHTING`.
- **F5:** lâmpadas ok (usuário, 24/11).

### parGnarcier + oGnarcier_s/m/b + DRAW_GNARCIER — 26/11/2026 — commit `fba9e52`, correção de `Step_0` em 26/11 (sem commit ainda)
- **Fontes:**
  - raiz: não;
  - YYC: `parGnarcier_Create_0` `0x14036aeb0`, `Alarm_0` `0x14036ce90`, `Step_0` `0x14036f4d0`; `DRAW_GNARCIER_Draw_0` `0x141088a20`;
  - metadado: filhos `oGnarcier_s/m/b` só chamam `event_inherited()` e põem `sides = 3/4/5`.
- **Lote:** `decompiled/rmmal1_sun_annotated`, `decompiled/draw_gnarcier_annotated`; asm de `Step_0` em `decompiled/rmmal1_sun_disasm/parGnarcier_Step_0.asm` (`DisassembleRange.java`, 0x14036f4d0–0x140378de0).
- **Achado de 26/11 (erro do port de 24/11):** o primeiro argumento `double` de `random()`/`random_range()` vai em `xmm0` e o Ghidra o perde (aparece `FUN_1416cdc30(0)`; em `random_range` aparece lixo como `0xcccccccd`). O `Step_0` tinha 12× `random(0)` (sempre 0) e `random_range` com mínimos errados. Valores lidos do asm (`MOVSD XMM0,[DAT]` / registradores `XMM6..XMM14` carregados em `0x1403711fe`):
  - ângulo das 3 `create_flashline`: **uma só** `random(360)`, depois `+120` e `+240` (antes eram 3 sorteios);
  - som: `random_range(0.9, 1.1)` (era 0.1);
  - cada um dos 3 `create_fx`: `sqr(random(1.5))` (÷1, ÷2, ÷4), ângulo `random(360)`, `random_range(0.97, 0.99)` ×2, `random_range(0.2, mean(random(1), 0.5, 0.5))`;
  - posições: `x/y + random_range(-8, 8)`;
  - `create_spark`: ângulo `random(360)`, `sqr(random(2))`, `random_range(-90, 90)`, `mean(4, sqr(random(2)))`;
  - `create_poly`: `random(360)`; `oBolt_Colour`: `random_range(-4, 4)` ×4.
- **Não verificado:** os registradores `XMM9`/`XMM8` são recarregados em `0x140373215`; os valores acima assumem o fluxo reto do asm (sem salto que pule o carregamento de `0x1403711fe`).
- **Atalhos:** `create_flashline`, `create_fx`, `create_spark`, `create_poly` e `oBolt_Colour` seguem como stubs/estado provisório do projeto (P27). `Alarm_0`, `Create_0` e `DRAW_GNARCIER` não têm o problema: o `.c` já mostra as constantes (`-0.02`, `-360`).
- **Teste:** `test_visual_fixes.test_gnarcier_fragments_match_the_yyc` (atualizado).
- **F5 (26/11, usuário):** fragmentos aparecem com brilho e ruído; a colisão com o jogador rebate, dá dano e brilha (original `oPlayer/Collision_parGnarcier`). **Explosão sem teste:** o gatilho de `anim = 0` não está portado (não está no GML da raiz; provavelmente o ataque) e os efeitos `create_flashline/spark/poly` são stubs. A borda vermelha na morte do jogador não vem deste objeto.

### oGlow_Beam_L + oGlow_Beam_S (P41) — 26/11/2026
- **Fontes:** raiz não; YYC `oGlow_Beam_L_Create_0` `0x14086a630`, `oGlow_Beam_S_Create_0` `0x14086d2f0`, pai `parGlow_Beam_Create_0` `0x1408680b0`; metadado: filhos de `parGlow_Beam`.
- **Lote:** `decompiled/lighting_glows_annotated` (já existia).
- **Constantes e ids:** `_UNK_141986e50` = 13.5 (L), `_UNK_141986948` = 8.5 (S), `_UNK_141982ef8` = 16, `FUN_14012cc90` = `check_block` (2 args), laços de 128 passos; lidos do `.exe` pelo cabeçalho PE. O pai usa o literal 2.
- **Achado:** nenhum dos três chama `event_inherited()` (sem `FUN_141706ee0`). Cada filho tem o corpo completo e só muda o deslocamento. O `object_index ==` do pai (P41) saiu.
- **Desvios e atalhos:** nenhum. `check_block` e `xstart`/`ystart` seguem como no port anterior do pai (o F5 de 24/11 já validou os feixes).
- **Teste:** `test_visual_fixes.test_glow_beam_parent_casts_three_rays` (filhos com evento registrado, mesmo corpo do pai). Objetos movidos de `Shells` para `Objects` e incluídos em `HAND_WRITTEN`.
- **F5 (26/11, usuário, build de `715adeb`):** feixes de luz ok.

### oFade_in (P40) — 26/11/2026
- **Fontes:** raiz não; YYC `Create_0` `0x14087d320`, `Alarm_0` `0x14087f960`, `Draw_73` `0x140881b00`; metadado: `oFade_in` = objeto 136, eventos Create, Alarm_0, Draw_73 (e PreCreate vazio).
- **Lote:** `decompiled/fade_in` (+ `fade_in_annotated`, gerado em 26/11).
- **Constantes e ids:**
  - `_UNK_141987d48` = 11, logo `alarm[0] = 2 + ceil(fps / 11)` (`DAT_1420d5cb8` = `fps`, `DAT_1420da140` = `ceil`);
  - depth `-1011` (`0xc08f980000000000`), `alpha = 1.12` (`0x3ff1eb851eb851ec`), `colour = 0`, `fade = 0` no Create; `fade = 1`, `alpha = 1` no Alarm;
  - objetos: `0x40` = 64 = `oPlayer`, `0x4e` = 78 = `oCamera`, `0x4f` = 79 = `oControl` (`objects-metadata.json`);
  - `DAT_1420ba518` = 1 (o `min(alpha, 1)` do Draw), `0x3feccccccccccccd` = 0.9, `DAT_1420f6b08` = 1e-5 (epsilon da comparação);
  - `map_load`: `DAT_1420b2708` = -1011 e `DAT_1420b2718` = 136 (`oFade_in`), depth confirmado no `.exe`;
  - `FUN_140001a50(d, s, n)` = `s * n`, `FUN_140003e00(a, x)` = `a -= x`, `FUN_140001fe0(a, x)` = `a *= x`, `FUN_1416cda40` = `min`, `FUN_14003ee60` = `draw_rectangle_view`.
- **Bloco de câmera (Create e Alarm):** se há `oPlayer` e `oCamera`, `with(oControl)`: `oCamera.x/y/xx/yy = mean(atual, mw*8 / mh*8)`, `camera_set_view_pos(cam, oCamera.x - w/2, oCamera.y - h/2)`, `oCamera.mv = oCamera.mh = 0`, `oCamera.alarm[0] = 1` (o `oCamera/Alarm_0` da raiz centra no mapa).
- **Desvios e atalhos:** `alpha <= 0.00001` no lugar de `alpha <= 0` (no YYC o epsilon é implícito na comparação; regra do `AGENTS.md`). Nenhum outro.
- **Teste:** `test_visual_fixes.test_fade_in_covers_the_load` (reescrito; o antigo fixava o depth `1000` e o fade por tempo inventados).
- **F5 (26/11, usuário, build de `715adeb`):** fade ok, câmera chega sozinha, nenhum erro de variável no log. Obs.: com os enxertos P39 ainda ativos (`oPlayer/Step_1` e `map_load`); a remoção deles está no commit seguinte.

### P39: enxertos de câmera removidos — 26/11/2026
- **Causa:** o `oFade_in` inventado não centrava a câmera. No original, `Create_0` e `Alarm_0` fazem o snap e armam `oCamera.alarm[0] = 1` (ver bloco do `oFade_in`); o `Alarm_0` da raiz (`oCamera/Alarm_0.gml`) põe a câmera no `oPlayer`. O alarme dispara antes do `Step` do jogador, por isso o primeiro disparo vê a posição antiga e o segundo (do `oFade_in/Alarm_0`) acerta.
- **Removido:** o bloco `var _sx/_sy ... camera_set_view_pos` do `oPlayer/Step_1` (volta a ser a linha original `obj_setpos(oPlayer,x,y-16);`) e o bloco `oCamera.x = _px ...` do `map_load` (seção 6, chegada por `PATH`).
- **Teste:** `test_visual_fixes.test_arrival_camera_grafts_are_gone`; `test_phase3_player` volta a exigir `oPlayer/Step_1` idêntico ao original.
- **F5 (26/11, usuário, build de `5cd089f`):** câmera chega certa pelas portas, sem ficar torta nem "varrer"; log limpo (só `STUB save_game`, que a porta chama a cada travessia).
