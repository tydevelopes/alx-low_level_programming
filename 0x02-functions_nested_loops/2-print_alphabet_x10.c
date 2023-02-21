#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase using ASCII
 * codes
 */
void print_alphabet_x10(void)
{
	int a;
	int z;
	int i = 0;

	while (i < 10)
	{
		a = 97;
		z = 122;

		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');

		i++;
	}
}
