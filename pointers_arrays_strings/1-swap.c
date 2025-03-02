#include "main.h"

/**
 * swap_int - Updates swaps the values of two integers.
 * @a: Pointer to an integer
 * @b: Pointer to an integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
