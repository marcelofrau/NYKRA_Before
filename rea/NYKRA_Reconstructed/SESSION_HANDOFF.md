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

### Fios (P34) — concluído e validado no F5

- `oWire/Draw_0.gml`: sprite `sWire`, brilho aditivo, `an[]` com `lerp(..., 0.15)`, `anim`, `on`, propagação para vizinhos e escrita de `power_on` no `parWire`/`parWirePhysics`.
- `oWire/Draw_77.gml`: clique `sndWire` na subida/descida de `on`.
- `oWire_DIODE_D/Draw_0.gml`: anima **só** `an[2]` (entrada de cima), zera `an[0]`, `an[1]`, `an[3]`, limpa as próprias entradas ociosas e empurra sinal apenas para o fio abaixo. Subframes `1`/`5` (diodo para baixo).
- `oWire_TIMER/Draw_0.gml`: `an[i] = lerp(an[i], d[i] * 3, d[i] ? 0.2 : 0.04)`, `anim` limitado a 3, propagação em `anim >= 3`, três cliques descendentes (`0.816667`, `0.666667`, `0.516667`) enquanto descarrega. `Draw_77` vazio, como no original.
- Limpeza de sinal corrigida: cada fio limpa a **própria** entrada (`d[i]`) quando o vizinho está ocioso; antes eu limpava `_n.d[i]` e o sinal se realimentava.
- Logs temporários `WIRE` e `PLATE` removidos.

### Porta pesada `oDoor_chunky` — portada e validada no F5

- Eventos criados: `Create_0`, `Step_1`, `Step_2` (End Step, bloqueio provisório do jogador), `Draw_0`.
- Sprite `sDoor_chunky` ligado ao objeto; colisão usa o mesmo sprite.
- Fechada: os três quadros são desenhados no mesmo `y` e a laje encosta no arco.
- Aberta: sobe **44 px** (`y1/y2 = by1/by2 - anim * 44`), o suficiente para o corpo de 36 px limpar o vão e sumir na pedra acima, sem vazar da montanha.
- `Draw_0` fecha a animação com `lerp(anim, target, 1/12)` na abertura e `1/6` no fechamento. O `mean` antigo travava em `1/13 = 0.077`.
- O usuário confirmou no F5: abre, fecha, reabre pela placa.
- O `+ anim * 80` do YYC afundava a laje e deixava meia parede porque `Draw_0` usa `min(y + 6, ystart)`; por isso a reconstrução usa subida de 44 px.

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
5. **`oDoor_chunky/Draw_73` e `Destroy_0`:** existem no objeto original (`objects-metadata.json`), mas ainda não foram portados. Conferir se `Draw_73` desenha algo visível (brilho/sombra) antes de considerar a porta 100%.
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
