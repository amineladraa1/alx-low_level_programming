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
	int i;
	int j;

	i = 48;
	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = i + 1 ; j <= 57 ; j++)
		{
			if(i != j )
			{
				putchar(i);
				putchar(j);
				if(i + j != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
