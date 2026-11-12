# Fase 2 — Bugs prioritários para aprovação

**Escopo:** diagnóstico e correção mínima apenas na reconstrução. Nenhum pseudocódigo nativo ou fixture foi alterado. O projeto ainda não tem `.yyp`, portanto os efeitos em runtime não foram reproduzidos.

## 1. P1 — `load_game` reconstruído recarregava o estado global durante transições de sala — corrigido estaticamente

**Onde:** `oPlayer/Step_2.gml:243-269`; `ReconstructedGML/phase1_core/map_load.gml:223-249`; `ReconstructedGML/phase1_core/save_load_system.gml:208-257, 370-406, 460-575`.

**Evidência encontrada:** ao atravessar um `PATH`, `Step_2` chama `save_game()` e depois `map_load()`. `map_load` posiciona o jogador na entrada correspondente da sala de destino e, se `START_GAME` estiver ativo, chama `load_game()`. Antes da correção, o GML reconstruído também gravava `CHARACTER`, `CONTROL` e `GENERAL` dentro de `save_game()`, e chamava `load_CHARACTER()`/`load_CONTROL()` no fim de `load_game()`. `load_CHARACTER()` aplicava o `x/y` salvo antes da transição.

O pseudocódigo nativo diverge nesse ponto: `gml_Script_map_load.c:3897-3908` posiciona/termina o carregamento e chama `gml_Script_load_game`; o `load_game` nativo constrói caminhos para `ROOMS/*.SAVE` (`gml_Script_load_game.c:428, 515`) e não contém chamadas para `load_CHARACTER` ou `load_CONTROL`. Da mesma forma, `gml_Script_save_game.c:1442-1533` grava o save da sala em `ROOMS/` e não chama os três save globais acrescentados ao GML reconstruído. O carregamento global aparece separado no fluxo de início em `oControl/Other_4.gml:7-22`.

**Impacto provável antes da correção:** a posição de entrada podia ser substituída pela posição salva na sala de origem, e os arquivos globais podiam ser regravados em toda transição. Isso podia causar retorno ao ponto anterior, entrada incorreta ou perda de estado. É uma divergência da reconstrução, não um bug confirmado do executável original.

**Correção aplicada:** o `save_game()` reconstruído agora grava somente `ROOMS/<CURRENTROOM>.SAVE`; `load_game()` restaura somente o estado da sala. Os loads globais explícitos de inicialização em `oControl/Other_4.gml` permanecem. Três regressões estáticas falhavam antes da alteração e passaram depois. A execução real da transição ainda requer o `.yyp`.

**Limite de escopo:** não encontramos chamadas a `save_CHARACTER`/`save_CONTROL` nos trechos GML recuperados nem no conjunto de rotinas nativas descompiladas. Não as reinserir em toda transição é necessário para corresponder ao `save_game` nativo, mas o ponto correto de persistência global permanece por localizar em eventos ainda não reconstruídos.

## 2. P1 — O formato nativo omite payloads de alguns arrays e pode desalinhavar o leitor

**Onde:** `NativeAnalysis/decompiled/phase1_annotated/gml_Script__save_type.c`, `gml_Script__save_type_rec.c`, `gml_Script__save_type_rec2.c`; leitores nativos `gml_Script_load_CONTROL.c` e `gml_Script_load_CHARACTER.c`; `Tools/phase1_validation_report.json`.

**Evidência:** o writer nativo pode omitir o payload de arrays vazios ou cujo primeiro elemento (ou primeiro elemento aninhado) é string. Strings posteriores podem ser gravadas com tag `2`, que os leitores nativos de arrays não tratam. Em `chapter_4/CONTROL`, os bytes de `asset_layer` são `asset_layer\0FPS\0...`: não há tag/payload entre os nomes. O leitor espera uma tag após cada nome de variável, então pode consumir o primeiro byte do nome seguinte como tag. O validador encontrou **51 valores ambíguos/não suportados em 18 arquivos**.

**Impacto provável:** alguns campos de `CONTROL`, `CHARACTER` e saves de sala podem não ser carregados ou podem deslocar a leitura subsequente. O relatório não prova que os arquivos inteiros estejam corrompidos; o valor omitido é irrecuperável pelo próprio arquivo, e não deve ser inferido nem preenchido automaticamente.

**Próxima validação:** reproduzir a leitura com fixtures isolados no projeto GameMaker quando o `.yyp` existir. A estratégia de migração precisa preservar cópias originais e gravar em formato/versionamento separado; não se deve testar regravação sobre os templates originais.

## 3. P2 condicional — Precisão de `int64` no writer nativo

**Onde:** `NativeAnalysis/decompiled/phase1_annotated/gml_Script__save_type.c`.

O writer agrupa `number`, `int32` e `int64` no caminho tag `1`/`f32`. Valores inteiros acima da precisão exata de `f32` (por exemplo, acima de `2^24`) podem perder unidade. Não foi identificado nos fixtures um campo de progresso específico cujo valor exceda esse limite; registrar como risco condicional, não como blocker reproduzido.

## Itens que não entram como bug confirmado

- **Inversão tag-4/tag-5 no executável original:** não comprovada. A inversão foi corrigida apenas no GML reconstruído; `chapter_4/CONTROL` contém `anim1\0 04 01`, compatível com bool verdadeiro.
- **`load_game` tag-4/tag-5:** o pseudocódigo anotado ainda não nomeia todos os tipos de buffer usados. Não se afirma que esse leitor inverta as tags.
- **Colisão, câmera e diálogo:** esta revisão não encontrou uma causa estática com evidência suficiente para propor correção. Precisam de reprodução no vertical slice antes de priorizar mudanças.

## Ordem recomendada após aprovação

1. Na vertical slice, testar a transição por `PATH` e confirmar spawn/estado em runtime; localizar separadamente o fluxo original de persistência global.
2. Desenhar uma migração separada e não destrutiva para saves antigos; os valores já omitidos não são recuperáveis por adivinhação.
3. Só então avançar para bugs de colisão/diálogo/câmera com casos reproduzíveis.
