#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: void (Success)
 */

void more_numbers(void)
{
	int i, j;
	char str[] = "01234567891011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 19; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
	}
}
