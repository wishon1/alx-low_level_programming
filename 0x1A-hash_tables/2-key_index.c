#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: the key(value in integer)
 * @size: the size of the array
 *
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int array_index = hash_djb2(key);

	if (size == 0)
		return (0);

	array_index %= size;

	return (array_index);
}
