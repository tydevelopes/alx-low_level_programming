#include <stdio.h>

/**
 * main - computes the first 50 fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	long int prev_n = 0;
	long int curr_n = 1;
	long int n = 0;
	int i = 0;

	while (i < 50)
	{
		n = prev_n + curr_n;
		prev_n = curr_n;
		curr_n = n;
		if (i != 49)
			printf("%ld, ", curr_n);
		else
			printf("%ld", curr_n);

		i++;
	}
	printf("\n");

	return (0);
}
