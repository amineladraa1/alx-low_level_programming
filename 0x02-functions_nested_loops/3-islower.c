#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'the program's description'
 *@parameters : c is an integer
 * Return: if c is lowercase 1 , else return 0  (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
