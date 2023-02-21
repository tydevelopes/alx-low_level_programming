#include <stdio.h>

/**
 * main - prints the sum of even-valued terms of fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	long int prev_n = 0;
	long int curr_n = 1;
	long int n = 0;
	long int sum = 0;
	long int MAX = 4000000;

	while (curr_n < MAX)
	{
		n = prev_n + curr_n;
		prev_n = curr_n;
		curr_n = n;

		if (curr_n % 2 == 0)
			sum += curr_n;
	}
	printf("%ld\n", sum);

	return (0);
}
