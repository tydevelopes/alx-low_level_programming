#include "stdio.h"

int main(int argc, char **argv)
{
	unsigned int count = 0;

	printf("Number of arguments using argc: %u\n", argc);

	while (*(argv + count) != NULL)
	{

		printf("%s\n", *(argv + count));
		count++;
	}
	printf("Number of arguments using count var: %u\n", count);

	return (0);
}
