#include <stdio.h> /* More headers go here */

/**
 * main - Prints the alphabet in lowercase, then uppercase
 *
 * Description: This program prints the lowercase alphabet first,
 * followed by the uppercase alphabet, using only the `putchar`
 * function. It ends with a new line. No other functions like
 * `printf` or `puts` are allowed. `putchar` can be used only
 * three times in the code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}
