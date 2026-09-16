🇧🇷 [Ler em Português](README.pt-br.md)

# Learning C — From Scratch

This folder gathers a sequence of C exercises, built progressively to solidify the fundamentals of the language: from input/output handling to more elaborate control structures, such as nested loops and stateful logic (login system).

Each `.c` file represents an independent exercise, compilable on its own. Binaries (`.exe`), build folders, IDE files, and OS files **are not tracked** — see the repository's `.gitignore`.

## Folder structure

```
Exercises-Variables-Fundamentals/  → Exercises 1 and 3
Exercises-Conditionals/            → Exercises 2, 4, 5, and 6
Exercises-Loops/                   → Exercises 7, 9, 10, 11, and 12
Exercises-Concept-Integration/     → Exercise 8
Exercises-Dynamic-Squares/         → Exercises 13 onward
```

## How to compile and run

```bash
gcc Exercises-Variables-Fundamentals/Exercises-N.c -o Exercises-N
./Exercises-N
```

(replace `N` with the exercise number and the folder path with wherever the file is located)

---

## Exercise summaries

### 📁 Exercises-Variables-Fundamentals

### `Exercises-1.c` — Basic input and output
Captures the user's name, age, and height via `scanf` and displays the formatted data with `printf`. **Adds:** primitive types (`char`, `int`, `float`), the use of `char` arrays as strings, and the fundamental `scanf`/`printf` pair with format specifiers (`%s`, `%d`, `%f`).

### `Exercises-3.c` — Simple average calculation
Reads two grades and calculates their arithmetic mean. **Adds:** arithmetic expressions with `float` and the idea of storing an intermediate result in a variable before displaying it.

### 📁 Exercises-Conditionals

### `Exercises-2.c` — Calculator with `if/else if`
A menu of operations (addition, subtraction, multiplication, division) chosen by the user, with division-by-zero handling. **Adds:** chained conditionals (`if/else if/else`), variables declared inside conditional blocks (local scope), and a first notion of error handling.

### `Exercises-4.c` — Number comparison
Compares two numbers and reports which is greater, smaller, or if they are equal. **Adds:** relational operators (`>`, `<`, `==`) combined with `if/else if/else`, reinforcing the conditional logic from the previous exercise.

### `Exercises-5.c` — School status (3 grades)
Calculates the average of three grades and classifies the result as "passed," "borderline," or "failed." **Adds:** compound conditions with logical operators (`&&`), value ranges (e.g., `media >= 5 && media < 7`), and custom messages per case.

### `Exercises-6.c` — Calculator with `switch`
Reimplements the calculator from exercise 2, but using `switch/case`. **Adds:** the `switch` structure as a more readable alternative to multiple `if/else if` statements, and the use of `break` to control flow between `case`s.

### 📁 Exercises-Loops

### `Exercises-7.c` — `while` loop
Prints "Hello World" 10 times using a counter. **Adds:** the `while` repetition structure, counter variable control, and a loop's stopping condition.

### `Exercises-9.c` — `for` loop (simple counting)
Reads a number and prints the count from 1 up to it. **Adds:** the `for` repetition structure, showing the syntax and usage difference compared to the `while` loop from exercise 7.

### `Exercises-10.c` — Multiplication table with `for`
Generates the multiplication table for a number entered by the user. **Adds:** reinforcement of the `for` loop applied to a classic problem (multiplication table), consolidating the use of counters and multiplication inside loops.

### `Exercises-11.c` — Even and odd number classification
Iterates through the numbers from 0 to the entered value, classifying each as even or odd and counting the total of each category. **Adds:** the use of the modulo operator (`%`) for parity checking, combining `for` with `if/else` inside the loop, and accumulators (`par`, `impar`) updated on each iteration.

### `Exercises-12.c` — Counting positives, negatives, and zeros (no arrays)
Reads 10 integers entered by the user and counts how many are positive, negative, or zero, without using arrays. **Adds:** reinforcement of `for` combined with multiple conditions (`if/else if/else`), the use of more than one counter variable at the same time, and practice solving a classification problem without relying on data structures (laying the groundwork for arrays later on).

### 📁 Exercises-Concept-Integration

### `Exercises-8.c` — Login system (the most advanced in the folder)
Simulates an account creation and login system, with a limited number of attempts, string comparison (`strcmp`), and state control (whether an account already exists or not). **Adds:** `while` loops combined with `switch`, string manipulation with the `<string.h>` library, the use of control/flag variables (`entrou`, `tentativas`, `contaExiste`) to manage program state, and a flow logic closer to a real application.

### 📁 Exercises-Dynamic-Squares

### `Exercises-13.c` — Rectangle of asterisks
Reads the number of rows and columns and prints a rectangle of `*` with those dimensions. **Adds:** the first contact with **nested loops** (`for` inside `for`), where the outer loop controls the rows and the inner one controls the columns — the base for all the visual patterns that follow.

### `Exercises-14.c` — Increasing triangle
Prints a right triangle of asterisks that grows by one line each iteration (1, 2, 3... up to `l`). **Adds:** the idea that the inner loop can depend on the outer loop's index (`j < i`), making the number of repetitions vary dynamically for each row.

### `Exercises-15.c` — Decreasing (mirrored) triangle
Prints a triangle that shrinks with each row, using a countdown in the inner loop (`j = l - i` down to `0`). **Adds:** finer manipulation of the inner loop's bounds, reinforcing how small changes in the stopping condition and starting point completely change the resulting pattern.

### `Exercises-16.c` — Rectangle of `#` (independent rows and columns)
Similar to exercise 13, but reads columns before rows and uses `#` as the character. **Adds:** reinforcement of nested loops with dimensions fully parameterized by the user, consolidating the "outer row, inner column" logic as a pattern for drawing shapes.

### `Exercises-17.c` — Rectangle with alternating row pattern
Draws a rectangle of `#`, but alternates the character's alignment ("# " or " #") depending on whether the row is even or odd. **Adds:** combining nested loops with a conditional (`if/else`) *inside* the inner loop, showing how to apply conditional logic to each cell of a visual pattern, not just to the loop's overall structure.

---

## Overall learning progression

| Level | Folder | Exercises | Core concepts |
|---|---|---|---|
| Fundamentals | Exercises-Variables-Fundamentals | 1, 3 | Variables, types, `scanf`/`printf` |
| Conditionals | Exercises-Conditionals | 2, 4, 5, 6 | `if/else`, `switch`, logical and relational operators |
| Loops | Exercises-Loops | 7, 9, 10, 11, 12 | `while`, `for`, counters, modulo operator, multiple accumulators |
| Concept integration | Exercises-Concept-Integration | 8 | Loops + conditionals + strings + state control |
| Nested loops / visual patterns | Exercises-Dynamic-Squares | 13, 14, 15, 16, 17 | `for` inside `for`, inner loop dependent on outer, conditional inside the loop, shape construction |

Overall, the folder covers the essential pillars of the C language — **input/output, data types, conditional structures, loops, and string manipulation** — culminating in exercises that already require combining several of these concepts to solve more realistic problems.
