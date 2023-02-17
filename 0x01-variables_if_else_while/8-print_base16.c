#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase and using ASCII codes
 * Return: 0 if success
 */
int main(void)
{
	int i = 48;
	int nine = 57;
	int j = 97;
	int f = 102;

	while (i <= nine)
	{
		putchar(i);
		i++;
	}

	while (j <= f)
        {
                putchar(j);
                j++;
        }

	putchar('\n');

	return (0);
}
