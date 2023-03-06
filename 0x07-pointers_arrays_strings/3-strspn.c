#include "main.h"

int ch_in_str(char *, char);

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string to search
 * @accept: pointer to string to compare
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (!ch_in_str(accept, s[i]))
			break;
		i++;
	}
	return (i);
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
