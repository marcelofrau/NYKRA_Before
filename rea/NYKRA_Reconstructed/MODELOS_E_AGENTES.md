# Modelos e agentes: qual usar e para quê (OpenCode Go)

Referência para o usuário revisar e para os agentes seguirem. Os dados de preço e teto são de **24/11/2026**. O desconto do GLM 5.3 foi visto pelo usuário no Console nessa data, sem prazo conhecido. Preços mudam: revise com os comandos do fim do arquivo.

## 1. Como a cota do Go funciona

- **Saldo único:** todos os modelos pagos tiram do mesmo saldo mensal. Trocar de modelo não zera nada.
- **Três limites:**
  - **5 horas:** até 20% do saldo mensal, contado a partir do primeiro uso;
  - **semana:** até 50% do saldo mensal, zera na segunda às 00:00 UTC;
  - **mês:** zera na renovação do plano.
- **Teto por modelo:** cada modelo tem um teto mensal próprio em dólares (`go.monthly_usage`), e o gasto conta como porcentagem desse teto. Por isso o que pesa na cota é **preço ÷ teto**, não só o preço do token. Um modelo caro com teto alto pode sair mais barato que um barato com teto baixo.
- **Horário de pico:** os modelos DeepSeek e o Gemini 4 Argon custam **2×** em dias úteis, das 01–04h e 06–10h UTC (02–05h e 07–11h em Madri). Evite esses horários com eles.
- **Ao bater um limite:** dá para trocar para um modelo grátis, ou ligar o "Extra Usage", que cobra do saldo pré-pago do Console.

## 2. Tabela de modelos para este projeto

| Papel | Modelo (`opencode-go/...`) | Entrada / saída por 1M | Teto Go/mês | Quando usar |
|---|---|---|---|---|
| **Principal** | `glm-5.3` | **$0,56 / $1,76 com 60% de desconto** (normal $1,40 / $4,40) | **$200** | Ler o `.c` anotado, escrever o GML, decidir, conversar com o usuário. É o melhor custo de cota entre os fortes, e ainda mais com o desconto |
| Buscas e auditoria | `deepseek-v4.1-flash` | $0,15 / $0,60 | $100 | Subagentes `nykra-scout` e `nykra-checker`. O mais barato em cota; evite o horário de pico |
| Documentação | `glm-5.3-flash` | $0,15 / $0,50 | $60 | Subagente `nykra-scribe` (`PORT_LOG`, plano, handoff) |
| Socorro (raro) | `deepseek-v4-pro` | $0,66 / $1,98 | só $15 | Um bloco do `.c` que o principal não conseguiu ler depois de duas tentativas. Pesa cerca de 6× mais na cota que o `glm-5.3` sem desconto |
| Evitar | `kimi-k3`, `kimi-k3.1-pro`, `qwen4-max`, `qwen3.8-max`, `grok-4.7`, `gemini-4-argon` | $2–3 / $6–15 | $15–30 | Gastam a cota muito rápido sem ganho claro neste trabalho |
| Não usar | modelos com `training: true` (por exemplo `iceman-contributor-free`, `muse-spark-*`) | — | — | O provedor treina com os dados enviados |

**Se o desconto do GLM 5.3 acabar:** ele continua sendo o principal, porque o teto de $200 compensa. Só revise a tabela.

## 3. Os subagentes (`.opencode/agents/` na raiz do repositório)

| Subagente | Modelo | Faz | Não pode |
|---|---|---|---|
| `nykra-scout` | `deepseek-v4.1-flash` | Responde uma busca precisa com `arquivo:linha`: onde está um evento, o que um `Index` é, se um original existe | Editar; shell sem a tua aprovação |
| `nykra-checker` | `deepseek-v4.1-flash` | Audita um port antes do F5: cabeçalho, constantes contra o `.c`, ordem das chamadas, `??` pendentes, registros nos geradores, teste e `PORT_LOG` | Editar. O parecer é consultivo: quem decide é o teu F5 |
| `nykra-scribe` | `glm-5.3-flash` | Escreve o `PORT_LOG.md`, o `SESSION_HANDOFF.md` e as seções de estado, fila e §7 do plano, **só com os fatos que o principal passar** | Editar qualquer outro arquivo; rodar shell; inventar fato ou "aceito" |

Regras que valem para todos:
- **Nenhum subagente escreve GML nem decide constantes.** Isso fica com o principal.
- **O principal confere no arquivo citado** tudo o que um subagente afirmar antes de usar. Modelos baratos erram com confiança.
- **Shell sempre pede aprovação** (regra do projeto: nada executa sem o ok do usuário).

Para trocar o modelo de um subagente, edite a linha `model:` do arquivo `.md` dele.

## 4. Rotina sugerida por item da fila

1. **Principal (`glm-5.3`):** lê o plano e pede ao `nykra-scout` o levantamento das fontes (raiz, YYC, metadado). Confere e te apresenta o plano do item.
2. **Principal:** lê o `.c` anotado e escreve o GML. Pede tua aprovação para rodar geradores e testes.
3. **`nykra-checker`:** audita o port. O principal corrige o que for real.
4. **`nykra-scribe`:** escreve o bloco do `PORT_LOG.md` e atualiza plano e handoff.
5. **Você:** F5. Se quiser uma segunda opinião, cole o bloco do `PORT_LOG.md` numa sessão com o Claude.

## 5. Como economizar cota

- **Uma sessão por item da fila.** Contexto longo é o que mais gasta.
- **Use os subagentes** para buscar e para documentar; o principal só para pensar e traduzir.
- **Evite o horário de pico** com os modelos DeepSeek.
- **Acompanhe o gasto:** o Console mostra quanto cada modelo já consumiu e a estimativa de requisições por 5 horas. Também dá para consultar `GET https://opencode.ai/inference/go/v1/usage` (com a tua chave).

## 6. Revisar preços e tetos

```powershell
$j = curl.exe -s https://opencode.ai/inference/go/v1/models | ConvertFrom-Json
$j.data | % { [pscustomobject]@{ id=$_.id; entrada=$_.cost.text.input.price; saida=$_.cost.text.output.price; teto_go=$_.go.monthly_usage.go; pico=($_.cost.multipliers | % factor) -join ','; treina=$_.go.training } } | Sort-Object saida | Format-Table -AutoSize
```

O endpoint mostra os preços de lista. Descontos temporários, como o do GLM 5.3, aparecem no Console e na página do Zen (`https://opencode.ai/docs/zen/`).

Fontes: `https://opencode.ai/docs/go/`, `https://opencode.ai/inference/go/v1/models`, `https://opencode.ai/docs/agents/`, `https://opencode.ai/docs/permissions/`.
