#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void reset_to_98(int *n);
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
