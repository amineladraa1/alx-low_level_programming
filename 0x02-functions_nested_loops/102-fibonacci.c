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
	int i, sum;
	
	sum = 0;
	printf("%d, ",1);
	printf("%d, ",2);
	for (i = 3 ; i < 50 ; i++)
	{
		sum += i;
		printf("%d, ",sum);
	}	
	return (0);
}
