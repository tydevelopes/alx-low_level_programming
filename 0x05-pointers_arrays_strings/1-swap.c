#include "main.h"

/**
 * swap_int - swap two ints using pointers
 * @a: pointer to first number
 * @b: pointer to second number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
