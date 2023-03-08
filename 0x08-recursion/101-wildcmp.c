#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}
	if (*s1 == '\0' || *s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
