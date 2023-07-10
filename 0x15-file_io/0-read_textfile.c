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
	int desc;

	if (filename = NULL)
		return (0);

	desc = open(filename, O_RDONLY);

	if (desc == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer = NULL)
	{
		close(desc);
		return (0);
	}
	read_bytes = read(desc, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes == -1 || read_bytes == -1)
	{
		close(desc);
		free(buffer);
		return (0);
	}
	close(desc);
	free(buffer);
	return (write_bytes);
}
