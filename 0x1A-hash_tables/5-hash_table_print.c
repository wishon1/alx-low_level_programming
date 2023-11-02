#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht);
/**
 * hash_table_print - Printing the hashtable
 * @ht: Hashtable to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = NULL;
	unsigned long int counter = 0, maximum_index = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL)
		return;
	/* Assigning the array from the hash table */
	array = ht->array;
	maximum_index = max_index_array((hash_table_t *)ht);

	printf("{");

	/* Loop through the array and print key-value pairs */
	while (counter < (ht->size))
	{
		if (array[counter] != NULL)
		{
			current_node = array[counter];

			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key,
						current_node->value);

				if (counter != maximum_index)
					printf(", ");

				current_node = current_node->next;
			}
		}

		counter++;
	}
	printf("}\n");
}

/**
 * max_index_array - maximum valid index in array of the list
 * @ht: Table to be traversed
 * Return: Max valid number
 */

unsigned long int max_index_array(hash_table_t *ht)
{
	unsigned long int maximum = 0;
	unsigned long int counter = 0;

	while (counter < ht->size)
	{
		if (ht->array[counter] != NULL)
		{
			maximum = counter;
		}
		counter++;
	}
	return (maximum);
}

/**
 * max_index_list - Maximum valid index in the list
 * @node: The head of the link list
 * Return: maximum valid number
 */

unsigned long int max_index_list(hash_node_t *node)
{
	unsigned long int maximum = 0;
	unsigned long int counter = 0;

	(void)counter;
	(void)node;

	return (maximum);
}
