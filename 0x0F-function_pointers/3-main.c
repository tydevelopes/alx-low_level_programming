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
	char *ops = "+-*/%";
	int num1;
	int num2;
	int (*op_func)(int, int);
	char *s1, *s2, *s3;

	s1 = argv[1];
	s2 = argv[2];
	s3 = argv[3];

	if (argc != 4 || !s1 || !s2 || !s3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!strchr(ops, s2[0]) || !get_op_func(s2))
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(s2, "/") || !strcmp(s2, "%")) && !strcmp(s3, "0"))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(s1);
	num2 = atoi(s2);

	op_func = get_op_func(s2);

	printf("%d\n", op_func(num1, num2));

	return (0);
}
