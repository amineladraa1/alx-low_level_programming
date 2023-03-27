#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: charecter to check
 *
 * Return: length of a string (Success)
 */

int _strlen(char *s)
{
	int length = 1;
	char cc;

	cc = *s;

	while ( cc != '\0')
	{	
	length++;
	cc++;
	}

	return (length);
}
