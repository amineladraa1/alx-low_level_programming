#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: string to check
 * @accept: string to xeck from
 *
 * Return: pointer to first occurence (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
