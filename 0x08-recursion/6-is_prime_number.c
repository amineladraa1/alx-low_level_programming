#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * Description: 'the program check if a number is prime'
 *
 * @n: number to check
 *
 * Return: 0 or 1 if it's a prime  (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_h(n, n - 1));
}

/**
 * _prime_h - Entry point
 *
 * Description: 'helper function'
 *
 * @n: number to check
 * @devisor: to devide n
 *
 * Return: 0 (failed) or 1 (Success)
 */

int _prime_h(int n, int devisor)
{
	if (devisor == 1)
	{
		return (1);
	}
	if (n % devisor == 0)
	{
		return (0);
	}
	return (_prime_h(n, devisor - 1));
}
