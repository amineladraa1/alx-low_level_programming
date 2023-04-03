#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: 'the program's description'
 *
 * @dest: char to check
 * @src: char to paste from
 * @n: act as a delimiter
 *
 * Return: pointer to dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
