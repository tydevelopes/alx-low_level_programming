#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search
 * Return: pointer to the first character found
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;
	unsigned int i;
	unsigned int len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
