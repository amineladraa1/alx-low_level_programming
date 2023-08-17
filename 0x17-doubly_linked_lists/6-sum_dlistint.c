#include "lists.h"

/**
 * sum_dlistint - return the node at index
 * @head: head of the linked list
 * Return: int (success) 0 (failure)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
		sum += head->n;
		head = head->next;
		}
	}
	return (sum);
}
