#include "main.h"

/**
 * is_palindrome - Entry point
 *
 * Description: 'the program checks if s is a polindrome'
 *
 * @s: number to check
 *
 * Return: 0 (fail) 1 (Success)
 */


int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	if (length <= 1)
	{
		return (1);
	}
	return (poli_h(s, 0,length - 1));
}


/**
 * poli_h - Entry point
 *
 * Description: 'helper function'
 *
 * @s: string to check
 * @begin: beginning
 * @end: end
 *
 * Return: 0 (fail) 1 (Success)
 */

int poli_h(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	else if (s[begin] != s[end])
	{
		return (0);
	}
	else
	{
	return (poli_h(s, begin + 1, end - 1));
	}
}
