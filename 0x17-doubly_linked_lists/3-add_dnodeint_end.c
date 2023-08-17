#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the linked list
 * @n: value of node
 * Return: address (success) NULL (failure)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *current;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = *head;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
