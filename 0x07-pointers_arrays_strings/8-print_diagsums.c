#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to int
 * @size: size of each array in a 2D array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0, j = 0; i < size; i++, j++)
		sum_diag1 += *(a + (i * size + j));

	for (i = size - 1, j = 0; i >= 0; i--, j++)
		sum_diag2 += *(a + (i * size + j));

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
