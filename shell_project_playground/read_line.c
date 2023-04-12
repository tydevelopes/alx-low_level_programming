#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	FILE *stream = stdin;
	char *line = NULL;
	size_t len = 0;
	ssize_t bytes_read = 0;

	printf("$ ");

	if (stream == NULL)
		exit(EXIT_FAILURE);
	if ((bytes_read = getline(&line, &len, stream)) != -1)
	{
		write(STDOUT_FILENO,line, bytes_read);
	}
	free(line);
	fclose(stream);

	return (0);
}
