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
