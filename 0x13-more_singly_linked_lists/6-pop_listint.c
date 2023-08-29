#include "lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: pointer to node
 *
 *  Return: return
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;

	*head = (*head)->next;

	free(ptr);

	return (data);
}
