#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string to compare
 * Return: pointer to the byte in s that one of the bytes in accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = NULL;
	int i = 0;

	while (s[i] != '\0')
	{
		if (ch_in_str(accept, s[i]))
		{
			ptr = &s[i];
			break;
		}
		i++;
	}
	return (ptr);
}
