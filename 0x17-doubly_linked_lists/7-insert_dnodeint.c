#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head pointer.
 * @idx: the position to add the new node.
 * @n: the data.
 *
 * Return: Return the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	ptr = *h;

	if (idx == 0)
	{
		new_node->next = ptr;
		new_node->prev = NULL;
		if (ptr != NULL)
			ptr->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (ptr != NULL)
	{
		if (count == idx)
		{
			new_node->next = ptr;
			new_node->prev = ptr->prev;
			ptr->prev->next = new_node;
			ptr->prev = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		count++;
	}

	free(new_node);
	return (NULL);
}

