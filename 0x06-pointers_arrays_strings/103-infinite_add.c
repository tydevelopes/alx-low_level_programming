#include "main.h"
#include <string.h>

/**
 * infinite_add - add two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to buffer to store results
 * @size_r: size of the buffer
 * Return: returns pointer to r or 0 if results can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int sum = 0;
	int i;

	if (max_len + 1 > size_r)
		return (0);

	for (i = 0; i < max_len || carry != 0; i++)
	{
		sum = carry;
		if (i < len1)
			sum += n1[len1 - 1 - i] - '0';
		if (i < len2)
			sum += n2[len2 - 1 - i] - '0';
		carry = sum / 10;
		sum %= 10;
		r[max_len - i] = sum + '0';
	}
	if (r[0] == '\0')
		return (0);
	return (&r[max_len - i + 1]);
}
