# Handoff de sessão — 23/11/2026

Ponto de retomada para a próxima sessão. O plano completo, as pendências P1–P35 e o histórico de cada marco ficam em `MASTER_RECONSTRUCTION_PLAN.md`. O handoff anterior (19/11) foi arquivado como `SESSION_HANDOFF_2026-11-19.md`.

## 1. Onde estamos

- Branch: `reconstruction-attempt-pickle` (derivada de `origin/reconstruction-attempt-1`).
- Último commit antes deste handoff: `b6ef5f9 feat: reconstruct LIGHTING and glow beams`.
- Projeto GameMaker: `rea/NYKRA_Reconstructed/GameMakerProject/NYKRA_VerticalSlice.yyp`.
- O usuário roda pela IDE LTS 2026 com F5. O agente não executa build nem o jogo sozinho.
- Suíte Python: **71 testes**, sendo **70 OK** e **1 erro de import preexistente** em `Tools/test_save_v1_format.py` (`attempted relative import with no known parent package`). Esse erro não é regressão.
- `git diff --check` limpo.

## 2. O que foi feito em 23/11

### Fios (P34) e Porta pesada (`oDoor_chunky`) — alinhados ao YYC original

- **Causa raiz do circuito lento/errado:** `oWire`, `oWire_DIODE_D` e `oWire_TIMER` usavam `lerp` em vez de `reach` (`FUN_14003b450`), impedindo `an[]` de atingir `1`/`3` e `0` em tempo linear. Agora todos usam `reach` (7 frames por fio; timer carrega +0.2/frame em 15 frames e descarrega -0.04/frame em 75 frames com cliques em ritmo constante).
- **Escopo de `power_on`:** movido para dentro do `if (anim >= 1)` (`anim >= 3` no timer), igual ao YYC; evita ligar o alvo antes do fio completar a carga.
- **Visual do `oWire_TIMER`:** subimage corrigida para `clamp(round(anim), 1, 3)` com alpha branco `anim / 3`, e glow corrigido de `sqr(anim)/2` (9× estourado) para `sqr(anim/3)/2`.
- **`oDoor_chunky`:** `Step_1` usa `anim * 34` + `event_inherited()` (igual ao YYC). `Draw_0` usa `reach` com passo `mean(abs(1-anim)/12, 0.02)/2` (abrindo) e `mean(abs(0-anim)/6, 0.02)` (fechando), toca `sndDoor_stonebig1`/`sndDoor_stonebig2` (importados de `RecoveredAssets`) em loop com fade-out de 200 ms, e desenha os 3 quadros em telescópio (`y`, `min(y + 6, ystart)`, `min(y + 12, ystart)`), restaurando `x = xstart; y = ystart;` ao final para manter contato com o `oWire`.
- Eventos completos na porta: `Create_0`, `Step_1`, `Step_2` (bloqueio provisório), `Draw_0`, `Draw_73`, `Destroy_0`.

### Logs do F5 (revisão antes do teste)

- Todo `show_debug_message` do projeto passa por `scripts/debug_log`: `global.LOG_LEVEL` é `0` (silencioso), `1` (marcos, padrão) ou `2` (detalhe por registro). Funções: `log_note`, `log_verbose`, `log_once`.
- Saíram do log: o `FADE` por quadro do `oFade_in/Draw_73`, o `FADE alarm (no-op)`, a lista por tipo de objeto do boot (agora só no nível 2) e o log por quadro do `hurt_player` (agora uma vez por execução).
- Entraram no nível 1 (só em mudança de estado, nunca por quadro): `plate: on=...` (avisa `NO WIRE under the plate` se não achar o fio), `door: power_on=...` e `door: blocked player on the west/east side ... slab y1/y2 anim`.
- O overlay de diagnóstico do `oControl/Draw_64` só desenha no nível 2, para o teste visual ter tela limpa.
- Ficaram no nível 1: resumo de uma linha do `map_load` (sala, tamanho, planeta, objetos, decor), objeto desconhecido que para a lista, arquivo de nível de porta ausente, jogador provisório criado e os `STUB`.
- `Tools/test_phase3_map_load.py` ganhou teste que proíbe `show_debug_message` fora de `debug_log.gml`; suíte com **71 testes**, 70 OK, 1 erro de import preexistente.

## 3. O que checar primeiro na próxima sessão

1. **Porta fechada:** alinhamento com o arco e bloqueio do jogador (`Step_2`).
2. **Porta aberta:** passagem livre e nenhum resto de laje na passagem.
3. **Timer:** sair da placa e confirmar que a rede apaga com os três cliques descendentes, sem loop.
4. **Duas placas:** o circuito liga os dois lados pelo fio central; confirmar que a porta abre pelo caminho esperado e que não há sinal preso.
5. **`oDoor_chunky/Draw_73` e `Destroy_0`:** ambos portados (`power_on_t = power_on;` e `audio_stop_sound(snd);`). O builtin do `Destroy_0` foi identificado em `RecoveredAssets/Metadata/yyc-dat-symbols.json` (`0x1420db340` = `audio_stop_sound`).
6. **P24 (`COLLIDE`):** o bloqueio atual da porta está no `Step_2` local e só empurra o jogador no eixo X. O `COLLIDE` completo do `parEntity` continua pendente: colisão entidade-objeto, caixas empurráveis (`oDoor_chunky`/`parEntity`), água `oWATER`, plataformas móveis e `collision_list`. Substituir o bloqueio local quando P24 for portado.

## 4. Próximo marco do plano

Depois de fechar as checagens acima, seguir a ordem do `MASTER_RECONSTRUCTION_PLAN.md`:

1. `oOrigin` (spawn/cutscene, P21).
2. `oEo`.
3. `oCamera_Point` (P33).
4. Curvas `easing` restantes (P25).
5. Fase 4: `oControl` completo, boot/menu, gamepad (P1/P11/P16), save V1.

Gamepad continua na Fase 4, por decisão do usuário em 22/11.

## 5. Ambiente e comandos

- IDE: `C:\Program Files\GameMaker-LTS2026\GameMaker-LTS2026.exe`; runtimes `2026.0.0.23` e `2026.1.0.28`.
- Testes: `python -P -m unittest discover -s rea/NYKRA_Reconstructed/Tools -q`.
- Só os testes do marco: `python -P -m unittest discover -s rea/NYKRA_Reconstructed/Tools -p 'test_phase3*.py' -q` (45 testes).
- Ghidra headless: `C:\Users\marcelo\scoop\apps\ghidra\current\support\analyzeHeadless.bat`; usar `-noanalysis` e `NativeAnalysis/scripts/DecompileFunctionList.java`, como nos lotes de 22–23/11.
- Decompilados desta sessão: `NativeAnalysis/decompiled/chunky*`, `door_create*`, `door_pre_destroy`, `bb_middle*`, `runtime_math`, `gml_math_ops*`, `parEntity_step0*`, `collide*`, `wire_helpers`.

## 6. Cuidados

- **Não commitar `rea/NYKRA_steam.zip`** (395 MB, não ignorado). Ele ficou fora dos commits de propósito.
- `rea/NYKRA.zip` e `RuntimeBaseline/data.win` são grandes e continuam fora do Git; os metadados e o `NYKRA.exe` estão versionados.
- O repositório é um recorte: não existe `.yyp` na raiz e o projeto não compila fora do GameMaker.
- Antes de rodar algo pesado (build, jogo, UTMT), avisar o usuário e esperar o ok. Ler, editar e rodar testes Python é livre.
- O usuário estava em ambiente de trabalho; manter o mesmo cuidado com janelas e processos.
