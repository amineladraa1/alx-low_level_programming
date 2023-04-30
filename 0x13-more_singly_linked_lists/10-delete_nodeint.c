#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Entry point
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
