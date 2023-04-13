#include <stdio.h>
#include <stdlib.h>


/**
* malloc_checked - Entry point
*
* Description: cause normal process termination
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/


void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}

