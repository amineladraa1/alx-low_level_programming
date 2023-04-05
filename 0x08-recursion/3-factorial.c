#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: 'the program's return the factorial of a number'
 *
 * @n: number to factor
 *
 * Return: factorial of n (Success)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
