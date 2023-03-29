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
	int cap_next = 1; // Start with next character capitalized

	while (*p)
	{
	if (cap_next && (*p >= 'a' && *p <= 'z'))
	{
		*p = *p - 'a' + 'A'; // Convert lowercase to uppercase
		cap_next = 0; // Next character shouldn't be capitalized
	} else if (*p == ' ' || *p == '\t' || *p == '\n' ||
		*p == ',' || *p == ';' || *p == '.' ||
		*p == '!' || *p == '?' || *p == '"' ||
		*p == '(' || *p == ')' || *p == '{' || *p == '}')
	{
		cap_next = 1; // Next character should be capitalized
	}
	else
	{
		cap_next = 0; // Next character shouldn't be capitalized
	}
	p++;
	}

	return (str);
}
