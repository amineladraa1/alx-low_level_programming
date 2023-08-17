#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at index
 * @head: head of the linked list
 * @index: index of the node
 * Return: node (success) NULL (failure)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int idx = 0;

	while (cur)
	{
		if (idx == index)
			return (cur);
		cur = cur->next;
		idx++;
	}
	return (NULL);
}
