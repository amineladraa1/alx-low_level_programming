#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table used
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
