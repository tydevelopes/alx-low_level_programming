#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct func to perform the op asked by the user
 * @s: operator passed as argument to the program
 * Return: a pointer to the func that corresponds to the op given as a param
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
