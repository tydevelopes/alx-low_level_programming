#include "main.h"

/**
 * main - prints the environment
 * @ac: args count
 * @av: argd values
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
