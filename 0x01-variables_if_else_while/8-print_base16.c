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
	char n_ch;
	char a_ch;

	n_ch = '0';
	a_ch = 'a';

	while (n_ch <= 57)
	{
		putchar(n_ch);
		n_ch++;
	}
	while (a_ch <= 122 && a_ch != 'g')
	{
		putchar(a_ch);
		a_ch++;
	}
	putchar('\n');
	return (0);
}
