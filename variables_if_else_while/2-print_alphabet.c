#include <stdio.h> /* More headers go here */

/**
 * main - Prints the alphabet in lowercase
 *
 * Description: This program prints the lowercase alphabet
 * using only
 * the `putchar` function, followed by a new line. No
 * other functions
 * like `printf` or `puts` are allowed. Only `putchar` can
 * be used
 * twice in the code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
