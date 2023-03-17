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
	int i, n1, n2;
	
	for (i = 1; i <= 10000; i++)
	{
		n1 = (i - 1) / 100;
		n2 = (i - 1) % 100;
		if (n1 <= n2)
		{
			putchar(n1 / 10 + '0');
			putchar(n1 % 10 + '0');
			putchar(' ');
			putchar(n2 / 10 + '0');
			putchar(n2 % 10 + '0');
			if (i < 10000)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
