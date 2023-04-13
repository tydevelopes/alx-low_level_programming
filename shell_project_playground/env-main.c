#include <stdio.h>

/**
 * main - prints the environment
 * @ac: args count
 * @av: argd values
 * @env: process environment
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	unsigned int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
