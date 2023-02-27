#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = len / 2;

	if (len % 2 != 0)
		n = len + 1;

	str += n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
