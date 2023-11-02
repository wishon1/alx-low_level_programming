#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash table to be traversed to get the value
 * @key: Key to look for
 * Return: val. associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array = NULL;
	hash_node_t *current_node;

		if (ht == NULL)
			return (NULL);

	/* compute the index of the key in the hash table */
	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	current_node = array[index];

	/* Traverse through the linked list until the end is reached */
	while (current_node != NULL)
	{
		/* check if the current node's key matches the key provided */
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}
	return (NULL);
}

