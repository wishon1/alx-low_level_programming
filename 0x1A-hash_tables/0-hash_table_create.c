#include "hash_tables.h"
/**
 * hash_table_t *hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: returns the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_tab = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate memory for the hash table */
	new_hash_tab = malloc(sizeof(hash_table_t));
	if (new_hash_tab == NULL)
	{
		free(new_hash_tab);
		return (NULL);
	}

	/* set the size of the hash table */
	new_hash_tab->size = size;

	/* Allocate memory for the array within the hash table */
	new_hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_tab->array == NULL)
	{
		free(new_hash_tab);
		return (NULL);
	}

	/* Initialize all elements of the table array to NULL */
	for (i = 0; i < size; i++)
	{
		new_hash_tab->array[i] = NULL;
	}
	return (new_hash_tab);
}
