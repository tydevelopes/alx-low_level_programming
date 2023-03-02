#include "main.h"
#include <ctype.h>
#include <string.h>

void replace_ch_with_n(char *, char, char);

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	replace_ch_with_n(str, 'a', '4');
	replace_ch_with_n(str, 'e', '3');
	replace_ch_with_n(str, 'o', '0');
	replace_ch_with_n(str, 't', '7');
	replace_ch_with_n(str, 'l', '1');

	return (str);
}

/**
 * replace_ch_with_n - replaces character with number
 * @s: pointer to string
 * @ch: character to replace
 * @n: digit to use to replace ch
 */
void replace_ch_with_n(char *s, char ch, char n)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == tolower(ch) || s[i] == toupper(ch))
			s[i] = n;
	}
}
