#include "main.h"

/**
 * flip_bits - Entry point
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int d = n ^ m;

	while (d != 0)
	{
		counter += d & 1;
		d >>= 1;
	}
	return (counter);
}
