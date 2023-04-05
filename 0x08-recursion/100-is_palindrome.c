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
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - Entry point
 *
 * Description: 'helper function'
 *
 * @s: string to check
 * @begin: beginning
 * @end: end
 *
 * Return: 0 (fail) 1 (Success)
 */

int is_palindrome_helper(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, begin + 1, end - 1));
}


/**
 * _strlen_recursion - Entry point
 *
 * Description: 'calculate the length with recursion'
 *
 * @s: string to check
 *
 * Return: length (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
