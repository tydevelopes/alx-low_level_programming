#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of ints
 * @size: array size
 * @cmp: function pointer
 * Return: index of first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
