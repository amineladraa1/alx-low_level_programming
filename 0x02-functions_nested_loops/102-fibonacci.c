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
	void fibonacci(int n)
	{
		int feb = 1;
		if (n > 1)
			feb += fibonacci(n - 1);
		printf("%d, ",feb);
	}
	fibonacci(50);
	return (0);
}
