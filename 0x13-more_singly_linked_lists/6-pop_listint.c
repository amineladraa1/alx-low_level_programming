#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Entry point
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeValue;

	if (*head == NULL || !head)
		return (0);

	nodeValue = (*head)->n; 
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (nodeValue);
}
