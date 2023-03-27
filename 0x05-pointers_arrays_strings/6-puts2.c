#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: number to check
 *
 * Return: void (Success)
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0 ;i < length ;i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
