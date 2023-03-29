#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: 'the program's description'
 *
 * @a: array pointer
 * @n: number to check
 *
 * Return: void (Success)
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
