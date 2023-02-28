#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 * Return: zero if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	printf("%d\n", n);

	return (0);
}
