#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting integer
 * @max: ending integer
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		ptr[i] = min;
	return (ptr);
}
