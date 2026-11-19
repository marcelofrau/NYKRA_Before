# Lote 1 — folhas, grama e a copa da árvore (marco 3.3)

Funções decompiladas em `decompiled/lote1/` (bruto) e `decompiled/lote1_annotated/` (com nomes de variáveis, objetos e sprites), 28 funções, 9.946 linhas anotadas. Gerado por `scripts/DecompileFunctionList.java` (lista feita por `Tools/list_object_functions.py`) e `scripts/annotate_yyc_c.py lote1 lote1_annotated`. Ghidra rodou com `-readOnly` numa **cópia** do projeto `ghidra-projects-retry` (o único que tem o programa analisado; `ghidra-projects` está vazio).

## Como ler o pseudocódigo (aprendido no lote 1)
- Todo evento YYC tem o mesmo preâmbulo (20 slots `RValue` locais, `FUN_141706ee0`) e o mesmo epílogo (liberar os slots, `if ((0x46U >> kind & 1) != 0) FUN_140001b50(...)`). Isso é ruído. **Um `PreCreate_0` com 162 linhas é um evento vazio.**
- `(**(code **)(*param_1 + 0x10))(param_1, 0x18b4e/*var:otbl*/)` = referência à variável de instância `otbl`; `0x8` no lugar de `0x10` é leitura.
- `FUN_1416cea80(param_1, DAT_.../*x*/, ...)` = ler variável da instância; `FUN_1416cfae0(param_1, DAT_.../*image_speed*/, ..., &v)` = escrever variável própria; `FUN_1416cf7b0(ref, DAT_...)` = escrever em outra instância (`outra.var = v`).
- `FUN_1400019a0(dst, src)` copia um RValue. `FUN_140003ca0` soma, `FUN_140009980` multiplica por constante (aritmética de RValue).
- Constantes `DAT_14...` de 16 bytes são RValues: os primeiros 8 bytes são um `double` (profundidade, índice de objeto, etc.). O anotador ainda **não** resolve esses doubles; foi preciso ler o `.exe` (ver abaixo). Índice de objeto: `objects-metadata.json` (campo `Index`); o rótulo `(obj:...)` que o anotador mostra para doubles pequenos pode ser coincidência numérica.
- `FUN_1416cdc30(x)` = `random(x)` (devolve `fração aleatória * x`, sem arredondar; decompilada em `decompiled/helpers/fn_1416cdc30.c`).

## Decodificado
**`parLeaves` Create_0** (confirmado):
```gml
otbl = instance_create_depth(x, y, 27, oTemp_Back_Leaves);   // 27 = DAT_1420b56b0, oTemp_Back_Leaves = índice 94 (DAT_1420b56c0)
otbl.image_index = 1;
otbl.sprite_index = sprite_index;
otbl.image_speed = 0;
image_index = 0;
image_speed = 0;
r = random(360);
xx = 0; yy = 0; xxx = 0; yyy = 0;
```
**`parLeaves` Destroy_0** (confirmado): `instance_destroy(otbl);`

**`oMal_Tree1` PreCreate_0:** vazio. O comportamento da copa vem do pai `parLeaves`. A copa original usa **duas instâncias**: esta mostra o quadro 0 e `otbl` (objeto `oTemp_Back_Leaves`, profundidade 27) mostra o quadro 1. O `Create_0` provisório (plano P10) mostra só o quadro 0.

**`parLeaves` Step_1** (parcial): começa com `image_angle = f((tick + r + xstart + ystart) * C1) * C2`, um balanço da copa usando a variável global `tick`; as constantes e a função (`FUN_1416cd800`) ainda não foram identificadas.

## Pendente neste lote
`parLeaves` Step_1 (resto), Draw_0 (734 linhas); `oTemp_Back_Leaves` (eventos ainda não listados); `oMal_bg_leaves_*` Create/Step/Draw; `parGrass` Create/Alarm_2/Draw (1.597 linhas); `oGrass`/`oGrass3` Create/Alarm_0. `Tools/list_object_functions.py` + o script Ghidra servem para qualquer objeto novo.
