#include <stdio.h>

/**
 * main - prints alphabets in lowercase, except q and e, using ASCII codes
 * Return: 0 if success
 */
int main(void)
{
	int a = 97;
	int z = 122;
	int e = 101;
	int q = 113;

	while (a <= z)
	{
		if (a == e || a == q)
		{
			a++;
			continue;
		}	
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
