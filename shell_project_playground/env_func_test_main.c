#include "main.h"

/**
 * main - prints the environment
 * @ac: args count
 * @av: args values
 * @env: process environment
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	printf("%s\n", _getenv("PATH"));
	print_dirs_in_path();

	return (0);
}
