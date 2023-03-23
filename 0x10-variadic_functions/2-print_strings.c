#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print number
 * @separator: pointer to separator
 * @n: number of arguments to print
 * @...: arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *cur_arg;

	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			cur_arg = va_arg(ptr, char *);
			if (cur_arg)
				printf("%s", cur_arg);
			else
				printf("(nil)");
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			cur_arg = va_arg(ptr, char *);
			if (cur_arg)
				printf("%s", cur_arg);
			else
				printf("(nil)");
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
