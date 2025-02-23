#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value for
 *
 * Description: This function returns the absolute value of a
 * given integer. If the number is negative, it returns the
 * positive equivalent. Otherwise, it returns the same number.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
