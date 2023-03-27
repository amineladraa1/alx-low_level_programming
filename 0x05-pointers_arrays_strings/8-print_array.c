#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: 'the program's description'
 *
 * @a: number to check
 * @n: number to check
 *
 * Return: void (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		i == n - 1 ? printf("%d", a[i]) : printf("%d, ", a[i]);
	}
	printf("\n");
}
