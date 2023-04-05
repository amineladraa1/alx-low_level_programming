#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: 'the program give the length of a string using recursion'
 *
 * @s: string to check
 *
 * Return: length of string (Success)
 */

int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return length + _strlen_recursion(s + 1);
}
