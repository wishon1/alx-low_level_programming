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
	/* Use the hash_djb2 function to generate a hash value for the key. */
	unsigned long int arrayIndex = hash_djb2(key);

	if (size == 0)
		return (0);

	/* % operation to ensure that the hash val is within the size of the array.*/
	arrayIndex = arrayIndex %  size;

	return (arrayIndex);
}
