#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int has_nondigit(char *s);

/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (has_nondigit(argv[i]) || n < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * has_nondigit - checks for non digit
 * @s: pointer to the string to check
 * Return: 1 if true, 0 otherwise
 */
int has_nondigit(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (isalpha(s[i]))
			return (1);
	}
	return (0);
}
