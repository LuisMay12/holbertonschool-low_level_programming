#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the alphabet from
 * 'a' to 'z',
 * followed by a new line. It repeats this process 10 times.
 * The function only uses `_putchar` twice.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	/* Print alphabet 10 times */
	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
