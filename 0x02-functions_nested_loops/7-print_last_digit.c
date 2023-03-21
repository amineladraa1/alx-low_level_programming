#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int calc;

	calc = n >= 0 ? n % 10 : (n % 10) * -1;

	_putchar(calc + '0');
	return (calc);
}
