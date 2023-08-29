#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given
 * index of a linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if deletion succeeded, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	if (index > 0)
	{
		i = 0;
		while (i < index - 1 && current->next != NULL)
		{
			current = current->next;
			i++;
		}

		if (i < index - 1)
			return (-1);

		temp = current;
		current = current->next;
		temp->next = current->next;
		free(current);
	}
	return (1);
}

