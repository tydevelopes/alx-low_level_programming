#include <stdio.h>

/**
 * main - computes the first 98 fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	long double prev_n = 0;
	long double curr_n = 1;
	long double n = 0;
	int i = 0;

	while (i < 98)
	{
		n = prev_n + curr_n;
		prev_n = curr_n;
		curr_n = n;
		if (i != 97)
			printf("%.0Lf, ", curr_n);
		else
			printf("%.0Lf", curr_n);

		i++;
	}
	printf("\n");

	return (0);
}
