# Handoff de sessão — 24/11/2026

Ponto de retomada. O plano, a fila e as regras estão em `MASTER_RECONSTRUCTION_PLAN.md`. **Agente novo: leia §0, §0.6, §0.7 e §0.5 antes de tudo** e comece pelo texto de abertura da §0.6. O handoff anterior foi arquivado como `SESSION_HANDOFF_2026-11-23.md`.

## 1. Onde estamos

- Branch `reconstruction-attempt-pickle`. Commits de 24/11:
  - `bb053de`: `LIGHTING` original e sol/lâmpadas portados do YYC;
  - o commit seguinte: revisão do plano, procedimento e regras para os agentes.
- O usuário roda F5 na IDE LTS 2026. **Nenhum agente executa nada sem perguntar.** Isso inclui testes Python. O handoff de 23/11 dizia o contrário e estava errado.
- Suíte: `python -B -m unittest discover -s rea/NYKRA_Reconstructed/Tools -q`, com 72 testes. O único erro aceito é o import preexistente de `test_save_v1_format`.

## 2. O que mudou em 24/11

- **Revisão das sessões de 22–23/11 (plano §0.4):**
  - o `LIGHTING` tinha sido inventado (P38);
  - o `oFade_in` também, e com depth invertida (P40);
  - há um snap de câmera enxertado no código original (P39);
  - os filhos `oGlow_Beam_*` são imitados no pai (P41).
- **`LIGHTING`** passou a ser a cópia do original da raiz (`Tools/generate_lighting.py`). A sala leste ficou igual ao original.
- **Sol de Maldis** (`parSun_Glow`/`oSun_Mal`) e **lâmpadas** (`oLight_Glow`), portados do lote novo `decompiled/rmmal1_sun_annotated`. O usuário validou: "ficou certinho".
- **Ghidra 12.2** instalado via scoop. O 12.1.4 e o UTMT que estavam em `%TEMP%\opencode` sumiram com a limpeza da pasta temporária. Veja o §0.5, passo 0.
- **Documentos novos:**
  - plano §0.5 (procedimento passo a passo), §0.6 (como trabalhar, com os erros observados e as contramedidas) e §0.7 (fila);
  - `PORT_LOG.md` (relatório por objeto);
  - `PLAN_HISTORY_2026-11.md` (histórico retirado do plano);
  - regras em `AGENTS.md`.
- **Ferramentas novas:** `Tools/list_level_objects.py` e `NativeAnalysis/scripts/view_c.sh`.

## 3. Próximo

O item 1 da §0.7: os fragmentos vermelhos (`parGnarcier` + `oGnarcier_s/m/b`) da sala oeste. Os `.c` já estão em `decompiled/rmmal1_sun_annotated/`. Faltam os sprites `sGnar_*` (UTMT). **Não crie cascas dos `oGnarcier_*` antes do port**: o `LIGHTING` lê variáveis deles.

## 4. Cuidados

- **Não commitar `rea/NYKRA_steam.zip`** (395 MB, fora do `.gitignore`). Use `git add` com caminhos explícitos.
- O `rea/NYKRA.zip` e o `RuntimeBaseline/data.win` ficam fora do Git; o `NYKRA.exe` e os metadados estão versionados.
