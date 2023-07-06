#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - Entry point
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b != '/0')
	{
		if (*b == '0')
			res <<= 1;
		else if (*b == '1')
			res = (res << 1) | 1;
		else
			return (0);
		b++;
	}
	return (res);
}
