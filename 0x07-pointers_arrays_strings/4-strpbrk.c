#include "main.h"
#include <string.h>

int ch_in_str(char *, char);

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

/**
 * ch_in_str - checks if ch is in str
 * @str: pointer to string to check
 * @ch: character to check
 * Return: 1 if found, 0 otherwise
 */
int ch_in_str(char *str, char ch)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ch)
			return (1);
		ptr++;
	}
	return (0);
}
