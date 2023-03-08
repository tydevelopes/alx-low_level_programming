#include "main.h"

/**
 * sqrt_helper - returns the natural square root of a number
 * @n: input number
 * @d: divisor
 * Return: square root, -1 otherwise
 */
int sqrt_helper(int n, int d)
{
	if (d % (n / d) == 0)
	{
		if (d * (n / d) == n)
			return (d);
		else
			return (-1);
	}
	return (sqrt_helper(n, d + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 2));
}
