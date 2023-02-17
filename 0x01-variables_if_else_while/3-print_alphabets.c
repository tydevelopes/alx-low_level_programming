#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase using ASCII codes
 * Return - 0 if success
 */
int main(void)
{
	int a = 97;
	int z = 122;
	int A = 65;
	int Z = 90;

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	while (A <= Z)
        {
                putchar(A);
                A++;
        }

	putchar('\n');

	return (0);
}
