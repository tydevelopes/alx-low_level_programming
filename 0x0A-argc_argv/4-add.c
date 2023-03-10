#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (!n)
		{
			printf("Error\n");
			return (1);
		}
		if (n < 0)
			continue;
		sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
