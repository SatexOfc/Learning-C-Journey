🇺🇸 [Read in English](README.md)

# Minha Jornada Aprendendo C

## 1. Sobre o projeto

Este repositório documenta minha jornada de aprendizado em C através de exercícios práticos. Sou estudante de Ciência da Computação e estou usando C como uma das minhas principais linguagens de estudo no momento.

Não é um projeto profissional nem uma biblioteca pronta para produção — é o registro real da minha evolução, com os acertos e as tentativas no meio do caminho. Os exercícios antigos ficam como estão, mesmo quando hoje eu já resolveria algo de forma diferente: o objetivo aqui é mostrar progresso, não perfeição.

## 2. Objetivos

- Aprender os fundamentos da linguagem C;
- Desenvolver lógica de programação;
- Aprender a estruturar programas de forma mais organizada;
- Praticar funções e estruturas de dados;
- Registrar minha evolução no GitHub;
- Futuramente, aplicar esse conhecimento em projetos maiores.

## 3. Tecnologias

- C
- GCC
- VS Code
- Git
- GitHub

## 4. Progresso atual

- [x] Fundamentos
- [x] Condicionais
- [x] Loops
- [x] Funções
- [x] Arrays
- [x] Strings
- [x] Structs
- [x] Busca em arrays de structs
- [ ] Ponteiros
- [ ] Gerenciamento de memória
- [ ] Manipulação de arquivos
- [ ] Header files e modularização
- [ ] Projetos maiores

📌 Exercícios concluídos: **1 a 35**
📌 Próximo tema: **Ponteiros**

## 5. O que aprendi até agora

- `printf` e `scanf`
- Variáveis e tipos de dados
- Operadores
- `if` / `else`
- `switch`
- `while`
- `for`
- Loops aninhados
- Contadores e acumuladores
- Strings
- `strcmp`
- Funções (declaração, chamada, parâmetros, `return`)
- Funções `void`
- Funções com múltiplos parâmetros
- Funções que retornam um status (valor numérico representando uma decisão)
- Arrays
- Arrays de strings
- Structs
- Arrays de structs
- Funções recebendo structs
- Funções recebendo arrays de structs
- Vetores de tamanho variável (VLA), definidos a partir de uma variável de quantidade lida em tempo de execução
- Começando a separar responsabilidades entre funções
- Fazer uma função calcular/analisar algo e devolver essa informação para a `main`
- Evitar valores fixos espalhados pelo código
- Pensar em reutilização de funções
- Busca em arrays de structs
- Uso de `strcmp()` em buscas
- Retorno de índices para indicar o resultado de uma busca (incluindo `-1` para "não encontrado")
- Comparação de valores dentro de um array de structs para encontrar um "maior" ou "menor"
- Separação de responsabilidades entre a função de busca e o `main()`

## 6. Estrutura de pastas

```
Learning-C-Journey/
├── 01-Fundamentos/
├── 02-Controle-de-Fluxo/
├── 03-Loops-e-Padroes/
├── 04-Funcoes/
├── 05-Structs/
├── 06-Projetos/          (reservada para projetos futuros)
├── .gitignore
├── README.md
└── README.pt-br.md
```

- **01-Fundamentos** — entrada e saída de dados, variáveis, tipos e operadores básicos.
- **02-Controle-de-Fluxo** — decisões com `if/else` e `switch`.
- **03-Loops-e-Padroes** — repetição com `while` e `for`, loops aninhados e construção de padrões visuais.
- **04-Funcoes** — declaração, parâmetros, retorno e organização de lógica em funções.
- **05-Structs** — arrays, strings, structs e combinação de tudo isso em exercícios mais completos.
- **06-Projetos** — vazia por enquanto, reservada para projetos maiores (como o futuro "Sistema de Contas").

## 7. Como executar os exercícios

```bash
gcc 01-Fundamentos/Exercises-N.c -o Exercises-N
./Exercises-N
```

(substitua `N` pelo número do exercício e o caminho da pasta conforme onde o arquivo estiver)

---

## 8. Exercícios

### 📁 01-Fundamentos

### Exercise 1 — Entrada de dados básica
**Objetivo:** Capturar nome, idade e altura do usuário e exibir os dados formatados.
**Conceitos praticados:**
- Tipos primitivos (`char`, `int`, `float`)
- Vetor de `char` como string
- `scanf` / `printf` com especificadores de formato

### Exercise 3 — Média simples
**Objetivo:** Ler duas notas e calcular a média aritmética.
**Conceitos praticados:**
- Expressões aritméticas com `float`
- Armazenar um resultado intermediário em variável

### 📁 02-Controle-de-Fluxo

### Exercise 2 — Calculadora com `if/else if`
**Objetivo:** Escolher e executar uma operação matemática a partir de um menu.
**Conceitos praticados:**
- Encadeamento de condicionais
- Variáveis em escopo local
- Tratamento de divisão por zero

### Exercise 4 — Comparação de números
**Objetivo:** Informar qual de dois números é maior, menor ou igual.
**Conceitos praticados:**
- Operadores relacionais (`>`, `<`, `==`)
- `if/else if/else`

### Exercise 5 — Situação escolar (3 notas)
**Objetivo:** Calcular a média de três notas e classificar o resultado.
**Conceitos praticados:**
- Condições compostas (`&&`)
- Faixas de valores
- Mensagens personalizadas por caso

### Exercise 6 — Calculadora com `switch`
**Objetivo:** Reimplementar a calculadora do exercício 2 usando `switch/case`.
**Conceitos praticados:**
- Estrutura `switch`
- Uso do `break`

### 📁 03-Loops-e-Padroes

### Exercise 7 — Loop `while`
**Objetivo:** Repetir uma impressão um número fixo de vezes.
**Conceitos praticados:**
- Estrutura `while`
- Variável de contador
- Condição de parada

### Exercise 8 — Sistema simples de login/cadastro
**Objetivo:** Simular criação de conta e login, com limite de tentativas.
**Conceitos praticados:**
- `while` combinado com `switch`
- `strcmp` para comparar strings
- Variáveis de controle/flag para gerenciar estado

### Exercise 9 — Loop `for` (contagem simples)
**Objetivo:** Imprimir a contagem de 1 até um número digitado.
**Conceitos praticados:**
- Estrutura `for`

### Exercise 10 — Tabuada
**Objetivo:** Gerar a tabuada de um número digitado.
**Conceitos praticados:**
- `for` aplicado a um problema clássico

### Exercise 11 — Pares e ímpares
**Objetivo:** Classificar e contar números pares e ímpares até um valor digitado.
**Conceitos praticados:**
- Operador módulo (`%`)
- `for` combinado com `if/else`
- Acumuladores

### Exercise 12 — Positivos, negativos e zeros
**Objetivo:** Contar quantos de 10 números digitados são positivos, negativos ou zero.
**Conceitos praticados:**
- Múltiplas variáveis contadoras
- `for` combinado com `if/else if/else`

### Exercise 13 — Retângulo de asteriscos
**Objetivo:** Desenhar um retângulo de `*` com linhas e colunas escolhidas pelo usuário.
**Conceitos praticados:**
- Loops aninhados (`for` dentro de `for`)

### Exercise 14 — Triângulo crescente
**Objetivo:** Desenhar um triângulo que cresce uma linha por vez.
**Conceitos praticados:**
- Laço interno dependente do índice do laço externo

### Exercise 15 — Triângulo decrescente (espelhado)
**Objetivo:** Desenhar um triângulo que decresce a cada linha.
**Conceitos praticados:**
- Contagem regressiva dentro do laço interno

### Exercise 16 — Retângulo de `#`
**Objetivo:** Desenhar um retângulo de `#` com linhas e colunas independentes.
**Conceitos praticados:**
- Reforço de loops aninhados com dimensões parametrizadas

### Exercise 17 — Padrão alternado por linha
**Objetivo:** Alternar o alinhamento do caractere conforme a linha é par ou ímpar.
**Conceitos praticados:**
- Condicional dentro do laço interno

### Exercise 18 — Tabuleiro de xadrez
**Objetivo:** Criar um padrão intercalado tipo tabuleiro de xadrez.
**Conceitos praticados:**
- Uso de `(i + j) % 2` para alternar caracteres

### 📁 04-Funcoes

### Exercise 19 — Primeira função (`void`, sem parâmetros)
**Objetivo:** Criar e chamar uma função que apenas imprime uma mensagem.
**Conceitos praticados:**
- Declaração, definição e chamada de função
- Tipo `void`

### Exercise 20 — Função com parâmetro (string)
**Objetivo:** Criar uma função que recebe uma string e a exibe.
**Conceitos praticados:**
- Passagem de parâmetros
- Passar um vetor de `char` como argumento

### Exercise 21 — Função com retorno (elevar ao quadrado)
**Objetivo:** Criar uma função que recebe um número e retorna seu quadrado.
**Conceitos praticados:**
- Função com parâmetro e retorno
- Usar o retorno diretamente em `printf`

### Exercise 22 — Função com retorno (multiplicar por 2)
**Objetivo:** Variação do exercício 21, multiplicando por 2.
**Conceitos praticados:**
- Reforço do padrão parâmetro → processamento → retorno

### Exercise 23 — Função com dois parâmetros (soma)
**Objetivo:** Criar uma função que soma dois números recebidos como parâmetro.
**Conceitos praticados:**
- Funções com múltiplos parâmetros

### Exercise 24 — Função com lógica condicional interna
**Objetivo:** Criar uma função que decide, internamente, qual valor retornar.
**Conceitos praticados:**
- Funções combinadas com `if/else if/else`
- Encapsular uma decisão inteira dentro de uma função

### Exercise 25 — Fórmula de Bhaskara (múltiplas funções)
**Objetivo:** Calcular as raízes de uma equação do 2º grau usando funções separadas.
**Conceitos praticados:**
- Decompor um problema em várias funções menores
- Composição de funções (`<math.h>` para raiz quadrada)

### Exercise 26 — Calculadora modular com funções
**Objetivo:** Reimplementar a calculadora usando uma função para cada operação, escolhida via `switch`.
**Conceitos praticados:**
- Organizar lógica em várias funções pequenas
- `switch` chamando funções diferentes

### Exercise 27 — Função retornando status do aluno
**Objetivo:** Calcular a média de três notas e retornar um código (0, 1 ou 2) representando a situação do aluno.
**Conceitos praticados:**
- Função que retorna um "status" numérico
- Traduzir esse status em mensagens no `main`

### Exercise 28 — Turma de alunos com arrays paralelos
**Objetivo:** Cadastrar 5 alunos e calcular a média de cada um, ainda sem usar struct.
**Conceitos praticados:**
- Array de strings (`char nomes[5][50]`) e array de notas
- Passar um "pedaço" de um array para uma função (`notas + n*3`)

### 📁 05-Structs

### Exercise 29 — Primeira struct
**Objetivo:** Cadastrar e exibir dados de 3 alunos usando `struct aluno`.
**Conceitos praticados:**
- Definição de `struct`
- Array de structs

### Exercise 30 — Função recebendo uma struct
**Objetivo:** Criar uma função que recebe um único aluno (struct) e o exibe.
**Conceitos praticados:**
- Passar uma struct como parâmetro de função

### Exercise 31 — Função analisando a situação do aluno
**Objetivo:** Criar uma função que recebe uma struct aluno e retorna a situação (aprovado/recuperação/reprovado).
**Conceitos praticados:**
- Struct combinada com função de retorno de status

### Exercise 32 — Função calculando a média da turma
**Objetivo:** Criar uma função que recebe um array de structs e calcula a média da turma.
**Conceitos praticados:**
- Função recebendo array de structs
- Consolidar várias funções trabalhando juntas (mostrar, analisar, calcular média)

### Exercise 33 — Quantidade variável de alunos
**Objetivo:** Permitir que o número de alunos seja definido pelo usuário em tempo de execução.
**Conceitos praticados:**
- Vetor de tamanho variável (VLA) baseado em uma variável `quant`
- Evitar valores fixos espalhados pelo código
- Funções recebendo a quantidade como parâmetro adicional

### Exercise 34 — Buscar aluno pelo nome
**Objetivo:** Buscar um aluno específico dentro de um array de structs a partir do nome digitado.
**Conceitos praticados:**
- Uso de `strcmp()` para comparar strings dentro de uma busca
- A função `search` percorre o array e retorna o índice do aluno encontrado, ou `-1` caso não encontre
- Separação de responsabilidades: a função só busca e retorna o índice; é o `main()` quem decide o que fazer com o resultado (exibir os dados ou avisar que não encontrou)

### Exercise 35 — Buscar aluno com maior nota
**Objetivo:** Percorrer um array de structs e identificar o aluno com a maior nota.
**Conceitos praticados:**
- Comparação de valores dentro de um array de structs (`aluno[j].nota > aluno[maior].nota`)
- A função retorna apenas a posição (índice) do aluno encontrado, e o `main()` usa esse índice para acessar nome e nota
- Reforço da separação de responsabilidades entre função de busca e `main()`

---

## 9. Próximos passos

Ainda não estudei (e não estou fingindo que já sei):

- Ponteiros
- Passagem por referência
- Alocação dinâmica de memória (`malloc`, `calloc`, `realloc`, `free`)
- Manipulação mais avançada de memória
- Arquivos
- Modularização com `.h` e `.c`
- Programação mais avançada em C de forma geral

## 10. Projetos futuros

Pretendo, no futuro, usar C em projetos maiores, incluindo sistemas de terminal. Um deles, ainda apenas em planejamento/desenvolvimento inicial e que **não faz parte dos exercícios atuais**, é um projeto chamado "Sistema de Contas" — reservei a pasta `06-Projetos` para quando ele (e outros) saírem do papel.

## 11. Status

🚧 Em constante evolução — este repositório é atualizado conforme eu avanço nos estudos e resolvo novos exercícios.
