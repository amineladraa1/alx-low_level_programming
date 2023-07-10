#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Entry point.
 *
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;
	int descriptor;

	if (filename = NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer = NULL)
	{
		close(descriptor);
		return (0);
	}
	read_bytes = read(descriptor, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes == -1 || read_bytes == -1)
	{
		close(descriptor);
		free(buffer);
		return (0);
	}
	close(descriptor);
	free(buffer);
	return (0);
}
