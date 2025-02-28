# More Functions and Nested Loops

This repository contains a set of C programs that demonstrate the use of functions and nested loops.

## Table of Contents
- [isdigit](#isdigit)
- [Multiplication](#multiplication)
- [Print Numbers](#print-numbers)
- [Print Most Numbers](#print-most-numbers)
- [More Numbers](#more-numbers)
- [Print Line](#print-line)
- [Print Diagonal](#print-diagonal)
- [Print Square](#print-square)
- [Fizz-Buzz](#fizz-buzz)
- [Print Triangle](#print-triangle)

## isdigit
A function that checks if a character is a digit (0-9).

- **Prototype:** `int _isdigit(int c);`
- **Returns:** `1` if `c` is a digit, otherwise `0`.

## Multiplication
A function that multiplies two integers.

- **Prototype:** `int mul(int a, int b);`

## Print Numbers
A function that prints numbers from `0` to `9`, followed by a new line.

- **Prototype:** `void print_numbers(void);`
- **Restrictions:** Only `_putchar` can be used twice.

## Print Most Numbers
A function that prints numbers from `0` to `9`, except `2` and `4`, followed by a new line.

- **Prototype:** `void print_most_numbers(void);`
- **Restrictions:** Only `_putchar` can be used twice.

## More Numbers
A function that prints numbers from `0` to `14`, ten times.

- **Prototype:** `void more_numbers(void);`
- **Restrictions:** Only `_putchar` can be used three times.

## Print Line
A function that prints a straight line of `_` characters.

- **Prototype:** `void print_line(int n);`
- **Rules:** If `n <= 0`, prints only `\n`.

## Print Diagonal
A function that prints a diagonal line using `\`.

- **Prototype:** `void print_diagonal(int n);`
- **Rules:** If `n <= 0`, prints only `\n`.

## Print Square
A function that prints a square using `#`.

- **Prototype:** `void print_square(int size);`
- **Rules:** If `size <= 0`, prints only `\n`.

## Fizz-Buzz
A program that prints numbers from `1` to `100`:
- Prints `Fizz` for multiples of `3`
- Prints `Buzz` for multiples of `5`
- Prints `FizzBuzz` for multiples of both `3` and `5`

## Print Triangle
A function that prints a right-angled triangle using `#`.

- **Prototype:** `void print_triangle(int size);`
- **Rules:** If `size <= 0`, prints only `\n`.

## Repository
**GitHub repository:** `holbertonschool-low_level_programming`  
**Directory:** `more_functions_nested_loops`
