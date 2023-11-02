#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: Pointer to the hash table to add and update
 * @key: String to be hashed to get the key
 * @value: Value to be sored in the hashtable array(integer)
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;
	char *new_key = strdup((char *)key);

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Assign the key and value to the new node */
	new_node->key = new_key;
	new_node->value = strdup((char *)value);
	index = key_index((const unsigned char *)new_key, ht->size);

	/* insert the new node into the hash table */
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else /* if the slot at the index is not empty */
	{
		if (strcmp((ht->array[index])->key, new_key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = NULL;
			ht->array[index]->value = new_node->value;
		}
		else /* collision=true, insert new_node at beginn. of linked list */
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
