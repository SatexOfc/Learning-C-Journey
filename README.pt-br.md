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
Exercises-Functions/               → Exercises 19 a 25
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

### 📁 Exercises-Functions

### `Exercises-19.c` — Primeira função (`void`, sem parâmetros)
Define uma função `mostrarMensagem()` que apenas imprime um texto, chamada a partir do `main`. **Agrega:** o conceito de **função** propriamente dito — declaração, definição e chamada — usando o tipo `void` para uma função que não retorna valor.

### `Exercises-20.c` — Função com parâmetro (string)
Define uma função `saudacao(char nome[50])` que recebe uma string como parâmetro e a exibe. **Agrega:** passagem de parâmetros para uma função, incluindo o caso específico de passar um vetor de `char` (string) como argumento.

### `Exercises-21.c` — Função com retorno (elevar ao quadrado)
Define `multi(int x)` que retorna `x*x`. **Agrega:** funções que **recebem e retornam** um valor, e o uso do resultado de uma função diretamente dentro de um `printf`.

### `Exercises-22.c` — Função com retorno (multiplicar por 2)
Variação do exercício 21, agora retornando `x*2`. **Agrega:** reforço do padrão parâmetro → processamento → retorno, consolidando a lógica de funções com um único parâmetro.

### `Exercises-23.c` — Função com dois parâmetros (soma)
Define `somar(int x, int y)`, que recebe dois parâmetros e retorna a soma. **Agrega:** funções com **múltiplos parâmetros**, mostrando como estender a lógica de uma função de um para vários argumentos.

### `Exercises-24.c` — Função com lógica condicional interna
Define `maiorNum(int num1, int num2)`, que usa `if/else if/else` internamente para decidir qual valor retornar (ou `0` se forem iguais). **Agrega:** a combinação de **funções com condicionais**, mostrando que uma função pode encapsular uma lógica de decisão inteira, não só um cálculo direto.

### `Exercises-25.c` — Fórmula de Bhaskara (múltiplas funções)
Calcula as raízes de uma equação do 2º grau usando três funções separadas (`delta`, `x1`, `x2`), cada uma responsável por uma parte do cálculo, além da biblioteca `<math.h>` para a raiz quadrada. **Agrega:** o conceito de **decompor um problema maior em várias funções menores**, cada uma com uma responsabilidade única, e a composição de funções (o resultado de uma alimentando as outras) — um passo importante rumo à modularização de código.

---

## Progressão geral de aprendizado

| Nível | Pasta | Exercícios | Conceitos centrais |
|---|---|---|---|
| Fundamentos | Exercises-Variables-Fundamentals | 1, 3 | Variáveis, tipos, `scanf`/`printf` |
| Condicionais | Exercises-Conditionals | 2, 4, 5, 6 | `if/else`, `switch`, operadores lógicos e relacionais |
| Laços de repetição | Exercises-Loops | 7, 9, 10, 11, 12 | `while`, `for`, contadores, operador módulo, acumuladores múltiplos |
| Integração de conceitos | Exercises-Concept-Integration | 8 | Laços + condicionais + strings + controle de estado |
| Laços aninhados / padrões visuais | Exercises-Dynamic-Squares | 13, 14, 15, 16, 17 | `for` dentro de `for`, laço interno dependente do externo, condicional dentro do laço, construção de formas |
| Funções | Exercises-Functions | 19, 20, 21, 22, 23, 24, 25 | Declaração e chamada de funções, parâmetros (simples e múltiplos), retorno de valores, funções combinadas com condicionais, decomposição em múltiplas funções |

No conjunto, a pasta cobre os pilares essenciais da linguagem C — **entrada/saída, tipos de dados, estruturas condicionais, laços de repetição e manipulação de strings** — culminando em exercícios que já exigem combinar vários desses conceitos para resolver problemas mais realistas.
