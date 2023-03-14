#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (str == NULL || str_len == 0 || ptr == NULL)
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
