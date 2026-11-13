# Fase 3 — Plano de execução e handoff para outro agente

**Estado em 13/11/2026:** ambiente e esqueleto visual confirmados; o projeto separado `GameMakerProject/NYKRA_VerticalSlice.yyp` compila. O primeiro probe GML abre `rmMal_Origin.rmlvl`, valida header/grids/camadas e mostra uma visualização diagnóstica do grid; o usuário confirmou os números. O tileset real, objetos do nível, player, transições e saves ainda não foram carregados. Branch: `reconstruction-attempt-1`. O objetivo é um recorte jogável comprovado, não declarar o jogo inteiro recuperado. Pedir validação do usuário entre os marcos. Não avançar para Fase 4 automaticamente.

## 1. Segurança e escopo obrigatórios

- Não alterar `rea/NYKRA.zip`, `RuntimeBaseline/`, dados em `RecoveredAssets/Included Files/`, templates, perfis antigos ou saídas `NativeAnalysis/`. Não executar o binário original em um diretório de usuário sem antes isolar seus dados de jogo. O código reconstruído atual **ainda** acessa `PROFILES/`, copia templates e grava no formato antigo; não executá-lo com perfis valiosos.
- Criar um projeto separado, por exemplo `rea/NYKRA_Reconstructed/GameMakerProject/`, apenas quando a Fase 3 for autorizada. Usar nome/identidade próprios do projeto de testes e confirmar o caminho real de saves antes de permitir escrita; o sandbox Windows normalmente usa `%LOCALAPPDATA%/<Game Name>`, portanto um projeto chamado `NYKRA` pode compartilhar o diretório do jogo original. Sandbox ligado por padrão; não desabilitá-lo para contornar erros.
- Não importar perfis legados, adicionar fallback ou apagá-los; essa compatibilidade foi expressamente dispensada. Templates oficiais de capítulo **são dados de inicialização**, não perfis legados: protegê-los e decidir se um seeder específico será necessário. Nunca preencher valores ambíguos por adivinhação.
- V1 em `Tools/save_v1_format.py` é **somente codec Python de referência**. Não está integrado ao GML, não define ainda os registros concretos de cada tipo de arquivo, nem implementa snapshots, ativação atômica ou recuperação de falhas. Não afirmar que existe save seguro até testes em GameMaker. Detalhes e requisitos em `SAVE_MIGRATION_DESIGN.md`.
- Não gerar todos os 699 objetos/490 sprites/708 sons como primeiro passo, nem empacotar tudo automaticamente. Criar apenas o necessário para cada marco; recursos fictícios ou eventos vazios devem ficar claramente identificados como provisórios e nunca contar como jogo fiel.
- Um commit por mudança lógica/bug quando apropriado; testes de regressão antes da correção; não seguir após duas tentativas de reparo malsucedidas sem informar o bloqueio. Usar `Marcelo Frau <marcelo.frau@gmail.com>` e a branch atual.

## 2. Ambiente e licença — verificar antes de construir

- **Atualização nesta máquina em 12/11/2026:** `winget` informou instalação concluída e verificou o hash. A IDE está em `C:\Program Files\GameMaker\GameMaker.exe` (versão do executável `2024.14.4.222`, assinatura YoYo Games válida); `version.txt` e `matching.runtime` indicam `2024.14.4.268`. O usuário fez login. Runtime `2024.14.4.268` instalado em `C:\ProgramData\GameMakerStudio2\Cache\runtimes\runtime-2024.14.4.268`, incluindo módulo Windows e `Igor.exe`. `winget list` não identificou o pacote após instalação, embora arquivos e atalho existam. Outra máquina pode ter um ambiente diferente.
- **Smoke test de ambiente:** o template oficial vazio foi extraído para `%LOCALAPPDATA%\Temp\opencode\gm-smoke-20261112` (fora do repositório). `Igor.exe` compilou VM Windows e criou executável/ZIP. A ação `windows Run` inicializou o runner, inicializou rooms/objetos e chegou a `Entering main loop`; o comando permaneceu aberto enquanto o jogo rodava e o harness o encerrou pelo timeout de 120s. A janela não foi inspecionada visualmente. Saída temporária acidental na raiz do repo foi conferida e removida; nenhum save, asset original ou projeto NYKRA foi tocado.
- `winget` e `scoop` existem. O usuário informou que o projeto é pessoal, aberto e sem fins comerciais; o uso descrito parece compatível com a modalidade gratuita. Políticas corporativas e conta/licença própria continuam questões separadas. Não solicitar credenciais ao usuário nem assumir licença comercial de terceiros.
- O catálogo consultado pelo `winget` encontrou `YoYoGames.GameMaker.Studio.2`, versão `2024.14.4.222`. Conferir versão, canal, URL oficial e hash no momento da instalação: não presumir que seja a mais recente. `scoop search gamemaker` não retornou antes do timeout. Alternativa: [download oficial LTS](https://gamemaker.io/en/download); evitar beta para o projeto principal.
- O arquivo original informa GMS 2.3.6.0 e YYC (`general-info.json`), mas isso não significa que essa IDE/runtime estejam instalados ou que o projeto reconstruído seja compatível sem ajustes. Registrar IDE, runtime, alvo e erros exatos. Começar com Windows **VM**, não presumir que seja necessário YYC.
- Conforme [preços oficiais](https://gamemaker.io/en/get) e [licença gratuita](https://gamemaker.io/en/legal/gamemaker-runtime-licence-free), a modalidade gratuita é para uso não comercial; uso/exportação comercial para Windows precisa de licença aplicável (a licença Free lista GX.games como exceção comercial). A [página Professional](https://gamemaker.io/en/legal/gamemaker-runtime-licence-professional) permite exportação comercial Windows e proíbe compartilhar licença. A página de preços lista Igor/CI em Professional; confirmar disponibilidade antes de depender de CLI/CI. A GPL do fork não substitui a licença proprietária da ferramenta/runtime; conferir obrigações de distribuição com o titular/assessoria.
- A GameMaker [anunciou GMRT gratuito para uso comercial a partir de 1º/01/2027](https://gamemaker.io/en/blog/gmrt-update); isso é anúncio futuro do **GMRT**, não prova de gratuidade comercial do runtime GMS2 original. Confirmar termos em vigor na data de distribuição. A licença e as políticas corporativas são questões distintas.
- [Igor](https://manual.gamemaker.io/beta/en/Settings/Building_via_Command_Line.htm) requer runtime/credenciais válidas; registrar só presença e versões, nunca chaves ou credenciais. Exemplos de CLI do fornecedor são condicionais, não testes já executados.

## 3. Evidências do nível e das rooms

`RecoveredAssets/Metadata/general-info.json` indica ordem inicial `INIT → rmMM → rmMAIN`, mas isso é **ordem de rooms**, não prova de transições automáticas. `rooms-metadata.json` informa:

| Room | Dimensões | Instâncias declaradas | Camadas |
|---|---:|---|---|
| `INIT` | 1024×768 | `oControl` em (0,0) | `Instances`, `Background` |
| `rmMM` | 1024×768 | `oFade_in`, `oIs_Inside`, `oMainMenu` | `Instances`, `Background` |
| `rmMAIN` | 2048×1024 | nenhuma instância fixa | tabela abaixo |

O controlador `oControl` é persistente. `oControl/Other_4.gml` contém o caminho de arranque para `rmMal_Origin` quando as condições permitem; para uma prova técnica pode ser necessário um bootstrap de debug separado, sem apresentá-lo como fluxo original completo. `oControl/Create_0.gml:11` define `START_GAME = 0`, inicializa `map_id` e chama `event_user(2)`; `Other_12.gml` inicializa `obj_list`. `scripts/set_game_screen/set_game_screen.gml` cria câmera e `oCamera`. Em `map_load.gml`, acessos a `oCamera`/`cam`, listas e camadas não estão todos protegidos: inicialização e ordem são pré-requisitos, não detalhes opcionais.

Camadas de `rmMAIN` (nome exato → profundidade): `tFRONT_over` -30; `tFRONT` -20; `aFRONT` -15; `tFRONT_bg` -10; `Instances` 0; `tBACK_over` 10; `tBACK` 20; `aBACK` 25; `tBACK_bg` 30. Existem seis camadas de tile e duas de sprites. **Os metadados exportados não incluem associação do tileset ou dados das tile layers**: ver `NativeAnalysis/scripts/ExportAllMetadataJSON.csx:121-140`. `asset-order.txt` nomeia um background/tileset `TILES`; há PNG `Textures/Backgrounds/TILES/TILES_0.png` (1560×1580) e sprite `Textures/Sprites/sTiles/sTiles_0.png` (1024×1533). São imagens diferentes; não escolher uma como tileset correto sem verificar o `data.win` e a apresentação no runtime.

Fixtures observados por leitura, sem modificação:

| Nível | Grid | Objetos declarados | Sprites decorativos | Observações |
|---|---:|---:|---:|---|
| `rmMal_Origin` | 54×25 | 79 | 5 em `aBACK` | 4 referências literais `<undefined>` e 1 `sMal_Tree_1`; células 0,1,2,4,8,9; sem célula 3 de `oPlace_Player` |
| `rmMal_1` | 31×23 | 29 | 0 | `oMal_Door_Flat` n=7 volta para `rmMal_Origin`; outra porta n=3 para `rmMal_1p` |
| `rmMal_o1` | 28×20 | 10 | 0 | porta n=8 volta para `rmMal_Origin` |

Na origem, as portas `oMal_Door_Flat` são n=7 → `rmMal_1` e n=8 → `rmMal_o1`. Elas não são registros `PATH`; investigar como o evento da porta interage/cria um `PATH` antes de prometer uma transição. `oOrigin` tem eventos Create/Alarm/Step/Draw disponíveis apenas como nomes e endereços nativos; descobrir como cria/posiciona o jogador. Para um smoke test pode-se criar spawn de debug documentado, mas não confundi-lo com o comportamento original.

`map_load.gml:119-121` resolve o sprite e chama `layer_sprite_create` sem checar `asset_get_index == -1`. Em `rmMal_Origin`, as quatro referências inválidas exigem política explícita e teste antes de carregar a sala. Um objeto desconhecido pode carregar payload específico: **não pular bytes cegamente nem fingir que foi carregado**; interromper/reportar se não for possível determinar o payload.

## 4. Inventário de assets e riscos de fidelidade

- Fonte: `RecoveredAssets/Metadata/{objects,sprites,sounds,rooms}-metadata.json`, `asset-order.txt`, `yyc-function-table.json`; imagens sob `Textures/Sprites/<nome>/`; máscaras sob `Masks/`; áudio sob `Sounds/`; níveis sob `Included Files/level_data/`.
- Comparação de cabeçalhos PNG com metadados: **2.340 dos 2.938 frames** têm dimensões diferentes do canvas declarado, embora todos os 490 sprites tenham a contagem de frames esperada. Ex.: `sTiles` tem canvas 1024×1536 mas PNG 1024×1533. Não supor que redimensionar imagens ou aplicar somente a origem recupere o posicionamento: obter offsets/crop por frame das texture-page entries no `data.win`/UTMT e validar alguns sprites animados visualmente contra a build de referência, com proteção dos saves. Ordenar sufixos de frames numericamente, não lexicograficamente.
- `sBnd_player`: metadados 8×24, origem (4,12), máscara `Precise`, limites declarados `(-4,11,-2,24)`; o PNG exportado e `Masks/sBnd_player_0.png` não garantem que uma importação automática reproduza essa máscara. Verificar no IDE e testar colisões; não corrigir limites por conveniência sem evidência.
- O preview visual da árvore usa a composição encontrada em `rmMal_Origin`: `sMal_Tree_1` (tronco) em (565,287) e `oMal_Tree1` (folhas) em (562,161), profundidade -20. UTMT `TextureWorker.ExportAsPNG(..., true)` restaurou canvases 158×80 para `sMal_Tree_1l`; o quadro 0 tem conteúdo 158×72 no offset (0,0), e o quadro 1 conteúdo 141×45 no offset (5,35). O projeto reconstruído fixa o preview no quadro 0 e usa as posições/profundidades originais. O usuário confirmou visualmente o alinhamento tronco/copa; isto é uma composição de asset, não um nível carregado nem uma câmera reconstruída.
- Metadados de objetos preservam parent, sprite, mask e eventos, mas seus `Actions` frequentemente são `null` em YYC; isso **não é código recuperado**. Exemplos de dependências iniciais: `oPlayer → parEntity → parObject`, `oMal_Door_Flat → parDoor_Flat`, `oWire_TIMER → oWire → parWire`, `oNote → parNote`. Olhar `yyc-function-table.json` para eventos faltantes (`gml_Object_oOrigin_*`, `gml_Object_parDoor_Flat_*`, `gml_Object_oPlace_Player_*`).
- Uma contagem lexical de referências diretas dos GMLs originais identificou em `oPlayer` 27 nomes de objetos, 62 sprites, 62 sons e 48 nomes de scripts nativos; em `oControl`, 25 objetos, 38 sprites, 8 sons e 24 scripts. Há comentários e referências indiretas nesses números: servem como alerta de escopo, não como lista completa de dependências. `asset-order.txt` ajuda a identificar nomes/ordem original, mas não garante mesmos índices num projeto gerado; auditar índices numéricos persistidos e `asset_get_index`.
- `ReconstructedGML/phase1_core/map_load.gml`, `map_save.gml`, `goto_map.gml`, `_SET_SCENE.gml` e outros são trechos com `argument`/corpo de script, não `.yy` completos com declaração moderna de função; integração deve ser validada na versão real da IDE. Não colar cegamente todos como scripts 2.3. Preservar correspondência entre `eventList` e arquivos de evento; `oEo` é grafia intencional.
- `map_load.gml` depende ainda de `clear_objects`, `load_game`, `reset_files`, `_SET_SCENE`, `obj_setpos`, `inv_add_obj`, `real_string`, `instance_create_one`, `parEntity`, `parLootable`, `parDoor_out`, `parDoor_Flat`, `parNote`, `oBook`, `parWire`, `oSAVE_WIRE` e objetos/câmera referenciados. Resolver dependências compiláveis por lotes; não substituir funções ausentes por no-ops silenciosos.

## 5. Execução por marcos — parar e apresentar evidência em cada um

### 3.0 Pré-requisitos
1. Verificar IDE, runtime e conta/licença própria; instalar somente com política corporativa compatível. Criar/abrir projeto vazio na IDE escolhida, registrar versões. Usar VM Windows.
2. Identificar diretório de saves real de um projeto de teste com identidade própria antes de qualquer escrita. Conservar cópia/hash dos fixtures de origem; não executar com o save original.
3. **Aceite:** IDE/logon, runtime Windows e VM de projeto vazio estão confirmados. Smoke compile passou e runner chegou ao main loop.

### 3.1 Projeto estrutural e um sprite
1. Gerar um projeto de teste na IDE para usar seus `.yyp`/`.yy` como modelo da versão instalada; não presumir que um gerador de 2.3 crie estrutura válida para outra versão. Ver [formato oficial](https://manual.gamemaker.io/lts/en/Additional_Information/Project_Format.htm).
2. Criar `rmMAIN` e suas camadas, um sprite selecionado e, depois, a primeira dependência de objeto. Preservar origem/quadros/máscara na medida em que houver evidência. Rodar a cada pequeno lote.
3. **Aceite (concluído parcialmente):** projeto compila em VM sem recursos ausentes; `sMal_Tree_1` e `sMal_Tree_1l` preservam canvases/origens do metadata e a árvore no runtime foi vista pelo usuário. O sprite foi validado, mas máscara pixel-perfect não foi testada. Não alegar que o nível já carrega.

### 3.2 Renderizar e examinar o nível original
1. Adicionar cópia de `rmMal_Origin.rmlvl` como Included File (`datafiles/level_data/`), não mover o original. O [manual](https://manual.gamemaker.io/lts/en/Additional_Information/The_File_System.htm) informa que leitura sandbox procura save area e depois bundle; registrar caminhos/precedência e evitar que saves sombrem fixtures. [Included Files](https://manual.gamemaker.io/lts/en/Settings/Included_Files.htm) podem ser normalizados para minúsculas/underscores no pacote: testar a resolução de nomes e a localização reais.
2. **Probe inicial concluído:** Included File registrado no `.yyp`; a build contém `level_data/rmMal_Origin.rmlvl`; `buffer_load("level_data/rmmal_origin.rmlvl")` funcionou em sandbox. O probe GML lê o header de 8 bytes, grid de colisão, seis tile layers, duas listas de sprite e a contagem declarada de objetos, sem instanciar objetos nem chamar `map_save`. Valores verificados no fixture: 54×25, 173 células de colisão não zero, tile counts `[18, 589, 10, 20, 203, 114]`, `aFRONT/aBACK=0/5`, quatro `<undefined>`, uma `sMal_Tree_1`, 79 objetos declarados. As cores verde/azul/laranja são apenas diagnósticos para IDs 1/2/outros não-zero; cinza é zero, não a paleta original. O usuário confirmou o texto/contagens sem falha. `test_phase3_level_probe.py` foi adicionado; os 20 testes Python passam. SHA-256 de `RuntimeBaseline/data.win` continua `24099ee60291c4282a66633fbca9cc87f0fc5c0d5054ead25f5bb8a1d8eae4fd`.
3. **Ainda pendente para concluir 3.2:** recuperar no `data.win` a associação correta entre `TILES`, tile dimensions/IDs e os seis arrays, criar tilemaps reais e comparar com referência visual. Inspecionar as quatro referências `<undefined>` sem crash e documentar perda visual. Até então o probe é um visualizador de grid, não o nível original completo.
4. **Aceite de 3.2:** tiles corretos e seis camadas aparecem na posição/ordem esperadas, o runner reporta as referências inválidas sem crash, e hashes dos fixtures permanecem idênticos. Não confundir o probe de colisão com esta aceitação final.

### 3.3 Player, objetos e transição real
1. Inicializar câmera/estado/listas; integrar progressivamente fonte original e eventos realmente reconstruídos. Avaliar `oOrigin`, movimento/colisão herdados e `parDoor_Flat` pelo pseudocódigo antes de implementar. Usar placeholders somente em um modo experimental explícito.
2. Adicionar `rmMal_1` ou `rmMal_o1` e verificar porta/retorno com IDs 7 ou 8, conforme os eventos efetivamente recuperados. Confirmar posição de entrada após `load_game`, que foi alterado em `e2d3f97`; os testes atuais de fluxo são estáticos, não reproduzem a movimentação.
3. **Aceite:** player pode se mover, colidir e atravessar ida/volta sem crash; verificar coordenadas, controle e comportamento contra evidência nativa/referência. Registrar o que ainda foi simulado.

### 3.4 Save V1 e integridade
1. Só após o nível rodar: implementar contrato V1 completo em GML conforme `SAVE_MIGRATION_DESIGN.md` e vetores Python. Primeiro especificar os payloads de `GENERAL`, `CONTROL`, `CHARACTER`, `ROOM`; os bytes dentro do envelope não estão definidos integralmente. Verificar API de SHA-256 e atomicidade no runtime real; não afirmar atomicidade de `file_copy`/rename sem prova.
2. Gravar apenas em root V1 isolada com staging, verificação, snapshots anteriores e falha segura. Testar truncamento/hash incorreto, interrupção e retomada sem aplicar estado parcial. Determinar ponto correto de salvar estado global: não há chamadas confirmadas a `save_CHARACTER`/`save_CONTROL` nos trechos atuais.
3. **Aceite:** iniciar perfil novo, alterar sala/estado, salvar, encerrar e recarregar exatamente; interromper gravação simulada preserva snapshot anterior. Comparar hashes dos originais antes/depois. Seeder de capítulos (se necessário) é marco separado com aprovação e testes próprios.

## 6. Comandos e armadilhas para o próximo agente

Execute na raiz do repositório, em PowerShell:

```powershell
git status --short --branch
python -B -m unittest rea.NYKRA_Reconstructed.Tools.test_save_load_compat rea.NYKRA_Reconstructed.Tools.test_save_v1_format rea.NYKRA_Reconstructed.Tools.test_phase3_level_probe -v
python -B rea/NYKRA_Reconstructed/Tools/validate_formats.py
```

Na verificação de 13/11/2026 os 20 testes Python passaram; são majoritariamente estruturais e não executam GML. O build VM do projeto de teste e o probe de leitura foram validados separadamente no GameMaker. O validador escaneia 183 níveis, 6 templates, 27 saves de sala e 29 buffers DATA; **reescreve** `Tools/phase1_validation_report.json`, portanto revisar `git diff` e, caso queira leitura estrita, executar em cópia isolada. Os 51 valores ambíguos em 18 saves não certificam integridade nem corrupção global.

Hashes de referência dos níveis observados: `rmMal_Origin.rmlvl` SHA-256 `4dcb0788792dd631a9efc53315a3f3de869bb80b79c465a9cfdabf0fd4e92d29`; `rmMal_1.rmlvl` SHA-256 `07a2b082213898154110d51825dd79978fedd299209efcde74fb3b633f67349b`. O ZIP original e `RuntimeBaseline/data.win` são locais e ignorados pelo Git por tamanho; outro agente/máquina pode precisar recebê-los novamente do usuário por canal autorizado.

## 7. Decisão sobre modelo leve

Um modelo leve pode iniciar **3.0–3.2** seguindo os marcos e parando ao primeiro bloqueio. Não delegar a ele como tarefa única a reconstrução completa de eventos YYC, fidelidade de máscaras/tiles, ou segurança transacional de saves: esses pontos exigem evidência, revisão humana/modelo mais forte e runtime disponível. A troca de modelo não elimina os critérios de aceite nem permite chamar um placeholder de reconstrução completa.
