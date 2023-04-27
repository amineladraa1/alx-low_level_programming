#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Entry point
 *
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int length = strlen(str);
	char *s = strdup(str);

	if (newNode = NULL)
		return (NULL);

	newNode->str = s;
	newNode->len = length;
	newNode->next = (*head); 
	(*head) = newNode;
	return (*head);
}

