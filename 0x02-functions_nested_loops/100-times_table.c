#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number to print its times table
 */
void print_times_table(int n)
{
	int j, p, i = 0;

	while (i <= n && !(n < 0 || n > 15))
	{
		j = 0;
		while (j <= n)
		{
			p = i * j;
			if (p <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
			}
			else if (p <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((p / 100) + '0');
				_putchar((p % 100) / 10 + '0');
				_putchar((p % 10) + '0');
			}
			if (j != n)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
