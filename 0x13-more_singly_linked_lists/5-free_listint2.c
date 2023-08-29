#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to the first list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;

		*head = (*head)->next;

		free(ptr);
	}
	*head = NULL;
}

