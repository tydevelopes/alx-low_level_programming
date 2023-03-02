#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to string
 * @size: size bytes to print
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", b[j] & 0xff);
			else
				printf("  ");
			if (j + 1 < size)
				printf("%02x", b[j + 1] & 0xff);
			else
				printf("  ");
			printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (isprint(b[j]))
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}
			printf("\n");
	}
}
