#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to the first node in the list.
 * @idx: index of the list where the new node should be added.
 * @n: value to be added.
 *
 * Return: pointer to the updated list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node, *new_node;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	prev_node = *head;

	if (idx == 0)
	{
		new_node->next = prev_node;
		*head = new_node;
		return (new_node);
	}

	for (counter = 0; counter < idx - 1; counter++)
	{
		if (prev_node == NULL)
			return (NULL);
		prev_node = prev_node->next;
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}

