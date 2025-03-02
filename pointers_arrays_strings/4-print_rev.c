#include "main.h"

/**
 * print_rev - Prints a string on reverse followed
 * by a new line
 * @s: Pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

while (len > 0)
{
_putchar(s[len - 1]);
len--;
}
_putchar('\n');
}
