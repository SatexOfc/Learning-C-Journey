🇧🇷 [Ler em Português](README.pt-br.md)

# C Learning Journey

## 1. About the project

This repository documents my learning journey in C through practical exercises. I'm a Computer Science student, and C is one of the main languages I'm currently studying.

This isn't a professional project or a production-ready library — it's a real record of my progress, including the trial and error along the way. Older exercises stay as they are, even when I'd solve them differently today: the point here is to show progress, not perfection.

## 2. Goals

- Learn the fundamentals of the C language;
- Develop programming logic;
- Learn to structure programs in a more organized way;
- Practice functions and data structures;
- Track my progress on GitHub;
- Eventually apply this knowledge to bigger projects.

## 3. Technologies

- C
- GCC
- VS Code
- Git
- GitHub

## 4. Current progress

- [x] Fundamentals
- [x] Conditionals
- [x] Loops
- [x] Functions
- [x] Arrays
- [x] Strings
- [x] Structs
- [ ] Pointers
- [ ] Memory management
- [ ] File handling
- [ ] Header files and modularization
- [ ] Larger projects

📌 Completed exercises: **1 to 33**
📌 Next exercises: **34 (search a student by name)** and **35 (find the student with the highest grade)**

## 5. What I've learned so far

- `printf` and `scanf`
- Variables and data types
- Operators
- `if` / `else`
- `switch`
- `while`
- `for`
- Nested loops
- Counters and accumulators
- Strings
- `strcmp`
- Functions (declaration, calling, parameters, `return`)
- `void` functions
- Functions with multiple parameters
- Functions that return a status (a number representing a decision)
- Arrays
- Arrays of strings
- Structs
- Arrays of structs
- Functions receiving structs
- Functions receiving arrays of structs
- Variable-length arrays (VLAs), sized from a count read at runtime
- Starting to separate responsibilities between functions
- Having a function calculate/analyze something and return that info to `main`
- Avoiding hardcoded values scattered through the code
- Starting to think about reusing functions

## 6. Folder structure

```
Learning-C-Journey/
├── 01-Fundamentos/
├── 02-Controle-de-Fluxo/
├── 03-Loops-e-Padroes/
├── 04-Funcoes/
├── 05-Structs/
├── 06-Projetos/          (reserved for future projects)
├── .gitignore
├── README.md
└── README.pt-br.md
```

- **01-Fundamentos** — input/output, variables, types, and basic operators.
- **02-Controle-de-Fluxo** — decision-making with `if/else` and `switch`.
- **03-Loops-e-Padroes** — repetition with `while` and `for`, nested loops, and building visual patterns.
- **04-Funcoes** — function declaration, parameters, return values, and organizing logic into functions.
- **05-Structs** — arrays, strings, structs, and combining all of it in more complete exercises.
- **06-Projetos** — empty for now, reserved for bigger projects (like the future "Sistema de Contas").

## 7. How to run the exercises

```bash
gcc 01-Fundamentos/Exercises-N.c -o Exercises-N
./Exercises-N
```

(replace `N` with the exercise number and the folder path with wherever the file is located)

---

## 8. Exercises

### 📁 01-Fundamentos

### Exercise 1 — Basic input
**Goal:** Capture the user's name, age, and height and display the formatted data.
**Concepts practiced:**
- Primitive types (`char`, `int`, `float`)
- `char` array as a string
- `scanf` / `printf` with format specifiers

### Exercise 3 — Simple average
**Goal:** Read two grades and calculate their arithmetic mean.
**Concepts practiced:**
- Arithmetic expressions with `float`
- Storing an intermediate result in a variable

### 📁 02-Controle-de-Fluxo

### Exercise 2 — Calculator with `if/else if`
**Goal:** Choose and run a math operation from a menu.
**Concepts practiced:**
- Chained conditionals
- Local-scope variables
- Division-by-zero handling

### Exercise 4 — Number comparison
**Goal:** Report which of two numbers is greater, smaller, or equal.
**Concepts practiced:**
- Relational operators (`>`, `<`, `==`)
- `if/else if/else`

### Exercise 5 — School status (3 grades)
**Goal:** Calculate the average of three grades and classify the result.
**Concepts practiced:**
- Compound conditions (`&&`)
- Value ranges
- Custom messages per case

### Exercise 6 — Calculator with `switch`
**Goal:** Reimplement the exercise 2 calculator using `switch/case`.
**Concepts practiced:**
- The `switch` structure
- Using `break`

### 📁 03-Loops-e-Padroes

### Exercise 7 — `while` loop
**Goal:** Repeat a print statement a fixed number of times.
**Concepts practiced:**
- The `while` structure
- Counter variable
- Stopping condition

### Exercise 8 — Simple login/registration system
**Goal:** Simulate account creation and login, with a limited number of attempts.
**Concepts practiced:**
- `while` combined with `switch`
- `strcmp` for string comparison
- Control/flag variables to manage state

### Exercise 9 — `for` loop (simple counting)
**Goal:** Print the count from 1 up to a number entered by the user.
**Concepts practiced:**
- The `for` structure

### Exercise 10 — Multiplication table
**Goal:** Generate the multiplication table for a number entered by the user.
**Concepts practiced:**
- `for` applied to a classic problem

### Exercise 11 — Even and odd numbers
**Goal:** Classify and count even and odd numbers up to an entered value.
**Concepts practiced:**
- The modulo operator (`%`)
- `for` combined with `if/else`
- Accumulators

### Exercise 12 — Positives, negatives, and zeros
**Goal:** Count how many of 10 entered numbers are positive, negative, or zero.
**Concepts practiced:**
- Multiple counter variables
- `for` combined with `if/else if/else`

### Exercise 13 — Rectangle of asterisks
**Goal:** Draw a rectangle of `*` with rows and columns chosen by the user.
**Concepts practiced:**
- Nested loops (`for` inside `for`)

### Exercise 14 — Increasing triangle
**Goal:** Draw a triangle that grows by one row at a time.
**Concepts practiced:**
- Inner loop dependent on the outer loop's index

### Exercise 15 — Decreasing (mirrored) triangle
**Goal:** Draw a triangle that shrinks with each row.
**Concepts practiced:**
- Countdown inside the inner loop

### Exercise 16 — Rectangle of `#`
**Goal:** Draw a rectangle of `#` with independent rows and columns.
**Concepts practiced:**
- Reinforcing nested loops with parameterized dimensions

### Exercise 17 — Alternating row pattern
**Goal:** Alternate the character's alignment depending on whether the row is even or odd.
**Concepts practiced:**
- Conditional inside the inner loop

### Exercise 18 — Checkerboard pattern
**Goal:** Create an alternating checkerboard-style pattern.
**Concepts practiced:**
- Using `(i + j) % 2` to alternate characters

### 📁 04-Funcoes

### Exercise 19 — First function (`void`, no parameters)
**Goal:** Create and call a function that just prints a message.
**Concepts practiced:**
- Function declaration, definition, and calling
- The `void` type

### Exercise 20 — Function with a parameter (string)
**Goal:** Create a function that receives a string and displays it.
**Concepts practiced:**
- Passing parameters
- Passing a `char` array as an argument

### Exercise 21 — Function with a return value (squaring)
**Goal:** Create a function that takes a number and returns its square.
**Concepts practiced:**
- A function with a parameter and a return value
- Using the return value directly in `printf`

### Exercise 22 — Function with a return value (multiply by 2)
**Goal:** A variation of exercise 21, multiplying by 2 instead.
**Concepts practiced:**
- Reinforcing the parameter → processing → return pattern

### Exercise 23 — Function with two parameters (sum)
**Goal:** Create a function that adds two numbers received as parameters.
**Concepts practiced:**
- Functions with multiple parameters

### Exercise 24 — Function with internal conditional logic
**Goal:** Create a function that internally decides which value to return.
**Concepts practiced:**
- Functions combined with `if/else if/else`
- Encapsulating a whole decision inside a function

### Exercise 25 — Quadratic formula (multiple functions)
**Goal:** Calculate the roots of a quadratic equation using separate functions.
**Concepts practiced:**
- Breaking a problem into several smaller functions
- Function composition (`<math.h>` for the square root)

### Exercise 26 — Modular calculator with functions
**Goal:** Reimplement the calculator using one function per operation, chosen via `switch`.
**Concepts practiced:**
- Organizing logic into several small functions
- `switch` calling different functions

### Exercise 27 — Function returning a student's status
**Goal:** Calculate the average of three grades and return a code (0, 1, or 2) representing the student's status.
**Concepts practiced:**
- A function that returns a numeric "status"
- Translating that status into messages in `main`

### Exercise 28 — Class of students with parallel arrays
**Goal:** Register 5 students and calculate each one's average, still without using a struct.
**Concepts practiced:**
- An array of strings (`char nomes[5][50]`) and an array of grades
- Passing a "slice" of an array to a function (`notas + n*3`)

### 📁 05-Structs

### Exercise 29 — First struct
**Goal:** Register and display data for 3 students using `struct aluno`.
**Concepts practiced:**
- Defining a `struct`
- Array of structs

### Exercise 30 — Function receiving a struct
**Goal:** Create a function that receives a single student (struct) and displays it.
**Concepts practiced:**
- Passing a struct as a function parameter

### Exercise 31 — Function analyzing the student's status
**Goal:** Create a function that receives a student struct and returns their status (passed/borderline/failed).
**Concepts practiced:**
- Combining structs with a status-returning function

### Exercise 32 — Function calculating the class average
**Goal:** Create a function that receives an array of structs and calculates the class average.
**Concepts practiced:**
- A function receiving an array of structs
- Multiple functions working together (display, analyze, average)

### Exercise 33 — Variable number of students
**Goal:** Let the user decide, at runtime, how many students to register.
**Concepts practiced:**
- A variable-length array (VLA) based on a `quant` variable
- Avoiding hardcoded values scattered through the code
- Functions receiving the count as an extra parameter

---

## 9. Next steps

Things I haven't studied yet (and I'm not pretending I already know):

- Searching for a student by name (Exercise 34)
- Finding the student with the highest grade (Exercise 35)
- Pointers
- Passing by reference
- Dynamic memory allocation (`malloc`, `calloc`, `realloc`, `free`)
- More advanced memory handling
- Files
- Modularization with `.h` and `.c`
- More advanced C programming in general

## 10. Future projects

I plan to eventually use C in bigger projects, including terminal-based systems. One of them, still just in the planning/early-development stage and **not part of the current exercises**, is a project called "Sistema de Contas" — I've set aside the `06-Projetos` folder for when it (and others) get off the ground.

## 11. Status

🚧 Constantly evolving — this repository gets updated as I keep studying and solving new exercises.
