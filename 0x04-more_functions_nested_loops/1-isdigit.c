#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: 'the program's description'
 *
 * @c: number to check
 *
 * Return: 0 and 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);	
}
