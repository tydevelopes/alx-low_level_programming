#include "main.h"

/**
 * flip_bits - num of bits you need to flip to get from one num to another
 * @n: number to flip
 * @m: number to flip to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_flips = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			num_of_flips++;
		n = n >> 1;
		m = m >> 1;
	}

	return (num_of_flips);
}
