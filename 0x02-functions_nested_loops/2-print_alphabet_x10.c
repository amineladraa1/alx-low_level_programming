#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i * 10);
	}
	_putchar('\n');
}
