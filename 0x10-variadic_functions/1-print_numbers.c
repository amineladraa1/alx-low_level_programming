#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 *
 * Description: 'the program print numbers'
 *
 * @n: number of arguments
 * @separator: sepa string
 *
 * Return: void (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	if (separator == NULL || n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		(i == n - 1) ? printf("%d", arg) : printf("%d%s", arg, separator);  
	}
	printf("\n");
	va_end(args);
}
