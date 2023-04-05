#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: 'the program rise x to the power of y'
 *
 * @x: number to rise
 * @y: number to power
 *
 * Return: the power of x to the y (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
