#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: charecter to check
 *
 * Return: length of a string (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}
