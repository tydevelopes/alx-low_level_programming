#include "main.h"

/**
 * print_dirs_in_path - prints each dir contained in the environment variable
 */
void print_dirs_in_path(void)
{
	char *value = _getenv("PATH");

	while (*value != '\0')
	{
		if (*value == ':')
		{
			putchar('\n');
		}
		else
		{
			putchar(*value);
		}
		value++;
	}
	putchar('\n');
}
