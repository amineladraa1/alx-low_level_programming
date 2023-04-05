#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * Description: 'the program print a string in reverse order using recursion'
 *
 * @s: string to reverse
 *
 * Return: void (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
