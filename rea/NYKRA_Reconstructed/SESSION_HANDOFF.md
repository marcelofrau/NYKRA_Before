# Handoff de sessão — 17/11/2026

Ponto de parada para continuar no dia seguinte. O plano completo está em `MASTER_RECONSTRUCTION_PLAN.md`.

## Onde paramos
- **Branch:** `reconstruction-attempt-1`; commits `a6ad902` (plano + diagnóstico) e `8f27f5c` (grafo do graphify).
- **Bloqueio do marco 3.2 diagnosticado:** em todas as builds de teste (`%TEMP%\opencode\gm-nykra-*\out\data.win`), o tileset `TILES` compilado tem **textura NULL**. Os dados de tile do nível foram verificados e estão corretos.
- **No original** (`RuntimeBaseline/data.win`), a textura fica na página 10 e o sprite-fonte é `sTiles`: 1024×1536, offset 0, sep 0, borda de saída 2, 78 colunas de saída. Há 6 tile layers `TILES` (128×64) em `rmMAIN`, `rmDEMO_START` e `rmDEMO_END`.
- **Na vertical slice** não há nenhuma tile layer na room, e a build usou `option_remove_unused_assets = True`.

## Próximo passo (ainda não iniciado; aguardando aprovação)
**T1** (`MASTER_RECONSTRUCTION_PLAN.md` §1.4):
1. Importar `sTiles` com o canvas restaurado.
2. Apontar `TILES.yy` para ele.
3. Adicionar as 6 tile layers ao `rmMAIN.yy`, copiando o formato JSON de uma room salva pela IDE 2024.14.
4. Fazer o probe usar `layer_tilemap_get_id`.
5. Build com a opção inalterada, rodar `Tools/DumpTilesetTexture.csx`, e então desligar `option_remove_unused_assets` (T2) e repetir o dump.

## Armadilhas aprendidas
- UTMT CLI: `%TEMP%\opencode\utmt-cli-0.9.2.0\UndertaleModCli.exe load <data.win> --scripts <csx>`. O `--help` trava no Git Bash; rodar via PowerShell `Start-Process` com stdin redirecionado.
- O comando exato do Igor das builds anteriores nunca foi registrado; anotá-lo na próxima build.
- O VS Code segura `.git/index.lock` por instantes; basta tentar de novo.
