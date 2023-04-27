#include "main.h"

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
	if (h->str == NULL)
	{
		printf("[%d] %s\n",0,"(nil)");
	}
	else
	{
		printf("[%d] %s\n",h->len, h->str);
	}
	if (h->next == NULL)
		return (1);
	return ((print_list(h->next) + 1));
}
