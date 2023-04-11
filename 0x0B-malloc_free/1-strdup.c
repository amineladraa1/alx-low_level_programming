#include <stdlib.h>
#include <string.h>

/**

 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new_s;

	if (str == NULL)
	{
		return (NULL);
	}

	new_s = malloc(sizeof(char) * strlen(str) + 1);

	if (new_s == NULL)
	{
		return (NULL);
	}

	memcpy(new_s, str, strlen(str) + 1);

	return (new_s);
}

