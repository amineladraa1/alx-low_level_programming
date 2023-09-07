#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
		return (ht->array[index]->value);
	else
	{
		return (NULL);
	}
}
