#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Description: This function calculates and prints the last
 * digit of the given number. If the number is negative, it
 * ensures the last digit is positive before printing.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
