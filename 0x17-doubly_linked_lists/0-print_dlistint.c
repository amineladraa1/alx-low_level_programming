#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: head of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	if ( *h == NULL || h == NULL)
		return (0);
	while ( h )
	{
		printf("%d\n", h->n);
		length += 1;
	}
	return (length);
}
