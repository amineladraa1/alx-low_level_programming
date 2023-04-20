#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * Description: 'the program's sum the args'
 *
 * @n: number of args
 *
 * Return: the sum (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total, arg;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		total += arg;
	}
	va_end(args);
	return (total);
}
