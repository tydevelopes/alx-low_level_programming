#include "main.h"
#include <ctype.h>
#include <string.h>

char rotate_by_13(char ch);

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
			str[i] = rotate_by_13(str[i]);
	}

	return (str);
}

/**
 * rotate_by_13 - rotate character by 13 places
 * @ch: character to rotate
 * Return: rotated character
 */
char rotate_by_13(char ch)
{
	if (islower(ch))
		return (((ch - 'a' + 13) % 26) + 'a');
	else
		return (((ch - 'A' + 13) % 26) + 'A');
}
