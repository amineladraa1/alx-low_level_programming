#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry point
 *
 * Description : free all the lists
 *
 * @head: list_t list to be freed
 *
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
