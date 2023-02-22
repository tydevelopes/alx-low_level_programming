#include <stdio.h>

/**
 * main - computes the first 98 fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	unsigned long int MAX = 1000000000;
	unsigned long int prev_n_1st_half = 0 / MAX;
	unsigned long int prev_n_2nd_half = 0 % MAX;
	unsigned long int curr_n_1st_half = 1 / MAX;
	unsigned long int curr_n_2nd_half = 1 % MAX;
	unsigned long int n_1st_half = 0;
	unsigned long int n_2nd_half = 0;
	int i = 0;
	long int ovf;

	while (i < 98)
	{
		ovf = (prev_n_2nd_half + curr_n_2nd_half) / MAX;
		n_2nd_half = (prev_n_2nd_half + curr_n_2nd_half) - (MAX * ovf);
		n_1st_half = prev_n_1st_half + curr_n_1st_half + ovf;
		prev_n_1st_half = curr_n_1st_half;
		prev_n_2nd_half = curr_n_2nd_half;
		curr_n_1st_half = n_1st_half;
		curr_n_2nd_half = n_2nd_half;

		if (i != 97)
		{
			if (curr_n_1st_half == 0)
				printf("%lu, ", curr_n_2nd_half);
			else
				printf("%lu%lu, ", curr_n_1st_half, curr_n_2nd_half);
		}
		else
			printf("%lu%lu", curr_n_1st_half, curr_n_2nd_half);
		i++;
}
	printf("\n");

	return (0);
}
