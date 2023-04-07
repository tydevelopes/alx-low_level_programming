#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted string or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_bin = 0, i = 0, exp = 0, length = 0;

	if (!b)
		return (0);
	length = (unsigned int)strlen(b);

	if (length == 0)
		return (0);
	exp = length - 1;

	for (i = 0; i < length; i++, exp--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		converted_bin += (b[i] - '0') * _pow(2, exp);
	}
	return (converted_bin);
}

/**
 * _pow - calculate power of base, exponent
 * @base: base of power
 * @exp: exponent of power
 * Return: power of base and exp
 */
int _pow(int base, int exp)
{
	int res = 1;
	int i;

	for (i = 0; i < exp; i++)
	res *= base;

	return (res);
}
