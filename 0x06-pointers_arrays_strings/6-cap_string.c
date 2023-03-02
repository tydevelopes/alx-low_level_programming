#include "main.h"
#include <ctype.h>
#include <string.h>

int word_separator(char ch);

/**
 * cap_string - capitalizes all words of a string
 * @str: point to the string
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	int word_begin = 0;
	int word_end = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(word_separator(str[i])))
		{
			if (word_end)
			{
				word_begin = 1;
				word_end = 0;
			}
		}
		else
		{
			word_begin = 0;
			word_end = 1;
		}
		if (word_begin)
		{
			str[i] = toupper(str[i]);
			word_begin = 0;
			word_end = 0;
		}
	}
	return (str);
}

/**
 * word_separator - checks a character for word separator
 * @ch: character to check
 * Return: 1 if true, 0 otherwise
 */
int word_separator(char ch)
{
	char sep1[] = {' ', '\t', '\n', ',', ';', '.', '!', '\0'};
	char sep2[] = {'?', '"', '(', ')', '{', '}', '\0'};
	int i;
	int len1 = strlen(sep1);
	int len2 = strlen(sep2);

	for (i = 0; i < len1; i++)
	{
		if (sep1[i] == ch)
			return (1);
	}

	for (i = 0; i < len2; i++)
	{
		if (sep2[i] == ch)
			return (1);
	}

	return (0);
}
