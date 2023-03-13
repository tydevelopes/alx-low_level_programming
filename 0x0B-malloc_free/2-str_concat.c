#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int s_len;
	unsigned int i;
	unsigned int j;
	char *s;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = strlen(s1);
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = strlen(s2);

	s_len = s1_len + s2_len + 1;

	s = malloc(sizeof(char) * s_len);

	if (s != NULL)
	{
		for (i = 0, j = 0; i < s1_len; i++, j++)
			s[i] = s1[i];
		for (i = 0; i < s2_len; i++, j++)
			s[j] = s2[i];
		s[j] = '\0';
	}
	return (s);
}
