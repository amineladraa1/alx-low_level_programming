#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: string to check
 * @accept: string to xeck from
 *
 * Return: unsigned int of length (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	int fflag = 1;

	while (*s != '\0' && fflag)
	{
		fflag = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				fflag = 1;
				length++;
				s++;
			}
		}
	}
	return (length);
}
