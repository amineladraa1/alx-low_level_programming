#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_file - Entry point.
 *
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (des == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(des, text_content, strlen(text_content));
		if (written != strlen(text_content))
		{
		close(des);
		return (-1);
		}
	}
	close(des);
	return (1);
}
