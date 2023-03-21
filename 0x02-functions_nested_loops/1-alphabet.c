#include "main.h"

/**
 * print_alphabet- Entry point
 *
 * Description: 'the program's description'
 *
 * Return: void
 */


void print_alphabet(void)
{
	char ch;

	ch = *"a";

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
