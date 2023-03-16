#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to s1
 * @s2: pointer to s2
 * @n: number of bytes to copy from s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int copy_len;
	unsigned int i;
	unsigned int j;
	char *str;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = strlen(s1);
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = strlen(s2);
	copy_len = n >= s2_len ? s2_len : n;

	str = malloc(sizeof(char) * (s1_len + copy_len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (j = 0; j < copy_len; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
