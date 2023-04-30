#include <string.h>
#include "lists.h"
#include <stdlib.h>

listint_t *recur(listint_t *prev, listint_t *current, listint_t **head);

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	return (recur(prev, *head, head));
}

/**
 * recur - recursion to reverse the linked list
 *
 * @prev: the previous node
 * @current: current node
 * @head: pointer to the first node
 *
 * Return: pointer to the first node in the new list
 */



listint_t *recur(listint_t *prev, listint_t *current, listint_t **head)
{
	listint_t *next;

	if (current == NULL)
	{
		*head = prev;
		return (prev);
	}

	next = current->next;
	current->next = prev;
	return (recur(current, next, head));
}
