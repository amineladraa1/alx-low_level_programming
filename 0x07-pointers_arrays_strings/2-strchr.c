#include "main.h"

/**
 * _strchr - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: string to check
 * @c: character to follow
 *
 * Return: pointer to first occurrence (Success)
 */

char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			return(p);
		}
		s++;
	}
	return (0);
}
