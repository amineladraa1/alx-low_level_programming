#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: hash key
 * @size: hash table size
 *
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key;
       	hashed_key = hash_djb2(key);

	return (hashed_key % size);
}
