#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: 'the program's description'
 * @n: number to check
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			if (n == 98)
			{
			printf("%d", n);
			}
			else
			{
			printf("%d, ", n);
			}
			n++;
		}
	printf("\n");
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d, ", n);
			}
			n--;
		}
	printf("\n");
	}
}
