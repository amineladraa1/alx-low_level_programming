#include "main.h"

/**
 * leet - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: char to check
 *
 * Return: pointer to a char  (Success)
 */

char *leet(char *str)
{
	int i, j;
	char leet_map[256] = {0};
	char *leet_str = str;

	for (i = 0; i < 256; i++)
	{
	if (i == 'a' || i == 'A')
	{
		leet_map[i] = '4';
	} else if (i == 'e' || i == 'E')
	{
		leet_map[i] = '3';
	} else if (i == 'o' || i == 'O')
	{
		leet_map[i] = '0';
	} else if (i == 't' || i == 'T')
	{
		leet_map[i] = '7';
	} else if (i == 'l' || i == 'L')
	{
		leet_map[i] = '1';
	} else
	{
		leet_map[i] = (char)i;
	}
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		leet_str[j] = leet_map[str[j]];
	}

	return (leet_str);
}
