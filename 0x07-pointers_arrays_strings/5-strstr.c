#include "main.h"

/**
 * _strstr - Entry point
 *
 * Description: 'the program's description'
 *
 * @haystack: string to check
 * @needle: string to find
 *
 * Return: pointer to occurence or null (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *n = needle;

		while (*n != '\0' && *n == *hay)
		{
			hay++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
