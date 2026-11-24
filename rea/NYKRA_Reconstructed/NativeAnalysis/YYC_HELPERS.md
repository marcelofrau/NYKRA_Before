# Auxiliares do runtime YYC (o que cada `FUN_...` faz)

Descobertos lendo `decompiled/helpers/h_<endereço>.c` (decompilados com `DecompileFunctionList.java`). Usados por `scripts/lift_yyc.py`. Confiança: **alta** = corpo lido; **média** = deduzido do corpo e do uso; **baixa** = só pelo uso.

## Valores (`RValue`, 16 bytes: valor 8 B, flags 4 B, tipo 4 B)
Tipos: 0 real, 1 string, 2 array, 3 ponteiro, 5 indefinido, 6 objeto/instância, 7 int32, 10 int64, 13 bool. Os tipos 1, 2 e 6 (`0x46 >> tipo & 1`) precisam ser liberados.

| Função | Significado | Conf. |
|---|---|---|
| `FUN_1400019a0(d, s)`, `FUN_140002730(d, s)` | `d = s` (cópia com contagem de referência); com `d` sendo uma referência de variável, é `variavel = s` | alta |
| `FUN_140001b50(v)` | liberar o valor (ruído, ignorado) | alta |
| `FUN_140003ca0(a, b)` | `a += b` | alta |
| `FUN_140003e00(a, b)` | `a -= b` | alta |
| `FUN_140001fe0(a, b)` | `a *= b` | alta |
| `FUN_140004620(a, b)` | `a /= b` | alta |
| `FUN_140003f30(a, x)` | `a += x` (x é um `double`) | alta |
| `FUN_140001c50(a, n)` | `a += n` (n é int) | alta |
| `FUN_140001a50(d, s, n)` | `d = s * n` | alta |
| `FUN_140009980(d, s, x)` | `d = s * x` (x é `double`) | alta |
| `FUN_140004520(d, s, x)` | `d = s / x` (x é `double`) | alta |
| `FUN_1416940c0(v)` | `real(v)` | alta |
| `FUN_1416927d0(v)` | conversão para booleano (`v > 0.5`) | alta |
| `FUN_1416ac010(v, str)` | criar um valor string | média |

## Variáveis e chamadas
| Padrão | Significado |
|---|---|
| `x = (**(code **)(*param_1 + 8))(param_1, 0xID/*var:nome*/)` | `x` aponta para a variável `nome` para **leitura** (`+ 0x10` = para escrita). Com `DAT_14218ecf8` no lugar de `param_1` é variável global (`tick`, `cam`) |
| `FUN_1416cea80(param_1, DAT/*nome*/, 0x80000000, &v)` | `v = nome` (variável da própria instância; `0x80000000` = sem índice de array) |
| `FUN_1416cfae0(param_1, DAT/*nome*/, 0x80000000, &v)` | `nome = v` (própria instância) |
| `FUN_1416cf7b0(ref, DAT/*nome*/, 0x80000000, &v)` | `ref.nome = v` (outra instância) |
| `FUN_1416cfeb0(ref, DAT/*nome*/, ...)` | leitura em outra instância (`ref.nome`) |
| `FUN_1416ab210(self, other, &ret, n, DAT/*nome*/, args)` | `ret = nome(args...)`: chamada de função embutida pelo índice (o `/*nome*/` já vem do anotador). Os `n` argumentos são ponteiros guardados em `local_X = &local_Y`, em endereços **decrescentes** (`local_1f8`, `local_1f0`, ...) |
| `FUN_1416f8280(self, other, id)` | `instance_exists(id)` (verifica o bit de destruído/inativo) |
| `FUN_1416f8210(self, other, n, args)` | `instance_destroy([id], [executar evento])` |
| `FUN_1416cdc30(x)` | `random(x)` (fração aleatória × x, sem arredondar) |
| `FUN_1416cdc60(a, b)` | `random_range(a, b)` |
| `FUN_1416cd800(len, dir)` | `lengthdir_x(len, dir)`: `len * cos(dir * pi / 180)` (a função de seno/cosseno do CRT não foi decifrada; **cosseno assumido** por oposição ao vizinho) |
| `FUN_1416cd880(len, dir)` | `lengthdir_y(len, dir)`: `-len * sin(dir * pi / 180)` (o sinal invertido aparece no corpo) |
| `FUN_1416cd560(a, i, j, v)` | `array_set_2D(a, i, j, v)` |

## Scripts do jogo e builtins já identificados

**Antes de chutar o que um `FUN_14...` faz**, procure o endereço em `RecoveredAssets/Metadata/yyc-function-table.json`: se ele estiver lá, é um script do jogo com nome (`gml_Script_*`). Os ids de objeto, sprite e som passados como número são o `Index` de `objects-` / `sprites-` / `sounds-metadata.json`. Por exemplo, `instance_number(0x68)` = objeto 104 = `oLIGHTING_moonglow`.

| Função | Significado | Fonte / conf. |
|---|---|---|
| `FUN_14003b450(self, other, &ret, 3, args)` | `reach(a, b, passo)`, que anda linearmente; não é `lerp` nem `reach_tween` | `gml_Script_reach` na tabela de funções; alta |
| `FUN_14003ee60(self, other, &ret, 2, args)` | `draw_rectangle_view(cor, alpha)` | `gml_Script_draw_rectangle_view` na tabela; alta |
| `FUN_1416d9df0(a, b, eps, modo)` | comparação de valores com epsilon; o Ghidra mostra o resultado como `-1<v`, `v<0`, `0<v`, `v!=-2&&v<1` | alta |
| `FUN_1416ab810` | início de um `with (obj)` | alta |
| `DAT_142182d90 = param_1; FUN_141706ee0();` | `event_inherited()`. Está em todo `PreCreate` e, fora dele, só em filhos (`oGrass`, `oSun_Mal`, `oGnarcier_*`, `oDoor_chunky`...). O `oPlayer/Step_1` original tem `event_inherited()` na linha 345, e o YYC chama essa função | alta |
| `FUN_1416cd720(x)` | `cos(x)` (zera abaixo de um epsilon) | `decompiled/h_1416cd720.c`; alta |
| `FUN_1416b86b0(r, g, b)` | `make_colour_rgb(r, g, b)`: retorna `r + g*256 + b*65536` | `decompiled/helpers/h_1416b86b0.c`; alta |
| `FUN_140017bd0(d, s, n)` | `d = s - n` (n inteiro) | `decompiled/helpers/h_140017bd0.c`; alta |
| `FUN_1400b9c80(self, other, &ret, 3, args)` | `reach_tween(a, b, d)` | `gml_Script_reach_tween` na tabela; alta |
| `FUN_1416d0010(0x4f, var, i, &v, ...)` | `v = oControl.var[i]`: o primeiro argumento é o índice do objeto (79 = `oControl`) | uso em `parSun_Glow_Draw_0`; média |
| `DAT_142181cd0`, `DAT_142180d10` | constante `0` montada na carga (fica no `.bss`, fora do arquivo): aparece como 2ª cor e como `outline` de `draw_*_colour`, que só podem ser `c_black` e `false` | uso; média |
| `FUN_1416b8480` | `draw_sprite` | uso em `oDoor_chunky_Draw_0`; média |
| `FUN_1416cda40` | `min` | uso em `oDoor_chunky_Draw_0`; média |
| `FUN_1416a8cb0` / `FUN_1416a8c00` | `surface_set_target` / `surface_reset_target` | uso; baixa |

## Constantes
`DAT_14...` e `_DAT_14...` são lidas direto do `.exe` pelo `lift_yyc.py`: `RValue` de 16 bytes (os 8 primeiros são um `double`) ou `float`/`double` soltos; argumentos de `lengthdir` são `float`. Convenções do compilador: um local `uint`/`undefined4` ao lado de um `undefined8` guarda tipo/flags do valor, e um `local_X = N;` com N pequeno marca a linha de código-fonte (descartado).

## Limites
O elevador não reconstrói laços `for/while`, `with`, `switch` nem acesso a arrays: mantém a estrutura do decompilador e marca `// ?? <linha>` o que não reconhece.
