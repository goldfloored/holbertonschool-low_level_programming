#include "hash_tables.h"

/**
 * hash_table_set - ads an element to the hash table
 * @ht: pointer to hash table wher eyou want to add/update the key/value
 * @key: key that you are adding to hash table
 * @value: value of key that you are adding to hash table
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *node, *temp = NULL;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
		node->next = NULL;
	else
	{
		temp = ht->array[ind];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		temp = ht->array[ind];
		node->next = temp;
	}
	ht->array[ind] = node;
	return (1);
}
