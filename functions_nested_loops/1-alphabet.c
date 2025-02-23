#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet
 * from 'a' to 'z',
 * followed by a new line. The function only uses
 * `_putchar` twice.
 */
void print_alphabet(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	/* Print newline */
	_putchar('\n');
}
