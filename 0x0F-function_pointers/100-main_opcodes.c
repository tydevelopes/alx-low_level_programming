#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: arguments count
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *) main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *(p + i));

		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
