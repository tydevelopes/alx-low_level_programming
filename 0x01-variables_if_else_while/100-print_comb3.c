#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits using ASCII codes
 * Return - 0 if success
 */
int main(void)
{
	int i = 48;
	int nine = 57;
	int j;

	while (i <= nine)
	{
		j = i;
		while (j <= nine)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == nine - 1 && j == nine))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
