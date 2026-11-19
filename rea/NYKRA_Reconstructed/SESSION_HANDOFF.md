# Handoff de sessão — 19/11/2026 (atualizado após o aceite do 3.2)

Ponto de parada para retomar. O plano completo está em `MASTER_RECONSTRUCTION_PLAN.md` (ver §1.3c).

## Regra combinada com o usuário
O usuário está em ambiente de trabalho. **Antes de executar qualquer coisa** (build, jogo, UTMT, scripts, testes), avisar o que vai rodar e esperar o ok. Ler e editar arquivos pode.

## Onde paramos
- **Os tiles renderizam.** O usuário instalou a **GameMaker LTS 2026** (IDE `2026.1.0.27`, runtime `2026.1.0.28`) e abriu o projeto. Ao rodar pela IDE (F5), as 6 camadas do `rmMal_Origin` aparecem corretas, e o UV do tileset corresponde a 1560×1580, como no original.
- **Causa mais provável:** faltava o `tilesets/TILES/output_tileset.png`, que só a IDE gera ao salvar o tileset. O compilador também mudou (2024.14 → 2026.1), então isso não foi isolado.
- A IDE regravou os `.yy` no formato dela; essas mudanças fazem parte do commit. Os testes Python foram adaptados ao formato da IDE (vírgulas no fim) e ganharam a verificação do `output_tileset.png`.
- Os hashes dos níveis originais estão conferidos e intactos.

## Marco 3.2 aceito pelo usuário (19/11)
- O `output_tileset.png` é idêntico pixel a pixel ao `TILES_0.png` (`Tools/compare_tileset_output.py`).
- `interpolate_pixels` desligado, por decisão do usuário.
- O probe cria os sprites `aFRONT`/`aBACK` a partir do nível. `<undefined>` e sprites que não estão no projeto são pulados com log.
- O `oSpriteProbe` foi removido; o tronco vem do nível.
- Os 30 testes Python passam.

## Atualização 19/11 (noite): primeiros objetos do 3.3 reconstruídos
Confirmados pelo usuário no F5: **copa da árvore** (`parLeaves`), **folhas de fundo** (`oMal_bg_leaves_*`) e a **câmera real** (`oCamera` completo + `set_game_screen` original; janela, imagem ampliada, parallax, W A S D move a câmera livre). Ferramentas novas: `NativeAnalysis/scripts/DecompileFunctionList.java` (Ghidra headless sobre uma CÓPIA de `ghidra-projects-retry`, `-readOnly`), `Tools/list_object_functions.py`, `scripts/lift_yyc.py` (elevador de pseudocódigo) e `YYC_HELPERS.md`. Falta do lote 1: **a grama** (`parGrass` Create/Alarm_2/Draw_0, `oGrass`, `oGrass3`). Depois: `oOrigin`/jogador, fios, portas. 48 testes Python passam. Regra de ouro aprendida: conferir cada objeto novo contra o pseudocódigo bruto (o elevador já perdeu a 1ª instrução de um Create), e variáveis globais precisam ser `globalvar`.

## Marcos 3.2b e 3.2c aceitos (19/11)
- **3.2b:** o usuário confirmou no F5 a copa, os 79 objetos e o log sem erros.
- **3.2c:** 15 sprites importados (61 quadros) com o canvas restaurado, **não ligados** aos objetos (P3). O usuário conferiu o `sMal_Door_Flat` no editor da IDE e o jogo não mudou. 43 testes Python passam.
- **Próximo: marco 3.3** (`MASTER_RECONSTRUCTION_PLAN.md` §2): decompilar os eventos dos objetos do nível (96 eventos, P2), do mais simples ao mais acoplado: folhas e grama, câmera, jogador, spawn, fios, portas. Cada objeto ganha seu sprite junto com seus eventos (P3). Pedir ao usuário antes de começar.

## Estado do 3.2b (19/11, fim do dia)
- **Funciona:** pela IDE (F5), o `map_load` reconstruído carrega o `rmMal_Origin` e cria os **79 objetos** (contagens iguais ao levantamento), pulando os 4 sprites `<undefined>` com log. Log limpo, sem erro de runtime.
- **Pendente de confirmação visual do usuário:** a copa da árvore agora vem do `oMal_Tree1` com um `Create_0` provisório (P10). Antes dessa correção a copa não aparecia, porque o `clear_objects` original destrói o `oLeavesProbe`. Pedir um novo F5.
- Gerados: scripts portados (`Tools/generate_project_scripts.py`), 46 cascas (`Tools/generate_object_shells.py`), `oControl` mínimo, `oCamera` só com `Create_0`, `provisional_stubs`. Os stubs precisam declarar parâmetros (erro GM1019).
- 40 testes Python passam. Faltam: aceite do 3.2b pelo usuário (copa visível), depois o passo dos sprites dos 27 objetos (P3) e o marco 3.3.

## Levantamento do 3.2b feito e decisões tomadas (19/11)
Resumo em `MASTER_RECONSTRUCTION_PLAN.md` §2 ("Levantamento do 3.2b") e relatório em `SURVEY_3_2b_rmMal_Origin.md`. O usuário aprovou: `oControl` mínimo provisório e objetos-casca sem eventos, "devagar, provar e depois importar o original". Pediu explicitamente que **a importação do `oControl` original e dos sprites/eventos não seja esquecida**: ela está no **registro de provisórios (§7 do plano, P1 a P8)**. Revisar essa tabela ao fechar cada marco. Nada de código do 3.2b foi escrito ainda.

## Próximo passo: 3.2b (pedir ao usuário antes de começar)
Trocar o probe pelo `map_load` reconstruído. O detalhamento está em `MASTER_RECONSTRUCTION_PLAN.md` §2, "3.2b":
- converter os scripts `argument`-style para funções 2.3+;
- resolver as dependências sem no-ops silenciosos;
- criar um bootstrap de debug identificado como provisório;
- manter `load_game` e qualquer save desligados.

## Ferramentas e armadilhas
- **Teste mais simples:** o usuário roda pela IDE LTS (F5). Para build por linha de comando, adaptar o comando do Igor de §5 trocando o runtime e a pasta do usuário pelos da LTS; ainda não testado.
- O UTMT 0.9.2 pode não ler o `data.win` do 2026. Nesse caso, o critério é o runtime.
- Arquivos `.yy` escritos à mão precisam das tags `"$GM<Tipo>":"vN"` da LTS. Copiá-las dos arquivos que a IDE já regravou no próprio projeto.
- O VS Code segura `.git/index.lock` por instantes; basta tentar de novo.
