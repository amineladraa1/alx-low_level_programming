#include "lists.h"

/**
 * free_dlistint - free an allocated list
 * @head: head of the linked list
 * Return: address (success) NULL (failure)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	dlistint_t *next;

	while (h != NULL)
	{
		next = h->next
		free(h);
		h = next;
	}
}
