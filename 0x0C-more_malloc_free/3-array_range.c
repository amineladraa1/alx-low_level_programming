#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point.
 *
 * Description:creates an array of integers
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
