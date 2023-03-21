#include "main.h"

/**
 * times_table - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i , j , multi;
	for ( i = 0 ; i < 10 ; i++)
	{
	for ( j = 0 ; j < 10 ; j++)
	{
		multi = i * j;
		if ( multi >= 10 )
		{
			_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}else
		{
			_putchar(multi + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
		_putchar('\n');
	}
}

