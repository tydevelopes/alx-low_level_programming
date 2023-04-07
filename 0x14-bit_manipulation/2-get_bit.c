#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index to of the bit to get
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
