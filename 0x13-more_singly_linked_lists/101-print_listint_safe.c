#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Entry point
 *
 * @head: pointer to the first node in the list
 *
 * Return: the number of node or 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0, i;
	const listint_t *array[1024];
	const listint_t *temp;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		if (counter == 1024)
		{
			temp = head->next;
			break;
		}
		array[counter - 1] = head;
		head = head->next;
		for (i = 0; i < counter - 1; i++)
		{
			if (array[i] == head)
			{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (counter);
			}
		}
	}
	if (temp != NULL)
	{
	printf("-> [%p] %d\n", (void *)temp, temp->n);
	counter++;
	}
	return (counter);
}
