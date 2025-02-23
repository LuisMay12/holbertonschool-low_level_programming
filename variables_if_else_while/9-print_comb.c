#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Description: This program prints the numbers 0 to 9, separated
 * by a comma and a space. It follows all restrictions, using only
 * the `putchar` function and a maximum of four `putchar` calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers from 0 to 9 with commas and spaces */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Convert number to ASCII */

		/* Print comma and space except after the last number */
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
