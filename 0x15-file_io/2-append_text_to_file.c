#include "main.h"

/**
 * append_text_to_file -Entry point.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int des, written, length = 0;

	if (text_content == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	des = open(filename, O_WRONLY | O_APPEND);
	written = write(des, text_content, length);

	if (des == -1 || written == -1)
		return (-1);
	close(des);
	return (1);
}
