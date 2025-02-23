#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function prints '+' if the number is greater
 * than zero, '0' if the number is zero, and '-' if the number is
 * less than zero. It returns 1, 0, or -1 respectively.
 *
 * Return: 1 if the number is positive, 0 if zero,
 * -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
