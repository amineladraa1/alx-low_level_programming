#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - get the length of the list
 * @h: head of the linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		num_elem += 1;
	}
	return (num_elem);
}
