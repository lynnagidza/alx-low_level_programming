## Variadic Functions

This repository contains solutions for variadic function tasks in the ALX Low-Level Programming curriculum.

### Task 0: Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

**Prototype:** `int sum_them_all(const unsigned int n, ...);`

- If `n == 0`, return 0.

- File: [0-sum_them_all.c](./0x10-variadic_functions/0-sum_them_all.c)

### Task 1: To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`

- `separator` is the string to be printed between numbers.
- `n` is the number of integers passed to the function.
- You are allowed to use `printf`.
- If `separator` is `NULL`, don't print it.

- File: [1-print_numbers.c](./0x10-variadic_functions/1-print_numbers.c)

### Task 2: One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`

- `separator` is the string to be printed between the strings.
- `n` is the number of strings passed to the function.
- You are allowed to use `printf`.
- If `separator` is `NULL`, don't print it.
- If one of the strings is `NULL`, print `(nil)` instead.

- File: [2-print_strings.c](./0x10-variadic_functions/2-print_strings.c)

### Task 3: To be is a to be the value of a variable

Write a function that prints anything.

**Prototype:** `void print_all(const char * const format, ...);`

- `format` is a list of types of arguments passed to the function:
  - `c`: char
  - `i`: integer
  - `f`: float
  - `s`: char * (if the string is `NULL`, print `(nil)` instead)
  - Any other char should be ignored.
- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.
- You can use a maximum of:
  - 2 `while` loops
  - 2 `if` statements
- You can declare a maximum of 9 variables.
- You are allowed to use `printf`.

- File: [3-print_all.c](./0x10-variadic_functions/3-print_all.c)
