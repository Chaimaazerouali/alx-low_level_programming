#include "hash_tables.h"

/**
* hash_djb2 - Implements the djb2 algorithm for generating a hash value.
* @str: The string used to generate the hash value.
*
* Return: Returns the computed hash value.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hs;  // Changed variable name from 'hash' to 'hs'
int c;

hs = 5381;
while ((c = *str++))
{
hs = ((hs << 5) + hs) + c; /* hs * 33 + c */  // Changed 'hash' to 'hs'
}
return (hs);
}

