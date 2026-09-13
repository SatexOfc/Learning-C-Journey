# Aprendizado em C — Do Zero
 
Esta pasta reúne uma sequência de exercícios em linguagem C, construídos progressivamente para consolidar os fundamentos da linguagem: desde entrada e saída de dados até estruturas de controle mais elaboradas, como laços aninhados a lógicas de estado (sistema de login).
 
Cada arquivo `.c` representa um exercício independente, compilável isoladamente, e o `.exe` correspondente é o binário já gerado a partir dele.
 
## Como compilar e executar
 
```bash
gcc Exercises-N.c -o Exercises-N
./Exercises-N
```
 
(substitua `N` pelo número do exercício)
 
---
 
## Resumo dos exercícios
 
### `Exercises-1.c` — Entrada e saída básica
Captura nome, idade e altura do usuário via `scanf` e exibe os dados formatados com `printf`. **Agrega:** os tipos primitivos (`char`, `int`, `float`), o uso de vetores de `char` como strings, e o par fundamental `scanf`/`printf` com especificadores de formato (`%s`, `%d`, `%f`).
 
### `Exercises-2.c` — Calculadora com `if/else if`
Menu de operações (soma, subtração, multiplicação, divisão) escolhido pelo usuário, com tratamento de divisão por zero. **Agrega:** encadeamento de condicionais (`if/else if/else`), variáveis declaradas dentro de blocos condicionais (escopo local) e uma primeira noção de tratamento de erro.
 
### `Exercises-3.c` — Cálculo de média simples
Lê duas notas e calcula a média aritmética. **Agrega:** expressões aritméticas com `float` e a ideia de armazenar um resultado intermediário em uma variável antes de exibi-lo.
 
### `Exercises-4.c` — Comparação de números
Compara dois números e informa qual é maior, menor ou se são iguais. **Agrega:** operadores relacionais (`>`, `<`, `==`) combinados com `if/else if/else`, reforçando a lógica condicional do exercício anterior.
 
### `Exercises-5.c` — Situação escolar (3 notas)
Calcula a média de três notas e classifica o resultado em "aprovado", "recuperação" ou "reprovado". **Agrega:** condições compostas com operadores lógicos (`&&`), faixas de valores (ex: `media >= 5 && media < 7`) e uso de mensagens personalizadas por caso.
 
### `Exercises-6.c` — Calculadora com `switch`
Reimplementa a calculadora do exercício 2, mas usando `switch/case`. **Agrega:** a estrutura `switch` como alternativa mais legível a múltiplos `if/else if`, e o uso do `break` para controlar o fluxo entre `case`s.
 
### `Exercises-7.c` — Laço `while`
Imprime "Hello World" 10 vezes usando um contador. **Agrega:** a estrutura de repetição `while`, controle de variável de contador e a condição de parada de um laço.
 
### `Exercises-8.c` — Sistema de login (o mais avançado da pasta)
Simula um sistema de criação de conta e login, com limite de tentativas, comparação de strings (`strcmp`) e controle de estado (se a conta já existe ou não). **Agrega:** laços `while` combinados com `switch`, manipulação de strings com a biblioteca `<string.h>`, uso de variáveis de controle/flag (`entrou`, `tentativas`, `contaExiste`) para gerenciar o estado do programa, e uma lógica de fluxo mais próxima de uma aplicação real.
 
### `Exercises-9.c` — Laço `for` (contagem simples)
Lê um número e imprime a contagem de 1 até ele. **Agrega:** a estrutura de repetição `for`, mostrando a diferença de sintaxe e uso em relação ao `while` do exercício 7.
 
### `Exercises-10.c` — Tabuada com `for`
Gera a tabuada de multiplicação de um número digitado pelo usuário. **Agrega:** reforço do laço `for` aplicado a um problema clássico (tabuada), consolidando o uso de contadores e multiplicação dentro de repetições.
 
### `Exercises-11.c` — Classificação de pares e ímpares
Percorre os números de 0 até o valor digitado, classificando cada um como par ou ímpar e contabilizando o total de cada categoria. **Agrega:** o uso do operador módulo (`%`) para checagem de paridade, combinação de `for` com `if/else` dentro do laço, e acumuladores (`par`, `impar`) que são atualizados a cada iteração.
 
---
 
## Progressão geral de aprendizado
 
| Nível | Exercícios | Conceitos centrais |
|---|---|---|
| Fundamentos | 1, 3 | Variáveis, tipos, `scanf`/`printf` |
| Condicionais | 2, 4, 5, 6 | `if/else`, `switch`, operadores lógicos e relacionais |
| Laços de repetição | 7, 9, 10, 11 | `while`, `for`, contadores, operador módulo, acumuladores |
| Integração de conceitos | 8 | Laços + condicionais + strings + controle de estado |
 
No conjunto, a pasta cobre os pilares essenciais da linguagem C — **entrada/saída, tipos de dados, estruturas condicionais, laços de repetição e manipulação de strings** — culminando em um exercício (login) que já exige combinar todos esses conceitos para resolver um problema mais realista.
 