# NYKRA: Before — Plano Mestre de Reconstrução

**Criado em 17/11/2026; revisão geral em 24/11/2026.** O objetivo final é um projeto GameMaker editável que reproduza o NYKRA: Before original (183 níveis, 7 planetas, saves funcionando), com os bugs conhecidos corrigidos. A estratégia é avançar por marcos pequenos, cada um com aceite objetivo e validação do usuário (F5 na IDE) antes do próximo.

## Como usar este documento

- **Agente começando uma sessão:** leia nesta ordem:
  1. §0 (estado);
  2. **§0.6** (como trabalhar; obrigatório);
  3. §0.7 (fila: pegue **só o primeiro item aberto**);
  4. §0.5 (procedimento técnico de port);
  5. §0.8 (mapa de todos os submarcos, para saber onde o item se encaixa);
  6. §7 (provisórios).

  As regras curtas estão em `AGENTS.md` ("Reconstruction rules"). Os relatórios de cada port vão em `PORT_LOG.md`.
- **Histórico:** os marcos 3.0–3.2c, o bloqueio dos tiles, os levantamentos de 19/11 e as atualizações de 22–23/11 estão em `PLAN_HISTORY_2026-11.md`. Antigas referências a `§1.3c` apontam para lá (seção B).
- **Regras de segurança:** continuam valendo as de `PHASE3_EXECUTION_PLAN.md` §1, resumidas em §4.

---

## 0. Onde estamos (24/11/2026)

O trabalho está na branch `reconstruction-attempt-pickle`. O projeto é `GameMakerProject/NYKRA_VerticalSlice.yyp`, na GameMaker **LTS 2026** (IDE `2026.1.0.27`, runtime `2026.1.0.28`), com build Windows VM e teste pelo usuário com F5.

| Fase / marco | Estado | Evidência |
|---|---|---|
| 1 — Formatos e núcleo nativo | ✅ | `validate_formats.py`: 183 níveis, 6 templates, 27 saves, 29 DATA |
| 2 — Bugs prioritários | ✅ relatório | `PHASE2_PRIORITY_BUGS.md` |
| 3.0–3.2c — ambiente, tiles, `map_load`, sprites | ✅ aceitos em 19/11 | `PLAN_HISTORY_2026-11.md` |
| **3.3 — os três níveis do início (`rmMal_Origin`, `rmMal_1`, `rmMal_o1`) iguais ao original** | 🟨 em andamento | §0.1–§0.3 |
| 3.4 — Save V1 | ⬜ | começa por **investigar por que o save original falhava** (§2, passo 0); só o codec Python de referência existe |
| 4 — Resto do jogo | ⬜ | §3 |

Hoje o projeto tem 76 objetos (31 com eventos; os outros são cascas), 76 sprites, 99 sons, 43 scripts e 3 níveis em `datafiles`. Para conferir: `Tools/list_level_objects.py`.

### 0.1 Validado no F5 pelo usuário

| O quê | Quando | Commit |
|---|---|---|
| Jogador anda, pula e colide com tiles; sons, passos, poeira `oFx`, curva do salto (`easing` 14), notas legíveis, grama que balança | 19/11 | branch `reconstruction-attempt-1` até `113393e` |
| Animação da porta `oMal_Door_Flat`, fade de transição, céu em gradiente, clamp do `oVIEW_CONSTRICT` | 22/11 | `af83551` |
| Parallax do céu de Maldis (`sMal_bg1..4`) | 22/11 | `2e7e75c` |
| Fios, diodo, timer e porta pesada `oDoor_chunky` (abre, fecha, reabre pela placa) | 23/11 | `90f6a2a` |
| `LIGHTING` original: a sala leste (`rmMal_o1`) ficou igual ao build original | 24/11 | `bb053de` |
| Sol de Maldis no exterior (`parSun_Glow`/`oSun_Mal`) e lâmpadas da sala oeste (`oLight_Glow`) | 24/11 | `bb053de` |

### 0.2 Escrito, mas sem F5 depois da última mudança, ou com desvio conhecido

- `b2ad246`: o alinhamento de `oDoor_chunky` e dos fios ao YYC (subida de 34 px, `reach`, sons `sndDoor_stonebig*`) veio **depois** do F5 de `90f6a2a`. Conferir no próximo F5.
- `oOrigin` foi portado em parte (`Create_0`, `Alarm_0..3`, `Step_1`, um `draw_sprite_ext` do `Draw_0`). Falta o resto do `Draw_0` (210 KB) e o `Draw_73` (P21).
- A música e a ambiência (`sndAmb_windbirds`, bloco `MUSIC` do `oControl/Step_1`) estão em `9d96478`.
- Desvios a desfazer:
  - P39: snap de câmera enxertado;
  - P40: `oFade_in` inventado, com depth 1000;
  - P41: os filhos `oGlow_Beam_*` imitados no pai;
  - P24: bloqueio local da porta pesada no lugar do `COLLIDE`.

### 0.3 Aceite do marco 3.3

O usuário compara lado a lado com o build original e confirma que, nos três níveis:
1. tudo o que aparece ou age no original aparece e age igual;
2. nenhum objeto `absent` ou `SHELL` em `list_level_objects.py` desenha ou age no original;
3. as transições pelas portas funcionam nos dois sentidos;
4. toda linha P da §7 marcada "3.3" está resolvida ou foi aceita explicitamente pelo usuário.

Só então começa o 3.4.

### 0.4 Revisão de 24/11/2026 (sessões de 22–23/11 por outros agentes)

- **A iluminação foi pelo caminho errado (P38).** O `LIGHTING` original do autor está na raiz do repositório (`LIGHTING/Draw_73.gml`, ~800 linhas). Mesmo assim, `GameMakerProject/objects/LIGHTING/Draw_73.gml` foi escrito do zero, "ajustado a olho" contra screenshots, com uma segunda surface de bloom quente que o original não tem. As provas de que o arquivo da raiz é o que foi compilado:
  - a sequência de chamadas que `decompiled/lighting_draw/README.md` leu no assembly bate linha a linha com o original (`draw_clear_alpha`, `draw_ellipse_color`, `gpu_set_blendmode`, `draw_ellipse_color`, `gpu_set_blendmode`, `draw_clear_alpha` e o `draw_rectangle_color` do bloco `oKS_arthek_train1`);
  - o primeiro `instance_number(0x68)` é o `oLIGHTING_moonglow` (índice 104, `objects-metadata.json`), primeira linha do original; o README dizia "glow-beam";
  - os "dois `surface_exists`" são o `if !surface_exists` seguido de `if surface_exists`, e não duas surfaces;
  - o tom quente perto do jogador vem dos seis `draw_circle_colour` laranja em volta do `oPlayer`, compostos por multiplicação. `gpu_set_blendmode_ext(bm_zero, bm_subtract)`: o fator 3 é `bm_src_colour`. Não existe bloom aditivo.
  - O "aceito no F5 de 22/11" valeu só para a primeira versão provisória; as versões de 23/11 (`0a7165a`, `3c94fff`, `f3a7020`) só ajustaram tons.
  - O `parGlow_Beam` do original desenha um `pr_trianglestrip` de 6 vértices com o centro branco; a troca para três triângulos separados também foi invenção.
- **Correção (feita em 24/11, `bb053de`; sala leste validada no F5):** `Tools/generate_lighting.py` copia os eventos originais de `LIGHTING` como fizemos com `oPlayer`/`oCamera`/`parNote`. O original nomeia 87 objetos e uma dúzia de sprites e scripts (`iiem_shake`, `lerp_bounce`) que o projeto não tem, e um nome ausente não compila. Por isso o gerador deve comentar os blocos `instance_number(X)`/`with(X)` cujo asset ainda não existe. Isso é equivalente em comportamento, porque sem o asset não há instância, e o bloco volta a valer quando o objeto entrar. Não é preciso descompilar nada.
- **Ambiente externo (`rmMal_Origin`):** esse nível não tem `LIGHTING`, então a diferença lá vem de outro lugar.
  - O suspeito principal é o `oOrigin/Draw_0` (204 KB decompilado, 5.535 linhas), do qual só foi portada uma chamada `draw_sprite_ext`.
  - `oOrigin/Draw_73` (448 linhas) também não foi portado.
  - O céu (`oControl/Draw_72`) confere com o original.
- **F5 de 24/11 após a cópia do original:** a sala leste (`rmMal_o1`) ficou como no original. A sala oeste (`rmMal_1`) e o exterior continuam errados, por falta de objetos, não por causa do `LIGHTING`:
  - **`rmMal_1`:**
    - faltam `oLight_Glow` ×2 (fonte de luz; o bloco dele no `LIGHTING` fica comentado enquanto o objeto não existe);
    - faltam `oGnarcier_s` ×4, `oGnarcier_m` ×2 e `oGnarcier_b` (os fragmentos vermelhos; pai `parGnarcier`, que também acende no `LIGHTING`);
    - `oBook` é só casca;
    - faltam `oDlg_Mal1`/`oDlg_Mal2` (falas; `parDialogue` tem original na raiz) e `oMUSIC_VOL_HALF`.
  - **Exterior:** o `_SET_SCENE` cria `oSun_Mal` (pai `parSun_Glow`, com `Draw_0` no YYC em `0x140ee4590`), que hoje é só casca, ou seja, falta o brilho do sol. Também faltam o `oOrigin/Draw_0` e o `Draw_73`.
  - Lote `rmmal1_sun` decompilado em 24/11 (35 funções, 0 falhas; Ghidra 12.2 via scoop).
- **Portados em 24/11 do `.c` anotado, aguardando F5:**
  - `parSun_Glow` (`Create_0`, `Draw_0`) e `oSun_Mal` (`Create_0`: `event_inherited()` e `col = rgb(64,32,16)`), que formam o brilho do sol no exterior. Ele conta as células vazias dos 6 layers de tile em volta do ponto do sol, suaviza com `reach_tween` e desenha duas elipses aditivas, um tingimento multiplicativo da view inteira (`bm_dest_colour, bm_zero`), um círculo e uma elipse larga.
  - `oLight_Glow` (`Draw_0`): círculo aditivo `rgb(56,36,21)` de raio `33 + lengthdir_x(0.5, ...)`. A volta dele reativou o bloco `with(oLight_Glow)` do `LIGHTING`.
  - Testes: `test_visual_fixes.test_sun_and_lamp_glows_match_the_yyc`.
- **Próximos do `rmMal_1`:** já estão decompilados em `rmmal1_sun`.
  - **`parGnarcier`:** `Create` 16 KB, `Alarm_0` 21 KB, `Step_0` 65 KB; `Draw_0`/`Draw_72` vazios. Os filhos `oGnarcier_s/m/b` só fazem `event_inherited()` e `sides = 3/4/5`. Precisa dos sprites `sGnar_s/m/b`.
  - **`oBook`:** `Create`, `Alarm_0`, `Draw_0`, `Draw_73` e o `oBook_UI` (cujo `Draw_73` tem 156 KB, um sistema próprio). Sprite `sBook`.
  - **`oDlg_Mal1/2`:** só `Create`; o `parDialogue` tem original na raiz e deve ser copiado por gerador.
  - **`oMUSIC_VOL_HALF`:** o `Create` é vazio, então é um marcador. Uma casca basta (`generate_object_shells.py rmMal_Origin rmMal_1 rmMal_o1`).
- **A conferir (P41):** `oGlow_Beam_L`/`oGlow_Beam_S` têm `Create_0` próprio no YYC, mas estão como cascas. O `parGlow_Beam/Create_0` imita os filhos com `object_index ==`. Decompilar os dois `Create` e portar cada um no filho, com `event_inherited()` se o YYC chamar `FUN_141706ee0`.
- **Outros desvios achados:**
  - `oFade_in` foi inventado e ficou com depth `1000` (P40);
  - há um snap de câmera enxertado no original (P39);
  - `LIGHTING` e `parGlow_Beam` não estavam em `HAND_WRITTEN` (uma rodada do gerador de cascas os apagaria). Corrigido.
- **Regras para os agentes:** estão em `AGENTS.md` ("Reconstruction rules"), que o `CLAUDE.md` inclui.
- **O resto da revisão:**
  - Os fios e o `oDoor_chunky` acabaram alinhados ao YYC (`b2ad246`), depois de várias idas e vindas: lerp/reach, 44/34/80 px.
  - O valor 44 px "por olho" foi descartado em favor do 34 do YYC. Está certo.
  - Lição para os próximos agentes: **antes de reconstruir um objeto, procurar o GML original na raiz** (`oControl`, `oPlayer`, `oCamera`, `oEo`, `parDialogue`, `parNote`, `LIGHTING`, `scripts`); ajuste "a olho" só com linha `shortcut:` e registro em §7.

### 0.5 Procedimento obrigatório para portar um objeto (todo agente, toda máquina)

Escrito em 24/11 depois da revisão §0.4. Siga **na ordem**. Se um passo falhar, pare e relate; não pule para "inferir". As regras gerais estão em `AGENTS.md` ("Reconstruction rules"); aqui está o *como*. Todos os comandos rodam a partir da raiz do repositório, em PowerShell, e **precisam do ok do usuário antes de rodar**.

#### Passo 0 — Ferramentas (uma vez por máquina)

| Ferramenta | Instalação (sem admin) | Conferência |
|---|---|---|
| JDK 25 | `scoop install java/temurin25-jdk` | `java -version` mostra 25 |
| Ghidra 12.x | `scoop install extras/ghidra`; o scoop define `GHIDRA_INSTALL_DIR` | `Test-Path "$env:GHIDRA_INSTALL_DIR\support\analyzeHeadless.bat"` |
| Python 3 | já instalado (`python`, nunca `python3`) | `python --version` |
| Git Bash | `C:\Program Files\Git\bin\bash.exe` (para `view_c.sh`) | — |
| UTMT CLI 0.9.2.0 (exportar sprites e sons do `data.win`) | baixar `UndertaleModCli` da página de releases do UndertaleModTool para `%LOCALAPPDATA%\nykra-tools\utmt-cli\`. **Não use `%TEMP%`**: a pasta temporária foi limpa em 24/11 e levou o Ghidra e o UTMT que estavam lá | `UndertaleModCli.exe load "<data.win>" --scripts "<script.csx>"`, com stdin redirecionado de um arquivo vazio (sem isso ele trava). Confira o SHA-256 do `data.win` antes e depois |

- **Projeto Ghidra:** ele não está no Git (`NativeAnalysis/ghidra-projects/` é ignorado). Crie uma vez **fora do repositório**. O import sem análise leva poucos minutos, e o `DecompileFunctionList.java` cria cada função no endereço pedido:

  ```powershell
  $gp = "$env:LOCALAPPDATA\nykra-ghidra"; New-Item -ItemType Directory -Force $gp | Out-Null
  & "$env:GHIDRA_INSTALL_DIR\support\analyzeHeadless.bat" $gp NYKRA-YYC -import rea\NYKRA_Reconstructed\RuntimeBaseline\NYKRA.exe -noanalysis
  ```

- **Antes de cada lote, confira o SHA-256 de `RuntimeBaseline/NYKRA.exe`** e anote. O exe nunca é alterado; o projeto Ghidra é que muda, e roda com `-readOnly`.
- **Prova de que a máquina nova decompila igual:** decompile `gml_Object_oSun_Mal_Create_0	0x140eebf20` (passo 3) e compare com `NativeAnalysis/decompiled/rmmal1_sun/gml_Object_oSun_Mal_Create_0.c`. O corpo tem que bater: `0x18818/*var:col*/` = `0x4130204000000000`. Se não bater, pare.

#### Passo 1 — O que o nível precisa

```powershell
python -P rea/NYKRA_Reconstructed/Tools/list_level_objects.py rmMal_1 rmMal_o1 rmMal_Origin
```

Para cada objeto, a ferramenta mostra o estado no projeto e o número de eventos YYC, e marca `ORIGINAL-GML` quando o original existe na raiz:
- `absent`: o `map_load` pula o objeto e registra no log;
- `SHELL`: existe, mas não faz nada;
- `events`: tem eventos portados.

Um objeto `SHELL` ou `absent` que desenha algo é a causa provável de "falta coisa / luz errada". Confira também o que os scripts criam sem estar no nível: o `_SET_SCENE` cria `oSun_Mal` em áreas externas de Maldis.

#### Passo 2 — Fontes do objeto (as três consultas)

1. `Test-Path <raiz>\<obj>`. Se o original existir, **copie com gerador** (`Tools/generate_player_object.py` e `Tools/generate_lighting.py` são os modelos) e pule para o passo 6.
2. `python -P rea/NYKRA_Reconstructed/Tools/list_object_functions.py rea/NYKRA_Reconstructed/NativeAnalysis/list_<lote>.txt <obj> [obj ...]`. Isso escreve as funções YYC do objeto **e da cadeia de pais**. Tire da lista os objetos que já têm original na raiz.
3. Os `Events` em `objects-metadata.json`, que dão a lista oficial de eventos. Um evento que está no metadado mas não tem função YYC não tem código.

#### Passo 3 — Decompilar

```powershell
$na = "rea\NYKRA_Reconstructed\NativeAnalysis"
& "$env:GHIDRA_INSTALL_DIR\support\analyzeHeadless.bat" "$env:LOCALAPPDATA\nykra-ghidra" NYKRA-YYC -process NYKRA.exe -noanalysis -readOnly `
  -scriptPath "$na\scripts" -postScript DecompileFunctionList.java "$na\decompiled\<lote>" "$na\list_<lote>.txt" 300 `
  > "$env:TEMP\<lote>.log" 2> "$env:TEMP\<lote>.err"
```

- **Critério de pronto:** o log termina com `DecompileFunctionList: N decompiled, 0 skipped, 0 failed`.
- **Arquivos `.c` com `// ERROR`:**
  - em timeout, suba o último argumento para 600;
  - se ainda falhar (funções de centenas de KB, como `LIGHTING_Draw_73` com 854 KB), use `DisassembleRange.java <saída.asm> <início> <fim>`, com o fim sendo o endereço da próxima função na tabela, e leia o assembly.
  - **Nunca** reconstrua "pela estrutura" sem ler o corpo.
- Uma execução que parou no meio pode ser retomada: arquivos já gerados são pulados.

#### Passo 4 — Anotar e elevar

```powershell
python -P rea/NYKRA_Reconstructed/NativeAnalysis/scripts/annotate_yyc_c.py <lote> <lote>_annotated
python -P rea/NYKRA_Reconstructed/NativeAnalysis/scripts/lift_yyc.py <lote>_annotated <lote>_lifted
& "C:\Program Files\Git\bin\bash.exe" rea/NYKRA_Reconstructed/NativeAnalysis/scripts/view_c.sh rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/<lote>_annotated/<funcao>.c
```

- `_annotated/*.c` é **a fonte de verdade**: nomes de variáveis (`0x18818/*var:col*/`), builtins (`DAT_.../*draw_circle_colour*/`) e constantes.
- `_lifted/*.gml.txt` é só uma ajuda de leitura. Toda linha `// ??` é algo que o lifter não entendeu e **tem de ser resolvida no `.c`**, nunca ignorada.
- `view_c.sh` corta o ruído do compilador.

#### Passo 5 — Ler o código do YYC (armadilhas conhecidas)

- **Funções `FUN_14...`:** veja `NativeAnalysis/YYC_HELPERS.md`. Se o endereço não estiver lá, procure em `yyc-function-table.json`: se estiver, é um script do jogo com nome. Ao identificar um novo, registre no `YYC_HELPERS.md` com a evidência.
- **`event_inherited()`** é o par `DAT_142182d90 = param_1; FUN_141706ee0();`.
  - **Confirmado:** o `oPlayer/Step_1` original tem `event_inherited()` na linha 345, e o YYC dele chama `FUN_141706ee0`.
  - Aparece em **todo** `PreCreate` (ignore ali), e fora dele só em objetos filhos.
  - Isso também confirma o P18: `oGrass` chama `event_inherited()`.
- **Constantes** vêm como double em hexadecimal: `0x4130204000000000` = 1056832 = `0x102040`.
- **Cores** são BGR: `0x102040` = `make_colour_rgb(64, 32, 16)`.
- **O anotador põe `(obj:Nome)` em todo número pequeno**, por exemplo `1 (obj:oDlg_Quo_Radio3)`. Isso é **ruído**: só é objeto quando o valor vai para um parâmetro de objeto (`instance_number`, `with`, `instance_create_*`, `object_index ==`). Ids de objeto, sprite e som são o `Index` dos metadados.
- **`local_168 = N`** (ou outro local fixo recebendo inteiros crescentes) é a linha do código-fonte. Serve para contar statements e achar onde começa cada linha original.
- **Comparações:** `FUN_1416d9df0(a, b, eps, modo)` retorna -1/0/1 (ou -2 para "incomparável"). Leia o `if` do resultado: `v < 0` é `a < b`; `0 < v` é `a > b`; `-1 < v` é `a >= b`; `v < 1` é `a <= b`; `v == 0` é `a == b`. O prefixo `v != -2 &&` é só o teste de "incomparável". O mesmo mapa está em `lift_yyc.py` (`comparison()`).
- **`reach` / `reach_tween` / `lerp`** são diferentes (`AGENTS.md` §4). `FUN_14003b450` = `reach`.
- **Eventos de filhos:** um filho com `Create` próprio **substitui** o do pai, a menos que chame `event_inherited()`. Por exemplo, `oSun_Mal_Create_0` chama `event_inherited()` e depois `col = 0x102040`, sobrescrevendo o `col` do `parSun_Glow`.

#### Passo 6 — Escrever o GML

- **Um arquivo por evento** em `GameMakerProject/objects/<obj>/<Evento>_<n>.gml`.
- **Cabeçalho:** `// Reconstructed from gml_Object_<obj>_<ev> @ 0x<va> (NativeAnalysis/decompiled/<lote>_annotated)`.
- **Tradução:** statement por statement, na mesma ordem, com os mesmos nomes de variável e as mesmas constantes. Não "melhore" a lógica. Um bug do original vira comentário `// original:` com o porquê, se for mantido.
- **Trechos que não dá para ler:** pare e relate. Se o usuário aceitar seguir, marque `// shortcut: <limite>, <quando trocar>` e registre na §7.
- **Registro do objeto:**
  - em `Tools/generate_reconstructed_objects.py` (`OBJECTS`: pai, sprite, persistente, máscara, tudo de `objects-metadata.json`);
  - em `HAND_WRITTEN` de `Tools/generate_object_shells.py`.
- **Sprites e sons:**
  - só os que o objeto usa;
  - sprites com `Tools/ExportSpritesRestored.csx` (UTMT) e `Tools/generate_object_sprites.py`;
  - sons com `Tools/ExportSounds.csx` e `Tools/generate_sounds.py`.
- **Outros scripts:**
  - um script do jogo que falte vira port do `gml_Script_<nome>`, pelo mesmo procedimento;
  - se não houver tempo, vira stub **barulhento** (`stub_log`), nunca um no-op silencioso.
- **Rode os geradores:** `python -B rea/NYKRA_Reconstructed/Tools/generate_reconstructed_objects.py` e `python -B rea/NYKRA_Reconstructed/Tools/generate_lighting.py`. O segundo reativa os blocos do `LIGHTING` de objetos que passaram a existir.

#### Passo 7 — Teste estático, F5 e registro

- Escreva um teste que confere as constantes distintivas do evento, como já fazem `test_phase3_player.py` e `test_visual_fixes.py`. Depois rode `python -B -m unittest discover -s rea/NYKRA_Reconstructed/Tools -q`. O único erro aceito é o import preexistente de `test_save_v1_format`.
- **Commite os `decompiled/<lote>*` junto**, para a outra máquina não precisar refazer o passo 3.
- Peça o F5 ao usuário, de preferência comparando com o build original. Registre em §0 o resultado e o hash do commit testado.
- Se o F5 mostrar diferença, **volte ao `.c`** do bloco que desenha ou move aquilo. Não ajuste números. Depois de duas correções sem sucesso, pare e relate.

#### Lotes já decompilados (não refazer)

`decompiled/` tem os lotes de 19–24/11. O último é `rmmal1_sun` (+ `_annotated` e `_lifted`, lista `list_rmmal1_sun.txt`), com 35 funções:
- `oSun_Mal`, `parSun_Glow`;
- `oLight_Glow`;
- `oGnarcier_s/m/b`, `parGnarcier`;
- `oBook`, `oBook_UI`;
- `oMUSIC_VOL_HALF`;
- `oDlg_Mal1/2`.

Antes de decompilar, procure: `Get-ChildItem rea\NYKRA_Reconstructed\NativeAnalysis\decompiled -Recurse -Filter "gml_Object_<obj>_*"`.


### 0.6 Como trabalhar (obrigatório para agentes)

Esta seção existe porque o histórico de 22–23/11 mostra padrões que levaram a trabalho errado e retrabalho. Cada padrão tem a contramedida que vale a partir de agora.

| # | O que aconteceu (evidência) | Contramedida obrigatória |
|---|---|---|
| 1 | **Ajuste por tentativa.** Três commits retocando os tons do `LIGHTING` em 8 minutos (`0a7165a` 22:19, `3c94fff` 22:26, `f3a7020` 22:27). A porta pesada passou por 80 → 44 → 34 px. Os fios alternaram `lerp`, `reach_tween` e `reach` quatro vezes | Nenhum número muda sem citar a linha do `.c` anotado (ou do original) que o justifica. Depois de 2 F5 sem sucesso no mesmo problema, **pare** e escreva o bloqueio no `PORT_LOG.md` |
| 2 | **O original da raiz foi ignorado.** O `LIGHTING/` do autor estava no repositório e foi reescrito do zero | As três consultas do §0.5 passo 2, com o resultado escrito no relatório, **antes** de escrever código |
| 3 | **Afirmações sem prova.** "Eventos YYC só do menu" (`oFade_in`), "`0x68` é o glow-beam", "duas surfaces", "latch intencional do YYC" (desmentido depois) | Toda afirmação sobre o exe vem com a evidência: arquivo `.c` e linha, endereço ou `Index` do metadado. Sem evidência, escreva **"inferido"** e abra uma linha P |
| 4 | **Remendo de sintoma em código original.** Snap de câmera no `oPlayer/Step_1` (P39) e depth 1000 no fade (P40) | Cópia original não se edita. Desvio inevitável: bloco comentado, linha P e exceção no teste (`AGENTS.md` §5). Antes, procure a causa no original ou no YYC |
| 5 | **"Aceito" inflado.** O `LIGHTING` de 22/11 foi marcado "aceito no F5" e depois reescrito três vezes | "Aceito" só com as palavras do usuário e o hash do commit testado (tabela §0.1). Mudou depois disso? A linha vai para §0.2 |
| 6 | **Commits de experimento.** `90e9c02 experiment: draw the chunky door frame by frame`, seguido de duas correções em 3 minutos | Experimento fica local. Commite quando o port bater com o `.c`: um commit por mudança lógica, junto com os `decompiled/` usados |
| 7 | **Registro esquecido.** `LIGHTING` e `parGlow_Beam` fora do `HAND_WRITTEN`, e P39/P40 sem linha na §7 | Use o checklist de fim de port (abaixo) |
| 8 | **Execução sem perguntar.** O handoff de 23/11 dizia "rodar testes Python é livre" | Errado: **tudo** que executa (testes, scripts, Ghidra, UTMT, build) precisa do ok do usuário naquela sessão |

**Protocolo de sessão**

1. **Início:**
   - `git pull`;
   - leia §0, §0.6, §0.7, `SESSION_HANDOFF.md` e o fim do `PORT_LOG.md`;
   - escolha **o primeiro item aberto da §0.7** e nada além dele;
   - diga ao usuário, em 5 a 10 linhas: os objetos, as fontes encontradas (raiz, YYC, metadado), o que pretende rodar e o que ele vai ver no F5. Peça o ok para rodar.
2. **Durante:**
   - siga o §0.5 passo a passo;
   - escreva o relatório do port no `PORT_LOG.md` enquanto trabalha, não no fim;
   - pare e pergunte se o item crescer além do previsto. Exemplo: o objeto puxa um sistema inteiro como diálogo ou inventário.
3. **Fim do port (checklist):**
   - [ ] eventos com cabeçalho de origem (`gml_Object_..._N @ 0x...`, lote);
   - [ ] nenhum `// ??` do lifter sem resolução ou sem linha P;
   - [ ] objeto em `generate_reconstructed_objects.py` (`OBJECTS`) e em `HAND_WRITTEN`;
   - [ ] sprites e sons importados (só os usados);
   - [ ] `generate_lighting.py` rodado, se o objeto aparece no `LIGHTING`;
   - [ ] teste estático com as constantes distintivas, e suíte rodada (com ok);
   - [ ] §0.2, §0.7, §7 e `SESSION_HANDOFF.md` atualizados;
   - [ ] commit e push (com ok);
   - [ ] o usuário recebe a lista exata do que conferir no F5.

**Modelo de relatório** (`PORT_LOG.md`, um bloco por objeto, mais recente no fim):

```markdown
### <objeto> — <data> — commit <hash ou "não commitado">
- Fontes: raiz <sim/não> · YYC <N funções: ...> · eventos no metadado <...>
- Lote: decompiled/<lote>_annotated (decompilado agora / já existia)
- Constantes e ids identificados: <valor> = <significado> (evidência: <arquivo.c>:<linha> / Index / tabela)
- `??` resolvidos: <N>; abertos: <lista + motivo> → P<n>
- Assets importados: <sprites, sons>
- Desvios / atalhos: nenhum | P<n>: <resumo>
- Teste: <módulo.teste>
- F5 — o usuário deve ver: <lista curta>; resultado: <pendente / palavras do usuário>
```

**Texto para colar no início de uma sessão com outro agente**

> Você vai continuar a reconstrução do NYKRA: Before em `rea/NYKRA_Reconstructed/`. Antes de qualquer coisa, leia `AGENTS.md` ("Reconstruction rules") e, em `MASTER_RECONSTRUCTION_PLAN.md`, as seções §0, §0.6 (incluindo "Modelos e subagentes"), §0.7 e §0.5. Depois leia `SESSION_HANDOFF.md` e o fim do `PORT_LOG.md`. Trabalhe **só no primeiro item aberto da §0.7**. Não invente nem ajuste valores "a olho": cada número vem do GML original da raiz ou do `.c` anotado do YYC, citado no relatório. **Delegue aos subagentes baratos**:
> - `nykra-scout`: buscas e levantamentos;
> - `nykra-checker`: auditoria do port antes do F5;
> - `nykra-scribe`: `PORT_LOG.md`, plano e handoff, a partir dos fatos que você passar.
>
> **A leitura do `.c` e a escrita do GML ficam com você.** Confira no arquivo citado o que um subagente afirmar antes de usar. Não execute nada (testes, scripts, Ghidra, UTMT, build) sem me perguntar antes. Comece me dizendo, em até 10 linhas, quais fontes você encontrou para o item, o que pretende rodar e o que eu devo ver no F5.

**Modelos e subagentes:** veja `MODELOS_E_AGENTES.md`, que traz qual modelo usar para cada papel, preço ÷ teto da cota do Go, horário de pico, os três subagentes de `.opencode/agents/` e a rotina por item. Em resumo: o principal é `opencode-go/glm-5.3` e lê o `.c` e escreve o GML; `nykra-scout` e `nykra-checker` usam `deepseek-v4.1-flash`; `nykra-scribe` usa `glm-5.3-flash`.

### 0.7 Fila de trabalho (em ordem; um item por vez, com F5 entre eles)

Cada item diz onde estão as fontes. Os `.c` do `rmMal_1` **já estão** em `decompiled/rmmal1_sun_annotated/` (lote de 24/11).

1. **Fragmentos vermelhos (`parGnarcier` + `oGnarcier_s/m/b`, `rmMal_1`):** 🟨 **portados em `fba9e52`; em 26/11 o `Step_0` foi corrigido** (12× `random(0)` e `random_range` com mínimos errados: o Ghidra perde o argumento de `xmm0`; ver `PORT_LOG.md` e `YYC_HELPERS.md`). F5 de 26/11: fragmentos com brilho e ruído, colisão e rebote ok (usuário). **A explosão (`anim == 0`) não foi testada:** nada portado a dispara (provavelmente o ataque Telarod) e `create_flashline`/`create_spark`/`create_poly` são stubs (P27). O mesmo erro existe no `oOrigin/Draw_0.c` (item 7).
   - YYC:
     - `parGnarcier`: `Create_0` 16 KB, `Alarm_0` 21 KB, `Step_0` 65 KB; `Draw_0` e `Draw_72` são vazios.
     - Os filhos têm `Create_0` = `event_inherited(); sides = 3/4/5;`.
   - Sprites: `sGnar_s`, `sGnar_m`, `sGnar_b` (UTMT, `ExportSpritesRestored.csx`).
   - O `oPlayer/Collision_parGnarcier` (original) e o bloco `with(parGnarcier)` do `LIGHTING` passam a valer.
   - ⚠ **Não crie cascas dos `oGnarcier_*` antes do port:** o bloco do `LIGHTING` lê `f_`, `f__`, `r__` e `anim` das instâncias, e numa casca isso é erro de variável não definida.
   - Aceite: os fragmentos aparecem, brilham e reagem como no original.
2. ✅ **`oMUSIC_VOL_HALF`** (26/11, `b2cce24`): ninguém portado o consulta e o `oControl` original não o usa; ficou como casca (junto com `oDlg_Mal1/2`). Texto original: o `Create_0` é vazio, então é só um marcador. Antes de criar a casca, ache quem o consulta com `rg -n "oMUSIC_VOL_HALF" rea/NYKRA_Reconstructed/NativeAnalysis/decompiled oControl` e confira se esse código já está portado.
3. ✅ **P41, feixes de luz (F5 de 26/11 sobre `715adeb`: "feixes bonitos, tudo ok", usuário; os `.c` já existiam em `lighting_glows_annotated`; filhos sem `event_inherited`, deslocamento 13.5 / 8.5 lidos do `.exe`, pai 2).** Texto original: decompile `gml_Object_oGlow_Beam_L_Create_0` e `gml_Object_oGlow_Beam_S_Create_0`, porte cada um no próprio filho e tire o `object_index ==` do pai. Aceite: os feixes iguais aos de hoje (que já batem com o original).
4. ✅ **P40, `oFade_in` (F5 de 26/11 sobre `715adeb`: fade ok, câmera chega sozinha, sem erro de variável no log; usuário):** os três eventos vêm do YYC (`decompiled/fade_in_annotated`) e o `map_load` voltou a `-1011`. **Achado importante:** o `Create_0` e o `Alarm_0` originais também **centram a câmera** (`oCamera.x/y/xx/yy = mean(.., mw*8 / mh*8)`, `camera_set_view_pos`, `oCamera.alarm[0] = 1`); era isso que faltava na chegada, ou seja, a causa provável do P39. **No F5, olhe a câmera na chegada**; se estiver certa, o item 8 vira "remover o enxerto de câmera do `oPlayer/Step_1`". Texto original: decompile `Create_0` (`0x14087d320`), `Alarm_0` (`0x14087f960`) e `Draw_73` (`0x140881b00`), porte-os e volte o `map_load` para `instance_create_depth(10, 10, -1011, oFade_in)`. Aceite: o fade de porta igual ao original, sem tela preta presa.
5. ✅ **Livro (`oBook` + `oBook_UI`, `rmMal_1`): escopo escolhido pelo usuário em 26/11 = o livro inteiro, com leitura. Feito em 27/11: 5a, 5b e 5c validados pelo usuário no F5 (último commit `c5a4971`, `Draw_73` completo, B1-B12). Pendência herdada: `oControls_bag` ainda é uma casca (P45), o `open_book`/`Draw_73` o criam quando o jogador tem no máximo 1 livro; portá-lo é um item à parte.**
   - **Levantamento (26/11):**
     - nenhum dos 2 objetos chama script do jogo, só builtins;
     - `map_load` já grava `book` e `book_text` (u8);
     - `oPlayer` (original) já guarda `books` e `book_desc` (lidos do ini `BOOKS` no `Other_12`) e chama `open_book` (stub);
     - o disparo vive no `oControl` original: ele cria `BOOK_input` (objeto 667, ainda sem `.c`); o `oControl` do projeto é provisório.
   - **`.c` em `rmmal1_sun_annotated`:**
     - `oBook`: Create 232, Alarm_0 184, Draw_0 790, Draw_73 545 linhas;
     - `oBook_UI`: Create 434, Alarm_0 302, Destroy 198, Draw_73 4.414 linhas (156 KB), com `sPages` criado em runtime, `draw_sprite_pos`, `FONT_MAIN` e buffers de texto.
   - **Etapas** (cada uma com teste e F5 quando houver o que ver):
     - **5a** `oBook` no mundo (aparece e reage igual ao original);
     - **5b** decompilar `BOOK_input` e `open_book`;
     - **5c** `oBook_UI` por blocos do `Draw_73`;
     - **5d** ligar o disparo (hoje o `oControl` é provisório) e o texto (`book_text`).
   - **Achados da 5a (26/11, leitura do `Create_0`, `Alarm_0` e `Draw_0`; nada portado ainda):**
     - `Create_0`: `anim = anim1 = anim2 = book_text = book = on = 0`, `depth = 10`, `alarm[0] = 2`.
     - `Alarm_0`: `FUN_140112250` = `gml_Script_open_book`, chamado como `open_book(book_text, <DAT_142182be8>)` (`.bss`, provavelmente 0 = "não é do inventário"). Falta entender por que o `Create_0` arma esse alarme em toda instância; ler o `open_book` completo (`decompiled/player_lifted2/gml_Script_open_book.gml.txt`: destrói e recria o `oBook_UI` em `(CMX, CMY, -100)`, lê o ini `BOOKS` e preenche `txt`, `name`, `book_id`, `is_inv`) antes de decidir.
     - `Draw_0` é a **mesma máquina de estados do `parNote/Draw_0`** (original na raiz): `on==0` com `player_interact(x,y,17,0,0)` / `(17,1,1)`, `anim = reach_tween(anim,1,7)`, `anim1 = max(anim1*0.5-0.001, 0)`; `on==1` com `reach_tween(anim1,2,10.5)` e `player_interact(x,y,32,1,0)`; `on==2` com `reach_tween(anim1,0,5.25)`. No `oBook`, o `on==1` ainda faz `ds_list_insert(oPlayer.books, 0, book_text)` e `instance_destroy` (verificar a ordem no `.c`). Desenha `draw_sprite(sprite_index?, book, ...)` (`FUN_1416b8480(self, 0x193, book, ...)`: sprite 403 por índice) e um brilho aditivo com `c_ink`. `FUN_1400d7df0` = `player_interact`, já existe no projeto.
     - ~~Pendentes para a 5a~~ resolvidos em 26/11 (veja `PORT_LOG.md`, "oBook (item 5a)"): `Draw_73`, constantes e sprite 403 = `sBook`.
   - **5a ✅ (26/11, F5 do usuário: livro com o quadro certo, seta laranja, brilho some ao interagir, livro some e entra no inventário; log sem erro, `STUB open_book` uma vez ao carregar o nível; commit `3661002`). Próximo: 5b.** Histórico da escrita:
     - Os 4 eventos estão em `GameMakerProject/objects/oBook/` (`Create_0`, `Alarm_0`, `Draw_0`, `Draw_73`); `oBook` entrou em `HAND_WRITTEN` e em `generate_reconstructed_objects.py` (liga `sBook`). Atalhos: P42.
     - **Achado:** `BOOK_input` e o rótulo `oControl.mode != 3` são do editor (`oControl/Step_1:413`, `Draw_73:488`), então a 5d "ligar o disparo" não existe: no jogo o livro é pego pelo próprio `Draw_0` (`on==1`: `ds_list_insert(oPlayer.books, 0, book_text)` + `instance_destroy`). Resta a leitura (5b/5c), que o `oBook_UI` abre.
     - **5b reescopada (26/11): `BOOK_input` sai (é do editor); a 5b é o `open_book` (`player_annotated/gml_Script_open_book.c`, 2.306 linhas) e vira um bloco com a 5c.** Mapa feito por agente analista e conferido por amostra (chaves do ini, `fmod` da linha 1757, `sPages` da linha 1743); as linhas abaixo são do `.c`:
     - `143-244`: `if (instance_number(665) > 0) with (665) instance_destroy();` e `with (instance_create_one(CMX, CMY, -100, 665))` (665 = `oBook_UI`).
     - `331-380`: `is_inv = argument1; if (argument1 == 1) { book_id = -4; open = 1; } else book_id = other.id;` e `book_n = argument0`.
     - `381-615`: `ini_language()` e `txt`/`name`/`type` lidos de `ini_read_string("BOOKS", "book[" + string(book_n) + ",2]" / ",1]" / ",0]", "")` (**não** `,3]`, que é a descrição; confirmado em `dlg_eng.lang:24970-24973`); `type = round(real_string(...))`; `ini_close()`.
     - `616-1425`: quebra de linha e paginação. Laço externo `while (txtpntr <= string_length(txt))`, laço interno `for (j = 1; j < 100; j++)` que monta a palavra, quebra de linha por `string_width(page_txt[p] + word) > page_w - buffer*2`, e escapes `|n` (nova linha), `|p` (nova página) e `|<dígito>` (página de imagem, marcada com `"\x07" + dígito`). Valores: `page_w` 156, `page_h` 192, `buffer` 8, `pscale` 2.
     - `1426-2178`: cada página é desenhada numa surface (`sBook_page` = sprite 257, 78×96 a `pscale`, espelhada nas páginas pares; `sBook_pageimages` = sprite 261 para as páginas de imagem; texto com `FONT_MAIN`, cor `ink_col`) e vira quadro do sprite `sPages` (`sprite_create_from_surface` na página 0, `sprite_add_from_surface` nas demais).
     - `1747-1773`: completa para número par de páginas. **O divisor do `fmod` (linha 1757) foi perdido pelo Ghidra; a leitura "`p mod 2 == 0`" é inferência até desmontar com `DisassembleRange.java`.**
     - `2179-2303`: `pages = p + 1`; `pagepile_right` recebe `0..pages-1`, `page_anim[j] = 0`, `page_txt[j] = ""`; `pileR = pages`, `pileL = pileRxA = pileLxA = 0`; `surface_free`.
     - Ressalvas: `surface_create` roda a cada página mas só a última surface é liberada (vazamento do original, precisa de linha no §7); o teste `txtpntr + 2 <= string_length(txt)` do escape de imagem é o que o código compilado faz, portar como está; `string_char_at(txt, 0)` em `txtpntr = 2` pode se comportar diferente no runtime LTS.
     - Pré-requisitos: objeto `oBook_UI` (ao menos o `Create_0`, em `rmmal1_sun_lifted`), sprites 257 e 261 (UTMT), `FONT_MAIN`. `instance_create_one`, `ini_language` e `real_string` já existem no projeto.
     - **Etapa 1 escrita em 26/11 (sem F5 e sem commit): `open_book` (143-615) + `oBook_UI` `Create_0`/`Destroy_0`; P43. Falta o usuário rodar os 3 geradores (`generate_player_stubs.py`, `generate_project_scripts.py`, `generate_reconstructed_objects.py`), abrir/salvar na IDE e dar F5 (esperado: jogo igual à 5a, `STUB open_book` some do log).** Próximo: etapa 2.
     - **Etapa 1: compilou e o F5 de 26/11 carregou só `rmMal_Origin` (sem livro), então o runtime do `open_book` ficou sem prova; o usuário mandou seguir.**
     - **Etapa 2 escrita em 26/11 (sem F5 e sem commit): paginação (616-1425) em `open_book`, mais um diagnóstico temporário (`log_note` de cada livro e de cada página, sai na etapa 3). Strings lidas do `.exe`: `b32c8` `" "`, `b32ca` `"|"`, `b32cc` `"n"`, `b32ce` `"p"`, `b32d0` `"\n"`, `b32d2` `"\x07"` (portado como `chr(7)`). Também: `map_load` agora loga uma linha por carga de nível (edição de log no gerador, antes só o boot logava) e a porta loga `door: n=.. -> sala`.** Conferir no F5: `page_txt` dos livros 4, 6, 8 e 10 (o log mostra `~` no lugar de `\n`).
     - **F5 de 26/11 (usuário, build sem commit), etapas 1+2:** `door: n=7 -> rmMal_1`, `map_load: rmMal_1 31x23 ... objects 29`, sem erro e sem `STUB open_book`. O `Alarm_0` do `oBook` chama `open_book` ao carregar o nível (esperado, como no YYC), não ao interagir; pegar o livro só o destrói e não chama `open_book` de novo. `rmMal_1` tem só o livro 4: `'The Rustbeaks of Quornem'`, tipo 0, 7 páginas. Conferido à mão contra `dlg_eng.lang:24956`: pág. 0 = título com 5 `|n` e 3 linhas; pág. 1 = só `\n`; págs. 2-3 e 5-6 = texto quebrado por largura/altura; pág. 4 vazia (o `|p|p`); acaba em `destructive beings.`. **Não conferido:** os pontos exatos da quebra de linha (dependem das métricas da fonte; só dá para comparar quando a etapa 3 desenhar as páginas) e os livros 6, 8 e 10 (não estão em `rmMal_1`).
     - **Etapa 3 escrita em 26/11 (sem F5 e sem commit): 1426-2178 em `open_book` (superfície por página, `sPages`), o `fmod` resolvido (divisor 2.0, ver abaixo) e um visualizador temporário `oBook_UI/Draw_73` (segurar B mostra as páginas; sai na 5c). Precisa dos sprites `sBook_page` (257) e `sBook_pageimages` (261): UTMT `$env:SPRITES_OUT=<pasta>; $env:SPRITES_LIST="sBook_page,sBook_pageimages"` com `Tools\ExportSpritesRestored.csx`, depois `generate_object_sprites.py <pasta>`. Sem eles o projeto não compila.**
       - `fmod` (`.c:1757`, `FUN_141944a50`): no `.exe`, a chamada em `0x14011640c` carrega `xmm0 = p` e `xmm1 = xmm8`; `xmm8` recebe `2.0` (`DAT_141982c40`) no prólogo (`0x14011276f`) e nada mais escreve nele. Logo é `p mod 2`; página em branco quando `p` é par (o índice da última página; a contagem é `p + 1`). Média-alta (não desmontei com o Ghidra).
       - Constantes lidas do `.exe`: `-1.0` (`DAT_141983ddc`), `1.0` (`141981f80`, `141981e30`, `b32f8`), `2.0` (`b3308`), tabela `{-1.0, 1.0}` (`141983de0`: xscale da página espelhada ×-1), `1e-5` (`f6b08`). `DAT_14217f488` está no `.bss` e só serve de 0.
     - **F5 de 27/11 (usuário, build sem commit), etapa 3:** compilou, sem erro; log `open_book: book 4 'The Rustbeaks of Quornem' type 0, 8 pages, 8 frames in sPages`. Segurando B o livro apareceu **em tela cheia** (esperado: a vista do mundo tem 180 px de altura e a página tem 192; o `Draw_73` real da 5c é quem decide a escala) e o usuário achou as quebras de linha corretas. Não conferido contra print do original.
     - **Etapa 4 escrita em 27/11 (sem F5 e sem commit): 2179-2303 (`pages`, `pagepile_right`, `page_anim`, `pileR/pileL/pileRxA/pileLxA`, `surface_free` da última). O `open_book` está completo; a 5b só fecha com F5 e commit.** Próximo: 5c (`oBook_UI` `Alarm_0` e `Draw_73`, 4.414 linhas, em blocos).
     - **5b ✅ no F5 de 27/11 do usuário ("ficou perfeito, igualzinho", sem erro; commit `23e028e`). Próximo: 5c.**
     - **5c, mapa feito por agente analista em 27/11 (linhas do `Draw_73.c` em `rmmal1_sun_annotated`; ~229 linhas de fonte original; "UNVERIFIED" = não conferi o `.exe`):**
       - **`Alarm_0`**: só `play_sound(choose(sndBackpack_01..07), 10, <loops .bss>, random_range(0.9, 1.1) * 0.9, 0.666666666666667, 1)`. É armado só pelo `Draw_73` (`:4221-4254`) quando `anim4` vira 1: `alarm[0] = floor(mean(fps, 60, 45))`.
       - **B1 `:1-340`** prólogo; guarda `open0 = open`, `anim4_0 = anim4`. **B2 `:341-391`** porta: `if (book_id != -4 && instance_exists(book_id) && book_id.on == 1) open = 1; if (!open) pular para B12; open = 1`.
       - **B3 `:392-684`** entrada de páginas (só com `page_click == 0 && anim4 == 0`): `page_sel += (pressed(kkr) - pressed(kkl)) * 2`, `clamp(-2, pages + 2)`, sons `sndPaper_01..05` (101-105) e `sndBook_slide_01..03` (113-115).
       - **B4 `:685-945`** easing: `pileR/pileL = reach_tween(.., ds_list_size(pagepile_*), 10)`, `w/h = sprite_get_width/height(sPages) / pscale`, `bookY = CMY + (h + CH/2) * anim1`, `anim1 = reach_tween(anim1, anim4 * (page_anim[0] < 0.05 || is_inv), 10)`.
       - **B5 `:946-997`** escurece (`draw_rectangle_view(c_blackink, (1-anim1)/2)`) e `oPlayer.control = 0; oPlayer.UI_OPEN = 1` a cada quadro ativo.
       - **B6 `:998-1581`** capas por baixo (`sBook_cover` 258, quadro `type*2+1`, `draw_sprite_pos` de 11 args). **B7 `:1582-2129`** pilha direita (`ds_list`, `page_anim[pg]`, `draw_sprite_pos(sPages, pg, ...)`, passa páginas para a esquerda). **B8 `:2130-2644`** pilha esquerda (espelho; **fórmula de y não conferida**). **B9 `:2645-3304`** capas por cima (`frontcov_an`/`backcov_an`, quadro `type*2`). **B10 `:3305-3389`** `pileRxA/pileLxA *= 0.777778` e vinheta `sScreen_Glow` (459). **B11 `:3390-4038`** (só com `anim4 == 0`) título (`draw_text(CMX, mean(CMY-50, CY), name)`), setas `draw_ui_arrow`, tecla "baixo" fecha (`anim4 = 1`) e, com 1 livro ou menos e `is_inv == 0`, cria `oControls_bag` em `oPlayer`; `is_inv` marca `oPlayer.inv_open_book = 1`. **B12 `:4039-4256`** fechamento (`instance_destroy` com `anim4 == 1 && anim1 > 0.99`) e o som de abrir.
       - Variáveis de estado: `open` (0 espera o livro do mundo, 1 ativo), `page_sel` em passos de 2 (`-2` capa fechada, `0..pages` aberturas, `pages + 2` contracapa), `anim1` (1 = escondido), `anim4` (1 = fechando), `anim2` (trava), `anim3` (dica), `anim5` (título), `page_click`, `turn_an` (morto neste evento). Nunca escreve em `oControl`/`oCamera`; só lê `CX/CY/CW/CH/CMX/CMY/c_blackink`.
       - Helpers novos (inferidos, sem corpo confirmado): `FUN_141693b30` = índice inteiro, `FUN_14002e450` = ler array, `FUN_1416924a0` = escrever array, `FUN_141944a50`/`FUN_14011fbe0` = `fmod`/`mod`, `FUN_1416ab670(0x40, x/y)` = `oPlayer.x/y`. Corrigido: `FUN_1416a8cb0/8c00` **não** são de superfície (ver `YYC_HELPERS.md`).
       - Ordem: (1) sprites/objeto e `Alarm_0` ✍️; (2) B1-B5 + B12 (abrir, escurecer, trancar o jogador, fechar); (3) B7-B8 (pilhas, o mais arriscado); (4) B6 + B9 (capas); (5) B10-B11 (vinheta, título, setas). Trocar o visualizador B pelo `Draw_73` real quebra o teste que confere o log do B.
     - **Etapa 5c-1 escrita em 27/11 (sem F5 e sem commit): `sBook_cover` (258, 6 quadros) importado; shell `oControls_bag` (+ pai `parControlsTut`); `oBook_UI/Alarm_0` portado (P45). O `Alarm_0` só dispara quando o `Draw_73` real armar `alarm[0]`, então nada muda na tela.**
     - **Etapa 5c-2 ✅ validada pelo usuário no F5 de 27/11 (commit `4b06e9f`; log: `book: opened`, `closing`, `closed`, sem erro). Próximo: 5c etapa 3 (B7-B8, pilhas de páginas).** Texto da etapa (escrito sem F5): `oBook_UI/Draw_73` com B1-B5 + B12 do YYC (porta `book_id.on`, `kkr/kkl` com `clamp(-2, pages+2)` e os sons de página/capa, easing `turn_an/pileR/pileL/anim1`, escurecer com `draw_rectangle_view(c_blackink)` + `(c_black)` a `(1-anim1)/2`, `oPlayer.control = 0` e `UI_OPEN = 1`, fechar com `anim4`, `instance_destroy` em `anim1 > 0.99`, som de abrir e `alarm[0]`). Constantes lidas do `.exe` (101-105, 113-115 com 115 duas vezes, -2, 10, 0.1, 1/3, 2/3, 60, 45). Esperado no F5: ao pegar o livro a tela escurece e o jogador fica parado, sem páginas (B6-B9 faltam); o visualizador B temporário continua por cima; a tecla "baixo" fecha (atalho temporário P46) e o jogador volta a andar. Log: `book: opened/closing/closed`.**
     - **Etapa 5c-3 ✅ validada pelo usuário no F5 de 27/11 (commit `20ebb6b`; "vi o livro, páginas mudando", log limpo). Próximo: 5c etapa 4 (B6 + B9, capas).** Texto da etapa (escrito sem F5): `Draw_73` B7 (pilha direita, `.c:1582-2129`) e B8 (esquerda, `2130-2644`) do YYC: laço do último índice ao 0, `draw_sprite_pos` de 11 args (quadro par à direita, ímpar à esquerda), `lengthdir_x(w, pa*180)` e `lengthdir_y(w/4, pa*180)`, y direita `bookY + 1 + pileR*(i/n) + pileRxA*(1-i/n)`, esquerda **sem o `+1`** (fórmula do B8 agora conferida), `page_anim` por `reach_tween` para 0/1 conforme `round(page_sel) <= pg`, troca de pilha em 0,5. Épsilon `DAT_1420f6b08` = 1e-05 lido do `.exe`. O visualizador B temporário saiu (P46c). Esperado no F5: o livro mostra as páginas em duas pilhas (sem capas, B6/B9 faltam), kkr/kkl viram páginas com a deformação da virada, "baixo" fecha.**
     - **Etapas 5c-4 e 5c-5 ✅ validadas pelo usuário no F5 de 27/11 (commit `d455014`; "tudo alinhado, tudo ok"; capa marrom no quadro do tipo 0; log limpo). Falta só o B11 (título, setas, tecla de fechar e `oControls_bag`).** Texto da etapa 4 (escrito sem F5): `Draw_73` B6 (capas por baixo, `.c:998-1581`) e B9 (capas por cima e `frontcov_an`/`backcov_an`, `2645-3304`) do YYC. As 4 capas são o mesmo quad (`draw_sprite_pos(sBook_cover, quadro, ax, ...)`, `lengthdir_x(w, a*180)`, `lengthdir_y(w/4, a*180)`), então uso uma função local `_cover_quad`. Quadros: `1 + type*2` por baixo, `type*2` por cima; âncoras `CMX+2`/`CMX-2` conforme a capa. `sBook_cover` = 258 (lido do `.exe`). **Achado:** a capa da frente por cima (B9) **não** recalcula o y: usa o `local_130` que o B8/B7 deixou (a de trás recalcula `bookY + pileR`); reproduzi com um único `_y`. B10 (próximo): `pileRxA`/`pileLxA *= 0.7777777` (o literal é `0x3fe8e38e0f21dbf3` = 0.7777777, **não** 7/9). Esperado no F5: o livro aparece com capas (frente à esquerda ao virar, trás à direita), no quadro do tipo 0.**
     - **F5 de 27/11 sobre o B6+B9 (usuário):** capa em branco (esperado: o quadro do `sBook_cover` é azul liso, o título é do B11); as folhas e a contracapa subiam sem parar e, ao fechar, sobravam páginas no topo. **Causa:** o B10 (`pileRxA`/`pileLxA *= 0.7777777`) não estava portado, então o `+1`/`-1` de cada virada nunca decaía. **Etapa 5c-5 escrita em 27/11 (sem F5 e sem commit): B10 (`.c:3305-3389`): o decaimento mais a vinheta `sScreen_Glow` (459, lido do `.exe`) por cima da vista, duas vezes como o B5 (`c_blackink`, depois 0). Esperado: as pilhas não se afastam mais, nada sobra no topo ao fechar. Falta o B11 (título, setas, tecla de fechar) e depois acabar o `Draw_73`.**
     - **Etapa 5c-6 ✅ validada pelo usuário no F5 de 27/11 (commit `c5a4971`; título, seta de dica à direita, seta de baixo depois da 1ª página, sons e "baixo" fechando; log limpo). Item 5 fechado.** Texto da etapa (escrito sem F5): B11 (`.c:3390-4038`), o último bloco: título (`draw_text(CMX, mean(CMY-50, CY), name)`, aditivo, cor `merge_color(0, $FFFF00, sqr(anim5*(1-anim1)))`, `anim5` vai a 1 com a capa fechada), dica de seta à direita (`anim3 >= 1`, `is_inv != 1`) e de seta embaixo (`anim3 < 1`), e a tecla "baixo": `anim4 = 1`, 3 sons, e com `ds_list_size(oPlayer.books) <= 1` cria o `oControls_bag` (casca, P45); com `is_inv`, `oPlayer.inv_open_book = 1`. O atalho temporário P46b saiu. Constantes lidas do `.exe`: 16776960, 7, 2, 33023, -100, 647, 0.35. Com isso o `Draw_73` está completo (B1-B12). Esperado no F5: título dourado/ciano aparecendo com o livro fechado, setas de dica, "baixo" fecha com os sons e (com 1 livro) cria o `oControls_bag` sem efeito visível.**
     - Ordem do `open_book` (concluída): (1) linhas 143-615 ✍️; (2) 616-1425 ✍️, conferindo `page_txt[]` dos livros 4, 6, 8 e 10; (3) `DisassembleRange` do `fmod`, depois 1426-2178, com F5 mostrando as páginas; (4) 2179-2303.
   - **Passos do F5 (já feitos em 26/11):** (1) UTMT: `$env:SPRITES_OUT=<pasta>; $env:SPRITES_LIST="sBook"` com `Tools\ExportSpritesRestored.csx`; (2) `generate_object_sprites.py <pasta>`; (3) `generate_reconstructed_objects.py` (reescreve os `.yy`, ligando `sBook`); (4) abrir e salvar na IDE; (5) F5 em `rmMal_1`: livro com o quadro certo, seta laranja, brilho que some ao interagir, o livro sumir e `STUB open_book` no log.
6. **Falas (`parDialogue` + `oDlg_Mal1`/`oDlg_Mal2`):**
   - `parDialogue` tem **original na raiz**: copie com gerador, como o `LIGHTING`.
   - Os `oDlg_*` têm só `Create_0` (`.c` já existem).
   - Faça o levantamento das dependências antes; o diálogo é um sistema (fontes, `dlg_eng.lang`, `DIALOGUE_*`).
   - **Estado em 27/11 (sem F5 e sem commit):** levantamento feito (PORT_LOG, 27/11). **Etapa 2:** `parDialogue` com os 6 eventos originais por `generate_player_object.py`. **Etapa 3:** `sound_voice_Keu`, os sons `sndV_Keu1..12`, `load_dialogue` (YYC `0x1400ec080`, lê a seção do objeto no `dlg_eng.lang`) e o `Create_0` de `oDlg_Mal1/2` (literais do YYC, conferidos contra o `.lang`). **Erro de levantamento corrigido:** os `oDlg_Mal*` chamam `load_dialogue()`. Atalhos: P47. **Esperado no F5 em `rmMal_1`:** no log, `load_dialogue: oDlg_Mal1 rows 2 | row0 arrow 1 goto -1 ...` e `oDlg_Mal2 rows 3`; a 32 px de cada um aparece a seta e a tecla de cima abre a fala da Keu. Se o log mostrar `arrow -1`, o P47(a) está errado. **F5 de 27/11 (usuário):** o log mostrou `load_dialogue: oDlg_Mal1 rows 2 | row0 arrow 1 goto -1 ...` e `oDlg_Mal2 rows 3`, sem exceção: P47(a) confirmado pelo log, o carregamento funciona. **Nenhuma fala apareceu, e era esperado:** o `Draw_73` só roda com `oControl.game_dialogue`, que nasce como `START_GAME` (0, P6); no original só vira 1 por jogo carregado ou pela tecla F6 (`oControl/KeyRelease_117`). Meu texto "esperado no F5" acima omitia isso (erro meu). **Acrescentado em 27/11:** `oControl/KeyRelease_117` copiado da raiz (F6: `game_dialogue = 1`, `START_GAME = 1`); esperado no F5: F6 em `rmMal_1`, chegar a 32 px de cada `oDlg_Mal*` e ver a fala da Keu com a voz. Falas ainda **não validadas**.
7. **Arco e cutscene do exterior (`oOrigin`, P21):** resto do `Draw_0` (`decompiled/oorigin/`, 5.535 linhas) e `Draw_73` (448 linhas). Divida o `Draw_0` por blocos de `local_N` (linhas do fonte) e porte por partes, com F5 entre elas.
8. ✅ **P39, câmera (causa achada em 26/11, enxertos removidos; F5 sobre `5cd089f`: "nada torto nem varrendo", log limpo; usuário):** a causa era o `oFade_in` inventado. O original, no `Create_0` e no `Alarm_0` (~`2 + ceil(fps/11)` quadros depois, com o jogador já posto), centra a câmera e arma `oCamera.alarm[0] = 1`, e o `oCamera/Alarm_0` da raiz a leva ao `oPlayer`. O alarme corre antes do `Step`, então só o segundo disparo acerta. Os enxertos do `oPlayer/Step_1` (agora byte a byte o original de novo) e do `map_load` saíram. **F5:** chegar por portas e por `PATH` nos 3 níveis; se a câmera chegar torta, reverter este commit. Texto original: ache por que a câmera não chega sozinha ao jogador na chegada. Suspeitos: `oCamera` (original na raiz) e `oCamera_Point` (`small_lifted/gml_Object_oCamera_Point_Draw_0`). Remova os dois enxertos quando achar a causa.
9. **P24, colisão com objetos:** leia `NativeAnalysis/COLLIDE_PORT_NOTES.md`, localize o caminho real jogador × sólido e tire o bloqueio local do `oDoor_chunky/Step_2`.
10. **Fechamento do 3.3:** checklist da §0.3 com o usuário; revisão da §7.
11. **Antes de qualquer código de save: a investigação do save original** (§2, 3.4, passo 0). O save do jogo original foi o que inviabilizou o projeto; o objetivo é não repetir aquilo.

### 0.8 Mapa completo dos marcos (submarcos, ordem e aceite)

Um submarco fecha só com F5 do usuário. Os números entre parênteses são os itens da fila §0.7. As contagens de níveis vêm de `RecoveredAssets/Included Files/level_data/`. A ordem dos capítulos vem dos templates `DATA/CHAPTER_TEMPLATES/chapter_1..6/ROOMS`:
- cap. 1: Maldis;
- cap. 2: + Praedim;
- cap. 3: + Mexulta;
- caps. 4–5: + EO;
- cap. 6: Mexulta.

**Fase 3: o recorte jogável (Maldis, começo)**

| Submarco | Conteúdo | Estado | Aceite |
|---|---|---|---|
| 3.0 | Ambiente (IDE LTS 2026, F5) | ✅ 19/11 | projeto abre e roda |
| 3.1 | Projeto mínimo e primeiro sprite | ✅ 19/11 | sprite visível |
| 3.2 | Tiles do nível | ✅ 19/11 | 6 camadas do `rmMal_Origin` |
| 3.2b | `map_load` reconstruído | ✅ 19/11 | 79 objetos criados ou logados |
| 3.2c | Sprites dos objetos | ✅ 19/11 | canvas e origem iguais ao original |
| **3.3a** | Jogador e núcleo: movimento, colisão com tiles, câmera, sons, poeira, notas | ✅ 19/11 | anda, pula e colide como no original |
| **3.3b** | Exterior `rmMal_Origin`: grama, folhas, céu, sol, placas, fios, porta pesada, portas, arco e cutscene `oOrigin` (7), câmera P39 (8), colisão com objetos P24 (9), fade P40 (4) | 🟨 | o exterior igual ao original, incluindo a abertura de um jogo novo |
| **3.3c** | Sala leste `rmMal_o1`: `LIGHTING` ✅, feixes P41 (3) | 🟨 quase | sala igual ao original (a luz já está) |
| **3.3d** | Sala oeste `rmMal_1`: lâmpadas ✅, fragmentos (1), `oMUSIC_VOL_HALF` (2), livro (5), falas (6) | 🟨 | sala igual ao original, livro e falas incluídos |
| **3.3e** | O que esses 3 níveis usam e ainda é stub: `hurt_player` (P22), efeitos `create_*`/`mask_*` (P27), outras `easing` (P25), só onde aparecerem | ⬜ | nenhum `STUB` no log ao jogar os 3 níveis |
| **3.3f** | Fechamento: checklist §0.3 e revisão da §7 (10) | ⬜ | o usuário aceita o 3.3 |
| **3.4a** | Investigação do save original, S1–S9 (11) | ⬜ | `SAVE_INVESTIGATION.md` aprovado pelo usuário |
| **3.4b** | Desenho revisado do Save V1 | ⬜ | `SAVE_MIGRATION_DESIGN.md` revisado e aprovado |
| **3.4c** | Implementação e testes do Save V1 | ⬜ | aceite de §2, passo 5 |

**Fase 4: o jogo inteiro** (proposta; confirmar a ordem com o usuário ao começar cada um)

| Submarco | Conteúdo | Tamanho | Aceite |
|---|---|---|---|
| 4.1 | **Base global:** `oControl` original (25 eventos, copiado por gerador como o `LIGHTING`), boot `INIT → rmMM → rmMAIN`, menu, opções, `set_controls` completo e gamepad (P1, P11, P16). Sai o `oControl` provisório | 1 objeto grande + menu | o jogo abre no menu e um jogo novo começa como no original (P21) |
| 4.2 | **Sistemas compartilhados:** ataque Telarod e dano, inventário (`ITEM`, `inv_*`), diálogo (`parDialogue`, original) e livro já estáveis, efeitos `create_*`, todas as `easing`, máscaras, shaders usados em Maldis | ~20–40 scripts | os sistemas funcionam em qualquer nível de Maldis |
| 4.3 | **Maldis completo** (cap. 1), por grupos de níveis vizinhos, cada grupo com o `list_level_objects.py` zerado (nenhum `absent`/`SHELL` que aja) | 33 níveis, 108 tipos de objeto (131 com pais) | o cap. 1 jogável do começo ao fim, com save |
| 4.4 | **Praedim** (cap. 2) | 17 níveis | cap. 2 jogável |
| 4.5 | **Mexulta** (caps. 3, 5 e 6), o maior planeta | 43 níveis | caps. 3, 5 e 6 jogáveis |
| 4.6 | **Eo** (cap. 4): `oEo` (original na raiz) e níveis `rmEO` | 16 níveis | cap. 4 jogável |
| 4.7 | **Restante:** Arthek 12, Irnem 13, Quornem 10, Septeon 9, Iiedakama 6, Oosasma 2 e salas avulsas (`rmVEN`, `rmPod7`, `rmKeu`, ...). Eles **não aparecem nos templates de capítulo**: confirmar com o usuário ou o autor se são conteúdo jogável ou cortado antes de investir | ~60 níveis | decidido com o usuário |
| 4.8 | **Cenas 3D da estação:** buffers `DATA/*` (malhas zlib, 24 bytes por vértice) e os 25 shaders | 74 arquivos `DATA` | cenas iguais ao original |
| 4.9 | **Bugs:** os aprovados da Fase 2 e os achados durante o port, cada um com teste de regressão antes da correção | — | lista de bugs fechada com o usuário |
| 4.10 | **Aceite final** (§3.4) | 183 níveis | jogável do menu ao fim, save confiável |

Regra para a Fase 4: cada submarco começa com um levantamento (`list_level_objects.py` nos níveis do grupo, mais `survey_object_dependencies.py`). O levantamento vira itens na §0.7 antes de qualquer port.

---

## 2. Fase 3 restante — Save V1 (marco 3.4)

### 3.4 — Save V1

> **Contexto (registrado em 24/11, segundo o usuário):** o sistema de save do jogo original tinha **problemas severos**. Foi isso que tornou o projeto inviável de manter. O objetivo do 3.4 **não** é reproduzir o save original. É entender por que ele falhava e construir um que não falhe. **Nenhum agente porta código de save do YYC "como está" para o projeto.** O código de save reconstruído continua desligado (`START_GAME = 0`; `save_game`/`load_game` são stubs barulhentos, P6) até o fim da investigação abaixo.

#### Passo 0 — Investigar o save original (obrigatório, antes de qualquer código)

Escreva o resultado em `SAVE_INVESTIGATION.md`, com evidência por item (arquivo `.c` e linha, fixture, byte). Comece pelo que já se sabe:

| # | Problema | Estado | Evidência / onde |
|---|---|---|---|
| S1 | O writer nativo **omite o payload** de arrays vazios ou cujo primeiro elemento é string, e o leitor desalinha a leitura seguinte | confirmado estaticamente | `PHASE2_PRIORITY_BUGS.md` §2; `gml_Script__save_type*.c`; `chapter_4/CONTROL` (`asset_layer\0FPS\0`) |
| S2 | **51 valores ambíguos ou ilegíveis em 18 arquivos** de save/template | confirmado | `Tools/phase1_validation_report.json` |
| S3 | Strings gravadas com tag `2`, que os leitores de array não tratam | confirmado estaticamente | `PHASE2_PRIORITY_BUGS.md` §2 |
| S4 | `int64` gravado como `f32`: inteiros acima de 2^24 perdem unidades | risco condicional | `PHASE2_PRIORITY_BUGS.md` §3 |
| S5 | `save_game()` roda em **toda** troca de sala (`PATH` e portas `parDoor_Flat/Draw_77`), regravando `ROOMS/<sala>.SAVE`. Falta medir o custo e o risco de corromper o arquivo se o jogo fechar no meio | a investigar | `gml_Script_save_game.c:1442-1533`; `oPlayer/Step_2` original |
| S6 | Ponto de persistência **global** (`CHARACTER`, `CONTROL`, `GENERAL`) desconhecido: nenhum trecho recuperado chama `save_CHARACTER`/`save_CONTROL` | a investigar | `PHASE2_PRIORITY_BUGS.md` §1 |
| S7 | A gravação não é atômica: o arquivo é sobrescrito no lugar, sem cópia temporária nem verificação. Confirmar no YYC (`buffer_save`, `file_*`) | a investigar | `gml_Script_save_game.c` e `save_*` |
| S8 | Formatos misturados (buffers zlib, DS, JSON, `ds_*_write`) e templates de capítulo copiados para o perfil: conferir se há versão ou checagem de integridade | a investigar | `RECOVERY_PLAN_AND_HANDOFF.md`; `DATA/CHAPTER_TEMPLATES/` |
| S9 | **Sintomas que os jogadores relatavam** (perda de progresso, sala errada, softlock após carregar...) | **perguntar ao usuário e ao autor** | — |

**Critério de pronto do passo 0:**
- cada S tem causa e evidência, ou está marcado "não confirmado";
- cada sintoma de S9 está ligado a pelo menos uma causa;
- o usuário aprovou a lista do que o Save V1 tem de evitar.

Só depois disso o desenho de `SAVE_MIGRATION_DESIGN.md` é revisto à luz do que se achou e implementado.

#### Passos do Save V1 (depois do passo 0)

Seguir `SAVE_MIGRATION_DESIGN.md`, revisado pelo passo 0: raiz `PROFILES_V1`, header `NYKRASV\0`, tags tipadas, snapshots, ativação por ponteiro. Passos:
1. Especificar os payloads concretos de `GENERAL`, `CONTROL`, `CHARACTER` e `ROOM` (ainda não definidos).
2. Portar `save_v1_format.py` para GML; gerar vetores de teste no Python e verificar no GML byte a byte.
3. Verificar no runtime: `buffer_sha1`/SHA-256 disponível? Atomicidade de `file_copy`/rename? Não afirmar sem prova.
4. Localizar o ponto original de persistência global (`save_CHARACTER`/`save_CONTROL` não são chamados nos trechos atuais); está em eventos ainda não reconstruídos.
5. Aceite: perfil novo → mudar de sala → salvar → fechar → reabrir com estado idêntico; gravação interrompida preserva o snapshot anterior; hashes dos originais iguais.

---

## 3. Fase 4 — Reconstruir o jogo inteiro

### 3.1 Tamanho do trabalho
| Tipo | Total no `NYKRA.exe` | No projeto em 24/11 |
|---|---:|---:|
| Eventos de objeto (`gml_Object_*`) | 2.281 | 120 arquivos de evento em 31 objetos (7 objetos com GML original na raiz) |
| Scripts (`gml_Script_*`) | 226 | 43 scripts no projeto (parte stub: `provisional_stubs`, `provisional_player_stubs`) |
| Global scripts (`gml_GlobalScript_*`) | 208 | 0 |
| Room/RoomCC | 5 | 0 |
| Objetos / sprites / sons / shaders | 699 / 490 / 708 / 25 | 76 (45 cascas) / 76 / 99 / 1 passa-direto |
| Níveis `.rmlvl` | 183 | 3 copiados |

Níveis por planeta (prefixo do nome): Mex 43, Mal 33, Prae 17, EO 16, Irn 13, Art 12, Quo 10, Sep 9, Iie/Iinenea 6, Oosasma 2, testes ~8. Só **Maldis** usa 108 tipos de objeto (131 com pais).

### 3.2 Pipeline por objeto/script
O pipeline é o **§0.5** (passos 0 a 7), com o protocolo da **§0.6**. Ele já existe e foi usado em 24/11: listas com `Tools/list_object_functions.py`, decompilação com `DecompileFunctionList.java`, anotação e elevação com `annotate_yyc_c.py`/`lift_yyc.py`, `.yy` com `generate_reconstructed_objects.py` (moldes no formato da LTS 2026), cópia de originais com `generate_player_object.py`/`generate_lighting.py`. Para a Fase 4 falta só automatizar o progresso: uma tabela gerada, por exemplo `Tools/reconstruction_progress.tsv`, com função, estado `todo/decompiled/ported/F5-ok` e commit.

### 3.3 Ordem de ataque
A ordem, os submarcos (4.1–4.10) e o aceite de cada um estão na **§0.8**. A ordem dos planetas segue os templates de capítulo: Maldis, Praedim, Mexulta, EO.

### 3.4 Aceite final
Jogo completo jogável do menu ao fim: 183 níveis carregam, transições funcionam e o save V1 é confiável. Tudo que foi simulado ou reconstruído por inferência fica listado; os fixtures originais continuam com hash inalterado.

---

## 4. Regras que valem em todas as etapas (resumo; texto completo em `PHASE3_EXECUTION_PLAN.md` §1)
- Nunca alterar `rea/NYKRA.zip`, `RuntimeBaseline/` ou `RecoveredAssets/Included Files/`. Usar cópias e conferir hashes. As saídas de `NativeAnalysis/decompiled/` não se editam à mão: lotes novos vão para pastas novas e são commitados.
- Não rodar código de save reconstruído nem o binário original contra perfis reais; o projeto de teste tem nome próprio; sandbox ligado.
- Sem fallback ou import de perfis legados; nunca adivinhar valores ambíguos; nunca no-op silencioso; nunca pular bytes de payload desconhecido.
- Só os assets necessários a cada marco; placeholders marcados como provisórios.
- Um marco por vez, validação do usuário entre eles; duas tentativas falhas → reportar o bloqueio. Um commit por mudança lógica.

## 5. Ferramentas e comandos
```powershell
# TUDO aqui executa algo: pedir o ok do usuário antes.
# testes Python (fixtures/estrutura; não certificam GML). Único erro aceito: o import preexistente de test_save_v1_format
python -B -m unittest discover -s rea/NYKRA_Reconstructed/Tools -q
# o que cada nível precisa e o estado de cada objeto
python -P rea/NYKRA_Reconstructed/Tools/list_level_objects.py rmMal_Origin rmMal_1 rmMal_o1
# decompilar / anotar / elevar: ver §0.5 passos 3–4
# validador (reescreve Tools/phase1_validation_report.json → revisar git diff)
python -B rea/NYKRA_Reconstructed/Tools/validate_formats.py
# inspecionar o que o compilador gerou (tileset/texture pages/tile layers) — somente leitura
$env:TILEDIAG_OUT="$env:TEMP\claude-tilediag"; $env:TILEDIAG_TAG="<rótulo>"
& "$env:LOCALAPPDATA\nykra-tools\utmt-cli\UndertaleModCli.exe" load "<pasta-build>\out\data.win" --scripts "rea\NYKRA_Reconstructed\Tools\DumpTilesetTexture.csx" < "<arquivo vazio>"
# exportar sprites/sons do original (somente leitura; SHA-256 do data.win antes e depois):
#   $env:SPRITES_OUT=<pasta>; $env:SPRITES_LIST=<lista>  -> Tools\ExportSpritesRestored.csx, depois Tools/generate_object_sprites.py
#   $env:SOUNDS_OUT=<pasta>;  $env:SOUNDS_LIST=<lista>   -> Tools\ExportSounds.csx, depois Tools/generate_sounds.py
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
- **Moldes de formato `.yy`:** sempre um arquivo que a IDE LTS 2026 já regravou dentro de `GameMakerProject/`, com o mesmo tipo de recurso. O `BLANK GAME` de 2024.14 está obsoleto.
- **Pastas temporárias:** `%TEMP%` é limpo de tempos em tempos; em 24/11 sumiram o Ghidra 12.1.4 e o UTMT de `%TEMP%\opencode\`. Ferramentas e projetos Ghidra ficam em `%LOCALAPPDATA%\nykra-ghidra` / `%LOCALAPPDATA%\nykra-tools` (§0.5 passo 0). As builds Igor antigas em `%TEMP%\opencode\gm-nykra-*` podem ter sumido também.

## 7. Registro de provisórios (nada daqui pode ser esquecido)
Todo atalho tomado de propósito fica listado aqui, com o marco que o remove e o critério de saída. **Ao fechar um marco, revisar esta tabela.** Nenhum provisório conta como jogo fiel (PHASE3 §1).

| # | Provisório | Criado em | Sai em | Critério de saída |
|---|---|---|---|---|
| P1 | `oControl` **mínimo** (só as variáveis do `map_load`; sem editor, UI, saves, música) | 3.2b | Fase 4, passo 1 "Base global" (§3.3) | `oControl` original importado e funcionando (eventos, Draw_73 etc.), com todos os assets que ele referencia (23 objetos, 36 sprites, 7 sons, 18 scripts, 1 shader, 2 outros) |
| P2 | **Objetos-casca** dos 27 objetos de `rmMal_Origin` (hierarquia, sprite e flags; **sem eventos**) | 3.2b | 3.3 (eventos) | cada objeto com seus eventos reconstruídos a partir de `gml_Object_*` (96 eventos no nível) |
| P3 | Cascas **sem sprite**: os 15 sprites estão importados (3.2c, `Tools/ExportSpritesRestored.csx` + `generate_object_sprites.py`) mas **não ligados** aos objetos, porque um objeto com sprite e sem eventos anima sozinho | 3.2c (importação, feita) / 3.3 (vínculo) | 3.3 | cada sprite ligado ao seu objeto junto com os eventos reconstruídos (Create/PreCreate que definem `image_speed`/`image_index`) |
| ~~P36~~ | ~~`oDoor_chunky/Destroy_0`~~ **resolvido em 23/11**: o builtin de 1 argumento em `0x1420db340` está em `RecoveredAssets/Metadata/yyc-dat-symbols.json` como `audio_stop_sound`; o evento é só `audio_stop_sound(snd);`. Fica a observação: `snd` nasce `-4` em `Create_0`, então o original passa índice inválido aqui — o port mantém a chamada sem guarda, como no binário. F5 de 23/11 não mostrou erro | 23/11 | — | feito |
| P37 | Ramo da **água** de `COLLIDE` (dentro do `with (oWATER)`, linhas `486-1072` do decompilado): além do arrasto em `hsp`/`vsp`, ele chama `FUN_140106850` com 18 argumentos e `FUN_1400d2410` com 6 (splash/ondulação, senos e constantes `157..162`, `10`, `46`, `59`) — efeito visual próprio, não reconstruído. Nenhum nível do recorte atual tem `oWATER` | 23/11 | quando um nível com água for portado | portar o arrasto e o splash, comparando com o jogo original |
| P38 | `LIGHTING/Draw_73` **inventado** em 22–23/11: duas surfaces, bloom quente aditivo e tons "ajustados a olho". O `parGlow_Beam` foi desenhado como três triângulos. O original do autor existe na raiz (`LIGHTING/`), e o assembly confirma que é a versão compilada (§0.4) | 3.3 (22–23/11) | 3.3 | eventos do `LIGHTING` copiados do original, com só os blocos de assets ausentes comentados por gerador; F5 nas duas salas comparado ao build original |
| P39 | ✅ (26/11: causa achada, blocos removidos, F5 ok sobre `5cd089f`; ver §0.7 item 8) **Snap de câmera** inserido em 22/11 no `oPlayer/Step_1` (original, com exceção no teste) e no `map_load` (chegada por `PATH`): posiciona `oCamera`/view direto no jogador. Sintoma tratado, causa não achada (provavelmente `oCamera_Point`/P33 ou ordem de alarmes do `oCamera`) | 3.3 (22/11) | 3.3 | causa encontrada no original/YYC e os dois blocos removidos |
| P40 | **`oFade_in` inventado** em 22/11: o comentário diz "eventos YYC só do menu", mas `gml_Object_oFade_in_Create_0`/`Alarm_0`/`Draw_73` existem (`0x14087d320`…). Fade por tempo (500 ms) e `instance_create_depth(..., 1000, oFade_in)` no `map_load`, quando o YYC usa `-1011`. Em GameMaker, depth **menor** desenha por cima, então `1000` fica **atrás** de tudo no Draw End | 3.3 (22/11) | 3.3 | os 3 eventos decompilados e portados; depth `-1011` de volta; F5 do fade de porta |
| P41 | `parGlow_Beam/Create_0` faz o papel dos `Create_0` de `oGlow_Beam_L`/`_S` com `if (object_index == ...)` (offsets 13.5/8.5); os filhos seguem como cascas, embora tenham `Create_0` próprio no YYC | 3.3 (22/11) | 3.3 | `Create_0` dos filhos decompilados e portados neles; o pai só com o próprio código |
| P42 | `oBook` (5a): (a) o 2º argumento do `open_book` no `Alarm_0` é o literal `.bss` `DAT_142182be8`, não lido do `.exe`; usei `0` (qualquer valor ≠ 1 mantém o livro fechado); (b) o separador do rótulo de editor do `Draw_73` é a string `DAT_1420cba58`, não lida; usei `"\n"` por analogia com o `parNote` (só desenha com `oControl.mode != 3`); (c) `open_book` segue stub (P5) → **em 26/11 o stub saiu, ver P43** | 3.3 (26/11) | 5b | ler o inicializador `.bss` e a string no `.exe`; `open_book` portado na 5b |
| P43 | `open_book` (5b): **script completo desde 27/11 (etapas 1-4)**; o `oBook_UI` tem só `Create_0`, `Destroy_0` e o visualizador temporário, falta o `Alarm_0` e o `Draw_73` (5c). Do original (portado como está): o `Destroy_0` só apaga o `sPages` e nunca destrói `pagepile_left`/`pagepile_right` (vazamento de 2 listas por `open_book`); o `oBook` chama `open_book` em todo livro ao carregar, então a cada chamada o `oBook_UI` anterior é destruído e recriado | 3.3 (26/11) | 5b etapas 2-4 | etapas 2, 3 e 4 do §0.7 item 5b |
| P45 | `oBook_UI/Alarm_0` (5c): o argumento `loops` do `play_sound` é o `.bss` `DAT_142182bc8`, não lido; usei `0` (toca uma vez). O `oControls_bag` é uma casca sem eventos (os `Create_0`/`PreCreate_0` do YYC não foram decompilados) | 3.3 (27/11) | 5c | ler o inicializador `.bss`; decompilar e portar o `oControls_bag` quando o `Draw_73` o criar |
| P46 | `oBook_UI/Draw_73` (5c-2): (a) o `.bss` `DAT_142182bd8` (loops dos `play_sound`, tempo de ganho dos sons de página, cor do 2º `draw_rectangle_view`, argumento do `gpu_set_blendmode`) vale 0 (`c_black`/`bm_normal`), o único valor que serve aos quatro usos; (b) ✅ resolvido em 27/11: o B11 portado traz a tecla "baixo" de verdade; (c) ✅ o visualizador B saiu em 27/11 (B7/B8 desenham as páginas) | 3.3 (27/11) | 5c | (a) ler o inicializador `.bss`; (b) portar B11 e apagar o atalho; (c) apagar o visualizador ao portar B7-B8 |
| P47 | `load_dialogue` e `oDlg_Mal1/2` (item 6, 27/11, sem F5): (a) `FUN_141700ad0(secção, chave, -1)` tomado como `ini_read_real` (identificado pelos argumentos; os valores do `.lang` são texto como `"1.000000"`); o F5 confere pelo log `load_dialogue: ... arrow 1 goto -1`; (b) o `""` da 2ª passada dos campos 8-11 é o `.bss` `DAT_14217f438`, lido como `""`; (c) o campo 3 dos `Create_0` é `""` (confirmado pelo `.lang`), o `.bss` `DAT_142181ea8/eac` não foi lido; (d) linha de log extra no fim do `load_dialogue` (`log_note`, não está no original). Subir: achar o escritor desses `.bss` no YYC. | provisório |
| P44 | `open_book` etapas 2-3: (a) `DAT_14217f488` (`.bss`) usado como 0 (`bm_normal`, alfa do clear, x, y, `removeback`, `smooth`); (b) a página 0 e o laço `1.._p` do YYC viraram um laço só `0.._p`, com o preenchimento par antes (não observável); (c) o laço da palavra trava com palavra mais larga que a linha, e uma palavra de 100+ caracteres é descartada, como no original; (d) uma superfície por página e só a última é liberada (vazamento do original); (e) `oBook_UI/Draw_73` é um visualizador temporário (segurar B), não o do original | 3.3 (26/11) | 5b/5c | (a) ler o inicializador do `.bss`; (d) a etapa 4 libera a última superfície; (e) o `Draw_73` real na 5c |
| P4 | ~~`oLevelProbe` e `oLeavesProbe`~~ **removidos no 3.2b**: o `map_load` os substitui, e o `clear_objects` original destruiria o `oLeavesProbe` (não persistente) | 3.1 / 3.2 | 3.2b | feito: o nível carrega só pelo `map_load` |
| ~~P10~~ | ~~`oMal_Tree1` com `Create_0` provisório~~ **resolvido em 19/11**: o `PreCreate` do `oMal_Tree1` é vazio; a copa é o pai `parLeaves`, cujos 4 eventos (Create, Destroy, Step_1, Draw_0) foram reconstruídos do `.exe` | 3.2b | 3.3 | feito e confirmado visualmente pelo usuário em 19/11 (copa com 2 camadas balançando) |
| ~~P18~~ | **Resolvido em 24/11:** a chamada existe. `DAT_142182d90 = param_1; FUN_141706ee0();` é `event_inherited()` (`YYC_HELPERS.md`), e está no `oGrass_Create_0`. Texto antigo: `oGrass`/`oGrass3` chamam `event_inherited()` no `Create`: a decompilação **não** mostra essa chamada, mas o `Draw` herdado lê `shake`, `col1` etc. que só o `Create` do pai define. É uma inferência para validar em execução | 3.3 | quando o runtime original puder ser observado | confirmar se o original executa o `Create` do pai |
| P19 | `parGrass_Draw_0` com jogador: **parte (a) resolvida em 19/11**: a mola da lâmina (`tshake`/`shake`, divisor 9 e amortecimento 0,975 lidos do `.exe`) e o balanço quando a caixa do jogador sobrepõe a grama (`shake += oPlayer.hsp`); a leitura da decompilação mostrou que o "ramo de ~500 linhas" é na verdade o **corte pelo ataque do jogador** (`player_attack_distance(x, y-8, 18.5, 1, 0.1)`: 1 chance em 21 por quadro de criar um `oToka`, um som de farfalhar (sons 150..155), 4 partículas de poeira e 16 `oObject_Bits`, e destruir a lâmina). **Parte (b) pendente**: o corte, que só ocorre com o ataque do jogador (Telarod), ainda inexistente | 3.3 | junto com o `oPlayer` | ramo reconstruído e testado com o jogador |
| P20 | `parGrass`: o `Create` escreve `wave = (instance_number(oIs_Inside) >= 1)` e o `Alarm_2` o oposto (`< 1`); mantido como no pseudocódigo | 3.3 | quando for possível observar | confirmar a intenção do autor |
| P21 | Nascimento do jogador: o `oOrigin` (cutscene do despertar) e o nível `rmMal_Origin` **não** criam o `oPlayer`; só `load_CHARACTER` (save) e `oPlace_Player` (célula 3) o criam. Num jogo novo o ponto de criação original não foi achado. O projeto vai criá-lo no `oControl` provisório em `oOrigin.x, oOrigin.y-32` (posição do respawn do `oPlayer/Other_11`) e o `oOrigin` fica como shell, sem a cutscene. **Em andamento (23/11):** `Create_0` e `Alarm_0..3` portados do YYC (`Create_0` é só atribuições; os alarms são `game_start = 0` quando `anim == 6`/`anim = 1`, `anim = 3` + `cam_shake 0.5` + `alarm[2] = 120`, `anim = 4`, `fade_out = 1` + `anim = 5`). Faltam `PreCreate_0` (vazio), `Step_1` (24 KB) e `Draw_0` (210 KB, decompilado com `setMaxPayloadMBytes(256)`) — o `Draw_0` é quem desenha o arco `sOrigin` que falta no cenário | 3.3 (jogador, etapa 1) | quando a cutscene `oOrigin` for reconstruída e o fluxo de novo jogo (menu, 3.4) for entendido | achar quem cria o jogador no novo jogo; reconstruir `oOrigin` |
| P22 | `hurt_player` é stub ruidoso (o jogador não leva dano). O script real (`0x1400e28e0`, `decompiled/arr_lifted`) baixa `hp`, empurra o jogador e treme a câmera | 3.3 (jogador, etapa 1) | etapa 3 (interações) | reconstruir `hurt_player` |
| P24 | `parEntity_Step_2` provisório: o original tem o script `COLLIDE` inlinado (colisão entidade-objeto: objetos sólidos, água `oWATER`, plataformas móveis, `collision_list`). Só o ramo `collide_object = 0` foi escrito. Consequência: o jogador ainda não colide com objetos; `oDoor_chunky` agora tem sprite e `grav = 0`, e o bloqueio provisório fica no `Step_2` local. **Investigado em 23/11 e reduzido:** `collision_list` só é inicializada com `noone` (`map_load`) e lida (`parEntity/Step_2`, `COLLIDE`); nenhum `collision_list[...] = ...` existe em nenhum decompilado, incluindo os três `Step` do `oControl` (decompilados agora em `decompiled/ocontrol_steps/`). Logo o laço de `COLLIDE` é inerte nesta build: portá-lo não muda comportamento. O bloqueio local da porta continua porque é o único que segura o jogador. Falta localizar o caminho real de colisão jogador-sólido (`oPlayer`/`parEntity`, `place_meeting`/`instance_place`) | 3.3 (jogador, etapa 1) | etapa 3 (interações) | localizar a colisão real e substituir o bloqueio local |
| P25 | **Parcialmente resolvido em 19/11**: o tipo 14 (curva do salto) é a *ease in-out sine*, `-c/2*(cos(pi*t/d)-1)+b`, lida do binário (constantes pi, 2.0 e -1.0 conferidas no `.exe`); a ordem das 30 curvas (10 famílias de Penner × In/Out/InOut) é inferida. O `easing` reconstruído só cobre o tipo 14; os outros tipos logam `STUB`. Com o stub linear anterior o pulo ficava mais baixo (o usuário não alcançava a nota da plataforma alta). Texto antigo: `easing` era stub que devolvia o tempo sem curva: o salto (`Step_1`: `easing(14, ...)`) fica com altura/forma diferente da original. O script real tem 1.481 linhas lifted (tipo 14 ainda não lido) | 3.3 (jogador, etapa 1) | logo depois do primeiro F5 do jogador andando | ler o `case 14` e reconstruir só o necessário. Achados (19/11): `easing(tipo, t, b, c, d)` é a biblioteca de 30 curvas (0..29) com uma tabela de saltos em `0x140084be8` (o decompilador não resolve os `case`; o do tipo 14 está em `0x140064dd8` e começa multiplicando por π, ou seja, é uma curva trigonométrica). Para ler um `case` basta `NativeAnalysis/scripts/DisassembleRange.java` (Ghidra, só leitura) sobre o intervalo; falta seguir o rabo comum `0x140066e18` e as chamadas de seno/cosseno que o compilador esconde |
| P26 | `shDissolve`: o fonte do shader não foi recuperado; o projeto tem um shader passa-direto com os 4 uniformes que o `Create_0` procura. A dissolução da morte não existe. As tags do `.yy` do shader não foram copiadas de um arquivo salvo pela IDE | 3.3 (jogador, etapa 1) | quando a IDE regravar o `.yy` e a morte for reconstruída | recuperar o GLSL no `data.win` |
| P27 | 19 scripts de efeito/UI do `oPlayer` são stubs ruidosos (`provisional_player_stubs`, gerado por `Tools/generate_player_stubs.py`; loga `STUB nome` uma vez). **Sons (etapa 2): os 56 do `oPlayer` mais 31 de passos foram importados** (`Tools/ExportSounds.csx` + `Tools/generate_sounds.py`), e `play_sound`, `play_sound_pos` (original) e `snd_step_*` (por nome: os índices 5..37 do original são `sndStep_grass1..wood8`, e o 25 é `sndMCh_Discovery`, excluído) estão reais; o `.yy` de som não foi copiado de um arquivo salvo pela IDE. O `oControl` provisório ganhou `anim1`, `game_dialogue`, `EO_SPAWN` e `GAME_CHAPTER` copiados do original | 3.3 (jogador, etapas 1-3) | etapa 2 (efeitos) e 3 (UI) | reconstruir `create_*`, `mask_*`, `draw_*` |
| P29 | `play_sound`: as duas constantes que o Ghidra perdeu no primeiro `audio_sound_gain` foram assumidas como `0, 0` (mesmo padrão do `play_sound_pos` original); o `play_sound` real não multiplica por `SOUND_VOLUME` nem por `mode == 3`, ao contrário do `play_sound_pos` | 3.3 (jogador, etapa 2) | quando o som de um uso de `play_sound` soar diferente do original | comparar de ouvido com o jogo original |
| P28 | ~~Fontes~~ **resolvido em 19/11 (notas)**: os 9 sprites de fonte foram importados e o `oControl` provisório cria as fontes com o `font_add_sprite_ext` copiado do original. Continuam provisórios os globais copiados do original: `LETTERBOX`, `GLITCH`, `c_iiem`, `c_ink`, `c_edgb*`, `CHYP`, `DIALOGUE_*`, `ITEM` (só `ITEM[0,0]`; a tabela de itens ainda não existe) | 3.3 (jogador, etapa 1) | etapa 3 (UI e inventário) | importar os sprites de fonte; reconstruir `add_item`/`ITEM` |
| P30 | `oFx` (a partícula de `create_fx`: poeira, faíscas): reconstruída de `decompiled/fx_lifted`, com 4 incertezas: (1) a 1ª opção do `choose` do ângulo em `Create_0` (as outras são 90, 180, 270) tomada como 0; (2) no círculo de brilho (`Draw_0`/`Draw_73`) as cores 1 e 2 tomadas como `c_black` e o contorno como `false`, e o modo de mistura restaurado como `bm_normal`; (3) o ramo `player == 1` do `Step_2` (a partícula segue o jogador) **não** foi reconstruído: loga `STUB`; (4) `sprite_index == 392` do original vira `sCloud_Puff` (índice 392 na ordem original; sprite importado só para isso) | 3.3 (jogador, etapa 2) | quando a poeira do pouso/passos puder ser comparada com o jogo original | comparar visualmente; ler o ramo `player` |
| P35 | Portas **escritas em 19/11** a partir de `decompiled/door_lifted`, com inferências: o builtin que testa `anim2` (`round(anim2 + 0.49) <= 0`), o argumento de loop dos sons, o alfa dos dois sprites de brilho (`anim2`), as cores do círculo de brilho (`c_black`), `halign/valign/cor/alfa` do texto "LOCKED", `arrow_colour = make_colour_rgb(255, 64, 1)`, o valor inicial de `rm` (`""`), a lógica do véu de fade na chegada (`fade_in == 2`) e a ordem dos quadros (2/6, 3/7, 0/5, 1, 4). **Desvio**: se o arquivo do nível destino não existe, a porta loga e devolve o controle (o original sempre o acha). Incluídos nos `datafiles`: `rmMal_1` e `rmMal_o1` (destinos das duas portas); os objetos que esses níveis usam e o projeto não tem são pulados e logados por `map_load`. A chegada na porta é do próprio `oPlayer/Step_1.gml` original (`door_n`) | 3.3 (etapa 3) | quando o usuário comparar as portas com o jogo original | comparar visualmente; reconstruir os objetos dos níveis seguintes |
| ~~P31~~ | Portas (`parDoor_Flat`, `oMal_Door_Flat`): lidas e escritas (ver P35). Achados: o `Step_1` abre a porta quando `playerhascontrol()`, o jogador está a menos de 15 px de `(x, y-8)`, `locked != 1`, `control` e `kpu` ligados, `open == 0`, `UI_OPEN == 0` e `anim <= 0` (toca o som de índice 81); o `Draw_77` com `in == 1` faz o fade, grava `door_n = n`, chama `save_game()` e, com `oControl`, `map_load(working_directory + "level_data/" + rm + ".rmlvl", rm)`. As portas do `rmMal_Origin` levam a `rmMal_1` (n=7) e `rmMal_o1` (n=8); para a transição real faltam esses níveis nos `datafiles`, o posicionamento na porta de chegada e muitos objetos desses níveis | 3.3 (etapa 3) | — | substituído pelo P35 (portas escritas e validadas no F5 em 22/11) |
| P32 | `oVIEW_CONSTRICT.Step_2`: a média de cinco valores que suaviza a câmera foi lida como `mean(novo, atual, atual, atual, atual)`; as três cópias vêm de um slot de pilha que o decompilador não nomeou. Também mantido do original: o teste vertical usa a LARGURA da vista no limite distante (provável erro do autor) | 3.3 (etapa 3) | quando houver um nível com `oVIEW_CONSTRICT` ativo para comparar | comparar o comportamento da câmera com o jogo original |
| P33 | `oCamera_Point` (`Draw_0`: círculos de edição, só com `mode != 3`) **não** reconstruído; o objeto segue como casca porque o `oCamera` só usa a posição dele | 3.3 (etapa 3) | com o editor de níveis (fase "Base global") | ler `small_lifted/gml_Object_oCamera_Point_Draw_0` |
| ~~P34~~ | Fios (**concluído e validado no F5 em 23/11**): `oWire` (`Draw_0`, `Draw_77`), `oWire_DIODE_D` (só `an[2]`, empurra para baixo) e `oWire_TIMER` (`lerp(an, d*3, 0.04/0.2)`, limite 3, três cliques) portados do YYC. Propagação com `anim >= 1` no fio e `anim >= 3` no timer; limpeza escreve na própria entrada. `sndWire`/`sndWire_on` importados. Logs temporários removidos. Pendente: confirmar descarga completa do timer e circuito sem sinal preso no próximo F5 | 3.3 (etapa 3) | fechar no F5 |
| P23 | `ARRAY_COLLIDE`: os builtins que o Ghidra perdeu foram inferidos (`floor`, `ceil` no teste de plataforma de atravessar, `max`/`min` nas margens); `FUN_141944a50(v,16)` tratado como `fmod`; limite inferior 0 nos `clamp` de `check_array_cell`/`check_array` (constante inicializada em execução, vale P12); ordem dos argumentos `[coluna, linha]` do `hit_id`; a sonda lateral do tile 19 (`check_array(x1-2 ...)`) foi mantida, mas o `hurt_player` é stub | 3.3 (jogador, etapa 1) | quando o F5 mostrar o jogador andando, pulando e pousando sem travar | validar andando em paredes, chão, plataformas de atravessar e tile 19 |
| P15 | `config_get` aproximado: confirmado que abre o arquivo `config`, lê com `ini_read_string` e fecha; **não** confirmado um ramo extra quando o padrão é 1 | 3.3 | quando decifrar `FUN_140135c90` | ramo extra reconstruído |
| P16 | `set_controls`: só as duas tabelas de teclas (WASD ou setas); a parte final (comparações com 37..40) não foi reconstruída | 3.3 | quando o teclado/gamepad forem testados | cauda do `gml_Script_set_controls` lida |
| ~~P17~~ | ~~`reach` é stub~~ **resolvido**: `scripts/reach` reconstruído de `gml_Script_reach` @ `0x14003b450` (`player_lifted2`) e usado pelos fios e pela porta pesada | 3.3 | — | feito |
| P9 | ~~`oCamera` só com `Create_0`~~ **resolvido em 19/11**: Alarm_0, Alarm_1, Step_2 e Draw_75 copiados do GML original (o Step_1 original é só comentário). Sem jogador a câmera fica livre (W A S D), porque `START_GAME = 0` mantém `mode = 0` | 3.2b | 3.3 | feito; falta o seguimento do jogador, que depende do `oPlayer` |
| ~~P14~~ | ~~As folhas de fundo aparecem deslocadas~~ **resolvido em 19/11** com a câmera real (confirmado pelo usuário: janela, imagem ampliada, parallax funcionando). Era: (vazam para fora do nível): o parallax usa o centro da câmera (`CMX`, `CMY`), e o `oCamera` real (Step/Alarm) e o `set_game_screen` ainda não existem | 3.3 | quando a câmera for reconstruída (P9) | folhas alinhadas com o jogo original; conferir visualmente |
| P11 | `oControl` provisório com só o `tick` (`Step_1`: 2 linhas do original) | 3.3 | Fase 4 passo 1 | `oControl` original com o `Step_1` completo |
| P12 | `parLeaves_Draw_0`: o argumento de sub-imagem do `draw_sprite_pos` é uma constante preenchida em execução (não está no arquivo); usado `-1`, equivalente a `0` porque `image_index = 0` | 3.3 | quando o runtime puder ser inspecionado | confirmar o valor, ou aceitar a equivalência |
| P13 | `lengthdir_x` assumido como cosseno (o corpo de seno/cosseno do CRT não foi decifrado); só muda a fase do balanço | 3.3 | quando decifrar `FUN_141951a30` | conferir contra um par seno/cosseno conhecido |
| P5 | **Stubs visíveis** (`scripts/provisional_stubs`): hoje só `inv_add_obj`, `hurt_player` (P22), `load_game` e `save_game` (P6). `obj_setpos`, `instance_create_one` e `real_string` já foram reconstruídos (`Tools/generate_project_scripts.py`, `HAND_SCRIPTS`) | 3.2b | 3.3 / 3.4 | função decompilada e reconstruída; o stub deixa de existir |
| P6 | `load_game`/`save_game` (stubs) e qualquer escrita **desligados** (`START_GAME = 0`) | 3.2b | 3.4 (Save V1) | save V1 implementado e testado (`SAVE_MIGRATION_DESIGN.md`) |
| P7 | `interpolate_pixels = false` (escolha do usuário) | 3.2 | quando o usuário notar diferença | decisão do usuário; valor original não lido do GEN8 |
| P8 | **Em grande parte resolvido:** sons importados (99), música/ambiência do `oControl/Step_1` portada (`9d96478`), `LIGHTING` original (`bb053de`). Falta: shaders (só o `shDissolve` passa-direto, P26) e os `snd... = -1` que o `oControl` provisório ainda define para sons que o `_SET_SCENE` nomeia e o projeto não tem | 3.2b | Fase 4 | shaders importados; nenhuma variável `snd... = -1` sombreando um som importado |

Regra de manutenção: ao criar um provisório novo, acrescentar uma linha aqui **no mesmo commit**; ao removê-lo, riscar a linha e anotar o commit.


## 6. Próximo passo imediato

**24/11:** nada está pendente de F5 além do que §0.2 lista. O próximo trabalho é o **item 1 da §0.7** (fragmentos vermelhos), seguindo o protocolo da §0.6. O agente que pegar o item começa pelo texto de abertura da §0.6.
