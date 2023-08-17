#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at the provided index
 * @head: pointer to head of the linked list
 * @index: index to insert into
 * Return: 1 (success) -1 (failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *hdr;
	unsigned int idx;

	current = *head;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	idx = 0;

	while (current != NULL)
	{
		if (idx == index)
		{
			if (idx == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hdr->next = current->next;
				if (current->next != NULL)
					current->next->prev = hdr;
			}
			free(current);
			return (1);
		}
		hdr = current;
		current = hdr->next;
		idx++;
	}
	return (-1);
}
