# Singly Linked Lists

This project is about implementing basic operations on singly linked lists in C.

## Files

### 0. Print list
**File:** `0-print_list.c`  
**Function:** `size_t print_list(const list_t *h);`  
- Prints all the elements of a `list_t` list.
- If the string is `NULL`, prints `[0] (nil)`.
- Returns the number of nodes.

---

### 1. List length
**File:** `1-list_len.c`  
**Function:** `size_t list_len(const list_t *h);`  
- Returns the number of elements in a linked list.

---

### 2. Add node at the beginning
**File:** `2-add_node.c`  
**Function:** `list_t *add_node(list_t **head, const char *str);`  
- Adds a new node at the beginning of the list.
- The string is duplicated.
- Returns the address of the new element, or `NULL` on failure.

---

### 3. Add node at the end
**File:** `3-add_node_end.c`  
**Function:** `list_t *add_node_end(list_t **head, const char *str);`  
- Adds a new node at the end of the list.
- The string is duplicated.
- Returns the address of the new element, or `NULL` on failure.

---

### 4. Free list
**File:** `4-free_list.c`  
**Function:** `void free_list(list_t *head);`  
- Frees the memory allocated for the list.
