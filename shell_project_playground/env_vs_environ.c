#include "main.h"
/**
 * main - prints the environment
 * @ac: args count
 * @av: argd values
 * @env: process environment
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	printf("Address of env: %p\n", *env);
	printf("Address of environ: %p\n", *environ);

	return (0);
}
