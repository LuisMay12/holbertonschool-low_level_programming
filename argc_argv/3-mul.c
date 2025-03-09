#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 if successful, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);

return (0);
}
