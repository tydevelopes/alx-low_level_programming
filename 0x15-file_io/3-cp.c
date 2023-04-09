#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void handle_rw_error(char *message, char *filename, int exit_code);
void handle_closing_error(char *message, int fd, int exit_code);

/**
 * main - prints name of program
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int src_fd;
	int dest_fd;
	ssize_t bytes_read = -1;
	ssize_t bytes_written = -1;
	char *src_file = argv[1];
	char *dest_file = argv[2];
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		handle_rw_error("Error: Can't read from file", src_file, 98);

	dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (dest_fd == -1)
		handle_rw_error("Error: Can't write to", dest_file, 99);

	/* Read source into buffer, then write to dest*/
	while (bytes_read != 0)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			handle_rw_error("Error: Can't read from file", src_file, 98);

		bytes_written = write(dest_fd, buffer, 1024);
		if (bytes_written == -1)
			handle_rw_error("Error: Can't write to", dest_file, 99);

	}
	if (close(src_fd) == -1)
		handle_closing_error("Error: Can't close fd", src_fd, 100);

	if (close(dest_fd) == -1)
		handle_closing_error("Error: Can't close fd", dest_fd, 100);

	return (0);
}

/**
 * handle_rw_error - r/w error utility function
 * @message: pointer to message
 * @filename: pointer to filename
 * @exit_code: exit code
 */
void handle_rw_error(char *message, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * handle_closing_error - closing error utility function
 * @message: pointer to message
 * @fd: file descriptor
 * @exit_code: exit code
 */
void handle_closing_error(char *message, int fd, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, fd);
	exit(exit_code);
}
