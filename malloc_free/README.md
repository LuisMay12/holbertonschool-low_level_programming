# Malloc and Free - Memory Allocation in C

This repository contains implementations of various functions that handle dynamic memory allocation using `malloc` and `free` in C.

## Exercises

### 0. Float like a butterfly, sting like a bee
**File:** `0-create_array.c`  
Write a function that creates an array of chars and initializes it with a specific character.

- **Prototype:** `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size == 0`
- Returns a pointer to the array, or `NULL` if it fails.

---

### 1. The woman who has no imagination has no wings
**File:** `1-strdup.c`  
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the given string.

- **Prototype:** `char *_strdup(char *str);`
- Uses `malloc` to allocate memory for the duplicate string.
- Returns `NULL` if `str == NULL` or if memory allocation fails.

---

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**File:** `2-str_concat.c`  
Write a function that concatenates two strings.

- **Prototype:** `char *str_concat(char *s1, char *s2);`
- The returned pointer points to a newly allocated space in memory containing `s1`, followed by `s2`, and null-terminated.
- If `NULL` is passed, treat it as an empty string.
- Returns `NULL` on failure.

---

### 3. If you even dream of beating me you'd better wake up and apologize
**File:** `3-alloc_grid.c`  
Write a function that returns a pointer to a 2D array of integers.

- **Prototype:** `int **alloc_grid(int width, int height);`
- Each element of the grid is initialized to `0`.
- Returns `NULL` if `width` or `height` is `0` or negative, or if memory allocation fails.

---

### 4. It's not bragging if you can back it up
**File:** `4-free_grid.c`  
Write a function that frees a 2D grid previously created by the `alloc_grid` function.

- **Prototype:** `void free_grid(int **grid, int height);`
- Properly deallocates all allocated memory.
