#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Calls a function to print a name.
 * @name: The name to print.
 * @f: Pointer to the function that prints the name.
 *
 * Description: Executes the function passed as a parameter
 *              to print the given name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
