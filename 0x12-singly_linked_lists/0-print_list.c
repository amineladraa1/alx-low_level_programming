#include "main.h"
#include <stdio.h>

/**
 * print_list - Entry point
 *
 * Description: 'prints the linked list and return num of nodes'
 *
 * @h: structure to print
 *
 * Return: number of nodes (Success)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%u] %s",h->len,h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
