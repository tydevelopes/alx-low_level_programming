#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: leetters to read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
		return (0);

	close(file_descriptor);


	return (bytes_written);
}
