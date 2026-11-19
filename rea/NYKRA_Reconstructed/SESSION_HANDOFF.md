# Handoff de sessão — 19/11/2026

Ponto de parada para retomar. O plano completo está em `MASTER_RECONSTRUCTION_PLAN.md` (ver §1.3c).

## Regra combinada com o usuário
O usuário está em ambiente de trabalho. **Antes de executar qualquer coisa** (build, jogo, UTMT, scripts, testes), avisar o que vai rodar e esperar o ok. Ler e editar arquivos pode.

## Onde paramos
- **Os tiles renderizam.** O usuário instalou a **GameMaker LTS 2026** (IDE `2026.1.0.27`, runtime `2026.1.0.28`) e abriu o projeto. Ao rodar pela IDE (F5), as 6 camadas do `rmMal_Origin` aparecem corretas, e o UV do tileset corresponde a 1560×1580, como no original.
- **Causa mais provável:** faltava o `tilesets/TILES/output_tileset.png`, que só a IDE gera ao salvar o tileset. O compilador também mudou (2024.14 → 2026.1), então isso não foi isolado.
- A IDE regravou os `.yy` no formato dela; essas mudanças fazem parte do commit. Os testes Python foram adaptados ao formato da IDE (vírgulas no fim) e ganharam a verificação do `output_tileset.png`.
- Os hashes dos níveis originais estão conferidos e intactos.

## Próximo passo: fechar o marco 3.2
1. Comparar pixel a pixel o `output_tileset.png` com `RecoveredAssets/Textures/Backgrounds/TILES/TILES_0.png`. Precisa de um script Python, então pedir permissão.
2. Ler o `interpolate_pixels` original (GEN8 do `data.win` original, via UTMT) e alinhar a opção do projeto (hoje `true`). Precisa de execução.
3. Definir a política para as 4 referências `<undefined>` e desenhar os sprites `aBACK` do nível.
4. Pedir o aceite do marco 3.2 ao usuário e seguir para o 3.2b (`map_load` reconstruído).

## Ferramentas e armadilhas
- **Teste mais simples:** o usuário roda pela IDE LTS (F5). Para build por linha de comando, adaptar o comando do Igor de §5 trocando o runtime e a pasta do usuário pelos da LTS; ainda não testado.
- O UTMT 0.9.2 pode não ler o `data.win` do 2026. Nesse caso, o critério é o runtime.
- Arquivos `.yy` escritos à mão precisam das tags `"$GM<Tipo>":"vN"` da LTS. Copiá-las dos arquivos que a IDE já regravou no próprio projeto.
- O VS Code segura `.git/index.lock` por instantes; basta tentar de novo.
