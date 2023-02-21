#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	int a = 97;
	int z = 122;
	int A = 65;
	int Z = 90;

	if ((c >= a && c <= z) || (c >= A && c <= Z))
		return (1);
	else
		return (0);
}
