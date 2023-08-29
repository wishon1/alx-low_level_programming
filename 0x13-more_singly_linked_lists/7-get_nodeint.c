#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: index of all the nodes in the list.
 *
 * Return: return ptr.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *current_node;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	ptr = head;
	counter = 0;
	while (counter < index)
	{
		if (ptr->next == NULL)
			return (NULL);

		current_node = ptr->next;
		ptr = current_node;

		counter = counter + 1;
	}

	return (ptr);
}
