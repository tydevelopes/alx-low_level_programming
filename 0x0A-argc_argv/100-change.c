#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 if success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int i;
	int n;
	int divs[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (n < 0)
			break;
		cents += n / divs[i];
		n %= divs[i];
		if (n == 0)
			break;
	}
	printf("%d\n", cents);

	return (0);
}
