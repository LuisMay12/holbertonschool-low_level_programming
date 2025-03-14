# 🐶 Structures and Typedef in C

This project focuses on defining and managing structures in C, specifically working with a `dog` structure. It includes functions to initialize, print, create, and free instances of this structure.

## 📌 Tasks Overview

1. **Define a `struct dog`**  
   - Contains `name`, `age`, and `owner`.

2. **Initialize a `struct dog`**  
   - Function: `void init_dog(struct dog *d, char *name, float age, char *owner);`

3. **Print a `struct dog`**  
   - Function: `void print_dog(struct dog *d);`  
   - Prints `(nil)` if an element is NULL.

4. **Create a `dog_t` type**  
   - Defines `dog_t` as an alias for `struct dog`.

5. **Create a new dog**  
   - Function: `dog_t *new_dog(char *name, float age, char *owner);`  
   - Copies `name` and `owner`.

6. **Free a `dog_t` instance**  
   - Function: `void free_dog(dog_t *d);`  
   - Ensures no memory leaks.
