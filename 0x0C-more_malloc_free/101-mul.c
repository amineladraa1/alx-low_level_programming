#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * multiply - Entry point
 *
 * Description: 'the program's multiply 2 numbers'
 *
 * @num1: number to multi
 * @num2: number to multi
 * Return: Always 0 (Success)
 */

void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len, i, carry, n1, j, n2, product;
	int *res;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	len = len1 + len2;
	res = calloc(len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!isdigit(num1[i]))
		{
		printf("Error\n");
		exit(98);
		}
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			if (!isdigit(num2[j]))
			{
				printf("Error\n");
				exit(98);
			}
		n2 = num2[j] - '0';
		product = n1 * n2 + res[i + j + 1] + carry;
		res[i + j + 1] = product % 10;
		carry = product / 10;
		}
	res[i] += carry;
	}

	i = 0;

	while (i < len-1 && res[i] == 0)
		i++;
	while (i < len)
	{
		printf("%d", res[i]);
		i++;
	}
	printf("\n");
	free(res);
}
/**
 * main - Entry point
 *
 * Description: 'check the 2 strings given in args'
 *
 * @argc: number to multi
 * @argv: number to multi
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
