#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural nums from n to 98
 *
 *@n: number to start from
 */
void print_to_98(int n)
{
	int i = 98;

	if (n < i)
	{
		while (n <= i)
		{
			if (n != i)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else
	{
		while (n >= i)
		{
			if (n != i)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	printf("\n");
}
