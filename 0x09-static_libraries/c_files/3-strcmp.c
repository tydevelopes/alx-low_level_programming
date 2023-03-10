#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: neg value if s1 < s2, 0 if s1 = s2, pos value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int same = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (same);
}
