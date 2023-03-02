#include "main.h"

/**
 * reverse_array - reverse the content of array of integers
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int num_of_swaps = n / 2;
	int i;
	int temp;

	for (i = 0; i < num_of_swaps; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
