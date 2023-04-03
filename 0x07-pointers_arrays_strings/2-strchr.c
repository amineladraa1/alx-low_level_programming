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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
