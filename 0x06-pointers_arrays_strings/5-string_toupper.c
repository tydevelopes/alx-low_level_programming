#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (islower(*s))
			*s = toupper(*s);
		s++;
	}
	return (str);
}
