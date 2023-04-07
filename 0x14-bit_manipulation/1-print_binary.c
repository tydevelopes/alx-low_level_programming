#include "main.h"
#include <limits.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number tp print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
