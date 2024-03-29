#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: The key
 * @size: The size of the array ofthe hash table
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, index;

hash = hash_djb2(key);
index = hash % size;

return (index);
}
