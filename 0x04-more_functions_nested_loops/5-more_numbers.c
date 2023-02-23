#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int b;

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;

			if (a != 0)
				_putchar(a + '0');
			-putchar(b + '0');
		}
	}
	_putchar('\n');
}
