#include "main.h"

/**
 * print_triangle - print triangle using #
 * @size: size of triangle
 */
void print_triangle(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < s - i; j++)
			_putchar(' ');
		for (int k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
