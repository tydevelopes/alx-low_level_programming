#include "main.h"

/**
 * _isdigit - Checks for digit character
 * @c: The character to be checked
 *
 * Return: 1 if the character is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
