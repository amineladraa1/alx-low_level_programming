#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: number to check
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int length, i;
	char *end, *start, temp;


	length = 0;
	
	while (s[length] != '\0')
	{
		length++;
	}
	end = s;
	start = s;

	for (i = 0; i < length -1; i++)
	{
		end++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		end--;
		start++;
	}
}
