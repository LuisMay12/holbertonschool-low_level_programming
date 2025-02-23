#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Description: This program prints the lowercase alphabet in
 * reverse order, from 'z' to 'a', using only the `putchar`
 * function. The output ends with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}
