#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter;

	if (h == NULL)
		return (0);

	counter = 1;
	while (h->next != NULL)
	{
		h = h->next;
		counter = counter + 1;
	}
	return (counter);
}
