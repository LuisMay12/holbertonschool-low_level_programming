# Function Pointers

This project demonstrates the use of **function pointers** in C to build modular, flexible, and reusable code. Each task involves using or implementing functions that receive other functions as parameters or return them as results.

---

## File: `0-print_name.c`

**Description:**  
Defines a function that takes a name (string) and a function pointer as arguments, and calls the provided function to print the name. This allows different behaviors when printing a name (e.g., as-is, uppercase).

---

## File: `1-array_iterator.c`

**Description:**  
Implements a function that takes an array of integers, its size, and a function pointer. It executes the given function on each element of the array, enabling flexible processing like printing or transforming data.

---

## File: `2-int_index.c`

**Description:**  
Defines a function that searches for an integer in an array based on a condition specified by a comparison function. It returns the index of the first element that satisfies the condition or -1 if no match is found or if the input is invalid.

---

## File: `3-calc.h`

**Description:**  
This header file declares the structure `op_t` used for mapping operators to their corresponding functions. It also declares the function prototypes used in the calculator program.

---

## File: `3-op_functions.c`

**Description:**  
Contains the implementations of five arithmetic operations: addition, subtraction, multiplication, division, and modulo. Each function takes two integers as input and returns the result of the operation.

---

## File: `3-get_op_func.c`

**Description:**  
Implements a function that selects the correct arithmetic function based on the operator provided as input. It returns a pointer to the appropriate function or `NULL` if the operator is invalid.

---

## File: `3-main.c`

**Description:**  
Contains the main entry point for the calculator program. It parses command-line arguments, validates input, selects the appropriate operation, and executes it using function pointers. It handles errors such as invalid operators, division by zero, and incorrect number of arguments.

