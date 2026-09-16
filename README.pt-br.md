🇺🇸 [Read in English](README.md)

# Aprendizado em C — Do Zero

Esta pasta reúne uma sequência de exercícios em linguagem C, construídos progressivamente para consolidar os fundamentos da linguagem: desde entrada e saída de dados até estruturas de controle mais elaboradas, como laços aninhados a lógicas de estado (sistema de login).

Cada arquivo `.c` representa um exercício independente, compilável isoladamente. Os binários (`.exe`), pastas de build, arquivos de IDE e de sistema operacional **não são versionados** — veja o `.gitignore` do repositório.

## Estrutura de pastas

```
Exercises-Variables-Fundamentals/  → Exercises 1 e 3
Exercises-Conditionals/            → Exercises 2, 4, 5 e 6
Exercises-Loops/                   → Exercises 7, 9, 10, 11 e 12
Exercises-Concept-Integration/     → Exercise 8
Exercises-Dynamic-Squares/         → Exercises 13 em diante
```

## Como compilar e executar

```bash
gcc Exercises-Variables-Fundamentals/Exercises-N.c -o Exercises-N
./Exercises-N
```

(substitua `N` pelo número do exercício e o caminho da pasta conforme onde o arquivo estiver)

---

## Resumo dos exercícios

### 📁 Exercises-Variables-Fundamentals

### `Exercises-1.c` — Entrada e saída básica
Captura nome, idade e altura do usuário via `scanf` e exibe os dados formatados com `printf`. **Agrega:** os tipos primitivos (`char`, `int`, `float`), o uso de vetores de `char` como strings, e o par fundamental `scanf`/`printf` com especificadores de formato (`%s`, `%d`, `%f`).

### `Exercises-3.c` — Cálculo de média simples
Lê duas notas e calcula a média aritmética. **Agrega:** expressões aritméticas com `float` e a ideia de armazenar um resultado intermediário em uma variável antes de exibi-lo.

### 📁 Exercises-Conditionals

### `Exercises-2.c` — Calculadora com `if/else if`
Menu de operações (soma, subtração, multiplicação, divisão) escolhido pelo usuário, com tratamento de divisão por zero. **Agrega:** encadeamento de condicionais (`if/else if/else`), variáveis declaradas dentro de blocos condicionais (escopo local) e uma primeira noção de tratamento de erro.

### `Exercises-4.c` — Comparação de números
Compara dois números e informa qual é maior, menor ou se são iguais. **Agrega:** operadores relacionais (`>`, `<`, `==`) combinados com `if/else if/else`, reforçando a lógica condicional do exercício anterior.

### `Exercises-5.c` — Situação escolar (3 notas)
Calcula a média de três notas e classifica o resultado em "aprovado", "recuperação" ou "reprovado". **Agrega:** condições compostas com operadores lógicos (`&&`), faixas de valores (ex: `media >= 5 && media < 7`) e uso de mensagens personalizadas por caso.

### `Exercises-6.c` — Calculadora com `switch`
Reimplementa a calculadora do exercício 2, mas usando `switch/case`. **Agrega:** a estrutura `switch` como alternativa mais legível a múltiplos `if/else if`, e o uso do `break` para controlar o fluxo entre `case`s.

### 📁 Exercises-Loops

### `Exercises-7.c` — Laço `while`
Imprime "Hello World" 10 vezes usando um contador. **Agrega:** a estrutura de repetição `while`, controle de variável de contador e a condição de parada de um laço.

### `Exercises-9.c` — Laço `for` (contagem simples)
Lê um número e imprime a contagem de 1 até ele. **Agrega:** a estrutura de repetição `for`, mostrando a diferença de sintaxe e uso em relação ao `while` do exercício 7.

### `Exercises-10.c` — Tabuada com `for`
Gera a tabuada de multiplicação de um número digitado pelo usuário. **Agrega:** reforço do laço `for` aplicado a um problema clássico (tabuada), consolidando o uso de contadores e multiplicação dentro de repetições.

### `Exercises-11.c` — Classificação de pares e ímpares
Percorre os números de 0 até o valor digitado, classificando cada um como par ou ímpar e contabilizando o total de cada categoria. **Agrega:** o uso do operador módulo (`%`) para checagem de paridade, combinação de `for` com `if/else` dentro do laço, e acumuladores (`par`, `impar`) que são atualizados a cada iteração.

### `Exercises-12.c` — Contagem de positivos, negativos e zeros (sem array)
Lê 10 números inteiros digitados pelo usuário e conta quantos são positivos, negativos ou iguais a zero, sem usar vetores. **Agrega:** reforço do `for` combinado com múltiplas condições (`if/else if/else`), uso de mais de uma variável contadora simultaneamente, e a prática de resolver um problema de classificação sem depender de estruturas de dados (preparando o terreno para o uso de arrays futuramente).

### 📁 Exercises-Concept-Integration

### `Exercises-8.c` — Sistema de login (o mais avançado da pasta)
Simula um sistema de criação de conta e login, com limite de tentativas, comparação de strings (`strcmp`) e controle de estado (se a conta já existe ou não). **Agrega:** laços `while` combinados com `switch`, manipulação de strings com a biblioteca `<string.h>`, uso de variáveis de controle/flag (`entrou`, `tentativas`, `contaExiste`) para gerenciar o estado do programa, e uma lógica de fluxo mais próxima de uma aplicação real.

### 📁 Exercises-Dynamic-Squares

### `Exercises-13.c` — Retângulo de asteriscos
Lê a quantidade de linhas e colunas e imprime um retângulo de `*` com essas dimensões. **Agrega:** o primeiro contato com **laços aninhados** (`for` dentro de `for`), onde o laço externo controla as linhas e o interno controla as colunas — base para todos os padrões visuais seguintes.

### `Exercises-14.c` — Triângulo crescente
Imprime um triângulo retângulo de asteriscos que cresce uma linha a cada iteração (1, 2, 3... até `l`). **Agrega:** a ideia de que o laço interno pode depender do índice do laço externo (`j < i`), fazendo a quantidade de repetições variar dinamicamente a cada linha.

### `Exercises-15.c` — Triângulo decrescente (espelhado)
Imprime um triângulo que decresce a cada linha, usando uma contagem regressiva no laço interno (`j = l - i` até `0`). **Agrega:** manipulação mais fina dos limites do laço interno, reforçando como pequenas mudanças na condição de parada e no ponto de partida alteram completamente o padrão gerado.

### `Exercises-16.c` — Retângulo de `#` (linhas e colunas independentes)
Semelhante ao exercício 13, mas lendo colunas antes de linhas e usando `#` como caractere. **Agrega:** reforço de laços aninhados com dimensões totalmente parametrizadas pelo usuário, consolidando a lógica de "linha externa, coluna interna" como padrão para desenhar formas.

### `Exercises-17.c` — Retângulo com padrão alternado por linha
Desenha um retângulo de `#`, mas alterna o alinhamento do caractere ("# " ou " #") dependendo se a linha é par ou ímpar. **Agrega:** combinação de laços aninhados com uma condicional (`if/else`) *dentro* do laço interno, mostrando como aplicar lógica condicional a cada célula de um padrão visual, e não só à estrutura geral do laço.

---

## Progressão geral de aprendizado

| Nível | Pasta | Exercícios | Conceitos centrais |
|---|---|---|---|
| Fundamentos | Exercises-Variables-Fundamentals | 1, 3 | Variáveis, tipos, `scanf`/`printf` |
| Condicionais | Exercises-Conditionals | 2, 4, 5, 6 | `if/else`, `switch`, operadores lógicos e relacionais |
| Laços de repetição | Exercises-Loops | 7, 9, 10, 11, 12 | `while`, `for`, contadores, operador módulo, acumuladores múltiplos |
| Integração de conceitos | Exercises-Concept-Integration | 8 | Laços + condicionais + strings + controle de estado |
| Laços aninhados / padrões visuais | Exercises-Dynamic-Squares | 13, 14, 15, 16, 17 | `for` dentro de `for`, laço interno dependente do externo, condicional dentro do laço, construção de formas |

No conjunto, a pasta cobre os pilares essenciais da linguagem C — **entrada/saída, tipos de dados, estruturas condicionais, laços de repetição e manipulação de strings** — culminando em exercícios que já exigem combinar vários desses conceitos para resolver problemas mais realistas.
