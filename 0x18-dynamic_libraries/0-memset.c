#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the string to be filled
 * @b: character to use
 * @n: length to fill
 * Return: pointer to the filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
