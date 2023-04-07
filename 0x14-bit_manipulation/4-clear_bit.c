#include "main.h"

/**
 * clear_bit -  sets  the value of a bit to 0 at a given index
 * @n: pointer to number to set bit in
 * @index: index of the bit to set
 * Return: 1 if it worked, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	/* clear a bit at index*/
	*n = *n & ~_pow(2, index);

	/* checks if a bit is cleared at index*/
	if (!(*n & (1 << index)))
		return (1);
	else
		return (-1);
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
