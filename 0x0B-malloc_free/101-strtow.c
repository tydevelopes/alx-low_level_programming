#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_only_spaces(char *s);

/**
 * strtow - splits a string into words
 * @str: pointer to string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	unsigned int len_word = 0;
	unsigned int words_count = 0;
	char **arr;
	char *word;
	unsigned int i = 0;
	unsigned int str_len = strlen(str);
	char *ptr = malloc(sizeof(char) * str_len + 1);

	if (is_only_spaces(str) || str == NULL || str_len == 0 || ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	word = strtok(ptr, " ");

	while (word)
	{
		words_count++;
		word = strtok(NULL, " ");
	}
	arr = malloc(sizeof(char *) * words_count + 1);

	if (arr == NULL)
		return (NULL);
	strcpy(ptr, str);
	word = strtok(ptr, " ");

	while (word)
	{
		len_word = strlen(word);
		arr[i] = malloc(sizeof(char) * len_word + 1);
		if (arr[i] == NULL)
			return (NULL);
		strcpy(arr[i], word);
		i++;
		word = strtok(NULL, " ");
	}
	arr[i] = NULL;
	free(ptr);
	return (arr);
}

/**
 * is_only_spaces - checks if string has only spaces
 * @s: pointer to string to check
 * Return: 1 if string has all spaces, 0 otherwise
 */
int is_only_spaces(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (!isspace(s[i]))
			return (0);
	return (1);
}
