#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: 'the program's description'
 *
 * @a: number to swap
 * @b: number to swap
 * Return: void (Success)
 */

void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
