#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Description: This program prints the numbers 0 to 9 followed
 * by the letters 'a' to 'f', representing base 16 (hexadecimal).
 * It uses only the `putchar` function, which is allowed to be
 * used three times in total.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* Print digits 0 to 9 */
	for (num = '0'; num <= '9'; num++)
		putchar(num);

	/* Print letters a to f */
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}
