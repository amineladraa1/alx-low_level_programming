#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, i, numCoins;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = 0;

	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}
	}

	printf("%d\n", numCoins);
	return (0);
}
