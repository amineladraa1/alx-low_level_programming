#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: hash table adress
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table;

	h_table	= malloc(sizeof(hash_table_t));

	if (!h_table)
	{
		printf("error malloc");
		return (NULL);
	}
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	h_table->size = size;
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
