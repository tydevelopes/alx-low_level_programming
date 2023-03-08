#include "main.h"

int is_prime_helper(int n, int div);

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 * Return: returns 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - checks if an integer is prime
 * @n: the number to check
 * @div: the current divisor to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div - 1));
}
