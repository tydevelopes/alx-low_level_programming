#include <stdio.h>

/**
 * main - prints all possible diff combinations of three digits using ASCII codes
 * Return: 0 if success
 */
int main(void)
{
	int i = 48;
	int nine = 57;
	int j;
	int k;

	while (i <= nine)
	{
		j = i;
		while (j <= nine)
		{
			k = j;
			while (k <= nine)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == nine - 2 && j == nine - 1 && k == nine))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
