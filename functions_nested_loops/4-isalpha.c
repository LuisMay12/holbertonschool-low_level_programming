#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Description: This function checks if the given character
 * is a letter,
 * either lowercase ('a' to 'z') or uppercase ('A' to 'Z').
 * If the character
 * is alphabetic, the function returns 1. Otherwise,
 * it returns 0.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
