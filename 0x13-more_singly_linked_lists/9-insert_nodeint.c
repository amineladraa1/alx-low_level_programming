#include <string.h>
#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - Entry point,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *currentNode = *head;
	listint_t *prevNode = NULL;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	while (currentNode && index < idx)
	{
		prevNode = currentNode;
		currentNode = currentNode->next;
		index++;
	}
	if (currentNode && index == idx)
	{
		prevNode->next = newNode;
		newNode->next = currentNode;
		return (newNode);
	}
	if (!currentNode && index == idx)
	{
		currentNode->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
