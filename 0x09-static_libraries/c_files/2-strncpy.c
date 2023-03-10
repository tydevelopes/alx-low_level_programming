#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two strings
 * @dest: pointer to the  string to be added onto
 * @src: pointer to the string to add
 * @n: number of src to concate
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0'  && i < n; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
