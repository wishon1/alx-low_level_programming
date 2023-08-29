#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: carries the aaddress of ptr.
 * @n: value of each node.
 *
 * Return: return the pointer ptr.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *transverse;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		transverse = *head;

		while (transverse->next != NULL)
		{
			transverse = transverse->next;
		}
		transverse->next = ptr;
	}

	return (ptr);
}
