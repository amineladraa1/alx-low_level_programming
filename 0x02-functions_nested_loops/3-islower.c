#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'the program's description'
 *
 * @c:the character to be checked
 *
 * Return: if c is lowercase 1 , else return 0  (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
