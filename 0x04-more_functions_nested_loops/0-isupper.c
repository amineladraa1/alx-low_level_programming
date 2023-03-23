#include "main.h"


/**
 * _isupper - Entry point
 *
 * Description: 'the program's description'
 *
 * @c: character to check
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
