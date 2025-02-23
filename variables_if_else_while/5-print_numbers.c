#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10
 * starting from 0
 *
 * Description: This program prints the numbers 0 to 9 in order,
 * followed by a new line. It does not use any extra functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers from 0 to 9 */
	for (num = 0; num < 10; num++)
		printf("%d", num);

	/* Print newline */
	printf("\n");

	return (0);
}
