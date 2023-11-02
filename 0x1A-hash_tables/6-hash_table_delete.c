#include "hash_tables.h"

/**
 * hash_table_delete - Function that frees and deletes a hash
 * @ht: Table to be freed and deleted
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array = NULL, *next_node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int counter = 0;

	if (ht == NULL)
		return;

	array = ht->array;

	while (counter < ht->size)
	{
		current_node = array[counter];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
		counter++;
	}
	free(ht->array);
	free(ht);
}
