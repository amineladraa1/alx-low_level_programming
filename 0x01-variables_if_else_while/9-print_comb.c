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
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0)
}
