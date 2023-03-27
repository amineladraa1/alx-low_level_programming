#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: number to check
 *
 * Return: void (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
