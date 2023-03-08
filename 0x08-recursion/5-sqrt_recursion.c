#include "main.h"

int sqrt_helper(int n, int low, int high);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - computes the natural square root of a non-negative integer
 * @n: the number to find the square root of
 * @low: the lower bound of the range to search for the square root
 * @high: the upper bound of the range to search for the square root
 * Return: the natural square root of n
 */
int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int square = mid * mid;

	if (low > high)
		return (-1);
	if (square == n)
		return (mid);
	else if (square < n)
		return (sqrt_helper(n, mid + 1, high));
	else
		return (sqrt_helper(n, low, mid - 1));
}
