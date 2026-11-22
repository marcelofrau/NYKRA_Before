# Relatório de ambiente local — 22/11/2026

## Resumo

Ambiente preparado para abrir o vertical slice no GameMaker LTS 2026.
O branch `reconstruction-attempt-1` foi trazido para o checkout local; agora contém as correções visuais de 22/11/2026.
IDE, runtimes e UTMT CLI foram instalados nesta máquina.
Login confirmado pelo usuário; projeto aberto e F5 executado com sucesso.
Metade superior da porta e fade de transição corrigidos. Céu azul ainda em investigação. Suíte Python: 60 testes OK (1 erro de import preexistente em `test_save_v1_format.py`).
Novo F5, build Igor e UTMT CLI seguem pendentes de verificação/autorização.

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

Pendente para o agente, mediante autorização:

- Rodar Igor/build por linha de comando.
- Rodar UTMT CLI sobre `data.win`.

Próximo passo: fios e propagação de sinal (P34), conforme a ordem do plano.

---

## 6. Limitações conhecidas

- O link LTS atual entregou primeiro `2026.0.0.16`; o update para `2026.1.0.27` foi feito pelo auto-updater da própria IDE.
- O pacote winget do UTMT instala só a GUI; o CLI veio do asset separado `UTMT_CLI_v0.9.2.0-Windows.zip`.
- Não foi possível confirmar o login sem interação do usuário.
- `oFade_in` continua com eventos reconstruídos: os originais foram decompilados, mas são do menu (`rmMM`) e não servem de referência para a transição de portas.
- O céu já tem gradiente e parallax de `sMal_bg1..4`; costuras e UVs passaram no F5. Ainda não há elementos específicos por sala (por exemplo `sPraedim_Mal`) nem planetas 1..N.
- Nenhum build Igor, UTMT CLI ou novo F5 foi executado pelo agente nesta sessão.
