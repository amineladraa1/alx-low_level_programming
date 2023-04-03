#include "main.h"

/**
 * set_string - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: char to check
 * @to: char to check
 *
 * Return: void (Success)
 */

void set_string(char **s, char *to)
{
	*s = &*to;
}
