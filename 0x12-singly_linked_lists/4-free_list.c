#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
	free(head->str);
	free(head);
}
