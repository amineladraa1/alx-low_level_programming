#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - Entry point
 *
 * Description: 'prints the linked list and return num of nodes'
 *
 * @h: structure to print
 *
 * Return: number of nodes (Success)
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		printf("Error\n");
        	return (1);
	}
	while (h)
	{
	printf("%d\n", h->n);
	counter++;
	h = h->next;
	}
	return (counter);
}
