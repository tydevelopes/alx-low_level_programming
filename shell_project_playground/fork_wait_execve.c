#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork, wait & execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid;
	int num_child_processes = 0;
	int status;

	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	while (num_child_processes < 5)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			sleep(2);	/* not needed */
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
			printf("Execution of process %u done.\n", child_pid);
		}
		num_child_processes++;
	}
	return (0);
}
