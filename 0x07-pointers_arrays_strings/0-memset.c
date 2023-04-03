#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: char to check
 * @b: char to add
 * @n: int to delimit
 *
 * Return: pointer to s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (*s != '\0' && i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return s;
}
