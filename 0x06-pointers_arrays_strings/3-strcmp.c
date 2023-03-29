#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: 'the program's description'
 *
 * @s1: char to check
 * @s2: char to check
 *
 * Return: 0 if aqual 1 if s1 is bigger 2 if s2 is bigger (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -1 : 1);
		}
		s1++;
		s2++;
	}
	return (0);
}
