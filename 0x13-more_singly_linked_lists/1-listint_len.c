#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: pointer used to access the elements of the list
 *
 * Return: return the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int counter = 1;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
			counter = counter + 1;
		}
	}
	return (counter);
}
