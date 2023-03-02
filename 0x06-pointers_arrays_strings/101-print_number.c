#include "main.h"

int num_of_digits(unsigned int n);
int  _pow(int base, int exp);

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int digits;
	int digit;
	int divisor;
	int i;
	unsigned int num = n;
	int minus = 45;
	int zero = 48;

	digits = num_of_digits(n);

	if (n < 0)
	{
		_putchar(minus);
		num *= -1;
	}

	for (i = digits; i > 0; i--)
	{
		divisor = _pow(10, i - 1);
		digit = num / divisor;
		_putchar(digit + zero);
		num %= divisor;
	}
}

/**
 * num_of_digits - count digits in n
 * @num: number to count
 * Return: number of dogits
 */
int num_of_digits(unsigned int num)
{
	int n = num;
	int digits = 1;

	if (n < 0)
		n *= -1;

	while (n >= 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

/**
 * _pow - calculate power of base, exponent
 * @base: base of power
 * @exp: exponent of power
 * Return: power of base and exp
 */
int _pow(int base, int exp)
{
	int res = 1;
	int i;

	for (i = 0; i < exp; i++)
		res *= base;

	return (res);
}
