#include <stdio.h>

/**
 * main - prints name of program
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 if success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
