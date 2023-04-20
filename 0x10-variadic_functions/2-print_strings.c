#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 *
 * Description: 'the program's print strings'
 *
 * @n: number of args
 * @separator: sepa string
 *
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		(i == n - 1 || separator == NULL)
		? printf("%s", str)
		: printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(args);
}
