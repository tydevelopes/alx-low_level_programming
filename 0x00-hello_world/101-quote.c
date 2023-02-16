#include <stdio.h>
#include <string.h>

/**
 * main - prints a string
 * Return: 1 if error
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);

	fwrite(str, sizeof(char), len, stderr);

	return (1);
}
