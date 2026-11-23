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

## 3. Comparador e constantes: resolvidos em 23/11

Os endereços `0x1420…` são ponteiros para valores e funções do runtime. O dump foi feito com um
leitor de PE em Python (só leitura, `RuntimeBaseline/NYKRA.exe`), sem Ghidra:

| Endereço | Conteúdo |
|---|---|
| `1420f6b08` | `1e-05` — **é um epsilon**, não um comparador |
| `141983260` | `1.25` |
| `141985238` | `1.5` |
| `141982c40` | `2.0` |
| `141983800` | `0.1` |
| `141981e30` | `1.0` |
| `141981d18` | `0.8` |
| `1419841c0` | `0.99` |
| `141985628` | `-16.0` |
| `141986528` | `1/3` |

Os operadores aritméticos foram identificados pelos decompilados em
`decompiled/runtime_helpers/`:

| Símbolo | Operação | Evidência |
|---|---|---|
| `FUN_140003ca0` | `a += b` | `case 0: *param_1 = *param_2 + *param_1` |
| `FUN_140003e00` | `a -= b` | `case 0: *param_1 = *param_1 - *param_2` |
| `FUN_140004620` | `a /= b` | `case 0: *param_1 = *param_1 / dVar2` |
| `FUN_140001fe0` | `a *= b` | `dVar3 = dVar3 * *param_1` |
| `FUN_140001c50` | `a += inteiro` | `case 0: *param_1 = (double)param_2 + *param_1` |
| `FUN_140004520(a, b, c)` | `a = b / c` | copia `b` e chama `FUN_140004620` com `c` |
| `FUN_140009980(a, b, c)` | `a = b * c` | copia `b` e chama `FUN_140001fe0` com `c` |
| `FUN_1400019a0` / `FUN_140002730` | copiar valor | usado para empilhar operandos |

`FUN_1416d9df0(a, b, 1e-5, modo)` compara dois valores e devolve um inteiro:

- `modo 0` → `0` quando `a == b`, diferente de zero quando não;
- `modo 1` → sinal de `a - b` (`>0` para `a > b`, `<0` para `a < b`, `0` para igual);
- `-2` = comparação inválida (tipos incompatíveis).

Os testes que aparecem no decompilado caem todos nesse padrão: `iVar7 == 0` (igual),
`-1 < iVar7` (`a >= b`), `iVar7 < 0` com `iVar7 != -2` (`a < b`), `0 < iVar7` (`a > b`).

## 3b. Bloco da água: primeira tradução

Entre `486` e `~800`, dentro do `with (oWATER)` (objeto 43), para cada instância da água:

1. `other.x1 >= self.x`;
2. `other.x2 < self.x + width * sec`;
3. `other.y + other.bhh + other.vsp + 16 >= self.y`;
4. `other.y2 < self.y + height + 2`;
5. então aplica arrasto nos dois eixos:
   - `fator = 1 + (64 - height) / 1.25`;
   - `hsp → hsp / fator * 1.5` e `vsp → vsp / fator * 1.5`.

Com `height = 36` o fator fica `1 + 28/1.25 = 23.4`, ou seja arrasto muito forte. Falta confirmar
de quem são `hsp`/`vsp` (da água ou da entidade) ao portar a linha 643-660.

## 3c. Escopo real do script (descoberto em 23/11)

`COLLIDE` não é só colisão. O decompilado tem três partes grandes:

1. **Água** (`486-1072`): arrasto em `hsp`/`vsp` **e** chamada de efeito com 18 argumentos
   (`FUN_140106850`) e outra com 6 (`FUN_1400d2410`), usando os senos e as constantes
   `157`…`162`, `10`, `46`, `59`. Virou P37: nenhum nível do recorte tem `oWATER`.
2. **Laço de `collision_list`** (`2252`…): para cada instância da lista, testa `instance_exists`,
   descarta a si mesma (`id`), descarta `oEo` (65), descarta `object_is_ancestor(…, 63)`, exige
   `solidtoothers == 1` e o par `oPlayer` (64) / `player_solid == 1`; em seguida usa
   `point_distance` para medir a caixa e resolve a penetração com `x1/y1/x2/y2` do alvo,
   `hsp`/`vsp` de ambos e `tbwh`/`tbhh`.
3. **Casos especiais e efeitos**: `object_get_parent == 51` (`parDoor_out`) tem ramo próprio; há
   sons, poeira e escritas finais (`onsolid`, `onobject`, `hit_id`, `onblock_id`, `hit_top`, `mover`).

Ordem de port: parte 2 (núcleo), depois as escritas finais, depois `parDoor_out`; a água fica para
quando houver nível com água. Nada disso entra em `parEntity/Step_2` antes de o núcleo passar no F5,
porque o bloqueio provisório da porta hoje funciona.

## 3d. Ainda sem nome

Nada crítico. O que resta é ler ~2.400 linhas de lógica (blocos de `collision_list`, sólidos,
plataformas móveis e as escritas finais).

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
| `FUN_1416d0720(0x40, var_id, …, &valor)` | escrever variável de instância | par do anterior, sempre depois de um cálculo |
| `FUN_1416cfeb0(&estrutura, var_id, …, &saída)` | ler variável de uma instância dada | usado com `dStack_608` |
| `FUN_1416cfc30(&estrutura, endereço, …, &saída)` | ler builtin de uma instância dada | usado com `object_index` |
| `FUN_1416d9df0(a, b, 1e-5, modo)` | comparar (ver §3) | sempre seguido de testes `== 0`, `-1 <` |
| `FUN_1416ab810` / `func_0x0001416f82f0` | `with` / contagem de instâncias | seguidos de laço `do { } while` com contador |
| `FUN_1416ab210` | chamar um builtin com N argumentos | último argumento é o endereço do builtin (`floor`, `mean`, …) |
| `FUN_1416ab750` | iniciar contexto de script | recebe `DAT_1420dc960` = `gml_Script_COLLIDE` |
| `FUN_1416ab620` | encerrar `with` | par do `ab810` |
| `FUN_140003ca0`, `FUN_140003e00`, `FUN_140004620`, `FUN_140001fe0`, `FUN_140001c50`, `FUN_140004520`, `FUN_140009980` | `+=`, `-=`, `/=`, `*=`, `+= int`, `x / c`, `x * c` (ver §3) | decompilados em `runtime_helpers/` |
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
