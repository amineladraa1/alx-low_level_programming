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
	int length;

	while (*s != '\0')
	{
		length++;
	}
	if (length <= 1)
	{
		return (1);
	}
	return (_poli_h(s, 0,length - 1);
}


/**
 * _poli_h - Entry point
 *
 * Description: 'helper function'
 *
 * @s: string to check
 * @begin: beginning
 * @end: end
 *
 * Return: 0 (fail) 1 (Success)
 */

int _poli_h(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] == s[end])
	{
		return (_poli_h(s, begin + 1, end -1);
	}
	return (0);

}
