#include "main.h"
#include <stdio.h>
#include <stdlib.h>




/**
 * create_buffer - Entry point
 *
 * Description : Allocates 1024 bytes for a buffer.
 *
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Entry point
 * Description: Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 *
 * Description: the program's return 0
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int red, written, file_from, file_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	red = read(file_from, buffer, 1024);

	while (red > 0)
	{
		if (file_from == -1 || red == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			free(buffer);
			return (98);
		}
		written = write(file_to, buffer, red);

		if (file_to == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		red = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
