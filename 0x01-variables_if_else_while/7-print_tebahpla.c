#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
