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

	ch = 'a';
	while(ch != EOF)
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
