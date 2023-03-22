#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execs a func given as a param on each element of an array
 * @array: pointer to array of ints
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
