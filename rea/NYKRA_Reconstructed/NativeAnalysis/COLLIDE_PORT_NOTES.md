# COLLIDE — notas de portabilidade (P24)

Rascunho de trabalho para reconstruir `gml_Script_COLLIDE`. Nada aqui foi validado em jogo; o marco
P24 continua aberto. Fontes: `NativeAnalysis/decompiled/collide/` (bruto),
`collide_annotated/` (variáveis nomeadas), `collide_lifted/` (GML aproximado) e
`RecoveredAssets/Metadata/yyc-dat-symbols.json` (tabela nome → endereço).

## 1. Tamanho do problema

| Arquivo | Linhas |
|---|---:|
| `collide/gml_Script_COLLIDE.c` | bruto |
| `collide_annotated/gml_Script_COLLIDE.c` | 3598 |
| `collide_lifted/gml_Script_COLLIDE.gml.txt` | 1372 (muito ruidoso) |
| `phase1_lifted/gml_Script_COLLIDE.gml.txt` | 1087 |

A maior parte das linhas é empilhamento de argumentos de builtins (pares `FUN_1416cea80` +
liberação de temporários) e o `switch` de limpeza em `3343`. A lógica real está entre ~420 e ~2900.

## 2. Endereços já resolvidos pela tabela `yyc-dat-symbols.json`

Endereços que aparecem em `collide_annotated` (consulta por `DAT_<endereço>`):

| Endereço | Nome | Uso no decompilado |
|---|---|---|
| `1420d58e8` | `x` | leitura de `x` de outra instância |
| `1420d58f8` | `y` | leitura de `y` de outra instância |
| `1420d59e8` | `id` | id da instância |
| `1420d5a18` | `depth` | profundidade |
| `1420d5a28` | `object_index` | tipo do objeto |
| `1420d9ff0` | `sqr` | quadrado |
| `1420da0c0` | `mean` | média |
| `1420da150` | `point_distance` | distância |
| `1420da240` | `array_get_2D` | grade 2D (usar `a[i, j]` na LTS 2026) |
| `1420da330` | `object_is_ancestor` | teste de herança |
| `1420da4b0` | `floor` | piso |
| `1420da4c0` | `array_height_2d` | altura da grade |
| `1420da4d0` | `array_length_1d` | comprimento (usar `array_length` na LTS 2026) |
| `1420da4e0` | `object_get_parent` | pai do objeto |
| `1420dc960` | `gml_Script_COLLIDE` | chamada do próprio script |

`1420db340` = `audio_stop_sound` também saiu dessa tabela; foi o que fechou o `oDoor_chunky/Destroy_0`.

## 3. Ainda sem nome

| Endereço | Onde aparece | Suspeita |
|---|---|---|
| `1420f6b08` | 2º argumento de `FUN_1416d9df0(a, b, 1420f6b08, n)` | comparador (`<`, `<=` ou `==`); `FUN_1416d9df0` devolve inteiro e o código testa `== 0` e `-1 <` |
| `1420b2728`…`1420b2828` | `FUN_140002730(&slot, endereço)` antes de comparar com números (31, 43, 64, 65, 180) | constantes de string/asset usadas como amostra nas comparações |
| `1420d5a18`/`1420d5a28` variantes | comparações de `object_index` com 31, 43, 64, 65 | índices de objeto do jogo (`43` = `oWATER`) |

## 4. Esqueleto observado (linhas de `collide_annotated`)

- `415-419` — retorno, `hit_obj = 0`, chamada com `gml_Script_COLLIDE` (indireção do próprio script).
- `420-430` — `hit_obj = 0`; leitura de `mover` e comparação com 0 por `FUN_1416d9df0`.
- `431-485` — ramo de `mover` vazio: liga o bloco da água. Conta instâncias de `oWATER` (`0x2b` = 43).
- `486-…` — `with (oWATER)`: teste de sobreposição em `x` usando `x1/x2` do outro e `width * sec`;
  teste em `y` usando `y`, `bhh`, `vsp`, `+16`, e `height + 2`; em seguida calcula
  `hsp / (… + height)` (arrasto/bóia) e mistura com `mean`.
- `~2252` — laço `while (true)` com iterações de `collision_list` (variável lida em `2261`/`2278`).
- `2281-2320` — quebra do laço quando o índice/referência acaba.
- `2328` — `solidtoothers`; `2340` — `player_solid`; `2385-2467` — `tbwh`/`tbhh` (meia largura/altura do alvo).
- `2596-2736` — leituras de `X`/`Y` (caixa da entidade) e de `X`/`Y` do outro objeto.
- `2886`, `2925` — escritas em `hit_obj`.
- `3081-3141` — escritas finais: `onsolid`, `onobject`, `hit_id`, `onblock_id`, `hit_top`, `mover`.
- `3343-3590` — `switch` de limpeza das variáveis temporárias (não é lógica de jogo).

## 5. Funções-ajudante do runtime usadas em toda a colisão

| Símbolo | Papel provável | Evidência |
|---|---|---|
| `FUN_1416cea80(instância, endereço, …, &saída)` | ler um builtin (por exemplo `x`, `y`) de outra instância | o endereço é sempre um nome da tabela acima |
| `FUN_1416d0010(0x40, var_id, …, &saída)` | ler variável de instância no escopo atual | `0x40` fixo; `var_id` resolve por `var:` |
| `FUN_1416d0790(0x40, var_id, …, &valor)` | escrever variável de instância | par do anterior, sempre depois de um cálculo |
| `FUN_1416cfeb0(&estrutura, var_id, …, &saída)` | ler variável de uma instância dada | usado com `dStack_608` |
| `FUN_1416d9df0(a, b, comparador, n)` | comparar e devolver inteiro | sempre seguido de testes `== 0`, `-1 <` |
| `FUN_1416ab810` / `func_0x0001416f82f0` | `with` / contagem de instâncias | seguidos de laço `do { } while` com contador |
| `FUN_140003ca0`, `FUN_140004520`, `FUN_140001c50`, `FUN_140003e00`, `FUN_140004620`, `FUN_140009980` | operadores aritméticos (mais, menos, menos N, vezes, dividir) | aparecem encadeados em expressões como `mean`, `sqr`, `+16`, `+2` |
| `FUN_140001b50` | liberar temporário de string | sempre em par com leitura de variável |

## 6. Ordem de portabilidade sugerida

1. Fechar o comparador `1420f6b08` (uma consulta a `yyc-dat-symbols.json` por prefixo `DAT_1420f` ou uma
   leitura de `collide_annotated` num ponto onde a comparação é óbvia, como `x1 >= x1`).
2. Portar o ramo da água (`486`…), que é autocontido e não depende de `collision_list`.
3. Portar o laço de `collision_list` (`2252`…) com `solidtoothers`, `player_solid` e `hit_top`.
4. Portar plataformas móveis e as escritas finais (`onsolid`, `onobject`, `hit_id`, `onblock_id`, `mover`).
5. Trocar `parEntity/Step_2` provisório pela chamada real e apagar o bloqueio local de `oDoor_chunky/Step_2`.

Cada item entra com comentário `// from gml_Script_COLLIDE @0x…` e teste Python que confira as
constantes lidas (como em `test_phase3_map_load.py`).
