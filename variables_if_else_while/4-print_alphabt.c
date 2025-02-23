#include <stdio.h> /* More headers go here */

/**
 * main - Prints the alphabet in lowercase, excluding 'q' and 'e'
 *
 * Description: This program prints the lowercase alphabet while
 * skipping the letters 'q' and 'e'. It uses only the `putchar`
 * function, which is allowed to be used twice. The output ends
 * with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet excluding 'q' and 'e' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
