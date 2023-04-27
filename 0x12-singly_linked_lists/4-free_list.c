#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry point
 *
 * Description : free all the lists
 *
 * @head: list_t list to be freed
 *
 * return: void
 */


void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
