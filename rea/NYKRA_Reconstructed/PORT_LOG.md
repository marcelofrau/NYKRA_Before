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

### oBook (item 5a) — 26/11/2026
- **Fontes:** raiz não (só o `parNote` tem a mesma máquina de estados); YYC `Create_0` `0x1414c5680`, `Alarm_0` `0x1414c6150`, `Draw_73` `0x1414c6b00`, `Draw_0` `0x1414c9420`; metadado: `oBook` sem pai, sprite `sBook` (índice 403, 16×8, confirmado), eventos Create, Alarm_0, Draw_0, Draw_73 (e PreCreate vazio, não portado).
- **Lote:** `decompiled/rmmal1_sun_annotated` + `rmmal1_sun_lifted` (já existiam).
- **Constantes e ids:** `0x193` = 403 = `sBook`; `0x40` = `oPlayer`; `0x4f` = `oControl`; `FUN_140120860` = `playerhascontrol`; `FUN_1400d6da0` = `interact_arrow` (17, cor 4235519 = `$40a0ff`); `FUN_1400d7df0` = `player_interact`; `DAT_1420cba90` = 17, `cbaa0` = 1, `cbab0` = 7, `cbac0` = 2, `cbad0` = 10.5, `cbae0` = 32, `cbaf0` = 5.25; `DAT_142182c08` = 0 (`.bss`, deduzido do uso: posição do `ds_list_insert`, limite do `max`, destino do `reach_tween`, `gpu_set_blendmode` de volta ao normal).
- **Achados:**
  - `on==1` já insere `book_text` em `oPlayer.books` e **destrói a instância** no primeiro quadro; o zoom do `parNote` quase não aparece no livro.
  - O `Alarm_0` (armado em todo `Create`) chama `open_book(book_text, X)`. No script, `is_inv == 1` abre já (`book_id = -4`); senão `book_id` = id do livro do mundo. Leitura provável: o `oBook_UI` nasce fechado e abre quando o livro some (a confirmar na 5b/5c, **não portado**).
  - `BOOK_input` e o rótulo `oControl.mode != 3` do `Draw_73` são do **editor** (`oControl/Step_1:413`, `Draw_73:488`); no jogo (`mode = 3`) só valem o `Draw_0` e o brilho do `Draw_73`. A 5d, "ligar o disparo", deixa de existir como tal.
  - Sem a guarda `instance_number(oPlayer)` e sem os sons do `parNote`.
- **Desvios e atalhos:** P42 (plan §7): 2º argumento do `open_book` = 0 (`.bss` `DAT_142182be8` não lido) e separador do rótulo de editor = `"\n"` (string `DAT_1420cba58` não lida). `open_book` segue stub (loga `STUB open_book` uma vez).
- **Teste:** `test_visual_fixes.test_book_in_the_world_follows_the_yyc`. `oBook` entrou em `HAND_WRITTEN` e em `generate_reconstructed_objects.py` (sprite `sBook`).
- **Sprite:** `sBook` (2 quadros) exportado do `data.win` com `ExportSpritesRestored.csx` e importado com `generate_object_sprites.py`; `generate_reconstructed_objects.py` ligou o sprite. Testes: 74 rodados, só o erro de import já conhecido do `test_save_v1_format`.
- **F5 (26/11, usuário, build sem commit ainda):** o livro aparece com o quadro certo, seta laranja, brilho que some ao interagir, o livro some e entra no inventário. Log sem erro; `STUB open_book` uma vez, ~80 ms depois do `STUB save_game` (o `Alarm_0` de 2 quadros dispara em todo livro ao carregar o nível, como lido no YYC).

### open_book etapa 1 + oBook_UI Create_0/Destroy_0 (item 5b) — 26/11/2026
- **Fontes:** raiz não; YYC `gml_Script_open_book` `0x140112250` (linhas 143-615 do `.c`), `gml_Object_oBook_UI_Create_0` e `_Destroy_0` (`rmmal1_sun_annotated`); metadado: `oBook_UI` índice 665, sem pai, sem sprite, `Depth` 0; eventos PreCreate (`event_inherited()` vazio, sem pai: não portado), Create, Alarm_0, Destroy, Draw_73.
- **Lote:** `player_annotated`/`player_lifted2` (`open_book`) e `rmmal1_sun_annotated`/`rmmal1_sun_lifted` (`oBook_UI`), já existiam.
- **Constantes e ids:** `665` = `oBook_UI`, no projeto o objeto é citado pelo nome (o índice do jogo não vale no projeto); a criação é `instance_create_one(CMX, CMY, -100, oBook_UI)` (o lifter resolveu `-100` e `665`); chaves do ini `book[n,2]` = texto, `[n,1]` = título, `[n,0]` = tipo, seção `BOOKS` (conferido em `dlg_eng.lang:24945-24958`, `[n,3]` é a descrição e não é lido); `FUN_1416b86b0(0x49,0x41,0x4d)` = `make_colour_rgb(73, 65, 77)`; `sPages` começa em `-1` (`0xbff0…`); `thunk_FUN_14176d0f0` = `draw_set_font` (novo em `YYC_HELPERS.md`, média).
- **Achados:** `is_inv == 1` → `book_id = -4; open = 1`, senão `book_id = other.id` (o `oBook` que chamou). O corpo todo roda dentro do `with` da instância nova. `Create_0` portado na ordem compilada, com o `page_txt = 0; page_txt[0] = ""` trocado por `[]` (compat 2.3+).
- **Desvios e atalhos:** P43 (plan §7): script só até o `ini_close()`; `oBook_UI` sem `Draw_73`/`Alarm_0`; o `Destroy_0` original não libera as duas listas.
- **Teste:** `test_visual_fixes.test_open_book_step1_reads_the_ini_like_the_yyc`. `oBook_UI` entrou em `HAND_WRITTEN` e em `generate_reconstructed_objects.py`; `open_book` saiu do `generate_player_stubs.py` e entrou em `HAND_SCRIPTS`. Os testes só passam depois dos geradores (ver abaixo).
- **F5 pendente:** rodar `generate_player_stubs.py`, `generate_project_scripts.py` e `generate_reconstructed_objects.py`, abrir e salvar na IDE, F5 em `rmMal_1`. Esperado: o jogo igual à 5a, `STUB open_book` **sumiu** do log, nenhum erro novo. Nada novo aparece na tela (o `oBook_UI` ainda não desenha).

### open_book etapa 2: paginação (item 5b) — 26/11/2026
- **Fontes:** raiz não; YYC `gml_Script_open_book` linhas 616-1425 do `player_annotated/.c` (o lifted tem os `string_*` e os `goto` perdidos, então a leitura foi do `.c`).
- **Constantes:** bytes lidos de `RuntimeBaseline/NYKRA.exe` (`.data`, RVA `0x20b32c8…`): `" "`, `"|"`, `"n"`, `"p"`, `"\n"`, `"\x07"` (`DAT_1420b32c8` a `…d2`). A tabela estática `DAT_14217f4a0/4b4` é um `switch` com os casos `"n"` e `"p"`. `FUN_140003e00` = `-=`, `FUN_140003ca0` = `+=`, `FUN_140001c50` = `+= n`, `FUN_140017bd0(d, a, n)` = `d = a - n`, `FUN_1416d9df0(a, b, eps, 1)` = comparação (`> 0` é maior).
- **Achados:**
  - Uma palavra começa no 1º caractere, depois de um espaço ou depois de um código de escape; o espaço final faz parte da palavra.
  - Palavra que não cabe: `page_txt[p] += "\n"`, página nova se `string_height >= page_h - 2*buffer`, e `txtpntr -= 1` para ler a palavra de novo. O mesmo teste de altura vale para `|n`.
  - `|<dígito>` **descarta** o texto da página em curso e a substitui por `chr(7) + dígito`.
  - Palavra de 100 caracteres ou mais é descartada (o `for` termina com `j = 100`).
- **Desvios e atalhos:** P43: laço sem guarda contra palavra mais larga que uma linha (o original trava igual); `string_char_at(txt, 0)` em `txtpntr = 2` segue o YYC. Diagnóstico temporário de log (não é do original).
- **Também nesta mudança (pedido do usuário):** `map_load` ganhou uma edição de log no gerador (`POLICY_LOG`): uma linha `map_load: <sala> ...` por carga, não só no boot; o `Other_4` deixou de duplicá-la; `parDoor_Flat/Draw_77` loga `door: n=.. -> sala`.
- **Teste:** `test_open_book_step1_reads_the_ini_like_the_yyc` (agora com os trechos da etapa 2). Suíte: só o erro de import conhecido.
- **F5 pendente:** entrar em `rmMal_1`; o log deve ter `map_load: rmMal_1 ...` e, por livro, `open_book: book N '<título>' type T, X pages` mais uma linha por página. Conferir os livros 4, 6 e 8/10 contra o `dlg_eng.lang` (6 e 4 estão em `:24946` e `:24956`).

### open_book etapa 3: páginas em superfícies (item 5b) — 26/11/2026
- **Fontes:** raiz não; YYC `gml_Script_open_book` linhas 1426-2178 do `player_annotated/.c`.
- **Constantes e ids:** `0x101` = 257 = `sBook_page` (78×96), `0x105` = 261 = `sBook_pageimages` (156×192) (`sprites-metadata.json`); `DAT_141983ddc` = -1.0, `141981f80` = 1.0, `b32f8` = 1.0, `b3308` = 2.0, `141983de0` = {-1.0, 1.0}, `f6b08` = 1e-5, `141982c40` = 2.0 (bytes do `.exe`); `DAT_14217f488` = `.bss`, usado como 0. Helpers: `FUN_14176d130/d160(0)` = `draw_set_halign/valign(fa_left/fa_top)` (por ordem e valor, média), `FUN_1416f15a0` = `draw_set_colour`, `FUN_1416f1550` = `draw_set_alpha`, `FUN_1416f1520` = `draw_rectangle`, `FUN_1416b84f0` = `draw_sprite_ext`, `FUN_1416b86c0` = `surface_set_target`, `FUN_1416e34b0` = `surface_reset_target`, `FUN_141944a50` = `fmod`.
- **Achados:** cada página: superfície `page_w × page_h`, `draw_clear_alpha(0, 0)`, retângulo branco, `sBook_page` com `pscale` (espelhado e desenhado a partir de `x = page_w` nos quadros ímpares), texto em `ink_col`/`FONT_MAIN` em `(buffer, buffer - 2)`, ou, se o 1º caractere é `chr(7)`, o quadro `sBook_pageimages` do dígito. O quadro 0 vira `sPages` (`sprite_create_from_surface`) e os outros entram com `sprite_add_from_surface`. Antes disso, o número de páginas fica par (`p mod 2`, divisor 2.0 vindo do `xmm8`).
- **Desvios e atalhos:** P44.
- **Teste:** `test_open_book_step1_reads_the_ini_like_the_yyc` (agora com os trechos da etapa 3; `oBook_UI` tem 3 eventos). Suíte: só o erro de import conhecido.
- **F5 pendente:** exportar e importar os 2 sprites (ver o plano), abrir e salvar na IDE, F5 em `rmMal_1`, **segurar B** perto do livro: aparecem as páginas em pares. Esperado no livro 4: 8 quadros em `sPages` (7 + a página em branco), `open_book: ... 8 pages, 8 frames in sPages`.

### open_book etapa 4: pilhas de páginas (item 5b) — 27/11/2026
- **Fontes:** raiz não; YYC `gml_Script_open_book` linhas 2179-2303 do `player_annotated/.c`.
- **Constantes e ids:** variáveis por id (`0x18b71` `pages`, `0x18b70` `pagepile_right`, `0x18b64` `page_anim`, `0x18b91` `pileR`, `0x18b8f` `pileL`, `0x18b92` `pileRxA`, `0x18b90` `pileLxA`); `DAT_1420da1d0` = `ds_list_add`, `DAT_1420da7f0` = `surface_free`; `DAT_14217f480` = `""`.
- **Achados:** `pages = p + 1`; para `j = 0..pages-1`: `ds_list_add(pagepile_right, j)`, `page_anim[j] = 0` e `page_txt[j] = ""` (o texto é descartado depois de desenhado); `pileR = pages` (o `uVar12` ainda guarda `pages`), `pileL = pileRxA = pileLxA = 0`; `surface_free` só da última superfície. No fim o `with` acaba e o script retorna (o `iVar8 < 1` do `with` do YYC é só a saída do laço de instâncias).
- **Desvios e atalhos:** P43 resolvido (script completo); P44 segue (último `surface_free` e vazamento das outras).
- **Teste:** `test_open_book_step1_reads_the_ini_like_the_yyc` (agora com os trechos da etapa 4). Suíte: só o erro de import conhecido.
- **F5 pendente:** o jogo deve ficar igual ao da etapa 3 (log com `8 pages, 8 frames`, B mostrando as páginas), sem erro de `page_anim`/`ds_list_add`.
