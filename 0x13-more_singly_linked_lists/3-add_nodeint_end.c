#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: value of node;
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *current_node;

	if (!node)
		return (NULL);

	current_node = (*head);

	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head)  = node;
		return (node);
	}
	while (current_node)
		current_node = current_node->next;

	current_node->next = node;
	return (node);
}
