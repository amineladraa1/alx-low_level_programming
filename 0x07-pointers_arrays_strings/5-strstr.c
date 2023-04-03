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
	while (*haystack)
	{
		char *hay = haystack;

		while (*needle && *needle == *hay)
		{
			hay++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
