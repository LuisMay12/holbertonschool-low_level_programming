#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string consists only of digits
 * @s: the string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *s)
{
int i = 0;

if (s[i] == '-')
{
i++;
}

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}

return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 if successful, 1 if an invalid argument is found
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
