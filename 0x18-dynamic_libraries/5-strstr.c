#include "main.h"
#include <string.h>

/**
 * _strstr - seaarches for a subtring
 * @haystack: pointer to string to search in
 * @needle: pointer to subtring to find
 * Return: pointer to the beginning of the located subtring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *ptr = NULL;

	if (!strlen(needle))
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (ptr == NULL)
					ptr = &haystack[i];
				i++;
			}
			else
			{
				if (ptr != NULL)
					i--;
				ptr = NULL;
				break;
			}
		}
		if (needle[j] == '\0' && ptr != NULL)
			break;
	}
	return (ptr);
}
