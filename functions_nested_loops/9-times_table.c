#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: This function prints the multiplication table
 * for numbers 0 through 9, with proper formatting to align
 * the output correctly.
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			/* Print the first number without a comma */
			if (col == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Add extra space for single-digit numbers */
				if (product < 10)
					_putchar(' ');

				/* Print the product */
				if (product >= 10)
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
