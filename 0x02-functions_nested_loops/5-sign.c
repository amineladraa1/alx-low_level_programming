#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_printchar('+');
		return (1);	

	}else if (n == 0)
	{
		_printchar('0');
		return (0);
	}else
	{
		_printchar('-');
		return (-1);
	}
}
