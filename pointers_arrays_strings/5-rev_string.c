#include "main.h"

/**
 * rev_string - Prints a string on reverse followed
 * by a new line
 * @s: Pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0, i;
char temp;

while (s[len] != '\0')
{
len++;
}

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
