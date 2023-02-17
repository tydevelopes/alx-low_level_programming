#include <stdio.h>

/**
 * main - prints 0 to 9 using ASCII codes
 * Return: 0 if success
 */
int main(void)
{
	int i = 48;
	int nine = 57;

	while (i <= nine)
	{
		putchar(i);
		if (i != nine)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
