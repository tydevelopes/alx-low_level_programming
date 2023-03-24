#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * get_arg_count - count arguments
 * @f: pointer to format list
 * Return: num of args
 */
int get_arg_count(const char * const f)
{
	int i = 0, count = 0;

	while (*(f + i) != '\0')
	{
		if (strchr("cifs", *(f + i)) != NULL)
			count++;
		i++;
	}
	return (count);
}

/**
 * update - update flag and increment args
 * @n: pointer variable
 * @f: pointer to variable
 */
void update(int *n, int *f)
{
	*n += 1;
	*f = 1;
}

/**
 * print_all - prins anything
 * @format: pointer to separator
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0, num_arg = 0, flag = 0;
	va_list p;
	char *s;

	va_start(p, format);
	count = get_arg_count(format);
	i = 0;
	while (*(format + i) != '\0' && num_arg < count)
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(p, int));
			update(&num_arg, &flag);
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			update(&num_arg, &flag);
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			update(&num_arg, &flag);
			break;
		case 's':
			s = va_arg(p, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			update(&num_arg, &flag);
			break;
		default:
			flag = 0;
			break;
		}
		if (num_arg != count && flag != 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(p);
}
