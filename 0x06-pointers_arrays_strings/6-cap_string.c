#include "main.h"

/**
 * cap_string - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: string to check
 *
 * Return: pointer to a string (Success)
 */

char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;

	while (*p)
	{
	if (cap_next && (*p >= 'a' && *p <= 'z'))
	{
		*p = *p - 'a' + 'A';
		cap_next = 0;
	} else if (*p == ' ' || *p == '\t' || *p == '\n' ||
		*p == ',' || *p == ';' || *p == '.' ||
		*p == '!' || *p == '?' || *p == '"' ||
		*p == '(' || *p == ')' || *p == '{' || *p == '}')
	{
		cap_next = 1;
	}
	else
	{
		cap_next = 0;
	}
	p++;
	}

	return (str);
}
