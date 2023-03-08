#include "main.h"

/**
 * _pow_recursion - returns x raised to the power y
 * @x: base
 * @y: exponent
 * Return: returns result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
