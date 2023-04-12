#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - super simple shell
 * Return: Always 0
 */
int main(void)
{
	pid_t child_pid;
	int status, i = 0;
	FILE *stream = stdin;
	char *line = NULL, *path_to_exec = NULL;
	size_t len = 0;
	ssize_t bytes_read = 0;

	printf("#cisfun$ ");
	while ((bytes_read = getline(&line, &len, stream)) != -1)
	{
		/* remove newline */
		path_to_exec = malloc(sizeof(char) * strlen(line));
		i = 0;
		while (line[i] != '\n')
		{
			path_to_exec[i] = line[i];
			i++;
		}
		path_to_exec[i] = '\0';

		char *argv[] = {path_to_exec, NULL};

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error");
		}
		else
		{
			if (wait(&status) == -1)
			{
				perror("Error");
				return (1);
			}
			printf("#cisfun$ ");
		}
	}
	free(line);
	fclose(stream);
	return (0);
}
