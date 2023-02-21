#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j;
	int p;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			p = i * j;

			if (p <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if (j != 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
