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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
