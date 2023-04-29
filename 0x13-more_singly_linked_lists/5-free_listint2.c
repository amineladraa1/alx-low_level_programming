#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * Description : free all the lists
 *
 * @head: list_t list to be freed
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	
	if (head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free (*head);
		*head = node;
	}
	*head = NULL;
}
