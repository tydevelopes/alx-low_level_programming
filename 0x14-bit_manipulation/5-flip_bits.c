#include "main.h"

/**
 * flip_bits - num of bits you need to flip to get from one num to another
 * @n: number to flip
 * @m: number to flip to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (__builtin_popcount(n ^ m));
}
