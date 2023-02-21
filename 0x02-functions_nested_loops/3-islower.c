#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int a = 97;
	int z = 122;

	if (c >= a && c <= z)
		return (1);
	else
		return (0);
}
