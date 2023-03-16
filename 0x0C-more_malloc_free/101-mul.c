#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_all_digits(char *s);
char *multiply(char *n1, char *n2);

/**
 * main - multiply two positive string integers
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success, 98 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_all_digits(argv[1]) || !is_all_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%s\n", multiply(argv[1], argv[2]));

	return (0);
}

/**
 * multiply - multiply two positive string integers
 * @n1: first string
 * @n2: second string
 * Return: pointer to results
 */
char *multiply(char *n1, char *n2)
{
	unsigned int len1 = strlen(n1);
	unsigned int len2 = strlen(n2);
	unsigned int i_n1 = 0;
	unsigned int i_n2 = 0;
	unsigned int carry = 0;
	unsigned int num1 = 0;
	unsigned int num2 = 0;
	unsigned int sum = 0;
	int i;
	int j;
	int k;
	int *result;
	char *s;

	if (len1 == 0 || len2 == 0)
		return ("0");
	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		return (NULL);
	memset(result, 0, sizeof(int) * (len1 + len2));
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		num1 = n1[i] - '0';

		i_n2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			num2 = n2[j] - '0';
			sum = num1 * num2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}
	i = len1 + len2 - 1;
	while (i >= 0 && result[i] == 0)
		i--;
	if (i == -1)
		return ("0");
	s = malloc(sizeof(char) * (i + 2));
	if (s == NULL)
		return (NULL);
	while (i >= 0)
		s[k++] = result[i--] + '0';
	s[k] = '\0';
	free(result);
	return (s);
}

/**
 * is_all_digits - check if string contains only digits
 * @s: pointer to string to check
 * Return: 1 if only digits, 0 otherwise
 */
int is_all_digits(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (!isdigit(*(s + i)))
			return (0);
		i++;
	}
	return (1);
}
