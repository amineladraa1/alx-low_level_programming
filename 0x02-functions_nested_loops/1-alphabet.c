#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
	char ch;
	ch = "a";
	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar("\n");
}
