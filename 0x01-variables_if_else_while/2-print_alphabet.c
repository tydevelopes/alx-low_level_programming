#include <stdio.h>

/**
 * main - prints alphabets in lowercase using ASCII codes
 * Return - 0 if success
 */
int main(void)
{
	int a = 97;
	int z = 122;

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
