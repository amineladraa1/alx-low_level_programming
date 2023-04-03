#include <stdio.h>

/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 *
 * @a: number to check
 * @size: size
 *
 * Return: void (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1 = 0;
	int i;
	int *ptr;
	int *ptr1;

	for (i = 0; i < size; i++)
	{
		ptr = a + ((i * size) + i);
		ptr1 = a + (i * size) + (size - i - 1);
		sum = sum + *ptr;
		sum1 = sum1 + *ptr1;
	}
	printf("%d, %d\n", sum, sum1);
}
