#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string from dest to src
 * @dest: pointer to where string will be copied to
 * @src: pointer to string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len + 1; i++)
		dest[i] = src[i];

	return (dest);
}
