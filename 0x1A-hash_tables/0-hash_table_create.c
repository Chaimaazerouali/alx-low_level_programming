#include "hash_tables.h"
/**
 * hash_table_create - Initializes a new hash table with a given size
 * @size: The desired size of the hash table array
 * Return: Return a pointer to the newly created hash table on success or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
