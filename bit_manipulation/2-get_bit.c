#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to extract the bit from.
 * @index: Index of the bit to retrieve, starting from 0.
 *
 * Return: Value of the bit (0 or 1), or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
