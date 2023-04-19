#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * Description: 'the program's description'
 *
 * @array: array to check
 * @size: size of array
 * @action: callback function
 *
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
