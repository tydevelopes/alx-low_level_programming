#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number tp print
 */
void print_binary(unsigned long int n)
{
	char first_bit_1_printed = 0;
	int num_shifts;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (num_shifts = NUM_OF_BITS; num_shifts >= 0; num_shifts--)
	{
		bit = (n & (1 << num_shifts)) >> num_shifts;

		/* Do not print leading zeros*/
		if (bit && !first_bit_1_printed)
			first_bit_1_printed = 1;

		if (first_bit_1_printed)
			printf("%d", bit);
	}
}
