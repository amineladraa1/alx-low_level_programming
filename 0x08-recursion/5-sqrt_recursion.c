#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * Description: 'the program's give the square root of a number'
 *
 * @n: number to squareroot
 *
 * Return: square root of n (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1)
	}
	else if (n == 0 || n == 1)
	{
		return (n)
	}
	else
	{
		sqrt(n , 1);
	}
}

int sqrt(int n,int guess)
{
	if (guess * guess == n)
	{
		return (guess)
	}
	else if (guess * guess < n)
	{
		sqrt(n ,guess - 1);
	}
	else
	{
		return (-1);
	}
}
