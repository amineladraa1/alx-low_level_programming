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
	size_t counter = 0;
	if (h->str == NULL)
	{
		printf("[%d] %s\n",0,"(nil)");
	}
	else
	{
		printf("[%u] %s\n",h->len, h->str);
	}
	if (h->next == NULL)
		return (1);
	counter = print_list(h->next) + 1;
	return (counter);
}
