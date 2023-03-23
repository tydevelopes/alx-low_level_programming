#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all params
 * @n: number of arguments to sum
 * @...: arguments to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	if (n <= 0)
		return (0);
	va_start(ptr, n);
	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
