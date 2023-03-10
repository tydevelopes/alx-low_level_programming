#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the  string to be added onto
 * @src: pointer to the string to add
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
