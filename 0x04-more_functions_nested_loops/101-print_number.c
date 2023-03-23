#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: void (Success)
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('_');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
