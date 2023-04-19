#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: 'the program's description'
 *
 * @array: array to check
 * @size: size of array
 * @cmp: call back function
 *
 * Return: index (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);
		if  (flag == 1)
			return (i);
	}
	return (-1);
}
