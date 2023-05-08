#include "main.h"
#include <string.h>

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

	if (filename == NULL)
		return (-1);

	length = strlen(text_content);
	des = open(filename, O_WRONLY | O_APPEND);
	written = write(des, text_content, length);

	if (des == -1 || written == -1)
		return (-1);
	close(des);
	return (1);
}
