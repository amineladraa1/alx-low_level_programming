#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at the provided index
 * @h: pointer to head of the linked list
 * @idx: index to insert into
 * @n: value to add
 * Return: node (success) NULL (failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *newNode;
	unsigned int index;

	if (idx == 0)
		newNode = add_dnodeint(h, n);
	else
	{
		current = *h;
		index = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (index == idx)
			{
				if (current->next == NULL)
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
					newNode->n = n;
					newNode->next = current->next;
					newNode->prev = current;
					current->next->prev = newNode;
					current->next = newNode;
					}
				}
				break;
			}
		current = current->next;
		index++;
		}
	}
	return (newNode);
}
