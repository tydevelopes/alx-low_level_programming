#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf('\n');

	return (0);
}
