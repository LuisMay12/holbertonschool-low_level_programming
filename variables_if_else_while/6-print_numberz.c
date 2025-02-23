#include <stdio.h> /* More headers go here */

/**
 * main - Prints all single-digit numbers of base
 * 10 starting from 0
 *
 * Description: This program prints numbers 0 to 9 using only
 * the `putchar` function. It does not use any variables of
 * type `char` and is restricted to using `putchar` twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers from 0 to 9 using ASCII values */
	for (num = 48; num <= 57; num++)
		putchar(num);

	/* Print newline */
	putchar('\n');

	return (0);
}
