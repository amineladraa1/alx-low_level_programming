#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: 'the program's description'
 *
 * @dest: number to check
 * @src: charecter
 * Return: char * (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] <= '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}
	return (dest);
}
