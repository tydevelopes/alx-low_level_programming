#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the  string to be added onto
 * @src: pointer to the string to add
 * @n: number of src to concate
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; *(src + i) != '\0'  && i < n; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
