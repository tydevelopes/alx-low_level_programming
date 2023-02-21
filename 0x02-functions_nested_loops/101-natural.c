#include <stdio.h>

/**
 * main - compute and prints the sum of multiples of 3 and 5 below 1024
 *
 * Return: 0 if success
 */
int main(void)
{
	int n = 1024;
	int sum = 0;
	int i = 1;

	while (i < n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("Sum of all multiples of 3 and 5 below 1024 is %d\n", sum);

	return (0);
}
