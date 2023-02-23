#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: 0 if success
 */
int main(void)
{
	long int n;
	long int i;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);

	return (0);
}
