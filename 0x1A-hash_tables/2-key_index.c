#include "hash_tables.h"

/**
* key_index - Computes the index for a given key using the djb2 algorithm.
* @key: The string used to generate the hash value.
* @size: The size of the hash table.
* Return: Returns the computed hash index (index of the hash table).
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
if (!key || !size)
return (0);

return (hash_djb2(key) % size);
}

