#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: number to check
 *
 * Return: void (Success)
 */

void print_rev(char *s)
{
	int lng = 0;
	int i;

	while (s[lng] != '\0')
	{
		lng++;
	}
	for (i = lng - 1; i >=0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
