#include "main.h"

/**
 * print_square - prints a square using #
 * @size: size of square
 */
void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			_putchar('#');
	}
	_putchar('\n');
}
