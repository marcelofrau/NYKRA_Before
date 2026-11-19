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
