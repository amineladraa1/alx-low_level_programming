#include <string.h>
#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - Entry point
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentNode = head;

	if (!head)
		return (0);
	while (currentNode)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
