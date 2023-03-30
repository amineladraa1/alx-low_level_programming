#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: char to check
 *
 * Return: pointer to a string (Success)
 */

char *rot13(char *str)
{
	char *p = str;
	while (*p)
	{
	if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
	{
		*p += 13;
	}
	else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
	{
		*p -= 13;
	}
	p++;
	}
	return (str);
}
