#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of n
 * @n: The number to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar('0' + d);

	return (d);
}
