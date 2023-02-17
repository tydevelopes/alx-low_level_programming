#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
