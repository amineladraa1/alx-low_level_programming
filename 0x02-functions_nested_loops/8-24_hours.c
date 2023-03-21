#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	for (int i = 0;i < 24 ; i++)
	{
		for (int j = 0 ; j < 60 ; j++)
		{
			if(i < 10 && j < 10)
			{
				_putchar(0);
				_putchar(i);
				_putchar(':');
				_putchar(0);
				_putchar(j);
				_putchar('\n');
			}
			if (i < 10 && j > 10 )
			{
				_putchar(0);
				_putchar(i);
				_putchar(j);
				_putchar('\n');
			}
			if(i > 10 && j < 10)
			{
				_putchar(i);
				_putchar(':');
				_putchar(0);
				_putchar(j);
				_putchar('\n');
			}
			if(i > 10 && j > 10 )
			{
				_putchar(i);
				_putchar(':');
				_putchar(j);
				_putchar('\n');
			}
		}
	}
}
