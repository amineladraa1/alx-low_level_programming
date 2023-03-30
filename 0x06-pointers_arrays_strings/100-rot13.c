#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: char to check
 *
 * Return: pointer to a string (Success)
 */

char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[]  =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *result = str;


	while (*str != '\0')
	{
	char c = *str;
	int i;

	for (i = 0; i < 52; i++)
	{
		if (c == letters[i])
		{
		c = rot13[i];
		break;
		}
	}
	*str = c;
	str++;
	}
	return (result);
}
