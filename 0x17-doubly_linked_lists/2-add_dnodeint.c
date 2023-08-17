#include "lists.h"

/**
 * add_dnodeint - add nide in the begining
 * @head: head of the linked list
 * @n: value of new node
 *
 * Return: address (success) NULL (failure)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = head->next

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
