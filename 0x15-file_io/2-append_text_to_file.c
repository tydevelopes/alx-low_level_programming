#include "main.h"

/**
 * append_text_to_file -appends text at the end of a file
 * @filename: pointer to filename
 * @text_content: pointer to text content
 * Return: 1 0n success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written = -1;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
		bytes_written = write(file_descriptor, text_content,
				strlen(text_content));

	if (bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
