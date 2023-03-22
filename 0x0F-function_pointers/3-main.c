#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - perform arithmetic
 * @argc: arguments count
 * @argv: pointer to array of arguments
 * Return: 0 on success, 98 or 99 or 100 on error
 */
int main(int argc, char *argv[])
{
	char *op;
	char *ops = "+-*/%";
	int num1;
	int num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];

	if (strchr(ops, op[0]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(op, "/") || !strcmp(op, "%")) && !strcmp(argv[3], "0"))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	printf("%d\n", op_func(num1, num2));

	return (0);
}
