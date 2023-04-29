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
	size_t counter;

	if (h == NULL)
		return (-1);
	while (h->next)
	{
		if (h->n == NULL)
			printf("0");
		else
			printf("%u", h->n);
	counter++;
	h = h->next;
	}
	return (counter);
}
