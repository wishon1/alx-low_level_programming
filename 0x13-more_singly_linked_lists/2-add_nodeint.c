#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: value in each node.
 * @head: pointer to *new
 * Return: return head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}

	return (*head);
}

