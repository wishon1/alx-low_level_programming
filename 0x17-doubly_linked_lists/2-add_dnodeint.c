#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list.
 * @head: pointer to the head pointer
 * @n: the data in the node
 *
 * Return: return the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}


