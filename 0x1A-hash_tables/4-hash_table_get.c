#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a given key in a table.
* @ht: Pointer to the hash table to look up in.
* @key: The key to search for in the hash table.
*
* Return: Returns a pointer to the value associated with the given key,
*         or NULL if the key is not found or if the hash table is invalid.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (!ht || !key || strcmp(key, "") == 0)
return (NULL);

index = key_index((unsigned char *)key, ht->size);

if (!ht->array[index])
return (NULL);

temp = ht->array[index];

while (temp)
{
if (strcmp(temp->key, key) == 0)
return (temp->value);

temp = temp->next;
}

return (NULL);
}

