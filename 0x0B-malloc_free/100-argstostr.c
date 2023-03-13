#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of strings
 * Return: pointer to contagenated string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	unsigned int len = 0;
	int pos = 0;
	unsigned int line_count = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len += 1;
		}
	}

	str = malloc(sizeof(char) * (len + line_count + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, pos++)
		{
			*(str + pos) = av[i][j];
		}
		*(str + pos) = '\n';
		pos++;
	}
	*(str + pos) = '\0';

	return (str);
}
