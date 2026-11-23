# Relatório de ambiente local — 22–23/11/2026

## Resumo

Ambiente preparado para abrir o vertical slice no GameMaker LTS 2026.
O branch `reconstruction-attempt-1` foi trazido para o checkout local; agora contém as correções visuais de 22/11/2026.
IDE, runtimes e UTMT CLI foram instalados nesta máquina.
Login confirmado pelo usuário; projeto aberto e F5 executado com sucesso.
Metade superior da porta e fade de transição corrigidos; céu, parallax, LIGHTING, fios e `oDoor_chunky` concluídos. Suíte Python: 70 testes, 69 OK e 1 erro de import preexistente em `test_save_v1_format.py`.
Build Igor e UTMT CLI seguem pendentes de verificação/autorização.

---

## 1. Branch e projeto

- Branch local: `reconstruction-attempt-1`
- Tracking: `origin/reconstruction-attempt-1`
- Estado antes deste relatório: `working tree clean`
- Projeto GameMaker: `rea/NYKRA_Reconstructed/GameMakerProject/NYKRA_VerticalSlice.yyp`

O projeto **não** está na raiz do repositório. Abrir o `.yyp` pelo caminho acima.

---

## 2. Instalado automaticamente

### GameMaker LTS 2026

- Instalador oficial baixado de:
  `https://gamemaker.io/en/download/windows/lts/GameMaker.exe`
- Instalação silenciosa feita conforme:
  `https://gamemaker.io/en/help/articles/gamemaker-silent-installation`
- Versão baixada pelo link LTS no início: `2026.0.0.16`
- A IDE detectou atualização e atualizou sozinha para: `2026.1.0.27`
- Executável:
  `C:\Program Files\GameMaker-LTS2026\GameMaker-LTS2026.exe`
- Pasta de dados do usuário:
  `C:\ProgramData\GameMakerStudio2-LTS2026`

Runtimes instalados pela IDE:

- `runtime-2026.0.0.23`
- `runtime-2026.1.0.28`

Local:

`C:\ProgramData\GameMakerStudio2-LTS2026\Cache\runtimes`

A versão `2026.1.0.27` + runtime `2026.1.0.28` bate com o ambiente usado nos marcos 3.2/3.3 descritos em `SESSION_HANDOFF.md`.

### UndertaleModTool

- GUI instalada via winget: `krzys-h.UndertaleModTool`, versão `0.9.2.0`.
- CLI instalado separadamente, pois o pacote winget não inclui `UndertaleModCli.exe`.
- Asset oficial:
  `https://github.com/UnderminersTeam/UndertaleModTool/releases/download/0.9.2.0/UTMT_CLI_v0.9.2.0-Windows.zip`
- SHA-256 conferido:
  `e7573e45d107be34f81f955c6e4afc3c7c8f2628e5a6f307a871e3825b3dfb40`
- CLI extraído em:
  `C:\Users\marcelo\AppData\Local\UTMT_CLI_0.9.2.0`
- Executável:
  `C:\Users\marcelo\AppData\Local\UTMT_CLI_0.9.2.0\UndertaleModCli.exe`
- Diretório adicionado ao `PATH` do usuário.

**Atenção:** processos já abertos não veem o `PATH` novo. Use o caminho completo até reabrir o terminal.

CLI não foi executado. A instalação foi validada por download, hash e presença do executável.

---

## 3. Já existia nesta máquina

- Ghidra `12.2-20261016` via Scoop:
  `C:\Users\marcelo\scoop\apps\ghidra\current\ghidraRun.bat`
- Java `OpenJDK 25.0.5 LTS` (Corretto); JDK 17 e 21 também presentes via Scoop.
- Python 3.14
- Visual Studio
- LLVM
- 7-Zip
- Git LFS

Nenhuma instalação adicional foi necessária para esses itens.

---

## 4. Pendente — depende de você

### Login no GameMaker

Login confirmado pelo usuário em 22/11/2026.
O projeto foi aberto na IDE e executado com F5.

Evidência local anterior, registrada antes do login:

`C:\Users\marcelo\AppData\Roaming\GameMakerStudio2-LTS2026\unknownUser_unknownUserID`

Não digite nem envie credenciais para o agente. Eu não faço login sem credenciais e não devo receber sua senha.

### Arquivos grandes opcionais

Estado neste checkout:

- `rea/NYKRA.zip` — presente. Copiado de `H:\Downloads\NYKRA.zip`, 392.627.875 bytes, ignorado pelo Git (`.gitignore:2`).
- `rea/NYKRA_Reconstructed/RuntimeBaseline/data.win` — ainda ausente.

Hash conferido no arquivo copiado, igual ao de referência:

`B2E8FF5BB348BB38A367579B7BC35DA60BB250E099E5B6BD25F85E53045D34C1`

Nem o ZIP nem o `data.win` são necessários para abrir e rodar o vertical slice atual.
Só são necessários para reextrair assets ou refazer comparações com o binário original.
Metadados, assets extraídos e `NYKRA.exe` já estão versionados em `RecoveredAssets/`.
O `data.win` pode ser extraído do ZIP quando você autorizar.

---

## 5. Pendente — depende de autorização

A regra em `SESSION_HANDOFF.md` pede aviso e ok antes de build/baseline.

Feito pelo usuário:

- Abrir `NYKRA_VerticalSlice.yyp` na IDE.
- Rodar F5.

Feito nesta sessão, mediante o pedido do usuário:

- Corrigir `oMal_Door_Flat/Draw_0.gml`: a metade superior agora avança o topo da fonte (`hrnd(anim * 18)`) e mantém a altura cheia.
- Adicionar `oControl/Draw_72.gml`: gradiente azul→aqua em Draw Begin, agora com o parallax completo de `sMal_bg1..4`.
- Recriar eventos de `oFade_in` (`Create_0`, `Alarm_0`, `Draw_73`) para cobrir a tela durante `map_load`.
- Rodar a suíte Python: 68 testes OK, 1 erro de import preexistente em `test_save_v1_format.py`; `Tools/test_visual_fixes.py` passa com 11 testes.
- Corrigido fade-in: GML LTS faz divisão inteira em `1/30`, então `fade_alpha` nunca caía. Agora rampa temporal em `Draw_73`, de 1 a 0 em 500 ms.
- Decompilados os eventos originais de `oFade_in` e as funções de draw de `oControl` (`NativeAnalysis/decompiled/fade_in*`, `ocontrol_draw*`).
- Provado que `oFade_in` original é usado em `rmMM`, não na transição de portas. A transição pertence a `parDoor_Flat` (`fade`, `fade_in`).
- Causa raiz do "sem fade in": `oFade_in` era criado em profundidade `-1011` (desenhado cedo) e a porta desenhava uma cobertura opaca em `fade_in == 2` (`fade` de 300, `min(fade,1)`).
- Corrigido: `oFade_in` agora em profundidade `1000` (topo) e a cobertura opaca de chegada foi removida de `parDoor_Flat/Draw_73.gml`. O fade-out da porta permanece.
- F5 expôs erro em `oFade_in/Create_0`: `FADE_COLOUR` foi lido como variável de instância. Corrigido para `colour = c_black;`; `map_load` já sobrescreve com `oControl.FADE_COLOUR`.
- Instrumentação temporária `SKY draw ...` e `CLAMP ...` removida antes do commit. `FADE draw/alarm ...` também removida de `oFade_in`.
- Parallax de Maldis portado: `sMal_bg1..4` importados com canvas, origem e PNG de layer (`layers/<frame>/<layer>.png`); `draw_bg_tiled_h` e `draw_bg_tiled_hwave` reconstruídos do YYC com assinatura `function`, registrados no `.yyp`.
- Costura das montanhas: `draw_bg_tiled_h` corrigido para o algoritmo do YYC (`_x mod tile_w`, laço `-2..view_x/tile_w + view_width/tile_w + 1`). F5 confirmou costuras perfeitas, mas restou uma montanha cortada que sumia ao caminhar.
- Residuo da montanha cortada: `draw_bg_tiled_hwave` também reconstruído com 4 vértices por tile e UVs `0/1`, conforme o YYC. Versão anterior usava 2 vértices e `u` fracionário, produzindo textura distorcida que mudava com a fase do parallax. F5 confirmado pelo usuário em 22/11: artefato sumiu; nuvens visíveis na camada seguinte.
- `LIGHTING` ganhou `Create_0`, `Alarm_0`, `Destroy_0` e `Draw_73`; `parGlow_Beam/Create_0` calcula os três raios com os offsets originais (L 13.5, S 8.5, par 2) e parada em `check_block(...) == 1`. Primeiro F5: luz visível, mas sem interação com o cenário; a versão inicial escurecia a tela e somava branco por cima. Assembly completo mostrou duas surfaces, `draw_ellipse_color`, centenas de `draw_circle_colour` e composição final com `gpu_set_blendmode_ext` + `draw_surface`. `Draw_73` foi reescrito como máscara multiplicativa (`draw_clear(COLOUR)` + elipses/cones brancos em `bm_add`, depois `gpu_set_blendmode_ext(bm_dest_colour, bm_zero)`), preservando cor e detalhe do ambiente dentro da luz. Decompilação integral estourou 600 s no Ghidra; estrutura lida do assembly em `NativeAnalysis/decompiled/lighting_draw/lighting_draw.asm`. F5 validado pelo usuário em 22/11: luz projetada nos objetos e refletida no ambiente; pedra com bilhete sutilmente visível no quarto escuro.
- `oWire` recebeu `Draw_0` e `Draw_77` lidos do YYC: sprite `sWire`, brilho aditivo, suavização `an[]`, `anim`, `on`, propagação entre fios e `power_on` no alvo `parWire`/`parWirePhysics`. O clique usa `sndWire`. `oWire_DIODE_D` e `oWire_TIMER` reutilizam o desenho de forma provisória. Primeiro F5: placa inerte e estática; o YYC propaga apenas com `anim >= 1`, mas a versão reconstruct propagava sempre e autoalimentava a rede. Corrigido nos três objetos. Segundo F5: placa pisca e apaga; além do gate, `reach_tween(an,d,0.15)` extrapolava com fator 6.67 e zerava `an[]`. Trocado por `lerp(an,d,0.15)`, que é o que o helper `FUN_14003b450` faz no YYC. Terceiro F5: luzes avançando à esquerda, um slot aceso e passagem livre entre as placas. A passagem livre é o gap conhecido de `COLLIDE`/`oDoor_chunky` (P24), não uma porta funcionando. O YYC de `oWire_DIODE_D/Draw_0` mostrou propagação unidirecional (só para o fio abaixo) e limpeza das próprias entradas ociosas; portado em `Draw_0`, junto com `on = round(min(2,soma(d)))`. `oWire_TIMER` segue provisório. Quarto F5: placa acende diodo, bola de luz, luz central, slots e o outro diodo, mas nada apaga ao sair. O outro diodo acende porque a rede de fios liga os dois lados via timer; isso é esperado. O travamento vinha das limpezas com `<= 0`: `lerp(an,d,0.15)` tende a zero mas nunca chega lá, e o YYC compara com epsilon `0.00001`. Corrigido para `<= 1e-5` nos três objetos. Aguardando novo F5 para confirmar desligamento e clique único. F5 seguinte falhou ao compilar: GML não aceita `1e-5`; trocado por `0.00001`. Não há rastro de brilho no chão: o YYC passa alpha 0 nas chamadas de `draw_circle_colour`, então o visível são os sprites `sWire` de 8×8. Logs instrumentados mostraram apenas um `oWire` em 152,296 com `d[3]=1` travado: o throttle usava `global.wire_debug_last`, então o primeiro objeto da lista de instâncias monopolizava a janela de log. Trocado por `wire_log_last` por instância. A causa real veio do YYC de `gml_Object_oWire_TIMER_Draw_0`: o timer não é uma cópia do fio. Ele faz `an[i] = lerp(an[i], d[i]*3, d[i] ? 0.2 : 0.04)`, limita `anim` a 3 e só propaga quando `anim >= 3`. A cópia anterior usava `lerp(an,d,0.15)` e `anim >= 1`; isso travava o par fio central ↔ timer em realimentação mútua. `oWire_TIMER/Draw_0` foi reescrito com os parâmetros do YYC. Novo F5 ainda travou; logs com throttle por instância mostraram a cadeia completa: placa → diodo direito (168,296) → fio (168,312) → timer (152,312) → fio central (152,296) → fio esquerdo (136,312) → diodo esquerdo. O diodo direito ficou com `d[2]=1`, o timer com `d[1]=1` e o fio central com `d[3]=1` indefinidamente. Relendo o annotated YYC de `gml_Object_oWire_Draw_0`, as limpezas escrevem em `param_1` (o próprio objeto), não no vizinho: quando o vizinho está ocioso, o fio limpa a **própria** entrada correspondente. Minha tradução limpava `_n.d[i]`, o alvo errado; por isso o sinal realimentava. Corrigido em `oWire` e `oWire_TIMER`. Adicionado `PLATE <x>,<y> on=<0|1>` para provar se a placa realmente liberou.

Logs do novo F5 provaram que a placa funciona: `PLATE 160,288 on=0` foi seguido por `oWire_DIODE_D 168,296 d[2]=0` e decaimento de `an[2]` até zero. Porém o circuito não apaga: o fio central `152,296` mantém `d[3]=1`, o timer `152,312` mantém `d[1]=1` com `anim=3`, o fio `168,312` mantém `d[2]=1`, e esse fio realimenta o diodo direito via `d[0]=1`. Isso é exatamente o que o YYC de `oWire` escreve: qualquer fio com `anim >= 1` seta `d[oposto]=1` em todo vizinho que não o alimenta (linhas 1272–1392 do annotated). Um anel fechado de fios, uma vez energizado, se sustenta sozinho. O diodo só injeta para baixo (uma atribuição em `gml_Object_oWire_DIODE_D_Draw_0.c`, linha 1268), mas continua aceitando `d[0]` do fio central. Conclusão provisória: o latch é comportamento do código original, não bug da reconstrução. Próximo teste: pisar placa direita, sair, pisar esquerda e verificar se a porta abre; se abrir, manter comportamento e remover logs temporários.

Pendente para o agente, mediante autorização:

- Rodar Igor/build por linha de comando.
- Rodar UTMT CLI sobre `data.win`.

Próximo passo: validar no F5 a correção completa de `oWire_DIODE_D` e `oWire_TIMER` — a hipótese anterior de "latch intencional" estava errada; o bug real era `oWire_DIODE_D` animando `an[0..3]` em vez de zerar `an[0]=an[1]=an[3]=0` e animar só `an[2]` (entrada da placa), o que fechava um loop infinito pela volta lateral/inferior. Agora: pisar em qualquer placa acende o diodo (subframes `1`/`5`), os fios e as 3 barras do timer (`1 → 2 → 3`); sair da placa apaga o diodo imediatamente e faz o timer descarregar devagar (`0.04`) tocando 3 cliques descendentes até apagar toda a rede. A porta entre as duas placas é `oDoor_chunky` em `(152,272)` (porta vertical que abre temporariamente enquanto o timer segura carga para dar tempo de atravessar — ainda shell até portar P24/`COLLIDE`). Depois seguir para `oOrigin`, `oEo`, `oCamera_Point` e curvas `easing` restantes.

---

## 6. Atualização 23/11/2026 — fios e `oDoor_chunky`

- **Fios (P34) concluídos:** `oWire` (`Draw_0`, `Draw_77`), `oWire_DIODE_D` (anima só `an[2]`, empurra para baixo) e `oWire_TIMER` (`lerp(an, d*3, 0.04/0.2)`, limite 3, três cliques descendentes) portados do YYC. A limpeza de sinal escreve na própria entrada, não no vizinho. `sndWire`/`sndWire_on` importados e ligados aos eventos.
- **`oDoor_chunky` portado:** `Create_0`, `Step_1`, `Step_2` (End Step, bloqueio provisório), `Draw_0` e sprite `sDoor_chunky`. Fechada encosta no arco; aberta sobe 44 px e some na pedra acima. O `+ anim*80` do YYC afundava a laje e deixava meia parede; a subida de 44 px foi validada no F5.
- **F5 do usuário em 23/11:** a porta abre, fecha e reabre pela placa. O circuito acende o diodo, os fios, o timer e a porta.
- **Testes:** 70 no total, 69 OK, 1 erro de import preexistente em `test_save_v1_format.py`; `git diff --check` limpo.
- **Pendente de F5:** bloqueio da porta fechada e passagem aberta; descarga do timer com os 3 cliques; circuito sem sinal preso depois de sair da placa.
- **Pendente de código:** portar P24 (`COLLIDE`) e remover o bloqueio local do `Step_2`. `oDoor_chunky/Draw_73` (`power_on_t = power_on;`) e `Destroy_0` (`audio_stop_sound(snd);`, builtin identificado em `yyc-dat-symbols.json`) foram portados. P24 está mapeado em `NativeAnalysis/COLLIDE_PORT_NOTES.md`; falta nomear o comparador `0x1420f6b08` e as constantes `0x1420b27xx` antes de escrever o script.

---

## 7. Limitações conhecidas

- O link LTS atual entregou primeiro `2026.0.0.16`; o update para `2026.1.0.27` foi feito pelo auto-updater da própria IDE.
- O pacote winget do UTMT instala só a GUI; o CLI veio do asset separado `UTMT_CLI_v0.9.2.0-Windows.zip`.
- Não foi possível confirmar o login sem interação do usuário.
- `oFade_in` continua com eventos reconstruídos: os originais foram decompilados, mas são do menu (`rmMM`) e não servem de referência para a transição de portas.
- O céu já tem gradiente e parallax de `sMal_bg1..4`; costuras e UVs passaram no F5. Ainda não há elementos específicos por sala (por exemplo `sPraedim_Mal`) nem planetas 1..N.
- Nenhum build Igor, UTMT CLI ou novo F5 foi executado pelo agente nesta sessão.
