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
	
	if (head == NULL)
		return (0);
	while (cur)
	{
		sum =+ cur->n;
		cur = cur->next;
	}
	return (sum);
}
