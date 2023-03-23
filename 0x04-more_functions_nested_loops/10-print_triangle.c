#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: 'the program's description'
 *
 * @size: number to check
 *
 * Return: void (Success)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
		for (j = 0; j < size - i; j++)
		{
		_putchar(' ');
		}
		for (k = 1; k <= size - j; k++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
	}
}
