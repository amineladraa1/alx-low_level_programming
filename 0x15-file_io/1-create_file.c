#include "main.h"

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
	int des, written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(des, text_content, len);

	if (des == -1 || written == -1)
		return (-1);

	close(des);
	return (1);
}
