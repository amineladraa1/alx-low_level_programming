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
	char end, start, temp;


	length = 0;
	
	while (s[i] != '\0')
	{
		length++;
	}
	end = s[length - 1];
	start = s[0];

	for (i = length - 1; i < length / 2; i++)
	{
		temp = end;
		end = start;
		start = temp;
		end--;
		start++;
	}
}
