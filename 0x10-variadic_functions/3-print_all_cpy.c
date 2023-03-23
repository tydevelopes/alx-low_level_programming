#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prins anything
 * @format: pointer to separator
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0;
	va_list p;

	va_start(p, format);
	while (*(format + i) != '\0')
	{
		if (strchr("cifs", *(format + i)) != NULL)
			count++;
		i++;
	}
	i = 0;
	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			printf("%s", va_arg(p, char *));
			break;
		default:
			break;
		}
		if (i != count)
			printf(" ");
		i++;
	}
	printf("\n");
	va_end(p);
}
