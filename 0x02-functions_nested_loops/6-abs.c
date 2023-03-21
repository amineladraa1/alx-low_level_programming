#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int res;

	if (n >= 0)
		return (n);
	res = n * -1;

	return (res);
}
