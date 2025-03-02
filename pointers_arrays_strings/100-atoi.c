#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;
int found_number = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
found_number = 1;
}
else if (found_number)
break;

i++;
}

return (sign * (result));
}
