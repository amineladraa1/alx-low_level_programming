#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: number to check
 *
 * Return: void (Success)
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (length % 2 == 0)
		{
			if (i >= length  / 2)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i > (length - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');

}
