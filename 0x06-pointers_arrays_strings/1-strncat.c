#include "main.h"

/**
 * _strncat - Entry point
 *
 * Description: 'the program's description'
 *
 * @dest: char to paste to
 * @src: char to copy
 * @n: number to delemit 
 * Return: a pointer dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	int i = 0;

	while (*src != '\0' && i < n)
	{
	*p++ = *src++;
	i++;
	}
	*p = '\0';
	return (dest);
}
