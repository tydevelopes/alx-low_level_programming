#include "main.h"

/**
 * print_diagonal - print diagonal line using
 * @n: number of diagonal line to print
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int back_slash = 92;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(back_slash);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
