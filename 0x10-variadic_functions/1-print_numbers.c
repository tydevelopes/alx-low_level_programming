#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @separator: pointer to separator
 * @n: number of arguments to print
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n <= 0)
		return;
	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
