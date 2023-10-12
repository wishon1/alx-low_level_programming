#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: index of node at x location to be returned.
 *
 * Return: return the node at x(index) location.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	count = 0;
	ptr = head;
	if (head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);

		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
