#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to the first list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
