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
	int k;
	
	for (i = 48 ; i <= 57 ; i ++)
	{
		for (j = i+1 ; j <= 57 ; j++)
		{
			for (k = j+1 ; k <= 57 ; k++)
			{
				if ((i != j) != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}	
			}	
		}	
	}
	putchar('\n');
	return (0);
}
