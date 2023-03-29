#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: number to check
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
		*p = *p - 'a' + 'A';
		}
	p++;
	}
	return (str);
}
