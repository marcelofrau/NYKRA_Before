# Handoff de sessão — 18/11/2026

Ponto de parada para retomar. O plano completo está em `MASTER_RECONSTRUCTION_PLAN.md` (ver §1.3b para os resultados de hoje).

## Regra combinada com o usuário
O usuário está em ambiente de trabalho. **Antes de executar qualquer coisa** (build, jogo, UTMT, scripts), avisar o que vai rodar e esperar o ok. Ler e editar arquivos pode.

## Onde paramos
- **Feito (commitado):** T1, a configuração fiel do original:
  - sprite `sTiles` 1024×1536;
  - `TILES.yy` com offset 0, sep 0, borda 2 e 78 colunas;
  - 6 tile layers 128×64 no `rmMAIN`;
  - probe usando as layers da room.
- **Também feito:** T2, `options/main/options_main.yy` com `option_remove_unused_assets:false` e tag `"$GMMainOptions":"v5"`.
- **Os testes Python passam:** 27 testes em 4 módulos.
- **Resultado:** o `TILES` continua compilado **sem textura** (dump UTMT `TILES texture NULL`). No jogo aberto pelo usuário, só a árvore e o `sTiles` desenhado direto aparecem; nenhum tile; UV `(0,0,1,1)`.
- Duas tentativas falharam, então paramos conforme a regra.

## Próximo passo: T3 (precisa do usuário na IDE)
1. Abrir `GameMakerProject/NYKRA_VerticalSlice.yyp` na IDE 2024.14 e anotar erros ou avisos.
2. Abrir o tileset `TILES`: o editor mostra a grade do `sTiles`?
3. Criar o tileset `TILES_ide_ref` (sprite `sTiles`, 16×16, nada mais), salvar e fechar a IDE.
4. Comparar (só leitura) o `.yy` da IDE com o `TILES.yy` e revisar o `git diff` do que a IDE regravou. Corrigir e pedir permissão para o próximo build.

## Ferramentas e armadilhas
- O comando do Igor que funciona está no `MASTER_RECONSTRUCTION_PLAN.md` §5. Ele compila uma cópia em `%TEMP%\opencode\gm-nykra-*`. O exit 1 vem só do zip.
- Dump: `UndertaleModCli.exe load <data.win> --scripts rea\NYKRA_Reconstructed\Tools\DumpTilesetTexture.csx`. Rodar via PowerShell `Start-Process` com stdin redirecionado, porque o `--help` trava no Git Bash.
- Modelo de formato salvo pela IDE: `C:\Users\fraumar\GameMakerProjects\BLANK GAME`. As tags `"$GM<Tipo>":"vN"` escolhem o esquema do leitor; nunca supor a versão.
- O VS Code segura `.git/index.lock` por instantes; basta tentar de novo.
