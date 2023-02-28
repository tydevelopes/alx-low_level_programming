#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to convert
 * Return: extracted integer
 */
int _atoi(char *s)
{
unsigned int num = 0;
	int sign = 1;
	int ch_as_int = 0;
	char ch_b4_1st_digit;

	while (*s != '\0')
	{
		if (isdigit(*s))
		{
			if (num == 0)
			{
				ch_b4_1st_digit = *(--s);
				s++;
			}
			ch_as_int = *s - '0';
			num = num * 10 + ch_as_int;
		}
		else if (num != 0)
		{
			break;
		}
		s++;
	}
	if (ch_b4_1st_digit == '-')
		sign *= -1;

	return (num * sign);
}
