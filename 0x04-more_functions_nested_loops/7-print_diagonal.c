#include "main.h"

/**
 * print_diagonal - print diagonal line using \
 * @n: number of diagonal line to print
 */
void print_diagonal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
