#include "lists.h"

/**
 * sum_dlistint - return the node at index
 * @head: head of the linked list
 * Return: int (success) 0 (failure)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	if (cur != NULL)
	{
		while (cur->prev != NULL)
			cur = cur->prev
		while (cur != NULL)
		{
		sum =+ cur->n;
		cur = cur->next;
		}
	}
	return (sum);
}
