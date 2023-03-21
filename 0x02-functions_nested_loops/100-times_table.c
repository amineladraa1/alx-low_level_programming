#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j, multi;

	if(n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
		for (j = 0 ; j <= n ; j++)
		{
			multi = i * j;
			if (multi >= 10)
                {
                        _putchar(' ');
			_putchar(' ');
                        _putchar((multi / 10) + '0');
                        _putchar((multi % 10) + '0');
                        if (j != n)
                                _putchar(',');
                } else
                {
                if (j != 0)
                {
                        _putchar(' ');
			_putchar(' ');
                        _putchar(' ');
                }
                        _putchar(multi + '0');
                        if (j != n)
                                _putchar(',');
                }
		}
		_putchar('\n');
		}
	}
}
