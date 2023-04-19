#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * Description: 'the program's description'
 *
 * @name: name to print
 * @f: function to call
 *
 * Return: void (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	*(f)(name);
}
