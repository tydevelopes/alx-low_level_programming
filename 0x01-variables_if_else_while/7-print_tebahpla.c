#include <stdlib.h>

/**
 * main - prints lowercase alphabets in reverse using ASCII codes
 * Return - 0 if success
 */
int main(void)
{
	int a = 97;
	int z = 122;

	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
