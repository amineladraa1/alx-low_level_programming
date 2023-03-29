#include "main.h"

/**
 * _strcat - Entry point
 *
 * Description: 'the program's description'
 *
 * @dest: char to paste in
 * @src: char to copy
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}
